/**
 * This file is part of the "Learn WebGPU for C++" book.
 *   https://github.com/eliemichel/LearnWebGPU
 *
 * MIT License
 * Copyright (c) 2022 Elie Michel
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

/**
 * Exactly one of your source files must #define WEBGPU_CPP_IMPLEMENTATION
 * before including this header.
 * 
 * NB: This file has been generated by the webgpu-cpp generator
 *   (see https://github.com/eliemichel/webgpu-cpp )
 */

#pragma once

#include <webgpu/webgpu.h>

#include <iostream>
#include <vector>
#include <functional>
#include <cassert>
#include <memory>

#if __EMSCRIPTEN__
#include <emscripten.h>
#endif

#ifdef _MSVC_LANG
#  if _MSVC_LANG >= 202002L
#   define NO_DISCARD [[nodiscard("You should keep this handle alive for as long as the callback may get invoked.")]]
#  elif _MSVC_LANG >= 201703L
#   define NO_DISCARD [[nodiscard]]
#  else
#   define NO_DISCARD
#  endif
#else
#  if __cplusplus >= 202002L
#    define NO_DISCARD [[nodiscard("You should keep this handle alive for as long as the callback may get invoked.")]]
#  elif __cplusplus >= 201703L
#    define NO_DISCARD [[nodiscard]]
#  else
#    define NO_DISCARD
#  endif
#endif

/**
 * A namespace providing a more C++ idiomatic API to WebGPU.
 */
namespace wgpu {

struct DefaultFlag {};
constexpr DefaultFlag Default;

#define HANDLE(Type) \
class Type { \
public: \
	typedef Type S; /* S == Self */ \
	typedef WGPU ## Type W; /* W == WGPU Type */ \
	Type() : m_raw(nullptr) {} \
	Type(const W& w) : m_raw(w) {} \
	operator W&() { return m_raw; } \
	operator const W&() const { return m_raw; } \
	operator bool() const { return m_raw != nullptr; } \
	bool operator==(const Type& other) const { return m_raw == other.m_raw; } \
	bool operator!=(const Type& other) const { return m_raw != other.m_raw; } \
	bool operator==(const W& other) const { return m_raw == other; } \
	bool operator!=(const W& other) const { return m_raw != other; } \
	friend auto operator<<(std::ostream &stream, const S& self) -> std::ostream & { \
		return stream << "<wgpu::" << #Type << " " << self.m_raw << ">"; \
	} \
private: \
	W m_raw; \
public:

#define DESCRIPTOR(Type) \
struct Type : public WGPU ## Type { \
public: \
	typedef Type S; /* S == Self */ \
	typedef WGPU ## Type W; /* W == WGPU Type */ \
	Type() : W() { nextInChain = nullptr; } \
	Type(const W &other) : W(other) { nextInChain = nullptr; } \
	Type(const DefaultFlag &) : W() { setDefault(); } \
	Type& operator=(const DefaultFlag &) { setDefault(); return *this; } \
	friend auto operator<<(std::ostream &stream, const S&) -> std::ostream & { \
		return stream << "<wgpu::" << #Type << ">"; \
	} \
public:

#define STRUCT(Type) \
struct Type : public WGPU ## Type { \
public: \
	typedef Type S; /* S == Self */ \
	typedef WGPU ## Type W; /* W == WGPU Type */ \
	Type() : W() {} \
	Type(const W &other) : W(other) {} \
	Type(const DefaultFlag &) : W() { setDefault(); } \
	Type& operator=(const DefaultFlag &) { setDefault(); return *this; } \
	friend auto operator<<(std::ostream &stream, const S&) -> std::ostream & { \
		return stream << "<wgpu::" << #Type << ">"; \
	} \
public:

#define ENUM(Type) \
class Type { \
public: \
	typedef Type S; /* S == Self */ \
	typedef WGPU ## Type W; /* W == WGPU Type */ \
	constexpr Type() : m_raw(W{}) {} /* Using default value-initialization */ \
	constexpr Type(const W& w) : m_raw(w) {} \
	constexpr operator W() const { return m_raw; } \
	W m_raw; /* Ideally, this would be private, but then types generated with this macro would not be structural. */

#define ENUM_ENTRY(Name, Value) \
	static constexpr W Name = (W)Value;

#define END };

{{begin-inject}}
HANDLE(Instance)
	Adapter requestAdapter(const RequestAdapterOptions& options);
END
HANDLE(Adapter)
	Device requestDevice(const DeviceDescriptor& descriptor);
END
STRUCT(Color)
	Color(double r, double g, double b, double a) : WGPUColor{ r, g, b, a } {}
END
STRUCT(Extent3D)
	Extent3D(uint32_t width, uint32_t height, uint32_t depthOrArrayLayers) : WGPUExtent3D{ width, height, depthOrArrayLayers } {}
END
STRUCT(Origin3D)
	Origin3D(uint32_t x, uint32_t y, uint32_t z) : WGPUOrigin3D{ x, y, z } {}
END
{{end-inject}}

{{begin-blacklist}}
{{end-blacklist}}

// Other type aliases
{{type_aliases}}

// Enumerations
{{enums}}

// Structs
{{structs}}

// Descriptors
{{descriptors}}

// Handles forward declarations
{{handles_decl}}

// Callback types
{{callbacks}}

// Handles detailed declarations
{{handles}}

// Non-member procedures
{{procedures}}

Instance createInstance(const InstanceDescriptor& descriptor);

#ifdef WEBGPU_CPP_IMPLEMENTATION

Instance createInstance(const InstanceDescriptor& descriptor) {
	return wgpuCreateInstance(&descriptor);
}

// Handles members implementation
{{handles_impl}}

// Extra implementations
Adapter Instance::requestAdapter(const RequestAdapterOptions& options) {
	Adapter adapter = nullptr;
	bool requestEnded = false;
	
	auto onAdapterRequestEnded = [&adapter, &requestEnded](RequestAdapterStatus status, Adapter _adapter, char const * message) {
		if (status == RequestAdapterStatus::Success) {
			adapter = _adapter;
		} else {
			std::cout << "Could not get WebGPU adapter: " << message << std::endl;
		}
		requestEnded = true;
	};

	auto h = requestAdapter(options, onAdapterRequestEnded);
	
#if __EMSCRIPTEN__
	while (!requestEnded) {
		emscripten_sleep(100);
	}
#endif

	assert(requestEnded);
	return adapter;
}

Device Adapter::requestDevice(const DeviceDescriptor& descriptor) {
	WGPUDevice device = nullptr;
	bool requestEnded = false;

	auto onDeviceRequestEnded = [&device, &requestEnded](RequestDeviceStatus status, Device _device, char const * message) {
		if (status == RequestDeviceStatus::Success) {
			device = _device;
		} else {
			std::cout << "Could not get WebGPU adapter: " << message << std::endl;
		}
		requestEnded = true;
	};

	auto h = requestDevice(descriptor, onDeviceRequestEnded);

#if __EMSCRIPTEN__
	while (!requestEnded) {
		emscripten_sleep(100);
	}
#endif

	assert(requestEnded);
	return device;
}

#endif // WEBGPU_CPP_IMPLEMENTATION

#undef HANDLE
#undef DESCRIPTOR
#undef ENUM
#undef ENUM_ENTRY
#undef END

} // namespace wgpu
