"""
Fetch from the official WebGPU specification the default values for
descriptors.

Copyright (c) 2022-2023 Élie Michel
"""

import argparse
from os.path import dirname, isfile, join
import dataclasses
from dataclasses import dataclass, field
import logging
import re
import json

try:
    from lxml import html
except ImportError:
    print("[ERROR] You need to install the lxml module! (Run `pip install lxml`)")
    exit(1)

#------------------------------------------------
# Command line arguments

parser = argparse.ArgumentParser(prog="fetch_default_values", description=__doc__)

parser.add_argument("-u", "--url", type=str, default="https://www.w3.org/TR/webgpu",
                    help="URL of the specification document")

parser.add_argument('-v', '--log-level', type=str, default='INFO',
                    help="level of verbosity: DEBUG, INFO, WARNING ou ERROR")

parser.add_argument('-s', '--output-spec', type=str, default='spec.json',
                    help="output JSON file containing the scraped API")

parser.add_argument('-d', '--output-defaults', type=str, default='defaults.txt',
                    help="output file containing the default values")

#------------------------------------------------
# Main outline

def main(args):
    configureLogging(args)
    spec = download(args.url, label="WebGPU specification")
    api = parseAllDefinition(spec)
    exportApi(api, args.output_spec)
    exportDefaults(api, args.output_defaults)
    logging.info(f"Done.")

#------------------------------------------------
# Structures

@dataclass
class FieldApi:
    name: str
    type: str
    default: str|None = None
    required: bool = False

@dataclass
class DictionaryApi:
    name: str
    parent: str|None
    fields: list[FieldApi] = field(default_factory=list)

@dataclass
class WebGpuApi:
    dictionaries: list[DictionaryApi] = field(default_factory=list)

#------------------------------------------------
# Steps

def configureLogging(args):
    logging.basicConfig(format='[%(levelname)s] %(message)s', level=args.log_level)

def parseAllDefinition(spec):
    root = html.fromstring(spec)
    defs = root.xpath("//pre[@class='idl highlight def']")

    api = WebGpuApi()

    for d in defs:
        parseDefinition(api, d)

    return api

def exportApi(api, filename):
    logging.info(f"Exporting API specification to {filename}...")
    with open(filename, 'w', encoding="utf-8") as f:
        json.dump(api, f, indent=2, cls=EnhancedJSONEncoder)

def exportDefaults(api, filename):
    logging.info(f"Exporting default values to {filename}...")
    with open(filename, 'w', encoding="utf-8") as f:
        for d in api.dictionaries:
            for field in d.fields:
                if field.default is not None:
                    f.write(f"W{d.name}::{field.name} = {field.default};\n")

#------------------------------------------------
# Parser

def parseDefinition(api, body):
    it = iter(body.text_content().split("\n"))

    start_dict_re = re.compile(r"^dictionary (\w+)( : (\w+))? {$")

    while (x := next(it, None)) is not None:
        if (match := start_dict_re.search(x)):
            dict_name = match.group(1)
            parent_name = match.group(3)
            api.dictionaries.append(
                parseDictionary(DictionaryApi(dict_name, parent_name), it)
            )

    return api

def parseDictionary(api, it):
    end_dict_re = re.compile(r"^};$")
    field_re = re.compile(r"""^\s*(\w+) (\w+) = ("?\w+"?);$""")
    required_field_re = re.compile(r"^\s*required (\w+) (\w+);$")

    logging.debug(f"Starting dict {api.name}")

    while (x := next(it, None)) is not None:
        if (match := end_dict_re.search(x)):
            break
        elif (match := field_re.search(x)):
            field_type = match.group(1)
            field_name = match.group(2)
            field_default = match.group(3)
            api.fields.append(FieldApi(field_name, field_type, default=field_default))
        elif (match := required_field_re.search(x)):
            field_type = match.group(1)
            field_name = match.group(2)
            api.fields.append(FieldApi(field_name, field_type, required=True))

    logging.debug(f"Ending dict {api.name}")
    return api

#------------------------------------------------
# Utils (should be shared with generator.py)

def resolveFilepath(path):
    for p in [ join(dirname(__file__), path), path ]:
        if isfile(p):
            return p
    logging.error(f"Invalid template path: {path}")
    raise ValueError("Invalid template path")

def download(url, label=None):
    """Get a file's content either from a remote URL or from a local file"""
    label = label + " " if label is not None else ""
    if url.startswith("https://") or url.startswith("http://"):
        logging.info(f"Downloading {label}from {url}...")
        import urllib.request
        response = urllib.request.urlopen(url)
        data = response.read()
        text = data.decode("utf-8")
        return text
    else:
        resolved = resolveFilepath(url)
        logging.info(f"Loading {label}from {resolved}...")
        with open(resolved, encoding="utf-8") as f:
            return f.read()

class EnhancedJSONEncoder(json.JSONEncoder):
    """From https://stackoverflow.com/a/51286749"""
    def default(self, o):
        if dataclasses.is_dataclass(o):
            return dataclasses.asdict(o)
        return super().default(o)

#------------------------------------------------

if __name__ == "__main__":
    main(parser.parse_args())
