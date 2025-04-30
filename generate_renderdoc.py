#!/usr/bin/python3

# This file is part of the "Learn WebGPU for C++" book.
#   https://github.com/eliemichel/LearnWebGPU
#
# MIT License
# Copyright (c) 2022-2025 Elie Michel
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

# NB: This is an experimental version of the generator dedicated the generation
# of source files for [RenderDoc](https://renderdoc.org/) in order to implement
# a WebGPU replay driver.

import re
from dataclasses import dataclass, field
from collections import defaultdict
import os
from os.path import dirname, isfile, join
from typing import Dict, List
import logging

DEFAULT_HEADER_URL = "https://raw.githubusercontent.com/webgpu-native/webgpu-headers/main/webgpu.h"

def makeArgParser():
    import argparse

    parser = argparse.ArgumentParser(description="""
    Generate bits of source code for a WebGPU replay driver in RenderDoc.
    This is experimental.
    """)

    parser.add_argument("-t", "--template", type=str,
                        default="renderdoc/template",
                        help="Root directory of the templates used for generating the output files")

    parser.add_argument("-o", "--output", type=str,
                        default="renderdoc/generated",
                        help="Directory where to output the generated source files")

    parser.add_argument("-u", "--header-url", action='append',
                        default=[],
                        help=f"""
                        URL of the official webgpu.h from the webgpu-native project. If the URL
                        does not start with http(s)://, it is considered as a local file. You can
                        specify this option multiple times to agregate multiple headers (e.g.,
                        the standard webgpu.h plus backend-specific extensions wgpu.h).
                        If no URL is specified, the official header from '{DEFAULT_HEADER_URL}'
                        is used.
                        """)

    parser.add_argument("-d", "--defaults", action='append',
                        default=[],
                        help="""
                        File listing default values for descriptor fields. This argument can
                        be provided multiple times, the last ones override the previous values.
                        """)

    parser.add_argument("--ext-suffix",
                        default="",
                        help="""
                        Extension number needed for Dawn, which uses them to maintain backward
                        compatibility of their API (might get removed once version 1 is out).
                        Set to "2" when using dawn and leave to the empty default with wgpu-native.
                        """)

    # Advanced options

    parser.add_argument("--no-scoped-enums", action='store_false', dest="use_scoped_enums",
                        help="Do not replace WebGPU enums with C++ scoped enums")

    parser.add_argument("--no-fake-scoped-enums", action='store_false', dest="use_fake_scoped_enums",
                        help="Use scoped aliases to original enum values so that no casting is needed")

    parser.add_argument("--use-non-member-procedures", action='store_true',
                        help="Include WebGPU methods that are not members of any WebGPU object")

    parser.add_argument("--no-const", action='store_false', dest="use_const",
                        help="By default, all methods of opaque handle types are const. This option makes them all non-const.")

    parser.add_argument("--use-init-macros", action='store_true',
                        help="Use initialization macros provided by webgpu.h instead of writing custom setDefaults methods.")

    parser.add_argument("--use-inline", action='store_true', dest="use_inline",
                        help="Make all methods inlined (seems to have an effect with clang, but MSVC fails at linking in that case).")

    return parser

logging.basicConfig(level=logging.INFO, format="%(levelname)s %(message)s")

def main(args):
    applyDefaultArgs(args)

    filenames = [
        "webgpu_serialiser.h",
        "webgpu_serialiser.cpp",
        "webgpu_macros.h",
        "webgpu_hooks.inc.cpp",
    ]

    templates = {
        name: loadTemplate(join(args.template, name))
        for name in filenames
    }

    api = WebGpuApi()
    for url in args.header_url:
        header = downloadHeader(url)
        parseHeader(api, header)
    loadDefaults(args, api)

    binding = produceBinding(args, api)
    
    for name in filenames:
        generateOutput(join(args.output, name), templates[name], binding[name])

def applyDefaultArgs(args):
    if not args.header_url:
        args.header_url = [DEFAULT_HEADER_URL]
    if not args.defaults:
        args.defaults = ["defaults.txt", "extra-defaults.txt"]

    if hasattr(args, "virtual_fs"):
        VfsFile.virtual_fs = args.virtual_fs

# -----------------------------------------------------------------------------
# Virtual File System, to enable using this script as a lib (in an environement
# where there is no file system).

class VfsFile():
    virtual_fs = None
    def __init__(self, filename):
        self.filename = filename
    def __enter__(self):
        stream = VfsFile.virtual_fs[self.filename]
        stream.seek(0)
        return stream
    def __exit__(self, exc_type, exc_val, exc_tb):
        pass

def openVfs(filename, mode='r', **kwargs):
    """
    This is a wrapper around the standard 'open' that enables paths starting
    with "vfs://" to refer to files in a virtual file system.
    """
    if filename.startswith("vfs://"):
        return VfsFile(filename[6:])
    else:
        return open(filename, mode, **kwargs)

def isfileVfs(filename):
    if filename.startswith("vfs://"):
        return filename[6:] in VfsFile.virtual_fs
    else:
        return isfile(filename)

# -----------------------------------------------------------------------------
# Parser, for analyzing webgpu.h
# The output of parsing is a WebGpuApi object

@dataclass
class PropertyApi:
    name: str
    type: str
    counter: str|None = None  # list properties have an associated counter property
    default_value: str|None = None

@dataclass
class HandleApi:
    """WebGPU objects manipulated through blind handles"""
    name: str
    properties: list[PropertyApi] = field(default_factory=list)

@dataclass
class ClassApi:
    """WebGPU structs whose fields are directly manipulated"""
    name: str
    parent: str|None = None
    properties: list[PropertyApi] = field(default_factory=list)
    is_descriptor: bool = False
    default_overrides: list[(str,str)] = field(default_factory=list)

@dataclass
class ProcedureArgumentApi:
    name: str
    type: str
    nullable: bool = False

@dataclass
class ProcedureApi:
    name: str
    return_type: str
    parent: str|None = None
    arguments: list[ProcedureArgumentApi] = field(default_factory=list)

@dataclass
class EnumerationEntryApi:
    key: str
    value: str

@dataclass
class EnumerationApi:
    name: str
    entries: list[EnumerationEntryApi] = field(default_factory=list)
    is_flags: bool = False

@dataclass
class CallbackApi:
    name: str
    arguments: list[ProcedureArgumentApi] = field(default_factory=list)
    raw_arguments: str = ""

@dataclass
class TypeAliasApi:
    aliased_type: str
    wgpu_type: str

@dataclass
class WebGpuApi:
    handles: list[HandleApi] = field(default_factory=list)
    classes: list[ClassApi] = field(default_factory=list)
    procedures: list[ProcedureApi] = field(default_factory=list)
    enumerations: list[EnumerationApi] = field(default_factory=list)
    callbacks: list[CallbackApi] = field(default_factory=list)
    type_aliases: list[TypeAliasApi] = field(default_factory=list)
    stypes: dict[str,str] = field(default_factory=dict) # Name => SType::Name
    init_macros: list[str] = field(default_factory=list)

def parseHeader(api, header):
    """
    Add fields to api while reading a header file
    """
    it = iter([
        line
            .replace("WGPU_OBJECT_ATTRIBUTE", "")
            .replace("WGPU_ENUM_ATTRIBUTE", "")
            .replace("WGPU_STRUCTURE_ATTRIBUTE", "")
            .replace("WGPU_FUNCTION_ATTRIBUTE", "")
            #.replace("WGPU_NULLABLE", "")
        for line in header.split("\n")
    ])
    
    struct_re = re.compile(r"struct *WGPU(\w+) *{")
    handle_re = re.compile(r"typedef struct .*WGPU([^_]\w+)\s*;")
    procedure_re = re.compile(r"(?:WGPU_EXPORT\s+)?([\w *]+) wgpu(\w+)\((.*)\)\s*;")
    enum_re = re.compile(r"typedef enum WGPU(\w+) {")
    flag_enum_re = re.compile(r"typedef WGPUFlags WGPU(\w+)Flags\s*;")
    new_flag_enum_re = re.compile(r"typedef WGPUFlags WGPU(\w+)\s*;")
    flag_value_re = re.compile(r"static const WGPU(\w+) WGPU(\w+)_(\w+) = (\w+)( /\*(.*)\*/)?;")
    typedef_re = re.compile(r"typedef (\w+) WGPU(\w+)\s*;")
    callback_re = re.compile(r"typedef void \(\*WGPU(\w+)Callback\)\((.*)\)\s*;")
    init_macro_re = re.compile(r"#define (WGPU_[A-Z0-9_]+_INIT)")

    while (x := next(it, None)) is not None:
        if (match := struct_re.search(x)):
            struct_name = match.group(1)
            api.classes.append(parseClass(struct_name, it))
            continue

        if (match := handle_re.search(x)):
            struct_name = match.group(1)
            api.handles.append(HandleApi(name=struct_name))
            continue

        if (match := procedure_re.search(x)):
            return_type = match.group(1)
            if return_type.startswith("WGPU_EXPORT"):
                return_type = return_type[len("WGPU_EXPORT"):]
            return_type = return_type.strip()
            api.procedures.append(ProcedureApi(
                name=match.group(2),
                return_type=return_type,
                arguments=parseProcArgs(match.group(3)),
            ))
            continue

        if (match := enum_re.search(x)):
            name = match.group(1)
            api.enumerations.append(parseEnum(name, it, api.stypes))
            continue

        if (match := flag_enum_re.search(x)):
            api.type_aliases.append(TypeAliasApi(
                aliased_type="WGPUFlags",
                wgpu_type=match.group(1) + "Flags",
            ))
            continue

        if (match := new_flag_enum_re.search(x)):
            api.enumerations.append(EnumerationApi(
                name=match.group(1),
                is_flags=True,
            ))
            continue

        if (match := flag_value_re.search(x)):
            enum_name = match.group(1)
            enum_name2 = match.group(2)
            entry = EnumerationEntryApi(
                key=match.group(3),
                value=match.group(4),
            )
            assert(enum_name == enum_name2)
            found = False
            for enum in api.enumerations:
                if enum.name == enum_name:
                    enum.entries.append(entry)
                    found = True
                    break
            if not found:
                api.enumerations.append(EnumerationApi(
                    name=enum_name,
                    entries=[ entry ],
                    is_flags=True,
                ))
            continue

        if (match := typedef_re.search(x)):
            api.type_aliases.append(TypeAliasApi(
                aliased_type=match.group(1),
                wgpu_type=match.group(2),
            ))
            continue

        if (match := callback_re.search(x)):
            api.callbacks.append(CallbackApi(
                name=match.group(1),
                arguments=parseProcArgs(match.group(2)),
                raw_arguments=match.group(2),
            ))
            continue

        if (match := init_macro_re.search(x)):
            api.init_macros.append(match.group(1))
            continue

    # Post process: find parent of each method
    for proc in api.procedures:
        maxi = 0
        parent_names = (
            [ handle.name for handle in api.handles ] +
            [ desc.name for desc in api.classes ]
        )
        for parent in parent_names:
            if len(parent) > maxi and proc.name.startswith(parent) and len(parent) < len(proc.name):
                proc.parent = parent
                maxi = len(parent)
        if proc.parent is not None:
            proc.name = proc.name[maxi:]

    return api

def parseEnum(name, it, stypes):
    entry_re = re.compile(r"^\s+WGPU([^_]+)_([\w_]+) = ([^,]+),?")
    end_re = re.compile(".*}")

    api = EnumerationApi(name=name, is_flags=False)

    while (x := next(it, None)) is not None:
        if (match := entry_re.search(x)):
            prefix = match.group(1)
            key = match.group(2)
            #value = match.group(3)
            value = f"WGPU{prefix}_{key}"
            api.entries.append(EnumerationEntryApi(key, value))

            if "WGPUSType_" in x:
                cast = "(WGPUSType)" if name != "SType" else ""
                stypes[key] = cast + name + "::" + key

        elif (match := end_re.search(x)):
            break

    return api

def parseClass(name, it):
    api = ClassApi(name=name)
    end_of_struct_re = re.compile(r".*}")
    property_re = re.compile(r"^\s*(.+) (\w+);$")

    count_properties = []
    x = next(it)
    while not end_of_struct_re.search(x):
        if (match := property_re.search(x)):
            prop = PropertyApi(name=match.group(2), type=match.group(1))
            if prop.name == "nextInChain":
                api.is_descriptor = True
            if prop.name == "chain" and api.parent is not None:
                pass
            elif prop.name[-5:] == "Count":
                count_properties.append(prop)
            else:
                api.properties.append(prop)
        x = next(it)

    for counter in count_properties:
        # entri|ies -> entr|yCount
        # colorFormat|s -> colorFormat|sCount
        prefix = counter.name[:-6]
        found = False
        for r in api.properties:
            if r.name.startswith(prefix):
                r.counter = counter.name
                found = True
                break
        if not found:
            api.properties.append(counter)

    return api

def parseProcArgs(line):
    args = []
    for entry in line.split(","):
        entry = entry.strip()
        nullable = False
        if entry.endswith("/* nullable */"):
            nullable = True
            entry = entry[:-14].strip()
        if entry.startswith("WGPU_NULLABLE"):
            nullable = True
            entry = entry[13:].strip()
        tokens = entry.split()
        args.append(ProcedureArgumentApi(
            name=tokens[-1],
            type=" ".join(tokens[:-1]),
            nullable=nullable
        ))
    return args

# -----------------------------------------------------------------------------

def produceBinding(args, api):
    """Produce C++ binding"""
    binding = {
        "webgpu_serialiser.h": {
            "descriptors": [],
            "enumerations": [],
        },
        "webgpu_serialiser.cpp": {
            "descriptors": [],
            "enumerations": [],
        },
        "webgpu_macros.h": {
            "foreach-macro": [],
            "foreach-macro-default": [],
        },
        "webgpu_hooks.inc.cpp": {
            "hooks": []
        },
    }

    # Procedures that we handle manually
    excluded_procs = [
        "CreateInstance",
        "InstanceRelease",
    ]

    full_handle_names = [ f"WGPU{h.name}" for h in api.handles ]

    def removeNullable(typename):
        return typename.replace("WGPU_NULLABLE", "").strip()

    # Header

    section = []
    for class_api in api.classes:
        section.append(f"DECLARE_REFLECTION_STRUCT(WGPU{class_api.name});")
    binding["webgpu_serialiser.h"]["descriptors"] = "\n".join(section)

    section = []
    for enum_api in api.enumerations:
        if enum_api.is_flags:
            continue
        section.append(f"DECLARE_STRINGISE_TYPE(WGPU{enum_api.name});")
    binding["webgpu_serialiser.h"]["enumerations"] = "\n".join(section)

    # Implem

    section = []
    for class_api in api.classes:
        section.extend([
            f"template <typename SerialiserType>",
            f"void DoSerialise(SerialiserType &ser, WGPU{class_api.name} &el)",
            f"{{",
        ])
        
        for prop in class_api.properties:
            if (
                "*" in prop.type or
                "Callback" in prop.type or
                "DataFunction" in prop.type or
                removeNullable(prop.type) in full_handle_names
            ):
                continue
            section.append(f"  SERIALISE_MEMBER({prop.name});")

        section.extend([
            f"}}",
            f"",
            f"INSTANTIATE_SERIALISE_TYPE(WGPU{class_api.name});",
            f"",
        ])
    binding["webgpu_serialiser.cpp"]["descriptors"] = "\n".join(section)

    section = []
    for enum_api in api.enumerations:
        if enum_api.is_flags:
            continue
        section.extend([
            f"template <>",
            f"rdcstr DoStringise(const WGPU{enum_api.name} &el)",
            f"{{",
            f"  BEGIN_ENUM_STRINGISE(WGPU{enum_api.name})",
            f"  {{",
        ])

        for entry in enum_api.entries:
            section.append(f"    STRINGISE_ENUM(WGPU{enum_api.name}_{entry.key});")

        section.extend([
            f"  }}",
            f"  END_ENUM_STRINGISE();",
            f"}}",
            f"",
        ])
    binding["webgpu_serialiser.cpp"]["enumerations"] = "\n".join(section)

    section = []
    for proc_api in api.procedures:
        fullname = (proc_api.parent if proc_api.parent is not None else "") + proc_api.name
        if fullname in excluded_procs:
            continue
        arguments = [ f"{x.type} {x.name}" for x in proc_api.arguments ]
        argument_names = [ x.name for x in proc_api.arguments ]
        maybe_return = "" if proc_api.return_type == "void" else "return "
        section.extend([
            f"static {proc_api.return_type} wgpu{fullname}_hook({', '.join(arguments)}) {{",
            f"  {{",
            f"    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();",
            f"    ser.SetActionChunk();", # Is this useful?
            f"    SCOPED_SERIALISE_CHUNK(WebGPUChunk::Proc{fullname});",
            f"    webgpuHooks.capturer.AddChunk(scope.Get());",
            f"  }}",
            f"  {maybe_return}webgpuHooks.procs.wgpu{fullname}({', '.join(argument_names)});",
            f"}}",
        ])
    binding["webgpu_hooks.inc.cpp"]["hooks"] = "\n".join(section)

    section = []
    section.append("#define FOREACH_WEBGPU_PROC(MACRO)")
    for proc_api in api.procedures:
        fullname = (proc_api.parent if proc_api.parent is not None else "") + proc_api.name
        section.append(f"  MACRO({fullname})")
    binding["webgpu_macros.h"]["foreach-macro"] = " \\\n".join(section)

    section = []
    section.append("#define FOREACH_WEBGPU_PROC_WITH_DEFAULT_BEHAVIOR(MACRO)")
    for proc_api in api.procedures:
        fullname = (proc_api.parent if proc_api.parent is not None else "") + proc_api.name
        if fullname in excluded_procs:
            continue
        section.append(f"  MACRO({fullname})")
    binding["webgpu_macros.h"]["foreach-macro-default"] = " \\\n".join(section)

    return binding

# -----------------------------------------------------------------------------
# Default values

def loadDefaults(args, api):
    for default_file in args.defaults:
        loadDefaultFile(api, default_file)
    postProcessDefaults(api)

def loadDefaultFile(api, filename):
    resolved = resolveFilepath(filename)
    logging.info(f"Loading default values from {resolved}...")

    entry_re = re.compile(r"^WGPU(\w+)::([\w\.]+) = (.+);$")
    comment_re = re.compile(r"^\s*(//.*)?$")

    name_to_class_idx = { c.name: i for i, c in enumerate(api.classes) }

    with openVfs(resolved, encoding="utf-8") as f:
        for lineno, line in enumerate(f):
            if (match := entry_re.search(line)):
                class_name = match.group(1)
                prop_name = match.group(2)
                default_value = match.group(3)

                if class_name not in name_to_class_idx:
                    logging.warning(f"Unknown class {class_name} (in file {resolved}, line {lineno + 1})")
                    continue

                c = api.classes[name_to_class_idx[class_name]]

                # Special case of sub-struct override
                if "." in prop_name:
                    c.default_overrides.append((prop_name, default_value))
                    continue

                name_to_prop_idx = { p.name: i for i, p in enumerate(c.properties) }
                if prop_name not in name_to_prop_idx:
                    logging.warning(f"Unknown property {class_name}::{prop_name} (in file {resolved}, line {lineno + 1})")
                    continue

                prop = c.properties[name_to_prop_idx[prop_name]]
                prop.default_value = default_value
            elif (match := comment_re.search(line)):
                pass
            else:
                logging.warning(f"Syntax error '{line.strip()}' (in file {resolved}, line {lineno + 1})")

def postProcessDefaults(api):
    """Transform string into enum values in default values"""
    name_to_enum = { f"WGPU{e.name}": e for e in api.enumerations }
    name_to_class = { f"WGPU{c.name}": c for c in api.classes }

    def fixDefaultValue(prop_type, default_value):
        enum = name_to_enum.get(prop_type)
        if enum is None:
            return default_value
        name_to_entry = {
            re.sub(r"([a-z])([A-Z])", r"\1-\2", e.key).lower(): e for e in enum.entries
        }
        if default_value is None:
            entry = name_to_entry.get("undefined")
            if entry is not None:
                return f"{enum.name}::{format_enum_value(entry.key)}"
        else:
            entry = name_to_entry.get(default_value.strip('"'))
            if entry is None:
                logging.warning(f"Unknown value {default_value} for enum {prop_type}")
                return None
            else:
                return f"{enum.name}::{format_enum_value(entry.key)}"

    def getType(path, cls_api):
        name_to_prop = { p.name: p for p in cls_api.properties }
        if path[0] not in name_to_prop:
            return None
        prop = name_to_prop[path[0]]
        if len(path) == 1:
            return prop.type
        else:
            sub_cls_api = name_to_class[prop.type]
            return getType(path[1:], sub_cls_api)

    for c in api.classes:
        for prop in c.properties:
            prop.default_value = fixDefaultValue(prop.type, prop.default_value)
        for i, (subprop, default_value) in enumerate(c.default_overrides):
            prop_type = getType(subprop.split('.'), c)
            if prop_type is not None:
                c.default_overrides[i] = (subprop, fixDefaultValue(prop_type, default_value))

# -----------------------------------------------------------------------------
# Utility functions

def loadTemplate(path):
    resolved = resolveFilepath(path)
    logging.info(f"Loading template from {resolved}...")
    with openVfs(resolved, encoding="utf-8") as f:
        template = (
            f.read()
            .replace('{', '{{') # escape brackets
            .replace('}', '}}')
            .replace('{{{{', '{') # transform double brackets into format string
            .replace('}}}}', '}')
        )
    
    return template

def downloadHeader(url):
    if url.startswith("https://") or url.startswith("http://"):
        logging.info(f"Downloading webgpu-native header from {url}...")
        import urllib.request
        response = urllib.request.urlopen(url)
        data = response.read()
        text = data.decode('utf-8')
        return text
    else:
        resolved = resolveFilepath(url)
        logging.info(f"Loading webgpu-native header from {resolved}...")
        with openVfs(resolved, encoding="utf-8") as f:
            return f.read()

def generateOutput(path, template, fields):
    logging.info(f"Writing generated binding to {path}...")
    out = template.format(**fields)
    with openVfs(path, 'w', encoding="utf-8") as f:
        f.write(out)

def resolveFilepath(path):
    for p in [ join(dirname(__file__), path), path ]:
        if isfileVfs(p):
            return p
    logging.error(f"Invalid template path: {path}")
    raise ValueError("Invalid template path")

def format_enum_value(value):
    if value[0] in '0123456789':
        return '_' + value
    else:
        return value

def to_constant_case(caml_case):
    naive = ''.join(['_'+c if c.isupper() or c.isnumeric() else c for c in caml_case]).lstrip('_').upper()
    # We then regroup isolated characters together (because they correspond to acronyms):
    current_acronym = None
    tokens = []
    for tok in naive.split("_"):
        if len(tok) == 1:
            if current_acronym is None:
                current_acronym = ""
            current_acronym += tok
        else:
            if current_acronym is not None:
                tokens.append(current_acronym)
            tokens.append(tok)
            current_acronym = None
    if current_acronym is not None:
        tokens.append(current_acronym)
    return "_".join(tokens)

# -----------------------------------------------------------------------------

if __name__ == "__main__":
    args = makeArgParser().parse_args()
    main(args)
    
