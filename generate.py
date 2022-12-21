#!/usr/bin/python3

# This file is part of the "Learn WebGPU for C++" book.
#   https://github.com/eliemichel/LearnWebGPU
#
# MIT License
# Copyright (c) 2022 Elie Michel
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

import argparse
import re
from dataclasses import dataclass, field
from os.path import dirname, isfile, join
import logging

parser = argparse.ArgumentParser(description="""
Generate the webgpu-cpp binding from official webgpu-native headers.
You should not have to change any of the default arguments for a regular use.

This generates a webgpu.hpp file that you can include in your project.
Exactly one of your source files must #define WEBGPU_CPP_IMPLEMENTATION
before including this header.

TODO: Default values for descriptors
TODO: Add some const qualifiers?
""")

parser.add_argument("-t", "--template", type=str,
                    default="webgpu.template.hpp",
                    help="Template used for generating the output binding file")

parser.add_argument("-o", "--output", type=str,
                    default="webgpu.hpp",
                    help="Path where to output the generated webgpu.hpp")

parser.add_argument("-u", "--header-url", type=str,
                    default="https://raw.githubusercontent.com/webgpu-native/webgpu-headers/main/webgpu.h",
                    help="URL of the official webgpu.h from the webgpu-native project. If the URL does not start with http(s)://, it is considered as a local file")

parser.add_argument("--pplux", action='store_true',
                    help="Generate a binding compatible with https://github.com/pplux/wgpu.hpp (requires the use of pplux.template.h as the template)")

# Advanced options

parser.add_argument("--no-scoped-enums", action='store_false', dest="use_scoped_enums",
                    help="Do not replace WebGPU enums with C++ scoped enums")

parser.add_argument("--no-fake-scoped-enums", action='store_false', dest="use_fake_scoped_enums",
                    help="Use scoped aliases to original enum values so that no casting is needed")

parser.add_argument("--use-non-member-procedures", action='store_true',
                    help="Include WebGPU methods that are not members of any WebGPU object")

logging.basicConfig(level=logging.INFO, format="%(levelname)s %(message)s")

def main(args):
    template, meta = loadTemplate(args.template)
    header = downloadHeader(args.header_url)
    api = parseHeader(header)

    if args.pplux:
        binding = producePpluxBinding(api)
    else:
        binding = produceBinding(api, meta)
    
    generateOutput(args.output, template, binding)

# -----------------------------------------------------------------------------
# Parser, for analyzing webgpu.h

@dataclass
class PropertyApi:
    name: str
    counter: str|None = None  # list properties have an associated counter property
    default_value: str = "" # TODO

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
    properties: list = field(default_factory=list)
    is_descriptor: bool = False

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
class WebGpuApi:
    handles: list[HandleApi] = field(default_factory=list)
    classes: list[ClassApi] = field(default_factory=list)
    procedures: list[ProcedureApi] = field(default_factory=list)
    enumerations: list[EnumerationApi] = field(default_factory=list)
    callbacks: list[CallbackApi] = field(default_factory=list)

STypes = {}
DoNotGenerate = []#["Color", "Origin3D"]

def parseHeader(header):
    it = iter(header.split("\n"))
    
    api = WebGpuApi()

    struct_re = re.compile(r"struct *WGPU(\w+) *{")
    typedef_re = re.compile(r"typedef struct .*WGPU(\w+);")
    stype_re = re.compile(r"WGPUSType_(\w+)")
    procedure_re = re.compile(r"WGPU_EXPORT (\w+) wgpu(\w+)\((.*)\);")
    enum_re = re.compile(r"typedef enum WGPU(\w+) {")
    flag_enum_re = re.compile(r"typedef WGPUFlags WGPU(\w+)Flags;")
    callback_re = re.compile(r"typedef void \(\*WGPU(\w+)Callback\)\((.*)\);")

    while (x := next(it, None)) is not None:
        if (match := struct_re.search(x)):
            struct_name = match.group(1)
            if struct_name not in DoNotGenerate:
                api.classes.append(parseClass(struct_name, it))
            continue

        if (match := typedef_re.search(x)):
            struct_name = match.group(1)
            api.handles.append(HandleApi(name=struct_name))
            continue

        if (match := stype_re.search(x)):
            STypes[match.group(1)] = match.group(0)
            continue

        if (match := procedure_re.search(x)):
            api.procedures.append(ProcedureApi(
                name=match.group(2),
                return_type=match.group(1),
                arguments=parseProcArgs(match.group(3)),
            ))
            continue

        if (match := enum_re.search(x)):
            name = match.group(1)
            api.enumerations.append(parseEnum(name, it))
            continue

        if (match := flag_enum_re.search(x)):
            api.enumerations.append(EnumerationApi(
                name=match.group(1) + "Flags",
            ))
            continue

        if (match := callback_re.search(x)):
            api.callbacks.append(CallbackApi(
                name=match.group(1),
                arguments=parseProcArgs(match.group(2)),
                raw_arguments=match.group(2),
            ))
            continue

    # Post process: find parent of each method
    for proc in api.procedures:
        maxi = 0
        for handle in api.handles:
            if len(handle.name) > maxi and proc.name.startswith(handle.name):
                proc.parent = handle.name
                maxi = len(handle.name)
        if proc.parent is not None:
            proc.name = proc.name[maxi:]

    return api

def parseEnum(name, it):
    entry_re = re.compile(name + r"_(\w+) = (\w+),?")
    end_re = re.compile(".*}")

    api = EnumerationApi(name=name)

    while (x := next(it, None)) is not None:
        if (match := entry_re.search(x)):
            key = match.group(1)
            value = match.group(2)
            api.entries.append(EnumerationEntryApi(key, value))

        elif (match := end_re.search(x)):
            break

    return api

def parseClass(name, it):
    api = ClassApi(name=name)
    end_of_struct_re = re.compile(".*}")
    property_re = re.compile("(\w+);")

    if name in STypes:
        api.parent = STypes[name]

    count_properties = []
    x = next(it)
    while not end_of_struct_re.search(x):
        if (match := property_re.search(x)):
            prop = match.group(1);
            if prop == "nextInChain":
                api.is_descriptor = True
            if prop == "chain" and api.parent is not None:
                pass
            elif prop[-5:] == "Count":
                count_properties.append(prop)
            else:
                api.properties.append(PropertyApi(name=prop))
        x = next(it)

    for counter in count_properties:
        # entri|ies -> entr|yCount
        # colorFormat|s -> colorFormat|sCount
        prefix = counter[:-6]
        found = False
        for r in api.properties:
            if r.name.startswith(prefix):
                r.counter = counter
                found = True
                break
        if not found:
            api.properties.append(PropertyApi(name=prop))

    return api

def parseProcArgs(line):
    args = []
    for entry in line.split(","):
        entry = entry.strip()
        nullable = entry.strip().endswith("/* nullable */")
        if nullable:
            entry = entry[:-14]
        tokens = entry.split()
        args.append(ProcedureArgumentApi(
            name=tokens[-1],
            type=" ".join(tokens[:-1]),
            nullable=nullable
        ))
    return args

# -----------------------------------------------------------------------------

def produceBinding(api, meta):
    """Produce binding compatible with PpluX' wgpu.hpp"""
    binding = {
        "descriptors": [],
        "structs": [],
        "handles_decl": [],
        "handles": [],
        "handles_impl": [],
        "enums": [],
        "callbacks": [],
        "procedures": [],
    }

    # Cached variables for format_arg
    handle_names = [ h.name for h in api.handles ]
    handle_cptr_names = [ f"{h.name} const *" for h in api.handles ]
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

        if arg_type.startswith("WGPU"):
            arg_type = arg_type[4:]

        if arg_type in class_cptr_names:
            base_type = arg_type[:-8]
            arg_type = f"const {base_type}&"
            arg_c = f"&{arg_c}"
            arg_cpp = f"*reinterpret_cast<{base_type}>({arg.name})"
        elif arg_type in callbacks:
            arg_type = f"{arg_type}&&"
            arg_c = "cCallback"
            skip_next = True
        elif arg_type in handle_cptr_names:
            arg_c = f"reinterpret_cast<WGPU{arg_type}>({arg_c})"

        if args.use_scoped_enums:
            if arg_type in enum_names:
                arg_c = f"static_cast<WGPU{arg_type}>({arg_c})"
                arg_cpp = f"static_cast<{arg_type}>({arg_cpp})"
            elif arg_type in enum_ptr_names:
                arg_c = f"reinterpret_cast<WGPU{arg_type}>({arg_c})"

        sig_cpp = f"{arg_type} {arg.name}"

        return sig_cpp, arg_c, arg_cpp, skip_next

    for cls_api in api.classes:
        if cls_api.is_descriptor:
            binding["descriptors"].append(f"DESCRIPTOR({cls_api.name})\nEND\n")
        else:
            binding["structs"].append(f"typedef WGPU{cls_api.name} {cls_api.name};")

    for handle in api.handles:
        binding["handles_decl"].append(f"class {handle.name};")
        decls = []
        implems = []
        for proc in api.procedures:
            if proc.parent == handle.name:
                if "wgpu" + handle.name + proc.name + "\n" in meta["blacklist"]:
                    logging.info(f"Skipping wgpu{handle.name}{proc.name} (blacklisted)...")
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

                # Wrap callback into std::function&&
                extra_body = ""
                if "userdata" == proc.arguments[-1].name:
                    cb = callbacks[proc.arguments[-2].type[4:]]
                    cb_name = proc.arguments[-2].name
                    cb_arg_names = map(lambda a: format_arg(a)[2], cb.arguments[:-1])
                    extra_body += (
                          f"\tstatic auto cCallback = []({cb.raw_arguments}) -> void {{\n"
                        + f"\t\t{cb.name}Callback& callback = *reinterpret_cast<{cb.name}Callback*>(userdata);\n"
                        + f"\t\tcallback({', '.join(cb_arg_names)});\n"
                        + "\t};\n"
                    )
                    argument_names.append(f"reinterpret_cast<void*>(&{cb_name})")

                argument_names_str = ', '.join(["m_raw"] + argument_names)

                begin_cast = ""
                end_cast = ""

                return_type = proc.return_type
                if return_type.startswith("WGPU"):
                    return_type = return_type[4:]
                if args.use_scoped_enums:
                    if return_type in enum_names:
                        begin_cast = f"static_cast<{return_type}>("
                        end_cast = ")"
                
                name_and_args = f"{method_name}({', '.join(arguments)})"
                decls.append(f"\t{return_type} {name_and_args};\n")
                implems.append(
                    f"{return_type} {handle.name}::{name_and_args} {{\n"
                    + extra_body
                    + f"\treturn {begin_cast}wgpu{handle.name}{proc.name}({argument_names_str}){end_cast};\n"
                    + "}\n"
                )

                # Add utility overload for arguments of the form 'uint32_t xxCount, Xx const * xx'
                for i in range(len(proc.arguments) - 1):
                    a, b = proc.arguments[i], proc.arguments[i + 1]
                    if a.type == "uint32_t" and a.name.endswith("Count"):
                        name = a.name[:-5]
                        if b.type.endswith("const *") and b.name.startswith(name):
                            vec_type = b.type[:-8]
                            vec_name = name if name.endswith("s") else name + "s"

                            alternatives = [
                                (
                                    [f"const std::vector<{vec_type}>& {vec_name}"],
                                    [f"static_cast<uint32_t>({vec_name}.size())", f"{vec_name}.data()"]
                                ),
                                (
                                    [f"const {vec_type}& {vec_name}"],
                                    [f"1", f"&{vec_name}"]
                                ),
                            ]

                            for new_args, new_arg_names in alternatives:
                                alt_arguments = arguments[:i-1] + new_args + arguments[i+2:]
                                alt_argument_names = argument_names[:i-1] + new_arg_names + argument_names[i+2:]
                                alt_argument_names_str = ', '.join(["m_raw"] + alt_argument_names)

                                name_and_args = f"{method_name}({', '.join(alt_arguments)})"
                                decls.append(f"\t{return_type} {name_and_args};\n")
                                implems.append(
                                    f"{return_type} {handle.name}::{name_and_args} {{\n"
                                    + extra_body
                                    + f"\treturn wgpu{handle.name}{proc.name}({alt_argument_names_str});\n"
                                    + "}\n"
                                )

        injected_decls = meta["injected-decls"].get(handle.name, [])

        binding["handles"].append(
            f"HANDLE({handle.name})\n"
            + "".join(decls + injected_decls)
            + "END\n"
        )

        binding["handles_impl"].append(
            f"// Methods of {handle.name}\n"
            + "".join(implems)
            + "\n"
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
                    + "".join([ f"\tENUM_ENTRY({'_' if e.key[0] in '0123456789' else ''}{e.key}, {e.value})\n" for e in enum.entries ])
                    + "END"
                )
            else:
                enum = (
                    f"enum class {enum.name}: int {{\n"
                    + "".join([ f"\t{'_' if e.key[0] in '0123456789' else ''}{e.key} = {e.value},\n" for e in enum.entries ])
                    + "};"
                )
        else:
            enum = f"typedef WGPU{enum.name} {enum.name};"
        binding["enums"].append(enum)

    for cb in api.callbacks:
        cb_args = map(lambda a: format_arg(a)[0], cb.arguments[:-1])
        # binding["callbacks"].append(f"typedef std::function<void({', '.join(cb_args)})> {cb.name}Callback;")
        binding["callbacks"].append(f"using {cb.name}Callback = std::function<void({', '.join(cb_args)})>;")

    for k, v in binding.items():
        binding[k] = "\n".join(v)

    return binding

# -----------------------------------------------------------------------------
# Utility functions

def loadTemplate(path):
    resolved = resolveFilepath(path)
    logging.info(f"Loading template from {resolved}...")
    with open(resolved, encoding="utf-8") as f:
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

def parseTemplateInjection(text):
    it = iter(text.split("\n"))
    
    injected_data = {}

    begin_re = re.compile(r"^HANDLE\((\w+)\)")
    end_re = re.compile(r"^END")
    current_category = None

    while (line := next(it, None)) is not None:
        if (match := begin_re.search(line)):
            current_category = match.group(1)

        elif (match := end_re.search(line)):
            current_category = None

        elif current_category is not None:
            x = injected_data.get(current_category, [])
            x.append(line + "\n")
            injected_data[current_category] = x

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
        with open(resolved, encoding="utf-8") as f:
            return f.read()

def generateOutput(path, template, fields):
    logging.info(f"Writing generated binding to {path}...")
    out = template.format(**fields)
    with open(path, 'w', encoding="utf-8") as f:
        f.write(out)

def resolveFilepath(path):
    for p in [ join(dirname(__file__), path), path ]:
        if isfile(p):
            return p
    logging.error(f"Invalid template path: {path}")
    raise ValueError("Invalid template path")

# -----------------------------------------------------------------------------
# Extension reproducing PpluX binding

def producePpluxClass(api):
    if api.parent is not None:
        out = f"    SUBCLASS({api.name}, {api.parent})\n"
    elif api.is_descriptor:
        out = f"    DESCRIPTOR({api.name})\n"
    else:
        out = f"    CLASS({api.name})\n"

    for prop in api.properties:
        if prop.counter is None:
            out += f"        PROP({prop.name})\n"
        else:
            out += f"        LIST({prop.name},{prop.counter})\n"
    out += "    END\n\n"
    return out

def producePpluxBinding(api):
    """Produce binding compatible with PpluX' wgpu.hpp"""
    result = ""
    for cls_api in api.classes:
        cls_result = producePpluxClass(cls_api)
        result += cls_result

    typedefs = ""
    for handle_api in api.handles:
        typedefs += f"    typedef WGPU{handle_api.name} {handle_api.name};\n"

    return { "content": typedefs + "\n" + result }

def unzip(l):
    return tuple(map(list, zip(*l)))

# -----------------------------------------------------------------------------

if __name__ == "__main__":
    args = parser.parse_args() 
    main(args)
    
