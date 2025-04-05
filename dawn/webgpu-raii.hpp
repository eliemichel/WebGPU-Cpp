/**
 * This is a RAII wrapper for WebGPU native API.
 * 
 * This file is part of the "Learn WebGPU for C++" book.
 *   https://eliemichel.github.io/LearnWebGPU
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

#pragma once

#include <webgpu/webgpu.hpp>

#include <type_traits>

#ifdef __EMSCRIPTEN__
#  define addRef reference
#endif

namespace wgpu {
namespace raii {

/**
 * RAII wrapper around a raw WebGPU type.
 * Use pointer-like dereferencing to access methods from the wrapped type.
 */
template <typename Raw>
class Wrapper {
public:
	Wrapper()
		: m_raw(nullptr)
	{}

	Wrapper(Raw&& raw)
		: m_raw(raw)
	{}

	// We define a destructor...
	~Wrapper() {
		Destruct();
	}

	// Copy semantics
	Wrapper& operator=(const Wrapper& other) {
		Destruct();
		assert(m_raw == nullptr);
		m_raw = other.m_raw;
		if (m_raw != nullptr) {
			m_raw.addRef();
		}
		return *this;
	}

	Wrapper(const Wrapper& other)
		: m_raw(other.m_raw)
	{
		if (m_raw != nullptr) {
			m_raw.addRef();
		}
	}

	// Move semantics
	Wrapper& operator=(Wrapper&& other) {
		Destruct();
		assert(m_raw == nullptr);
		m_raw = other.m_raw;
		other.m_raw = nullptr;
		return *this;
	}

	Wrapper(Wrapper&& other)
		: m_raw(other.m_raw)
	{
		other.m_raw = nullptr;
	}

	operator bool() const { return m_raw; }
	const Raw& operator*() const { return m_raw; }
	Raw& operator*() { return m_raw; }
	const Raw* operator->() const { return &m_raw; }
	Raw* operator->() { return &m_raw; }

private:
	void Destruct() {
		if (!m_raw) return;
		m_raw.release();
		m_raw = nullptr;
	}

private:
	// Raw resources that is wrapped by the RAII class
	Raw m_raw;
};

#define HANDLE(Type) using Type = wgpu::raii::Wrapper<wgpu::Type>

HANDLE(Adapter);
HANDLE(BindGroup);
HANDLE(BindGroupLayout);
HANDLE(Buffer);
HANDLE(CommandBuffer);
HANDLE(CommandEncoder);
HANDLE(ComputePassEncoder);
HANDLE(ComputePipeline);
HANDLE(Device);
HANDLE(ExternalTexture);
HANDLE(Instance);
HANDLE(PipelineLayout);
HANDLE(QuerySet);
HANDLE(Queue);
HANDLE(RenderBundle);
HANDLE(RenderBundleEncoder);
HANDLE(RenderPassEncoder);
HANDLE(RenderPipeline);
HANDLE(Sampler);
HANDLE(ShaderModule);
HANDLE(SharedBufferMemory);
HANDLE(SharedFence);
HANDLE(SharedTextureMemory);
HANDLE(Surface);
HANDLE(Texture);
HANDLE(TextureView);

#undef HANDLE

} // namespace raii
} // namespace wgpu
