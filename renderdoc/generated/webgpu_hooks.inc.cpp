/******************************************************************************
 * The MIT License (MIT)
 *
 * Copyright (c) 2025 Élie Michel
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 ******************************************************************************/

/**
 * IMPORTANT: This file is AUTO-GENERATED, do not directly modify it.
 * See 'generate_renderdoc.py' in the 'renderdoc' branch of https://github.com/eliemichel/WebGPU-Cpp
 */

/**
 * NB: This is meant to be included in the definition of WebGPUHook in the
 * manually written webgpu_hooks.cpp
 */

static void wgpuAdapterInfoFreeMembers_hook(WGPUAdapterInfo value) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterInfoFreeMembers);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuAdapterInfoFreeMembers(value);
}
static void wgpuAdapterPropertiesMemoryHeapsFreeMembers_hook(WGPUAdapterPropertiesMemoryHeaps value) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterPropertiesMemoryHeapsFreeMembers);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuAdapterPropertiesMemoryHeapsFreeMembers(value);
}
static void wgpuAdapterPropertiesSubgroupMatrixConfigsFreeMembers_hook(WGPUAdapterPropertiesSubgroupMatrixConfigs value) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterPropertiesSubgroupMatrixConfigsFreeMembers);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuAdapterPropertiesSubgroupMatrixConfigsFreeMembers(value);
}
static void wgpuDawnDrmFormatCapabilitiesFreeMembers_hook(WGPUDawnDrmFormatCapabilities value) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDawnDrmFormatCapabilitiesFreeMembers);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuDawnDrmFormatCapabilitiesFreeMembers(value);
}
static WGPUStatus wgpuGetInstanceCapabilities_hook(WGPUInstanceCapabilities * capabilities) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcGetInstanceCapabilities);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuGetInstanceCapabilities(capabilities);
}
static WGPUProc wgpuGetProcAddress_hook(WGPUStringView procName) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcGetProcAddress);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuGetProcAddress(procName);
}
static void wgpuSharedBufferMemoryEndAccessStateFreeMembers_hook(WGPUSharedBufferMemoryEndAccessState value) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedBufferMemoryEndAccessStateFreeMembers);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSharedBufferMemoryEndAccessStateFreeMembers(value);
}
static void wgpuSharedTextureMemoryEndAccessStateFreeMembers_hook(WGPUSharedTextureMemoryEndAccessState value) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedTextureMemoryEndAccessStateFreeMembers);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSharedTextureMemoryEndAccessStateFreeMembers(value);
}
static void wgpuSupportedWGSLLanguageFeaturesFreeMembers_hook(WGPUSupportedWGSLLanguageFeatures value) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSupportedWGSLLanguageFeaturesFreeMembers);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSupportedWGSLLanguageFeaturesFreeMembers(value);
}
static void wgpuSupportedFeaturesFreeMembers_hook(WGPUSupportedFeatures value) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSupportedFeaturesFreeMembers);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSupportedFeaturesFreeMembers(value);
}
static void wgpuSurfaceCapabilitiesFreeMembers_hook(WGPUSurfaceCapabilities value) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSurfaceCapabilitiesFreeMembers);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSurfaceCapabilitiesFreeMembers(value);
}
static WGPUDevice wgpuAdapterCreateDevice_hook(WGPUAdapter adapter, WGPUDeviceDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterCreateDevice);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuAdapterCreateDevice(adapter, descriptor);
}
static void wgpuAdapterGetFeatures_hook(WGPUAdapter adapter, WGPUSupportedFeatures * features) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterGetFeatures);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuAdapterGetFeatures(adapter, features);
}
static WGPUStatus wgpuAdapterGetFormatCapabilities_hook(WGPUAdapter adapter, WGPUTextureFormat format, WGPUDawnFormatCapabilities * capabilities) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterGetFormatCapabilities);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuAdapterGetFormatCapabilities(adapter, format, capabilities);
}
static WGPUStatus wgpuAdapterGetInfo_hook(WGPUAdapter adapter, WGPUAdapterInfo * info) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterGetInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuAdapterGetInfo(adapter, info);
}
static WGPUInstance wgpuAdapterGetInstance_hook(WGPUAdapter adapter) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterGetInstance);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuAdapterGetInstance(adapter);
}
static WGPUStatus wgpuAdapterGetLimits_hook(WGPUAdapter adapter, WGPULimits * limits) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterGetLimits);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuAdapterGetLimits(adapter, limits);
}
static WGPUBool wgpuAdapterHasFeature_hook(WGPUAdapter adapter, WGPUFeatureName feature) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterHasFeature);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuAdapterHasFeature(adapter, feature);
}
static WGPUFuture wgpuAdapterRequestDevice_hook(WGPUAdapter adapter, WGPUDeviceDescriptor const * options, WGPURequestDeviceCallbackInfo callbackInfo) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterRequestDevice);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuAdapterRequestDevice(adapter, options, callbackInfo);
}
static void wgpuAdapterAddRef_hook(WGPUAdapter adapter) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuAdapterAddRef(adapter);
}
static void wgpuAdapterRelease_hook(WGPUAdapter adapter) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuAdapterRelease(adapter);
}
static void wgpuBindGroupSetLabel_hook(WGPUBindGroup bindGroup, WGPUStringView label) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBindGroupSetLabel);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuBindGroupSetLabel(bindGroup, label);
}
static void wgpuBindGroupAddRef_hook(WGPUBindGroup bindGroup) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBindGroupAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuBindGroupAddRef(bindGroup);
}
static void wgpuBindGroupRelease_hook(WGPUBindGroup bindGroup) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBindGroupRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuBindGroupRelease(bindGroup);
}
static void wgpuBindGroupLayoutSetLabel_hook(WGPUBindGroupLayout bindGroupLayout, WGPUStringView label) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBindGroupLayoutSetLabel);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuBindGroupLayoutSetLabel(bindGroupLayout, label);
}
static void wgpuBindGroupLayoutAddRef_hook(WGPUBindGroupLayout bindGroupLayout) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBindGroupLayoutAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuBindGroupLayoutAddRef(bindGroupLayout);
}
static void wgpuBindGroupLayoutRelease_hook(WGPUBindGroupLayout bindGroupLayout) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBindGroupLayoutRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuBindGroupLayoutRelease(bindGroupLayout);
}
static void wgpuBufferDestroy_hook(WGPUBuffer buffer) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferDestroy);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuBufferDestroy(buffer);
}
static void const * wgpuBufferGetConstMappedRange_hook(WGPUBuffer buffer, size_t offset, size_t size) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferGetConstMappedRange);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuBufferGetConstMappedRange(buffer, offset, size);
}
static WGPUBufferMapState wgpuBufferGetMapState_hook(WGPUBuffer buffer) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferGetMapState);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuBufferGetMapState(buffer);
}
static void * wgpuBufferGetMappedRange_hook(WGPUBuffer buffer, size_t offset, size_t size) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferGetMappedRange);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuBufferGetMappedRange(buffer, offset, size);
}
static uint64_t wgpuBufferGetSize_hook(WGPUBuffer buffer) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferGetSize);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuBufferGetSize(buffer);
}
static WGPUBufferUsage wgpuBufferGetUsage_hook(WGPUBuffer buffer) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferGetUsage);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuBufferGetUsage(buffer);
}
static WGPUFuture wgpuBufferMapAsync_hook(WGPUBuffer buffer, WGPUMapMode mode, size_t offset, size_t size, WGPUBufferMapCallbackInfo callbackInfo) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferMapAsync);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuBufferMapAsync(buffer, mode, offset, size, callbackInfo);
}
static WGPUStatus wgpuBufferReadMappedRange_hook(WGPUBuffer buffer, size_t offset, void * data, size_t size) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferReadMappedRange);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuBufferReadMappedRange(buffer, offset, data, size);
}
static void wgpuBufferSetLabel_hook(WGPUBuffer buffer, WGPUStringView label) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferSetLabel);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuBufferSetLabel(buffer, label);
}
static void wgpuBufferUnmap_hook(WGPUBuffer buffer) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferUnmap);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuBufferUnmap(buffer);
}
static WGPUStatus wgpuBufferWriteMappedRange_hook(WGPUBuffer buffer, size_t offset, void const * data, size_t size) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferWriteMappedRange);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuBufferWriteMappedRange(buffer, offset, data, size);
}
static void wgpuBufferAddRef_hook(WGPUBuffer buffer) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuBufferAddRef(buffer);
}
static void wgpuBufferRelease_hook(WGPUBuffer buffer) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuBufferRelease(buffer);
}
static void wgpuCommandBufferSetLabel_hook(WGPUCommandBuffer commandBuffer, WGPUStringView label) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandBufferSetLabel);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandBufferSetLabel(commandBuffer, label);
}
static void wgpuCommandBufferAddRef_hook(WGPUCommandBuffer commandBuffer) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandBufferAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandBufferAddRef(commandBuffer);
}
static void wgpuCommandBufferRelease_hook(WGPUCommandBuffer commandBuffer) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandBufferRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandBufferRelease(commandBuffer);
}
static WGPUComputePassEncoder wgpuCommandEncoderBeginComputePass_hook(WGPUCommandEncoder commandEncoder, WGPUComputePassDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderBeginComputePass);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuCommandEncoderBeginComputePass(commandEncoder, descriptor);
}
static WGPURenderPassEncoder wgpuCommandEncoderBeginRenderPass_hook(WGPUCommandEncoder commandEncoder, WGPURenderPassDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderBeginRenderPass);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuCommandEncoderBeginRenderPass(commandEncoder, descriptor);
}
static void wgpuCommandEncoderClearBuffer_hook(WGPUCommandEncoder commandEncoder, WGPUBuffer buffer, uint64_t offset, uint64_t size) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderClearBuffer);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderClearBuffer(commandEncoder, buffer, offset, size);
}
static void wgpuCommandEncoderCopyBufferToBuffer_hook(WGPUCommandEncoder commandEncoder, WGPUBuffer source, uint64_t sourceOffset, WGPUBuffer destination, uint64_t destinationOffset, uint64_t size) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderCopyBufferToBuffer);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderCopyBufferToBuffer(commandEncoder, source, sourceOffset, destination, destinationOffset, size);
}
static void wgpuCommandEncoderCopyBufferToTexture_hook(WGPUCommandEncoder commandEncoder, WGPUTexelCopyBufferInfo const * source, WGPUTexelCopyTextureInfo const * destination, WGPUExtent3D const * copySize) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderCopyBufferToTexture);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderCopyBufferToTexture(commandEncoder, source, destination, copySize);
}
static void wgpuCommandEncoderCopyTextureToBuffer_hook(WGPUCommandEncoder commandEncoder, WGPUTexelCopyTextureInfo const * source, WGPUTexelCopyBufferInfo const * destination, WGPUExtent3D const * copySize) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderCopyTextureToBuffer);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderCopyTextureToBuffer(commandEncoder, source, destination, copySize);
}
static void wgpuCommandEncoderCopyTextureToTexture_hook(WGPUCommandEncoder commandEncoder, WGPUTexelCopyTextureInfo const * source, WGPUTexelCopyTextureInfo const * destination, WGPUExtent3D const * copySize) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderCopyTextureToTexture);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderCopyTextureToTexture(commandEncoder, source, destination, copySize);
}
static WGPUCommandBuffer wgpuCommandEncoderFinish_hook(WGPUCommandEncoder commandEncoder, WGPUCommandBufferDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderFinish);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuCommandEncoderFinish(commandEncoder, descriptor);
}
static void wgpuCommandEncoderInjectValidationError_hook(WGPUCommandEncoder commandEncoder, WGPUStringView message) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderInjectValidationError);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderInjectValidationError(commandEncoder, message);
}
static void wgpuCommandEncoderInsertDebugMarker_hook(WGPUCommandEncoder commandEncoder, WGPUStringView markerLabel) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderInsertDebugMarker);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderInsertDebugMarker(commandEncoder, markerLabel);
}
static void wgpuCommandEncoderPopDebugGroup_hook(WGPUCommandEncoder commandEncoder) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderPopDebugGroup);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderPopDebugGroup(commandEncoder);
}
static void wgpuCommandEncoderPushDebugGroup_hook(WGPUCommandEncoder commandEncoder, WGPUStringView groupLabel) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderPushDebugGroup);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderPushDebugGroup(commandEncoder, groupLabel);
}
static void wgpuCommandEncoderResolveQuerySet_hook(WGPUCommandEncoder commandEncoder, WGPUQuerySet querySet, uint32_t firstQuery, uint32_t queryCount, WGPUBuffer destination, uint64_t destinationOffset) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderResolveQuerySet);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderResolveQuerySet(commandEncoder, querySet, firstQuery, queryCount, destination, destinationOffset);
}
static void wgpuCommandEncoderSetLabel_hook(WGPUCommandEncoder commandEncoder, WGPUStringView label) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderSetLabel);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderSetLabel(commandEncoder, label);
}
static void wgpuCommandEncoderWriteBuffer_hook(WGPUCommandEncoder commandEncoder, WGPUBuffer buffer, uint64_t bufferOffset, uint8_t const * data, uint64_t size) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderWriteBuffer);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderWriteBuffer(commandEncoder, buffer, bufferOffset, data, size);
}
static void wgpuCommandEncoderWriteTimestamp_hook(WGPUCommandEncoder commandEncoder, WGPUQuerySet querySet, uint32_t queryIndex) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderWriteTimestamp);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderWriteTimestamp(commandEncoder, querySet, queryIndex);
}
static void wgpuCommandEncoderAddRef_hook(WGPUCommandEncoder commandEncoder) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderAddRef(commandEncoder);
}
static void wgpuCommandEncoderRelease_hook(WGPUCommandEncoder commandEncoder) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderRelease(commandEncoder);
}
static void wgpuComputePassEncoderDispatchWorkgroups_hook(WGPUComputePassEncoder computePassEncoder, uint32_t workgroupCountX, uint32_t workgroupCountY, uint32_t workgroupCountZ) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderDispatchWorkgroups);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderDispatchWorkgroups(computePassEncoder, workgroupCountX, workgroupCountY, workgroupCountZ);
}
static void wgpuComputePassEncoderDispatchWorkgroupsIndirect_hook(WGPUComputePassEncoder computePassEncoder, WGPUBuffer indirectBuffer, uint64_t indirectOffset) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderDispatchWorkgroupsIndirect);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderDispatchWorkgroupsIndirect(computePassEncoder, indirectBuffer, indirectOffset);
}
static void wgpuComputePassEncoderEnd_hook(WGPUComputePassEncoder computePassEncoder) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderEnd);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderEnd(computePassEncoder);
}
static void wgpuComputePassEncoderInsertDebugMarker_hook(WGPUComputePassEncoder computePassEncoder, WGPUStringView markerLabel) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderInsertDebugMarker);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderInsertDebugMarker(computePassEncoder, markerLabel);
}
static void wgpuComputePassEncoderPopDebugGroup_hook(WGPUComputePassEncoder computePassEncoder) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderPopDebugGroup);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderPopDebugGroup(computePassEncoder);
}
static void wgpuComputePassEncoderPushDebugGroup_hook(WGPUComputePassEncoder computePassEncoder, WGPUStringView groupLabel) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderPushDebugGroup);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderPushDebugGroup(computePassEncoder, groupLabel);
}
static void wgpuComputePassEncoderSetBindGroup_hook(WGPUComputePassEncoder computePassEncoder, uint32_t groupIndex, WGPUBindGroup group, size_t dynamicOffsetCount, uint32_t const * dynamicOffsets) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderSetBindGroup);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderSetBindGroup(computePassEncoder, groupIndex, group, dynamicOffsetCount, dynamicOffsets);
}
static void wgpuComputePassEncoderSetImmediateData_hook(WGPUComputePassEncoder computePassEncoder, uint32_t offset, void const * data, size_t size) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderSetImmediateData);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderSetImmediateData(computePassEncoder, offset, data, size);
}
static void wgpuComputePassEncoderSetLabel_hook(WGPUComputePassEncoder computePassEncoder, WGPUStringView label) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderSetLabel);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderSetLabel(computePassEncoder, label);
}
static void wgpuComputePassEncoderSetPipeline_hook(WGPUComputePassEncoder computePassEncoder, WGPUComputePipeline pipeline) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderSetPipeline);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderSetPipeline(computePassEncoder, pipeline);
}
static void wgpuComputePassEncoderWriteTimestamp_hook(WGPUComputePassEncoder computePassEncoder, WGPUQuerySet querySet, uint32_t queryIndex) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderWriteTimestamp);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderWriteTimestamp(computePassEncoder, querySet, queryIndex);
}
static void wgpuComputePassEncoderAddRef_hook(WGPUComputePassEncoder computePassEncoder) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderAddRef(computePassEncoder);
}
static void wgpuComputePassEncoderRelease_hook(WGPUComputePassEncoder computePassEncoder) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderRelease(computePassEncoder);
}
static WGPUBindGroupLayout wgpuComputePipelineGetBindGroupLayout_hook(WGPUComputePipeline computePipeline, uint32_t groupIndex) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePipelineGetBindGroupLayout);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuComputePipelineGetBindGroupLayout(computePipeline, groupIndex);
}
static void wgpuComputePipelineSetLabel_hook(WGPUComputePipeline computePipeline, WGPUStringView label) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePipelineSetLabel);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePipelineSetLabel(computePipeline, label);
}
static void wgpuComputePipelineAddRef_hook(WGPUComputePipeline computePipeline) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePipelineAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePipelineAddRef(computePipeline);
}
static void wgpuComputePipelineRelease_hook(WGPUComputePipeline computePipeline) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePipelineRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePipelineRelease(computePipeline);
}
static WGPUBindGroup wgpuDeviceCreateBindGroup_hook(WGPUDevice device, WGPUBindGroupDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateBindGroup);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateBindGroup(device, descriptor);
}
static WGPUBindGroupLayout wgpuDeviceCreateBindGroupLayout_hook(WGPUDevice device, WGPUBindGroupLayoutDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateBindGroupLayout);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateBindGroupLayout(device, descriptor);
}
static WGPUBuffer wgpuDeviceCreateBuffer_hook(WGPUDevice device, WGPUBufferDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateBuffer);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateBuffer(device, descriptor);
}
static WGPUCommandEncoder wgpuDeviceCreateCommandEncoder_hook(WGPUDevice device, WGPUCommandEncoderDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateCommandEncoder);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateCommandEncoder(device, descriptor);
}
static WGPUComputePipeline wgpuDeviceCreateComputePipeline_hook(WGPUDevice device, WGPUComputePipelineDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateComputePipeline);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateComputePipeline(device, descriptor);
}
static WGPUFuture wgpuDeviceCreateComputePipelineAsync_hook(WGPUDevice device, WGPUComputePipelineDescriptor const * descriptor, WGPUCreateComputePipelineAsyncCallbackInfo callbackInfo) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateComputePipelineAsync);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateComputePipelineAsync(device, descriptor, callbackInfo);
}
static WGPUBuffer wgpuDeviceCreateErrorBuffer_hook(WGPUDevice device, WGPUBufferDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateErrorBuffer);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateErrorBuffer(device, descriptor);
}
static WGPUExternalTexture wgpuDeviceCreateErrorExternalTexture_hook(WGPUDevice device) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateErrorExternalTexture);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateErrorExternalTexture(device);
}
static WGPUShaderModule wgpuDeviceCreateErrorShaderModule_hook(WGPUDevice device, WGPUShaderModuleDescriptor const * descriptor, WGPUStringView errorMessage) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateErrorShaderModule);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateErrorShaderModule(device, descriptor, errorMessage);
}
static WGPUTexture wgpuDeviceCreateErrorTexture_hook(WGPUDevice device, WGPUTextureDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateErrorTexture);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateErrorTexture(device, descriptor);
}
static WGPUExternalTexture wgpuDeviceCreateExternalTexture_hook(WGPUDevice device, WGPUExternalTextureDescriptor const * externalTextureDescriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateExternalTexture);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateExternalTexture(device, externalTextureDescriptor);
}
static WGPUPipelineLayout wgpuDeviceCreatePipelineLayout_hook(WGPUDevice device, WGPUPipelineLayoutDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreatePipelineLayout);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreatePipelineLayout(device, descriptor);
}
static WGPUQuerySet wgpuDeviceCreateQuerySet_hook(WGPUDevice device, WGPUQuerySetDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateQuerySet);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateQuerySet(device, descriptor);
}
static WGPURenderBundleEncoder wgpuDeviceCreateRenderBundleEncoder_hook(WGPUDevice device, WGPURenderBundleEncoderDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateRenderBundleEncoder);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateRenderBundleEncoder(device, descriptor);
}
static WGPURenderPipeline wgpuDeviceCreateRenderPipeline_hook(WGPUDevice device, WGPURenderPipelineDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateRenderPipeline);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateRenderPipeline(device, descriptor);
}
static WGPUFuture wgpuDeviceCreateRenderPipelineAsync_hook(WGPUDevice device, WGPURenderPipelineDescriptor const * descriptor, WGPUCreateRenderPipelineAsyncCallbackInfo callbackInfo) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateRenderPipelineAsync);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateRenderPipelineAsync(device, descriptor, callbackInfo);
}
static WGPUSampler wgpuDeviceCreateSampler_hook(WGPUDevice device, WGPUSamplerDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateSampler);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateSampler(device, descriptor);
}
static WGPUShaderModule wgpuDeviceCreateShaderModule_hook(WGPUDevice device, WGPUShaderModuleDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateShaderModule);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateShaderModule(device, descriptor);
}
static WGPUTexture wgpuDeviceCreateTexture_hook(WGPUDevice device, WGPUTextureDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateTexture);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateTexture(device, descriptor);
}
static void wgpuDeviceDestroy_hook(WGPUDevice device) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceDestroy);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuDeviceDestroy(device);
}
static void wgpuDeviceForceLoss_hook(WGPUDevice device, WGPUDeviceLostReason type, WGPUStringView message) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceForceLoss);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuDeviceForceLoss(device, type, message);
}
static WGPUStatus wgpuDeviceGetAHardwareBufferProperties_hook(WGPUDevice device, void * handle, WGPUAHardwareBufferProperties * properties) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceGetAHardwareBufferProperties);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceGetAHardwareBufferProperties(device, handle, properties);
}
static WGPUAdapter wgpuDeviceGetAdapter_hook(WGPUDevice device) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceGetAdapter);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceGetAdapter(device);
}
static WGPUStatus wgpuDeviceGetAdapterInfo_hook(WGPUDevice device, WGPUAdapterInfo * adapterInfo) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceGetAdapterInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceGetAdapterInfo(device, adapterInfo);
}
static void wgpuDeviceGetFeatures_hook(WGPUDevice device, WGPUSupportedFeatures * features) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceGetFeatures);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuDeviceGetFeatures(device, features);
}
static WGPUStatus wgpuDeviceGetLimits_hook(WGPUDevice device, WGPULimits * limits) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceGetLimits);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceGetLimits(device, limits);
}
static WGPUFuture wgpuDeviceGetLostFuture_hook(WGPUDevice device) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceGetLostFuture);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceGetLostFuture(device);
}
static WGPUQueue wgpuDeviceGetQueue_hook(WGPUDevice device) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceGetQueue);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceGetQueue(device);
}
static WGPUBool wgpuDeviceHasFeature_hook(WGPUDevice device, WGPUFeatureName feature) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceHasFeature);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceHasFeature(device, feature);
}
static WGPUSharedBufferMemory wgpuDeviceImportSharedBufferMemory_hook(WGPUDevice device, WGPUSharedBufferMemoryDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceImportSharedBufferMemory);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceImportSharedBufferMemory(device, descriptor);
}
static WGPUSharedFence wgpuDeviceImportSharedFence_hook(WGPUDevice device, WGPUSharedFenceDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceImportSharedFence);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceImportSharedFence(device, descriptor);
}
static WGPUSharedTextureMemory wgpuDeviceImportSharedTextureMemory_hook(WGPUDevice device, WGPUSharedTextureMemoryDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceImportSharedTextureMemory);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceImportSharedTextureMemory(device, descriptor);
}
static void wgpuDeviceInjectError_hook(WGPUDevice device, WGPUErrorType type, WGPUStringView message) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceInjectError);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuDeviceInjectError(device, type, message);
}
static WGPUFuture wgpuDevicePopErrorScope_hook(WGPUDevice device, WGPUPopErrorScopeCallbackInfo callbackInfo) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDevicePopErrorScope);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDevicePopErrorScope(device, callbackInfo);
}
static void wgpuDevicePushErrorScope_hook(WGPUDevice device, WGPUErrorFilter filter) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDevicePushErrorScope);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuDevicePushErrorScope(device, filter);
}
static void wgpuDeviceSetLabel_hook(WGPUDevice device, WGPUStringView label) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceSetLabel);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuDeviceSetLabel(device, label);
}
static void wgpuDeviceSetLoggingCallback_hook(WGPUDevice device, WGPULoggingCallbackInfo callbackInfo) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceSetLoggingCallback);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuDeviceSetLoggingCallback(device, callbackInfo);
}
static void wgpuDeviceTick_hook(WGPUDevice device) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceTick);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuDeviceTick(device);
}
static void wgpuDeviceValidateTextureDescriptor_hook(WGPUDevice device, WGPUTextureDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceValidateTextureDescriptor);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuDeviceValidateTextureDescriptor(device, descriptor);
}
static void wgpuDeviceAddRef_hook(WGPUDevice device) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuDeviceAddRef(device);
}
static void wgpuDeviceRelease_hook(WGPUDevice device) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuDeviceRelease(device);
}
static void wgpuExternalTextureDestroy_hook(WGPUExternalTexture externalTexture) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcExternalTextureDestroy);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuExternalTextureDestroy(externalTexture);
}
static void wgpuExternalTextureExpire_hook(WGPUExternalTexture externalTexture) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcExternalTextureExpire);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuExternalTextureExpire(externalTexture);
}
static void wgpuExternalTextureRefresh_hook(WGPUExternalTexture externalTexture) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcExternalTextureRefresh);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuExternalTextureRefresh(externalTexture);
}
static void wgpuExternalTextureSetLabel_hook(WGPUExternalTexture externalTexture, WGPUStringView label) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcExternalTextureSetLabel);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuExternalTextureSetLabel(externalTexture, label);
}
static void wgpuExternalTextureAddRef_hook(WGPUExternalTexture externalTexture) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcExternalTextureAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuExternalTextureAddRef(externalTexture);
}
static void wgpuExternalTextureRelease_hook(WGPUExternalTexture externalTexture) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcExternalTextureRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuExternalTextureRelease(externalTexture);
}
static WGPUSurface wgpuInstanceCreateSurface_hook(WGPUInstance instance, WGPUSurfaceDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcInstanceCreateSurface);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuInstanceCreateSurface(instance, descriptor);
}
static WGPUStatus wgpuInstanceGetWGSLLanguageFeatures_hook(WGPUInstance instance, WGPUSupportedWGSLLanguageFeatures * features) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcInstanceGetWGSLLanguageFeatures);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuInstanceGetWGSLLanguageFeatures(instance, features);
}
static WGPUBool wgpuInstanceHasWGSLLanguageFeature_hook(WGPUInstance instance, WGPUWGSLLanguageFeatureName feature) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcInstanceHasWGSLLanguageFeature);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuInstanceHasWGSLLanguageFeature(instance, feature);
}
static void wgpuInstanceProcessEvents_hook(WGPUInstance instance) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcInstanceProcessEvents);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuInstanceProcessEvents(instance);
}
static WGPUFuture wgpuInstanceRequestAdapter_hook(WGPUInstance instance, WGPURequestAdapterOptions const * options, WGPURequestAdapterCallbackInfo callbackInfo) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcInstanceRequestAdapter);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuInstanceRequestAdapter(instance, options, callbackInfo);
}
static WGPUWaitStatus wgpuInstanceWaitAny_hook(WGPUInstance instance, size_t futureCount, WGPUFutureWaitInfo * futures, uint64_t timeoutNS) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcInstanceWaitAny);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuInstanceWaitAny(instance, futureCount, futures, timeoutNS);
}
static void wgpuInstanceAddRef_hook(WGPUInstance instance) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcInstanceAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuInstanceAddRef(instance);
}
static void wgpuPipelineLayoutSetLabel_hook(WGPUPipelineLayout pipelineLayout, WGPUStringView label) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcPipelineLayoutSetLabel);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuPipelineLayoutSetLabel(pipelineLayout, label);
}
static void wgpuPipelineLayoutAddRef_hook(WGPUPipelineLayout pipelineLayout) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcPipelineLayoutAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuPipelineLayoutAddRef(pipelineLayout);
}
static void wgpuPipelineLayoutRelease_hook(WGPUPipelineLayout pipelineLayout) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcPipelineLayoutRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuPipelineLayoutRelease(pipelineLayout);
}
static void wgpuQuerySetDestroy_hook(WGPUQuerySet querySet) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQuerySetDestroy);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuQuerySetDestroy(querySet);
}
static uint32_t wgpuQuerySetGetCount_hook(WGPUQuerySet querySet) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQuerySetGetCount);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuQuerySetGetCount(querySet);
}
static WGPUQueryType wgpuQuerySetGetType_hook(WGPUQuerySet querySet) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQuerySetGetType);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuQuerySetGetType(querySet);
}
static void wgpuQuerySetSetLabel_hook(WGPUQuerySet querySet, WGPUStringView label) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQuerySetSetLabel);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuQuerySetSetLabel(querySet, label);
}
static void wgpuQuerySetAddRef_hook(WGPUQuerySet querySet) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQuerySetAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuQuerySetAddRef(querySet);
}
static void wgpuQuerySetRelease_hook(WGPUQuerySet querySet) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQuerySetRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuQuerySetRelease(querySet);
}
static void wgpuQueueCopyExternalTextureForBrowser_hook(WGPUQueue queue, WGPUImageCopyExternalTexture const * source, WGPUTexelCopyTextureInfo const * destination, WGPUExtent3D const * copySize, WGPUCopyTextureForBrowserOptions const * options) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQueueCopyExternalTextureForBrowser);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuQueueCopyExternalTextureForBrowser(queue, source, destination, copySize, options);
}
static void wgpuQueueCopyTextureForBrowser_hook(WGPUQueue queue, WGPUTexelCopyTextureInfo const * source, WGPUTexelCopyTextureInfo const * destination, WGPUExtent3D const * copySize, WGPUCopyTextureForBrowserOptions const * options) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQueueCopyTextureForBrowser);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuQueueCopyTextureForBrowser(queue, source, destination, copySize, options);
}
static WGPUFuture wgpuQueueOnSubmittedWorkDone_hook(WGPUQueue queue, WGPUQueueWorkDoneCallbackInfo callbackInfo) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQueueOnSubmittedWorkDone);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuQueueOnSubmittedWorkDone(queue, callbackInfo);
}
static void wgpuQueueSetLabel_hook(WGPUQueue queue, WGPUStringView label) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQueueSetLabel);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuQueueSetLabel(queue, label);
}
static void wgpuQueueSubmit_hook(WGPUQueue queue, size_t commandCount, WGPUCommandBuffer const * commands) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQueueSubmit);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuQueueSubmit(queue, commandCount, commands);
}
static void wgpuQueueWriteBuffer_hook(WGPUQueue queue, WGPUBuffer buffer, uint64_t bufferOffset, void const * data, size_t size) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQueueWriteBuffer);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuQueueWriteBuffer(queue, buffer, bufferOffset, data, size);
}
static void wgpuQueueWriteTexture_hook(WGPUQueue queue, WGPUTexelCopyTextureInfo const * destination, void const * data, size_t dataSize, WGPUTexelCopyBufferLayout const * dataLayout, WGPUExtent3D const * writeSize) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQueueWriteTexture);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuQueueWriteTexture(queue, destination, data, dataSize, dataLayout, writeSize);
}
static void wgpuQueueAddRef_hook(WGPUQueue queue) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQueueAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuQueueAddRef(queue);
}
static void wgpuQueueRelease_hook(WGPUQueue queue) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQueueRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuQueueRelease(queue);
}
static void wgpuRenderBundleSetLabel_hook(WGPURenderBundle renderBundle, WGPUStringView label) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleSetLabel);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleSetLabel(renderBundle, label);
}
static void wgpuRenderBundleAddRef_hook(WGPURenderBundle renderBundle) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleAddRef(renderBundle);
}
static void wgpuRenderBundleRelease_hook(WGPURenderBundle renderBundle) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleRelease(renderBundle);
}
static void wgpuRenderBundleEncoderDraw_hook(WGPURenderBundleEncoder renderBundleEncoder, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderDraw);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderDraw(renderBundleEncoder, vertexCount, instanceCount, firstVertex, firstInstance);
}
static void wgpuRenderBundleEncoderDrawIndexed_hook(WGPURenderBundleEncoder renderBundleEncoder, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t baseVertex, uint32_t firstInstance) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderDrawIndexed);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderDrawIndexed(renderBundleEncoder, indexCount, instanceCount, firstIndex, baseVertex, firstInstance);
}
static void wgpuRenderBundleEncoderDrawIndexedIndirect_hook(WGPURenderBundleEncoder renderBundleEncoder, WGPUBuffer indirectBuffer, uint64_t indirectOffset) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderDrawIndexedIndirect);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderDrawIndexedIndirect(renderBundleEncoder, indirectBuffer, indirectOffset);
}
static void wgpuRenderBundleEncoderDrawIndirect_hook(WGPURenderBundleEncoder renderBundleEncoder, WGPUBuffer indirectBuffer, uint64_t indirectOffset) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderDrawIndirect);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderDrawIndirect(renderBundleEncoder, indirectBuffer, indirectOffset);
}
static WGPURenderBundle wgpuRenderBundleEncoderFinish_hook(WGPURenderBundleEncoder renderBundleEncoder, WGPURenderBundleDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderFinish);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuRenderBundleEncoderFinish(renderBundleEncoder, descriptor);
}
static void wgpuRenderBundleEncoderInsertDebugMarker_hook(WGPURenderBundleEncoder renderBundleEncoder, WGPUStringView markerLabel) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderInsertDebugMarker);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderInsertDebugMarker(renderBundleEncoder, markerLabel);
}
static void wgpuRenderBundleEncoderPopDebugGroup_hook(WGPURenderBundleEncoder renderBundleEncoder) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderPopDebugGroup);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderPopDebugGroup(renderBundleEncoder);
}
static void wgpuRenderBundleEncoderPushDebugGroup_hook(WGPURenderBundleEncoder renderBundleEncoder, WGPUStringView groupLabel) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderPushDebugGroup);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderPushDebugGroup(renderBundleEncoder, groupLabel);
}
static void wgpuRenderBundleEncoderSetBindGroup_hook(WGPURenderBundleEncoder renderBundleEncoder, uint32_t groupIndex, WGPUBindGroup group, size_t dynamicOffsetCount, uint32_t const * dynamicOffsets) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderSetBindGroup);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderSetBindGroup(renderBundleEncoder, groupIndex, group, dynamicOffsetCount, dynamicOffsets);
}
static void wgpuRenderBundleEncoderSetImmediateData_hook(WGPURenderBundleEncoder renderBundleEncoder, uint32_t offset, void const * data, size_t size) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderSetImmediateData);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderSetImmediateData(renderBundleEncoder, offset, data, size);
}
static void wgpuRenderBundleEncoderSetIndexBuffer_hook(WGPURenderBundleEncoder renderBundleEncoder, WGPUBuffer buffer, WGPUIndexFormat format, uint64_t offset, uint64_t size) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderSetIndexBuffer);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderSetIndexBuffer(renderBundleEncoder, buffer, format, offset, size);
}
static void wgpuRenderBundleEncoderSetLabel_hook(WGPURenderBundleEncoder renderBundleEncoder, WGPUStringView label) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderSetLabel);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderSetLabel(renderBundleEncoder, label);
}
static void wgpuRenderBundleEncoderSetPipeline_hook(WGPURenderBundleEncoder renderBundleEncoder, WGPURenderPipeline pipeline) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderSetPipeline);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderSetPipeline(renderBundleEncoder, pipeline);
}
static void wgpuRenderBundleEncoderSetVertexBuffer_hook(WGPURenderBundleEncoder renderBundleEncoder, uint32_t slot, WGPUBuffer buffer, uint64_t offset, uint64_t size) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderSetVertexBuffer);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderSetVertexBuffer(renderBundleEncoder, slot, buffer, offset, size);
}
static void wgpuRenderBundleEncoderAddRef_hook(WGPURenderBundleEncoder renderBundleEncoder) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderAddRef(renderBundleEncoder);
}
static void wgpuRenderBundleEncoderRelease_hook(WGPURenderBundleEncoder renderBundleEncoder) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderRelease(renderBundleEncoder);
}
static void wgpuRenderPassEncoderBeginOcclusionQuery_hook(WGPURenderPassEncoder renderPassEncoder, uint32_t queryIndex) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderBeginOcclusionQuery);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderBeginOcclusionQuery(renderPassEncoder, queryIndex);
}
static void wgpuRenderPassEncoderDraw_hook(WGPURenderPassEncoder renderPassEncoder, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderDraw);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderDraw(renderPassEncoder, vertexCount, instanceCount, firstVertex, firstInstance);
}
static void wgpuRenderPassEncoderDrawIndexed_hook(WGPURenderPassEncoder renderPassEncoder, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t baseVertex, uint32_t firstInstance) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderDrawIndexed);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderDrawIndexed(renderPassEncoder, indexCount, instanceCount, firstIndex, baseVertex, firstInstance);
}
static void wgpuRenderPassEncoderDrawIndexedIndirect_hook(WGPURenderPassEncoder renderPassEncoder, WGPUBuffer indirectBuffer, uint64_t indirectOffset) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderDrawIndexedIndirect);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderDrawIndexedIndirect(renderPassEncoder, indirectBuffer, indirectOffset);
}
static void wgpuRenderPassEncoderDrawIndirect_hook(WGPURenderPassEncoder renderPassEncoder, WGPUBuffer indirectBuffer, uint64_t indirectOffset) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderDrawIndirect);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderDrawIndirect(renderPassEncoder, indirectBuffer, indirectOffset);
}
static void wgpuRenderPassEncoderEnd_hook(WGPURenderPassEncoder renderPassEncoder) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderEnd);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderEnd(renderPassEncoder);
}
static void wgpuRenderPassEncoderEndOcclusionQuery_hook(WGPURenderPassEncoder renderPassEncoder) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderEndOcclusionQuery);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderEndOcclusionQuery(renderPassEncoder);
}
static void wgpuRenderPassEncoderExecuteBundles_hook(WGPURenderPassEncoder renderPassEncoder, size_t bundleCount, WGPURenderBundle const * bundles) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderExecuteBundles);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderExecuteBundles(renderPassEncoder, bundleCount, bundles);
}
static void wgpuRenderPassEncoderInsertDebugMarker_hook(WGPURenderPassEncoder renderPassEncoder, WGPUStringView markerLabel) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderInsertDebugMarker);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderInsertDebugMarker(renderPassEncoder, markerLabel);
}
static void wgpuRenderPassEncoderMultiDrawIndexedIndirect_hook(WGPURenderPassEncoder renderPassEncoder, WGPUBuffer indirectBuffer, uint64_t indirectOffset, uint32_t maxDrawCount, WGPUBuffer drawCountBuffer, uint64_t drawCountBufferOffset) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderMultiDrawIndexedIndirect);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderMultiDrawIndexedIndirect(renderPassEncoder, indirectBuffer, indirectOffset, maxDrawCount, drawCountBuffer, drawCountBufferOffset);
}
static void wgpuRenderPassEncoderMultiDrawIndirect_hook(WGPURenderPassEncoder renderPassEncoder, WGPUBuffer indirectBuffer, uint64_t indirectOffset, uint32_t maxDrawCount, WGPUBuffer drawCountBuffer, uint64_t drawCountBufferOffset) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderMultiDrawIndirect);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderMultiDrawIndirect(renderPassEncoder, indirectBuffer, indirectOffset, maxDrawCount, drawCountBuffer, drawCountBufferOffset);
}
static void wgpuRenderPassEncoderPixelLocalStorageBarrier_hook(WGPURenderPassEncoder renderPassEncoder) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderPixelLocalStorageBarrier);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderPixelLocalStorageBarrier(renderPassEncoder);
}
static void wgpuRenderPassEncoderPopDebugGroup_hook(WGPURenderPassEncoder renderPassEncoder) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderPopDebugGroup);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderPopDebugGroup(renderPassEncoder);
}
static void wgpuRenderPassEncoderPushDebugGroup_hook(WGPURenderPassEncoder renderPassEncoder, WGPUStringView groupLabel) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderPushDebugGroup);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderPushDebugGroup(renderPassEncoder, groupLabel);
}
static void wgpuRenderPassEncoderSetBindGroup_hook(WGPURenderPassEncoder renderPassEncoder, uint32_t groupIndex, WGPUBindGroup group, size_t dynamicOffsetCount, uint32_t const * dynamicOffsets) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderSetBindGroup);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderSetBindGroup(renderPassEncoder, groupIndex, group, dynamicOffsetCount, dynamicOffsets);
}
static void wgpuRenderPassEncoderSetBlendConstant_hook(WGPURenderPassEncoder renderPassEncoder, WGPUColor const * color) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderSetBlendConstant);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderSetBlendConstant(renderPassEncoder, color);
}
static void wgpuRenderPassEncoderSetImmediateData_hook(WGPURenderPassEncoder renderPassEncoder, uint32_t offset, void const * data, size_t size) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderSetImmediateData);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderSetImmediateData(renderPassEncoder, offset, data, size);
}
static void wgpuRenderPassEncoderSetIndexBuffer_hook(WGPURenderPassEncoder renderPassEncoder, WGPUBuffer buffer, WGPUIndexFormat format, uint64_t offset, uint64_t size) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderSetIndexBuffer);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderSetIndexBuffer(renderPassEncoder, buffer, format, offset, size);
}
static void wgpuRenderPassEncoderSetLabel_hook(WGPURenderPassEncoder renderPassEncoder, WGPUStringView label) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderSetLabel);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderSetLabel(renderPassEncoder, label);
}
static void wgpuRenderPassEncoderSetPipeline_hook(WGPURenderPassEncoder renderPassEncoder, WGPURenderPipeline pipeline) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderSetPipeline);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderSetPipeline(renderPassEncoder, pipeline);
}
static void wgpuRenderPassEncoderSetScissorRect_hook(WGPURenderPassEncoder renderPassEncoder, uint32_t x, uint32_t y, uint32_t width, uint32_t height) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderSetScissorRect);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderSetScissorRect(renderPassEncoder, x, y, width, height);
}
static void wgpuRenderPassEncoderSetStencilReference_hook(WGPURenderPassEncoder renderPassEncoder, uint32_t reference) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderSetStencilReference);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderSetStencilReference(renderPassEncoder, reference);
}
static void wgpuRenderPassEncoderSetVertexBuffer_hook(WGPURenderPassEncoder renderPassEncoder, uint32_t slot, WGPUBuffer buffer, uint64_t offset, uint64_t size) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderSetVertexBuffer);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderSetVertexBuffer(renderPassEncoder, slot, buffer, offset, size);
}
static void wgpuRenderPassEncoderSetViewport_hook(WGPURenderPassEncoder renderPassEncoder, float x, float y, float width, float height, float minDepth, float maxDepth) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderSetViewport);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderSetViewport(renderPassEncoder, x, y, width, height, minDepth, maxDepth);
}
static void wgpuRenderPassEncoderWriteTimestamp_hook(WGPURenderPassEncoder renderPassEncoder, WGPUQuerySet querySet, uint32_t queryIndex) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderWriteTimestamp);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderWriteTimestamp(renderPassEncoder, querySet, queryIndex);
}
static void wgpuRenderPassEncoderAddRef_hook(WGPURenderPassEncoder renderPassEncoder) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderAddRef(renderPassEncoder);
}
static void wgpuRenderPassEncoderRelease_hook(WGPURenderPassEncoder renderPassEncoder) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderRelease(renderPassEncoder);
}
static WGPUBindGroupLayout wgpuRenderPipelineGetBindGroupLayout_hook(WGPURenderPipeline renderPipeline, uint32_t groupIndex) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPipelineGetBindGroupLayout);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuRenderPipelineGetBindGroupLayout(renderPipeline, groupIndex);
}
static void wgpuRenderPipelineSetLabel_hook(WGPURenderPipeline renderPipeline, WGPUStringView label) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPipelineSetLabel);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPipelineSetLabel(renderPipeline, label);
}
static void wgpuRenderPipelineAddRef_hook(WGPURenderPipeline renderPipeline) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPipelineAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPipelineAddRef(renderPipeline);
}
static void wgpuRenderPipelineRelease_hook(WGPURenderPipeline renderPipeline) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPipelineRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPipelineRelease(renderPipeline);
}
static void wgpuSamplerSetLabel_hook(WGPUSampler sampler, WGPUStringView label) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSamplerSetLabel);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSamplerSetLabel(sampler, label);
}
static void wgpuSamplerAddRef_hook(WGPUSampler sampler) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSamplerAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSamplerAddRef(sampler);
}
static void wgpuSamplerRelease_hook(WGPUSampler sampler) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSamplerRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSamplerRelease(sampler);
}
static WGPUFuture wgpuShaderModuleGetCompilationInfo_hook(WGPUShaderModule shaderModule, WGPUCompilationInfoCallbackInfo callbackInfo) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcShaderModuleGetCompilationInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuShaderModuleGetCompilationInfo(shaderModule, callbackInfo);
}
static void wgpuShaderModuleSetLabel_hook(WGPUShaderModule shaderModule, WGPUStringView label) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcShaderModuleSetLabel);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuShaderModuleSetLabel(shaderModule, label);
}
static void wgpuShaderModuleAddRef_hook(WGPUShaderModule shaderModule) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcShaderModuleAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuShaderModuleAddRef(shaderModule);
}
static void wgpuShaderModuleRelease_hook(WGPUShaderModule shaderModule) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcShaderModuleRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuShaderModuleRelease(shaderModule);
}
static WGPUStatus wgpuSharedBufferMemoryBeginAccess_hook(WGPUSharedBufferMemory sharedBufferMemory, WGPUBuffer buffer, WGPUSharedBufferMemoryBeginAccessDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedBufferMemoryBeginAccess);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuSharedBufferMemoryBeginAccess(sharedBufferMemory, buffer, descriptor);
}
static WGPUBuffer wgpuSharedBufferMemoryCreateBuffer_hook(WGPUSharedBufferMemory sharedBufferMemory, WGPUBufferDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedBufferMemoryCreateBuffer);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuSharedBufferMemoryCreateBuffer(sharedBufferMemory, descriptor);
}
static WGPUStatus wgpuSharedBufferMemoryEndAccess_hook(WGPUSharedBufferMemory sharedBufferMemory, WGPUBuffer buffer, WGPUSharedBufferMemoryEndAccessState * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedBufferMemoryEndAccess);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuSharedBufferMemoryEndAccess(sharedBufferMemory, buffer, descriptor);
}
static WGPUStatus wgpuSharedBufferMemoryGetProperties_hook(WGPUSharedBufferMemory sharedBufferMemory, WGPUSharedBufferMemoryProperties * properties) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedBufferMemoryGetProperties);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuSharedBufferMemoryGetProperties(sharedBufferMemory, properties);
}
static WGPUBool wgpuSharedBufferMemoryIsDeviceLost_hook(WGPUSharedBufferMemory sharedBufferMemory) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedBufferMemoryIsDeviceLost);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuSharedBufferMemoryIsDeviceLost(sharedBufferMemory);
}
static void wgpuSharedBufferMemorySetLabel_hook(WGPUSharedBufferMemory sharedBufferMemory, WGPUStringView label) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedBufferMemorySetLabel);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSharedBufferMemorySetLabel(sharedBufferMemory, label);
}
static void wgpuSharedBufferMemoryAddRef_hook(WGPUSharedBufferMemory sharedBufferMemory) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedBufferMemoryAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSharedBufferMemoryAddRef(sharedBufferMemory);
}
static void wgpuSharedBufferMemoryRelease_hook(WGPUSharedBufferMemory sharedBufferMemory) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedBufferMemoryRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSharedBufferMemoryRelease(sharedBufferMemory);
}
static void wgpuSharedFenceExportInfo_hook(WGPUSharedFence sharedFence, WGPUSharedFenceExportInfo * info) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedFenceExportInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSharedFenceExportInfo(sharedFence, info);
}
static void wgpuSharedFenceAddRef_hook(WGPUSharedFence sharedFence) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedFenceAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSharedFenceAddRef(sharedFence);
}
static void wgpuSharedFenceRelease_hook(WGPUSharedFence sharedFence) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedFenceRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSharedFenceRelease(sharedFence);
}
static WGPUStatus wgpuSharedTextureMemoryBeginAccess_hook(WGPUSharedTextureMemory sharedTextureMemory, WGPUTexture texture, WGPUSharedTextureMemoryBeginAccessDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedTextureMemoryBeginAccess);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuSharedTextureMemoryBeginAccess(sharedTextureMemory, texture, descriptor);
}
static WGPUTexture wgpuSharedTextureMemoryCreateTexture_hook(WGPUSharedTextureMemory sharedTextureMemory, WGPUTextureDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedTextureMemoryCreateTexture);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuSharedTextureMemoryCreateTexture(sharedTextureMemory, descriptor);
}
static WGPUStatus wgpuSharedTextureMemoryEndAccess_hook(WGPUSharedTextureMemory sharedTextureMemory, WGPUTexture texture, WGPUSharedTextureMemoryEndAccessState * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedTextureMemoryEndAccess);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuSharedTextureMemoryEndAccess(sharedTextureMemory, texture, descriptor);
}
static WGPUStatus wgpuSharedTextureMemoryGetProperties_hook(WGPUSharedTextureMemory sharedTextureMemory, WGPUSharedTextureMemoryProperties * properties) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedTextureMemoryGetProperties);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuSharedTextureMemoryGetProperties(sharedTextureMemory, properties);
}
static WGPUBool wgpuSharedTextureMemoryIsDeviceLost_hook(WGPUSharedTextureMemory sharedTextureMemory) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedTextureMemoryIsDeviceLost);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuSharedTextureMemoryIsDeviceLost(sharedTextureMemory);
}
static void wgpuSharedTextureMemorySetLabel_hook(WGPUSharedTextureMemory sharedTextureMemory, WGPUStringView label) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedTextureMemorySetLabel);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSharedTextureMemorySetLabel(sharedTextureMemory, label);
}
static void wgpuSharedTextureMemoryAddRef_hook(WGPUSharedTextureMemory sharedTextureMemory) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedTextureMemoryAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSharedTextureMemoryAddRef(sharedTextureMemory);
}
static void wgpuSharedTextureMemoryRelease_hook(WGPUSharedTextureMemory sharedTextureMemory) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedTextureMemoryRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSharedTextureMemoryRelease(sharedTextureMemory);
}
static void wgpuSurfaceConfigure_hook(WGPUSurface surface, WGPUSurfaceConfiguration const * config) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSurfaceConfigure);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSurfaceConfigure(surface, config);
}
static WGPUStatus wgpuSurfaceGetCapabilities_hook(WGPUSurface surface, WGPUAdapter adapter, WGPUSurfaceCapabilities * capabilities) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSurfaceGetCapabilities);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuSurfaceGetCapabilities(surface, adapter, capabilities);
}
static void wgpuSurfaceGetCurrentTexture_hook(WGPUSurface surface, WGPUSurfaceTexture * surfaceTexture) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSurfaceGetCurrentTexture);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSurfaceGetCurrentTexture(surface, surfaceTexture);
}
static void wgpuSurfacePresent_hook(WGPUSurface surface) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSurfacePresent);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSurfacePresent(surface);
}
static void wgpuSurfaceSetLabel_hook(WGPUSurface surface, WGPUStringView label) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSurfaceSetLabel);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSurfaceSetLabel(surface, label);
}
static void wgpuSurfaceUnconfigure_hook(WGPUSurface surface) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSurfaceUnconfigure);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSurfaceUnconfigure(surface);
}
static void wgpuSurfaceAddRef_hook(WGPUSurface surface) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSurfaceAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSurfaceAddRef(surface);
}
static void wgpuSurfaceRelease_hook(WGPUSurface surface) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSurfaceRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSurfaceRelease(surface);
}
static WGPUTextureView wgpuTextureCreateErrorView_hook(WGPUTexture texture, WGPUTextureViewDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureCreateErrorView);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuTextureCreateErrorView(texture, descriptor);
}
static WGPUTextureView wgpuTextureCreateView_hook(WGPUTexture texture, WGPUTextureViewDescriptor const * descriptor) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureCreateView);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuTextureCreateView(texture, descriptor);
}
static void wgpuTextureDestroy_hook(WGPUTexture texture) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureDestroy);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuTextureDestroy(texture);
}
static uint32_t wgpuTextureGetDepthOrArrayLayers_hook(WGPUTexture texture) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureGetDepthOrArrayLayers);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuTextureGetDepthOrArrayLayers(texture);
}
static WGPUTextureDimension wgpuTextureGetDimension_hook(WGPUTexture texture) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureGetDimension);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuTextureGetDimension(texture);
}
static WGPUTextureFormat wgpuTextureGetFormat_hook(WGPUTexture texture) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureGetFormat);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuTextureGetFormat(texture);
}
static uint32_t wgpuTextureGetHeight_hook(WGPUTexture texture) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureGetHeight);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuTextureGetHeight(texture);
}
static uint32_t wgpuTextureGetMipLevelCount_hook(WGPUTexture texture) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureGetMipLevelCount);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuTextureGetMipLevelCount(texture);
}
static uint32_t wgpuTextureGetSampleCount_hook(WGPUTexture texture) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureGetSampleCount);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuTextureGetSampleCount(texture);
}
static WGPUTextureUsage wgpuTextureGetUsage_hook(WGPUTexture texture) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureGetUsage);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuTextureGetUsage(texture);
}
static uint32_t wgpuTextureGetWidth_hook(WGPUTexture texture) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureGetWidth);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuTextureGetWidth(texture);
}
static void wgpuTextureSetLabel_hook(WGPUTexture texture, WGPUStringView label) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureSetLabel);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuTextureSetLabel(texture, label);
}
static void wgpuTextureAddRef_hook(WGPUTexture texture) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuTextureAddRef(texture);
}
static void wgpuTextureRelease_hook(WGPUTexture texture) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuTextureRelease(texture);
}
static void wgpuTextureViewSetLabel_hook(WGPUTextureView textureView, WGPUStringView label) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureViewSetLabel);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuTextureViewSetLabel(textureView, label);
}
static void wgpuTextureViewAddRef_hook(WGPUTextureView textureView) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureViewAddRef);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuTextureViewAddRef(textureView);
}
static void wgpuTextureViewRelease_hook(WGPUTextureView textureView) {
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    ser.SetActionChunk();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureViewRelease);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuTextureViewRelease(textureView);
}
