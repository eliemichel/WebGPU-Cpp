#!/usr/bin/python3

# This file is part of the "Learn WebGPU for C++" book.
#   https://github.com/eliemichel/LearnWebGPU
#
# MIT License
# Copyright (c) 2022-2024 Elie Michel
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

# NB: The process is inpired by PpluX' wgpu.hpp generator
#   (see https://github.com/pplux/wgpu.hpp )

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
    Generate the webgpu-cpp binding from official webgpu-native headers.
    You should not have to change any of the default arguments for a regular use.

    This generates a webgpu.hpp file that you can include in your project.
    Exactly one of your source files must #define WEBGPU_CPP_IMPLEMENTATION
    before including this header.
    """)

    parser.add_argument("-t", "--template", type=str,
                        default="webgpu.template.hpp",
                        help="Template used for generating the output binding file")

    parser.add_argument("-o", "--output", type=str,
                        default="webgpu.hpp",
                        help="Path where to output the generated webgpu.hpp")

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
    template, meta = loadTemplate(args.template)
    api = WebGpuApi()
    for url in args.header_url:
        header = downloadHeader(url)
        parseHeader(api, header)
    loadDefaults(args, api)

    binding = produceBinding(args, api, meta)
    
    generateOutput(args.output, template, binding)

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
                    entries=[ entry ]
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
    entry_re = re.compile(r"^\s+WGPU(\w+)_(\w+) = ([^,]+),?")
    end_re = re.compile(".*}")

    api = EnumerationApi(name=name)

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

def produceBinding(args, api, meta):
    """Produce C++ binding"""
    binding = {
        "webgpu_includes": [],
        "descriptors": [],
        "structs": [],
        "class_impl": [],
        "class_oneliner": [],
        "handles_decl": [],
        "handles": [],
        "handles_impl": [],
        "handles_oneliner": [],
        "enums": [],
        "callbacks": [],
        "procedures": [],
        "type_aliases": [],
        "ext_suffix": args.ext_suffix,
        "init_macro_fixes": [],
    }

    for url in args.header_url:
        filename = os.path.split(url)[1]
        binding["webgpu_includes"].append(f"#include <webgpu/{filename}>")


    if args.use_init_macros:
        binding["init_macro_fixes"].append(r"""
// Fix erroneous initializers from Dawn

#undef WGPU_DAWN_TOGGLES_DESCRIPTOR_INIT
#define WGPU_DAWN_TOGGLES_DESCRIPTOR_INIT _wgpu_MAKE_INIT_STRUCT(WGPUDawnTogglesDescriptor, { \
    /*.chain=*/_wgpu_MAKE_INIT_STRUCT(WGPUChainedStruct, { \
        /*.next=*/NULL _wgpu_COMMA \
        /*.sType=*/WGPUSType_DawnTogglesDescriptor _wgpu_COMMA \
    }) _wgpu_COMMA \
    /*.enabledToggleCount=*/0 _wgpu_COMMA \
    /*.enabledToggles=*/NULL _wgpu_COMMA \
    /*.disabledToggleCount=*/0 _wgpu_COMMA \
    /*.disabledToggles=*/NULL _wgpu_COMMA \
})
#undef WGPU_DAWN_WGSL_BLOCKLIST_INIT
#define WGPU_DAWN_WGSL_BLOCKLIST_INIT _wgpu_MAKE_INIT_STRUCT(WGPUDawnWGSLBlocklist, { \
    /*.chain=*/_wgpu_MAKE_INIT_STRUCT(WGPUChainedStruct, { \
        /*.next=*/NULL _wgpu_COMMA \
        /*.sType=*/WGPUSType_DawnWGSLBlocklist _wgpu_COMMA \
    }) _wgpu_COMMA \
    /*.blocklistedFeatureCount=*/0 _wgpu_COMMA \
    /*.blocklistedFeatures=*/NULL _wgpu_COMMA \
})
        """.strip())

    # Cached variables for format_arg
    handle_names = [ h.name for h in api.handles ]
    handle_cptr_names = [ f"{h.name} const *" for h in api.handles ]
    handle_ptr_names = [ f"{h.name} *" for h in api.handles ]
    class_cptr_names = [ f"{d.name} const *" for d in api.classes ]
    enum_names = [ e.name for e in api.enumerations ]
    enum_ptr_names = [ f"{e.name} *" for e in api.enumerations ]
    callbacks = {
        f"{cb.name}Callback": cb
        for cb in api.callbacks
    }
    def format_arg(arg):
        """
        Given a function argument, return it (i) as an argument *received* from
        the C++ API and (ii) as an argument *passed* to the C API and (iii) as
        an argument passed to the C++ API.
        Also tells (iv) whether the next should be skipped (used only for the
        userdata pointer passed to callbacks).
        """
        arg_type = arg.type
        arg_c = arg.name
        arg_cpp = arg.name
        skip_next = False

        if arg_type.startswith("struct "):
            arg_type = arg_type[len("struct "):]
        if arg_type.startswith("WGPU"):
            arg_type = arg_type[len("WGPU"):]

        if arg_type in class_cptr_names:
            base_type = arg_type[:-8]
            arg_type = f"const {base_type}&"
            arg_c = f"&{arg_c}"
            arg_cpp = f"*reinterpret_cast<{base_type} const *>({arg.name})"
        elif arg_type in callbacks:
            arg_type = f"{arg_type}&&"
            arg_c = "cCallback"
            skip_next = True
        elif arg_type in handle_cptr_names:
            arg_c = f"reinterpret_cast<WGPU{arg_type}>({arg_c})"
        elif arg_type in handle_ptr_names:
            arg_c = f"reinterpret_cast<WGPU{arg_type}>({arg_c})"

        if args.use_scoped_enums:
            if arg_type in enum_names:
                arg_c = f"static_cast<WGPU{arg_type}>({arg_c})"
                arg_cpp = f"static_cast<{arg_type}>({arg_cpp})"
            elif arg_type in enum_ptr_names:
                arg_c = f"reinterpret_cast<WGPU{arg_type}>({arg_c})"

        sig_cpp = f"{arg_type} {arg.name}"

        return sig_cpp, arg_c, arg_cpp, skip_next

    maybe_inline = "inline " if args.use_inline else ""
    class_names = [f"WGPU{c.name}" for c in api.classes]
    classes_and_handles = (
        [ ('CLASS', cls_api) for cls_api in api.classes ] +
        [ ('HANDLE', handle_api) for handle_api in api.handles ]
    )
    for entry_type, handle_or_class in classes_and_handles:
        entry_name = handle_or_class.name
        if entry_type == 'CLASS':
            macro = "DESCRIPTOR" if handle_or_class.is_descriptor else "STRUCT"
            namespace = "descriptors" if handle_or_class.is_descriptor else "structs"
            namespace_impl = "class_impl"
            namespace_oneliner = "class_oneliner"
            argument_self = "*this"
            use_const = False
        elif entry_type == 'HANDLE':
            binding["handles_decl"].append(f"class {entry_name};")
            macro = "HANDLE"
            namespace = "handles"
            namespace_impl = "handles_impl"
            namespace_oneliner = "handles_oneliner"
            argument_self = "m_raw"
            use_const = args.use_const

        if entry_name.startswith("INTERNAL__"):
            continue
        
        decls = []
        implems = []

        # Auto-generate setDefault
        if entry_type == 'CLASS':
            decls.append(f"\t{maybe_inline}void setDefault();\n")

            cls_api = handle_or_class
            prop_names = [f"{p.name}" for p in cls_api.properties]

            if args.use_init_macros:
                init_macro = f"WGPU_{to_constant_case(entry_name)}_INIT"
                if init_macro not in api.init_macros:
                    logging.warning(f"Initialization macro '{init_macro}' was not found, falling back to empty initializer '{{}}'.")
                    init_macro = "{}"
                prop_defaults = [
                    f"\t*this = WGPU{entry_name} {init_macro};\n",
                ]
            else:
                prop_defaults = [
                    f"\t{prop.name} = {prop.default_value};\n"
                    for prop in cls_api.properties
                    if prop.default_value is not None
                ] + [
                    f"\t(({prop.type[4:]}*)&{prop.name})->setDefault();\n"
                    for prop in cls_api.properties
                    if prop.type in class_names
                ] + [
                    f"\t{subprop} = {default_value};\n"
                    for subprop, default_value in cls_api.default_overrides
                ]
            if "chain" in prop_names:
                if entry_name in api.stypes:
                    prop_defaults.extend([
                        f"\tchain.sType = {api.stypes[entry_name]};\n",
                        f"\tchain.next = nullptr;\n",
                    ])
                else:
                    logging.warning(f"Type {entry_name} starts with a 'chain' field but has no apparent associated SType.")
            implems.append(
                f"{maybe_inline}void {entry_name}::setDefault() " + "{\n"
                + "".join(prop_defaults)
                + "}\n"
            )

        for proc in api.procedures:
            if proc.parent != entry_name:
                continue
            if "wgpu" + entry_name + proc.name + "\n" in meta["blacklist"]:
                logging.debug(f"Skipping wgpu{entry_name}{proc.name} (blacklisted)...")
                continue
            method_name = proc.name[0].lower() + proc.name[1:]

            arguments, argument_names = [], []
            skip_next = False
            for arg in proc.arguments[1:]:
                if skip_next:
                    skip_next = False
                    continue
                sig, name, _, skip_next = format_arg(arg)
                arguments.append(sig)
                argument_names.append(name)

            return_type = proc.return_type

            # Wrap callback into std::function&&
            if "userdata" == proc.arguments[-1].name:
                cb = callbacks[proc.arguments[-2].type[4:]]
                cb_name = proc.arguments[-2].name
                cb_arg_names = map(lambda a: format_arg(a)[2], cb.arguments[:-1])
                body = (
                      f"\tauto handle = std::make_unique<{cb.name}Callback>({cb_name});\n"
                    + f"\tstatic auto cCallback = []({cb.raw_arguments}) -> void {{\n"
                    + f"\t\t{cb.name}Callback& callback = *reinterpret_cast<{cb.name}Callback*>(userdata);\n"
                    + f"\t\tcallback({', '.join(cb_arg_names)});\n"
                    + "\t};\n"
                    + "\t{wrapped_call};\n"
                    + "\treturn handle;\n"
                )
                argument_names.append(f"reinterpret_cast<void*>(handle.get())")
                return_type = f"std::unique_ptr<{cb.name}Callback>"
                maybe_no_discard = "NO_DISCARD "
            else:
                body = "\treturn {wrapped_call};\n"
                maybe_no_discard = ""

            argument_names_str = ', '.join([argument_self] + argument_names)

            begin_cast = ""
            end_cast = ""

            if return_type.startswith("WGPU"):
                return_type = return_type[4:]
            if args.use_scoped_enums:
                if return_type in enum_names:
                    begin_cast = f"static_cast<{return_type}>("
                    end_cast = ")"
            
            wrapped_call = f"{begin_cast}wgpu{entry_name}{proc.name}({argument_names_str}){end_cast}"
            maybe_const = " const" if use_const else ""
            name_and_args = f"{method_name}({', '.join(arguments)}){maybe_const}"
            decls.append(f"\t{maybe_inline}{maybe_no_discard}{return_type} {name_and_args};\n")
            implems.append(
                f"{maybe_inline}{return_type} {entry_name}::{name_and_args} {{\n"
                + body.replace("{wrapped_call}", wrapped_call)
                + "}\n"
            )

            # Add utility overload for arguments of the form 'uint32_t xxCount, Xx const * xx'
            for i in range(len(proc.arguments) - 1):
                a, b = proc.arguments[i], proc.arguments[i + 1]
                if a.type in {"uint32_t","size_t"} and a.name.endswith("Count"):
                    name = a.name[:-5]
                    if b.type.endswith("const *") and b.name.startswith(name):
                        vec_type = b.type[:-8]
                        vec_name = name if name.endswith("s") else name + "s"

                        alternatives = [
                            (
                                [f"const std::vector<{vec_type}>& {vec_name}"],
                                [f"static_cast<{a.type}>({vec_name}.size())", f"{vec_name}.data()"]
                            ),
                            (
                                [f"const {vec_type}& {vec_name}"],
                                [f"1", f"&{vec_name}"]
                            ),
                        ]

                        for new_args, new_arg_names in alternatives:
                            alt_arguments = arguments[:i-1] + new_args + arguments[i+2:]
                            alt_argument_names = argument_names[:i-1] + new_arg_names + argument_names[i+2:]
                            alt_argument_names_str = ', '.join([argument_self] + alt_argument_names)

                            wrapped_call = f"wgpu{entry_name}{proc.name}({alt_argument_names_str})"

                            maybe_const = " const" if use_const else ""

                            name_and_args = f"{method_name}({', '.join(alt_arguments)}){maybe_const}"
                            decls.append(f"\t{maybe_inline}{return_type} {name_and_args};\n")
                            implems.append(
                                f"{return_type} {entry_name}::{name_and_args} {{\n"
                                + body.replace("{wrapped_call}", wrapped_call)
                                + "}\n"
                            )

            # Add a variant when the last argument is a nullable descriptor
            if len(proc.arguments) > 1:
                arg = proc.arguments[-1]
                _, arg_c, __, ___ = format_arg(arg)
                if arg.nullable and arg_c.startswith("&"):
                    alt_arguments = arguments[:-1]
                    alt_argument_names = argument_names[:-1]
                    alt_argument_names_str = ', '.join([argument_self] + alt_argument_names + ["nullptr"])

                    wrapped_call = f"{begin_cast}wgpu{entry_name}{proc.name}({alt_argument_names_str}){end_cast}"

                    maybe_const = " const" if use_const else ""

                    name_and_args = f"{method_name}({', '.join(alt_arguments)}){maybe_const}"
                    decls.append(f"\t{maybe_inline}{return_type} {name_and_args};\n")
                    implems.append(
                        f"{maybe_inline}{return_type} {entry_name}::{name_and_args} {{\n"
                        + body.replace("{wrapped_call}", wrapped_call)
                        + "}\n"
                    )

        injected_decls = meta["injected-decls"].members.get(entry_name, [])
        macro = meta["injected-decls"].macro_override.get(entry_name, macro)

        binding[namespace].append(
            f"{macro}({entry_name})\n"
            + "".join(decls + injected_decls)
            + "END\n"
        )

        binding[namespace_oneliner].append(
            f"{macro}({entry_name});"
        )

        binding[namespace_impl].append(
            f"// Methods of {entry_name}\n"
            + "".join(implems)
            + "\n"
        )

    # Only handles_impl is present in the tamplate
    binding["handles_impl"] = (
        binding["class_impl"] +
        binding["handles_impl"]
    )

    if args.use_non_member_procedures:
        for proc in api.procedures:
            if proc.parent is not None:
                continue
            arg_sig = map(lambda a: f"{a.type} {a.name}", proc.arguments)
            arg_names = map(lambda a: a.name, proc.arguments)
            proc_name = proc.name[0].lower() + proc.name[1:]
            binding["procedures"].append(
                f"{proc.return_type} {proc_name}({', '.join(arg_sig)}) {{\n"
                + f"\treturn wgpu{proc.name}({', '.join(arg_names)});\n"
                + "}"
            )

    for enum in api.enumerations:
        if args.use_scoped_enums:
            if args.use_fake_scoped_enums:
                enum = (
                    f"ENUM({enum.name})\n"
                    + "".join([ f"\tENUM_ENTRY({format_enum_value(e.key)}, {e.value})\n" for e in enum.entries ])
                    + "END"
                )
            else:
                enum = (
                    f"enum class {enum.name}: int {{\n"
                    + "".join([ f"\t{format_enum_value(e.key)} = {e.value},\n" for e in enum.entries ])
                    + "};"
                )
        else:
            enum = f"typedef WGPU{enum.name} {enum.name};"
        binding["enums"].append(enum)

    # Use a dict to merge duplicates
    cb_dict = {
        cb.name: map(lambda a: format_arg(a)[0], cb.arguments[:-1])
        for cb in api.callbacks
    }
    for cb_name, cb_args in cb_dict.items():
        binding["callbacks"].append(f"using {cb_name}Callback = std::function<void({', '.join(cb_args)})>;")

    for ta in api.type_aliases:
        binding["type_aliases"].append(f"using {ta.wgpu_type} = {ta.aliased_type};")

    for k, v in binding.items():
        binding[k] = "\n".join(v)

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
        in_inject = False
        in_blacklist = False
        injected = ""
        blacklist = ""
        template = ""
        for line in f:
            if line.strip() == "{{begin-inject}}":
                in_inject = True
                continue
            if line.strip() == "{{end-inject}}":
                in_inject = False
                continue
            if line.strip() == "{{begin-blacklist}}":
                in_blacklist = True
                continue
            if line.strip() == "{{end-blacklist}}":
                in_blacklist = False
                continue
            if in_inject:
                injected += line
            elif in_blacklist:
                blacklist += line
            else:
                template += line
        template = (
            template
            .replace('{', '{{') # escape brackets
            .replace('}', '}}')
            .replace('{{{{', '{') # transform double brackets into format string
            .replace('}}}}', '}')
        )
    
    return template, {
        "injected-decls": parseTemplateInjection(injected),
        "blacklist": blacklist,
    }

@dataclass
class InjectedData():
    # Extra members to insert, for each type
    members: Dict[str,List[str]]

    # Replacement for the HANDLE/STRUCT/etc macro used for this definition
    # (used to replace STRUCT by STRUCT_NO_OSTREAM)
    macro_override: Dict[str,str]

def parseTemplateInjection(text):
    it = iter(text.split("\n"))
    
    injected_data = InjectedData(
        members = defaultdict(list),
        macro_override = {},
    )

    begin_re = re.compile(r"^(HANDLE|DESCRIPTOR|STRUCT|STRUCT_NO_OSTREAM)\((\w+)\)")
    end_re = re.compile(r"^END")
    current_category = None

    while (line := next(it, None)) is not None:
        if (match := begin_re.search(line)):
            current_category = match.group(2)
            injected_data.macro_override[current_category] = match.group(1)

        elif (match := end_re.search(line)):
            current_category = None

        elif current_category is not None:
            injected_data.members[current_category].append(line + "\n")

    return injected_data

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
    
