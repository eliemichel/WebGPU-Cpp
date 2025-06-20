/**
 * This file is part of the "Learn WebGPU for C++" book.
 *   https://github.com/eliemichel/LearnWebGPU
 *
 * MIT License
 * Copyright (c) 2022-2025 Elie Michel
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

{{webgpu_includes}}

#include <iostream>
#include <vector>
#include <functional>
#include <cassert>
#include <cmath>
#include <memory>
#include <string_view>

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

#define STRUCT_NO_OSTREAM(Type) \
struct Type : public WGPU ## Type { \
public: \
	typedef Type S; /* S == Self */ \
	typedef WGPU ## Type W; /* W == WGPU Type */ \
	Type() : W() {} \
	Type(const W &other) : W(other) {} \
	Type(const DefaultFlag &) : W() { setDefault(); } \
	Type& operator=(const DefaultFlag &) { setDefault(); return *this; } \
public:

#define STRUCT(Type) \
STRUCT_NO_OSTREAM(Type) \
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
	static constexpr W Name = (W)(Value);

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
STRUCT_NO_OSTREAM(StringView)
	StringView(const std::string_view& cpp) : WGPUStringView{ cpp.data(), cpp.length() } {}
	operator std::string_view() const;
	friend auto operator<<(std::ostream& stream, const S& self) -> std::ostream& {
		return stream << std::string_view(self);
	}
END
{{end-inject}}

{{begin-blacklist}}
wgpuDeviceGetLostFuture
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

Instance createInstance();
Instance createInstance(const InstanceDescriptor& descriptor);

#ifdef WEBGPU_CPP_IMPLEMENTATION

Instance createInstance() {
	return wgpuCreateInstance(nullptr);
}

Instance createInstance(const InstanceDescriptor& descriptor) {
	return wgpuCreateInstance(&descriptor);
}

// Handles members implementation
{{handles_impl}}

// Extra implementations
Adapter Instance::requestAdapter(const RequestAdapterOptions& options) {
	struct Context {
		Adapter adapter = nullptr;
		bool requestEnded = false;
	};
	Context context;

	RequestAdapterCallbackInfo{{ext_suffix}} callbackInfo;
	callbackInfo.nextInChain = nullptr;
	callbackInfo.userdata1 = &context;
	callbackInfo.callback = [](
		WGPURequestAdapterStatus status,
		WGPUAdapter adapter,
		WGPUStringView message,
		void* userdata1,
		[[maybe_unused]] void* userdata2
	) {
		Context& context = *reinterpret_cast<Context*>(userdata1);
		if (status == RequestAdapterStatus::Success) {
			context.adapter = adapter;
		}
		else {
			std::cout << "Could not get WebGPU adapter: " << StringView(message) << std::endl;
		}
		context.requestEnded = true;
	};
	callbackInfo.mode = CallbackMode::AllowSpontaneous;
	wgpuInstanceRequestAdapter(*this, &options, callbackInfo);

#if __EMSCRIPTEN__
	while (!context.requestEnded) {
		emscripten_sleep(50);
	}
#endif

	assert(context.requestEnded);
	return context.adapter;
}

Device Adapter::requestDevice(const DeviceDescriptor& descriptor) {
	struct Context {
		Device device = nullptr;
		bool requestEnded = false;
	};
	Context context;

	RequestDeviceCallbackInfo{{ext_suffix}} callbackInfo;
	callbackInfo.nextInChain = nullptr;
	callbackInfo.userdata1 = &context;
	callbackInfo.callback = [](
		WGPURequestDeviceStatus status,
		WGPUDevice device,
		WGPUStringView message,
		void* userdata1,
		[[maybe_unused]] void* userdata2
	) {
		Context& context = *reinterpret_cast<Context*>(userdata1);
		if (status == RequestDeviceStatus::Success) {
			context.device = device;
		}
		else {
			std::cout << "Could not get WebGPU device: " << StringView(message) << std::endl;
		}
		context.requestEnded = true;
	};
	callbackInfo.mode = CallbackMode::AllowSpontaneous;
	wgpuAdapterRequestDevice(*this, &descriptor, callbackInfo);

#if __EMSCRIPTEN__
	while (!context.requestEnded) {
		emscripten_sleep(50);
	}
#endif

	assert(context.requestEnded);
	return context.device;
}

StringView::operator std::string_view() const {
	return
		length == WGPU_STRLEN
		? std::string_view(data)
		: std::string_view(data, length);
}

#endif // WEBGPU_CPP_IMPLEMENTATION

#undef HANDLE
#undef DESCRIPTOR
#undef ENUM
#undef ENUM_ENTRY
#undef END

} // namespace wgpu
