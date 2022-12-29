Maybe functions with callback should be implemented like this:

```C++
template<typename ErrorCallbackFn>
void setUncapturedErrorCallback(ErrorCallbackFn callback) {
	struct Context {
		decltype(callback) theCallback;
	};
	Context ctx = { callback };
	static auto cCallback = [](WGPUErrorType type, char const* message, void* userdata) -> void {
		Context& ctx = *reinterpret_cast<Context*>(userdata);
		ctx.theCallback(static_cast<ErrorType>(type), message);
	};
	return wgpuDeviceSetUncapturedErrorCallback(m_raw, cCallback, reinterpret_cast<void*>(&ctx));
}
```

This copies the context but ensures that the callback is still valid. Another drawback is that it requires to define the function in the header, which may lead to forward declaration loops.

---

Auto-init chained struct STypes:

```C++
WGPUShaderModuleWGSLDescriptor shaderCodeDesc{};
shaderCodeDesc.chain.next = nullptr;
shaderCodeDesc.chain.sType = SType::ShaderModuleWGSLDescriptor;
```
