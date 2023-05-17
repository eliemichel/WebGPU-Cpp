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

Add some const qualifiers?

---

Restore default initializer lists for structs.

They were disabled by the definition of the `Type(const DefaultFlag&)` constructor, we need to explicitely define them now.

---

RAII option
