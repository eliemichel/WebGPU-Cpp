<div align="center">
  <picture>
    <source media="(prefers-color-scheme: dark)" srcset="https://raw.githubusercontent.com/eliemichel/LearnWebGPU/main/images/webgpu-dark.svg">
    <source media="(prefers-color-scheme: light)" srcset="https://raw.githubusercontent.com/eliemichel/LearnWebGPU/main/images/webgpu-light.svg">
    <img alt="Learn WebGPU Logo" src="images/webgpu-dark.svg" width="200">
  </picture>

  <a href="https://github.com/eliemichel/LearnWebGPU">LearnWebGPU</a> &nbsp;|&nbsp; <a href="https://github.com/eliemichel/WebGPU-Cpp">WebGPU-C++</a> &nbsp;|&nbsp; <a href="https://github.com/eliemichel/WebGPU-distribution">WebGPU-distribution</a><br/>
  <a href="https://github.com/eliemichel/glfw3webgpu">glfw3webgpu</a> &nbsp;|&nbsp; <a href="https://github.com/eliemichel/sdl2webgpu">sdl2webgpu</a>
  
  <a href="https://discord.gg/2Tar4Kt564"><img src="https://img.shields.io/static/v1?label=Discord&message=Join%20us!&color=blue&logo=discord&logoColor=white" alt="Discord | Join us!"/></a>
</div>

WebGPU-C++
==========

**Just what you need** to make the raw C API of WebGPU feel **a bit more confy** when programming in C++, but **zero runtime overhead**, this is mostly syntactic sugar! 🧁

Table of Contents
-----------------

 - [What is this?](#what-is-this)
   * [Features at a glance](#features-at-a-glance)
 - [Quick Start](#quick-start)
   * [Setup](#setup)
   * [Usage](#usage)
 - [Going Further](#going-further)
   * [Custom generation](#custom-generation)
   * [Default values](#default-values)
   * [See also](#see-also)
 - [License](#license)

What is this?
-------------

This is a **single-file** shallow wrapper for using the WebGPU native API in a more **C++ idiomatic** way. It comes with **zero overhead** and is mostly syntactic sugar to make the original C API less verbose. All C++ types are naturally compatible with original C-style types, the memory layout remains untouched.

The C++ wrapper is automatically generated from the official [webgpu.h](https://raw.githubusercontent.com/webgpu-native/webgpu-headers/main/webgpu.h), with the possibility to inject custom code and blacklist symbols that your implementation of `webgpu.h` does not handle yet (see [Going Further](#going-further)).

### Features at a glance

 - Namespace
 - Default descriptor values
 - Object notation
 - Capturing closures
 - Scoped enumerations

Quick Start
-----------

The easiest route is to use the Web service: [https://eliemichel.github.io/WebGPU-Cpp](https://eliemichel.github.io/WebGPU-Cpp)

**NB** *To get started with WebGPU in general, see our [Learn WebGPU for C++](https://eliemichel.github.io/LearnWebGPU) documentation!*

### Setup

 1. Copy the file [dawn/webgpu.hpp](dawn/webgpu.hpp), [wgpu-native/webgpu.hpp](wgpu-native/webgpu.hpp) or [emscripten/webgpu.hpp](emscripten/webgpu.hpp) (depending on your backend) to your C++17 project.

**NB** You should also check the git tag that is in a file of this repo next to each `webgpu.hpp`. If your version of the backend is newer, see below how to generate the `webgpu.hpp` file yourself.

 2. Replace `#include <webgpu/webgpu.h>` by `#include "webgpu/webgpu.hpp"` in your source files:

```C++
#include "webgpu/webgpu.hpp"
```

 3. In **exactly one** of your source files, add `#define WEBGPU_CPP_IMPLEMENTATION` before including webgpu.cpp:

```C++
#define WEBGPU_CPP_IMPLEMENTATION
#include "webgpu/webgpu.hpp"
```

### Usage

**NB** *By default, the wrapper is built for the last version of the [wgpu-native](https://github.com/gfx-rs/wgpu-native) implementation of `webgpu.h`. If you use the [Dawn](https://dawn.googlesource.com/dawn) implementation, you may need to read [advanced instructions](#going-further).*

#### Namespace

Instead of prefixing every struct name with `WGPU` and every function name with `wgpu` (the C way), all symbols are put in a `wgpu` namespace (the C++ way):

```C
// C style
WGPUInstanceDescriptor desc = {};
desc.nextInChain = nullptr;
WGPUInstance instance = wgpuCreateInstance(&desc);
```

becomes with namespaces:

```C++
// C++ style
wgpu::InstanceDescriptor desc = {};
wgpu::Instance instance = wgpu::createInstance(&desc);
```

And of course you can start your source file with `using namespace wgpu;` to avoid spelling out `wgpu::` everywhere.

#### Default descriptor values

Sometimes we just need to build a descriptor by default. More generally, we rarely need to have all the fields of the descriptor deviate from the default, so this wrapper provides an easy way to set all fields to the default values, which is automatically synchronized from [the official WebGPU specification](https://www.w3.org/TR/webgpu).

Since it is very common, the `nextInChain` value is automatically set to `nullptr` by default. For other fields, the user must call the `setDefault()` method. This manual action prevents the wrapper from having hidden overhead:

```C++
BindGroupLayoutEntry bindGroupLayoutEntry;

// This recursively set defaults for bindGroupLayoutEntry.buffer,
// bindGroupLayoutEntry.sampler, etc.
bindGroupLayoutEntry.setDefault();

// Even more compact:
BindGroupLayoutEntry bindGroupLayoutEntry = Default;
```

#### Object notation

Beyond namespace, most functions are also previewed by the name of their first argument, e.g.:

```C
// C style
WGPUBuffer wgpuDeviceCreateBuffer(WGPUDevice device, WGPUBufferDescriptor const * descriptor);
               ^^^^^^             ^^^^^^^^^^^^^^^^^
size_t wgpuAdapterEnumerateFeatures(WGPUAdapter adapter, WGPUFeatureName * features);
           ^^^^^^^                  ^^^^^^^^^^^^^^^^^^^
void wgpuBufferDestroy(WGPUBuffer buffer);
         ^^^^^^        ^^^^^^^^^^^^^^^^^
```

These functions are conceptually *methods* of the object constituted by their first argument, so in this wrapper they are exposed as such:

```C++
// C++ style
namespace wgpu {
	struct Device {
		// [...]
		createBuffer(const BufferDescriptor& descriptor);
	};

	struct Adapter {
		// [...]
		enumerateFeatures(FeatureName * features);
	};

	struct Device {
		// [...]
		destroy();
	};
} // namespace wgpu
```

Note also that descriptors are passed by reference rather than by pointer.

#### Capturing closures

Many asynchronous operations use callbacks. In order to provide some context to the callback's body, there is always a `void *userdata` argument passed around. This can be alleviated in C++ by using capturing closures.

**NB** *This only alleviates the notations, but technically mechanism very similar to the user data pointer is automatically implemented when creating a capturing lambda.*

```C++
// C style
struct Context {
	WGPUBuffer buffer;
};
auto onBufferMapped = [](WGPUBufferMapAsyncStatus status, void* pUserData) {
	Context* context = reinterpret_cast<Context*>(pUserData);
	std::cout << "Buffer mapped with status " << status << std::endl;
	unsigned char* bufferData = (unsigned char*)wgpuBufferGetMappedRange(context->buffer, 0, 16);
	std::cout << "bufferData[0] = " << (int)bufferData[0] << std::endl;
	wgpuBufferUnmap(context->buffer);
};
Context context;
wgpuBufferMapAsync(buffer, WGPUMapMode_Read, 0, 16, onBufferMapped, (void*)&context);
```

becomes

```C++
// C++ style
buffer.mapAsync(buffer, [&context](wgpu::BufferMapAsyncStatus status) {
	std::cout << "Buffer mapped with status " << status << std::endl;
	unsigned char* bufferData = (unsigned char*)context.buffer.getMappedRange(0, 16);
	std::cout << "bufferData[0] = " << (int)bufferData[0] << std::endl;
	context.buffer.unmap();
});
```

#### Scoped enumerations

Because enums are *unscoped* by default, the WebGPU API is forced to prefix all values that an enum can take with the name of the enum, leading to quite long names:

```C
typedef enum WGPURequestAdapterStatus {
    WGPURequestAdapterStatus_Success = 0x00000000,
    WGPURequestAdapterStatus_Unavailable = 0x00000001,
    WGPURequestAdapterStatus_Error = 0x00000002,
    WGPURequestAdapterStatus_Unknown = 0x00000003,
    WGPURequestAdapterStatus_Force32 = 0x7FFFFFFF
} WGPURequestAdapterStatus;
```

It is possible in C++ to define *scoped* enums, which are strongly typed and can only be accessed through the name, for instance this scoped enum:

```C++
enum class RequestAdapterStatus {
    Success = 0x00000000,
    Unavailable = 0x00000001,
    Error = 0x00000002,
    Unknown = 0x00000003,
    Force32 = 0x7FFFFFFF
};
```

This can be used as follows:

```C++
wgpu::RequestAdapterStatus::Success;
```

**NB** *The actual implementation use a little trickery so that enum names are scoped, but implicitly converted to and from the original WebGPU enum values.*

Going further
-------------

### Custom generation

The file `webgpu.hpp` is generated by running the `generate.py` script (with at least Python 3.10). The best way to get an up to date doc is through it's help message:

```
$ python generate.py --help
usage: generate.py [-h] [-t TEMPLATE] [-o OUTPUT] [-u HEADER_URL] [-d DEFAULTS] [--pplux] [--no-scoped-enums]
                   [--no-fake-scoped-enums] [--use-non-member-procedures]

Generate the webgpu-cpp binding from official webgpu-native headers. You should not have to change any of the default
arguments for a regular use. This generates a webgpu.hpp file that you can include in your project. Exactly one of
your source files must #define WEBGPU_CPP_IMPLEMENTATION before including this header.

options:
  -h, --help            show this help message and exit
  -t TEMPLATE, --template TEMPLATE
                        Template used for generating the output binding file
  -o OUTPUT, --output OUTPUT
                        Path where to output the generated webgpu.hpp
  -u HEADER_URL, --header-url HEADER_URL
                        URL of the official webgpu.h from the webgpu-native project. If the URL does not start with
                        http(s)://, it is considered as a local file
  -d DEFAULTS, --defaults DEFAULTS
                        File listing default values for descriptor fields. This argument can be provided multiple
                        times, the last ones override the previous values.
  --pplux               Generate a binding compatible with https://github.com/pplux/wgpu.hpp (requires the use of
                        pplux.template.h as the template)
  --no-scoped-enums     Do not replace WebGPU enums with C++ scoped enums
  --no-fake-scoped-enums
                        Use scoped aliases to original enum values so that no casting is needed
  --use-non-member-procedures
                        Include WebGPU methods that are not members of any WebGPU object
```

The default options download the last version of `webgpu.h` from the [webgpu-native/webgpu-headers repository](https://github.com/webgpu-native/webgpu-headers), but it is recommended to check that it matches your own version of this file (provided by your implementation, e.g., wgpu-native or Dawn).

The template file uses a quite simple format: variables to be replaced by a snippet of code is put inside double brackets, e.g., `{{foo}}`. You can look at [webgpu.template.hpp](webgpu.template.hpp) for a list of available such variables.

There are two special pairs of tags which are not variables:

#### Blacklist

Between `{{begin-blacklist}}` and `{{end-blacklist}}`, you can list WebGPU procedures that you would like the binding to ignore. This must be used when your version of `webgpu.h` declares some symbols that are not actually implemented by your binaries of WebGPU.

#### Member injection

Between `{{begin-inject}}` and `{{end-inject}}`, you can specify extra methods to inject in the auto-generated handle types. Within this scope, define a subscope with `HANDLE(Foo)` and `END` tags to add arbitrary members in type `Foo`.

You must then declare the body of this method at the end of the file, between `#ifdef WEBGPU_CPP_IMPLEMENTATION` and `#endif // WEBGPU_CPP_IMPLEMENTATION`

#### PpluX

This generator was inspired by [PpluX' wgpu.hpp](https://github.com/pplux/wgpu.hpp), and it can actually generate the very same headers:

```bash
python generate.py -t wgpu-pplux.template.hpp -o wgpu-pplux.hpp --pplux
```

### Default values

Default values for descriptors and structs are not provided in the `webgpu.h` native header. They are however specified in [the official WebGPU specification](https://www.w3.org/TR/webgpu), so we provide a script that downloads and scraps this document to extract the default values.

**NB** Running this script creates a `defaults.txt` file. If you want to add your own default values overrides, it is recommended to do so in the `extra-defaults.txt` file so that they do not get overwritten when running the scraper again.

Enumeration for which there exists an enum value `Undefined` default to this value, unless they have been specified a different default value in one of the `default.txt` files.

```
$ python fetch_default_values.py --help
usage: fetch_default_values [-h] [-u URL] [-v LOG_LEVEL] [-s OUTPUT_SPEC] [-d OUTPUT_DEFAULTS]

Fetch from the official WebGPU specification the default values for descriptors. Copyright (c) 2022-2023 Élie Michel

options:
  -h, --help            show this help message and exit
  -u URL, --url URL     URL of the specification document
  -v LOG_LEVEL, --log-level LOG_LEVEL
                        level of verbosity: DEBUG, INFO, WARNING ou ERROR
  -s OUTPUT_SPEC, --output-spec OUTPUT_SPEC
                        output JSON file containing the scraped API
  -d OUTPUT_DEFAULTS, --output-defaults OUTPUT_DEFAULTS
                        output file containing the default values
```

### Nullable descriptors

Some procedures (e.g., `wgpuTextureCreateView`) have their last argument marked as "nullable". In this case, an overloaded version of the fonction is generated by the wrapper, where this last argument is removed, and internally `nullptr` is provided.

### Update all generated examples

The examples provided in this repository were generated as follows:

```
# wgpu-native
python generate.py -u wgpu-native/webgpu.h -u wgpu-native/wgpu.h -t wgpu-native/webgpu.template.hpp -o wgpu-native/webgpu.hpp -d defaults.txt -d extra-defaults.txt

# Dawn
python generate.py -u dawn/webgpu.h -t dawn/webgpu.template.hpp -o dawn/webgpu.hpp -d defaults.txt -d extra-defaults.txt

# emscripten
python generate.py -u emscripten/webgpu.h -t emscripten/webgpu.template.hpp -o emscripten/webgpu.hpp -d defaults.txt -d extra-defaults.txt

# pplux wrapper
python generate.py -t pplux/wgpu-pplux.template.hpp -o pplux/wgpu-pplux.hpp --pplux
```

### See also

To get started with WebGPU, see our [Learn WebGPU for C++](https://eliemichel.github.io/LearnWebGPU) documentation!

This work was inspired by [PpluX' wgpu.hpp](https://github.com/pplux/wgpu.hpp).

License
-------

See [LICENSE.txt](LICENSE.txt)
