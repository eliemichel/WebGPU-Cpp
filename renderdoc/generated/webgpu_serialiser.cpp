#include "webgpu_serialiser.h"

// Descriptors & Structs
template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUChainedStruct &el)
{
  SERIALISE_MEMBER(sType);
}

INSTANTIATE_SERIALISE_TYPE(WGPUChainedStruct);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUBufferMapCallbackInfo &el)
{
  SERIALISE_MEMBER(mode);
  SERIALISE_MEMBER(callback);
}

INSTANTIATE_SERIALISE_TYPE(WGPUBufferMapCallbackInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUCompilationInfoCallbackInfo &el)
{
  SERIALISE_MEMBER(mode);
  SERIALISE_MEMBER(callback);
}

INSTANTIATE_SERIALISE_TYPE(WGPUCompilationInfoCallbackInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUCreateComputePipelineAsyncCallbackInfo &el)
{
  SERIALISE_MEMBER(mode);
  SERIALISE_MEMBER(callback);
}

INSTANTIATE_SERIALISE_TYPE(WGPUCreateComputePipelineAsyncCallbackInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUCreateRenderPipelineAsyncCallbackInfo &el)
{
  SERIALISE_MEMBER(mode);
  SERIALISE_MEMBER(callback);
}

INSTANTIATE_SERIALISE_TYPE(WGPUCreateRenderPipelineAsyncCallbackInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDeviceLostCallbackInfo &el)
{
  SERIALISE_MEMBER(mode);
  SERIALISE_MEMBER(callback);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDeviceLostCallbackInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPULoggingCallbackInfo &el)
{
  SERIALISE_MEMBER(callback);
}

INSTANTIATE_SERIALISE_TYPE(WGPULoggingCallbackInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUPopErrorScopeCallbackInfo &el)
{
  SERIALISE_MEMBER(mode);
  SERIALISE_MEMBER(callback);
}

INSTANTIATE_SERIALISE_TYPE(WGPUPopErrorScopeCallbackInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUQueueWorkDoneCallbackInfo &el)
{
  SERIALISE_MEMBER(mode);
  SERIALISE_MEMBER(callback);
}

INSTANTIATE_SERIALISE_TYPE(WGPUQueueWorkDoneCallbackInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURequestAdapterCallbackInfo &el)
{
  SERIALISE_MEMBER(mode);
  SERIALISE_MEMBER(callback);
}

INSTANTIATE_SERIALISE_TYPE(WGPURequestAdapterCallbackInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURequestDeviceCallbackInfo &el)
{
  SERIALISE_MEMBER(mode);
  SERIALISE_MEMBER(callback);
}

INSTANTIATE_SERIALISE_TYPE(WGPURequestDeviceCallbackInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUUncapturedErrorCallbackInfo &el)
{
  SERIALISE_MEMBER(callback);
}

INSTANTIATE_SERIALISE_TYPE(WGPUUncapturedErrorCallbackInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUINTERNAL_HAVE_EMDAWNWEBGPU_HEADER &el)
{
  SERIALISE_MEMBER(unused);
}

INSTANTIATE_SERIALISE_TYPE(WGPUINTERNAL_HAVE_EMDAWNWEBGPU_HEADER);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUAdapterPropertiesD3D &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(shaderModel);
}

INSTANTIATE_SERIALISE_TYPE(WGPUAdapterPropertiesD3D);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUAdapterPropertiesSubgroups &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(subgroupMinSize);
  SERIALISE_MEMBER(subgroupMaxSize);
}

INSTANTIATE_SERIALISE_TYPE(WGPUAdapterPropertiesSubgroups);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUAdapterPropertiesVk &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(driverVersion);
}

INSTANTIATE_SERIALISE_TYPE(WGPUAdapterPropertiesVk);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUBlendComponent &el)
{
  SERIALISE_MEMBER(operation);
  SERIALISE_MEMBER(srcFactor);
  SERIALISE_MEMBER(dstFactor);
}

INSTANTIATE_SERIALISE_TYPE(WGPUBlendComponent);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUBufferBindingLayout &el)
{
  SERIALISE_MEMBER(type);
  SERIALISE_MEMBER(hasDynamicOffset);
  SERIALISE_MEMBER(minBindingSize);
}

INSTANTIATE_SERIALISE_TYPE(WGPUBufferBindingLayout);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUBufferHostMappedPointer &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(disposeCallback);
}

INSTANTIATE_SERIALISE_TYPE(WGPUBufferHostMappedPointer);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUColor &el)
{
  SERIALISE_MEMBER(r);
  SERIALISE_MEMBER(g);
  SERIALISE_MEMBER(b);
  SERIALISE_MEMBER(a);
}

INSTANTIATE_SERIALISE_TYPE(WGPUColor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUColorTargetStateExpandResolveTextureDawn &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(enabled);
}

INSTANTIATE_SERIALISE_TYPE(WGPUColorTargetStateExpandResolveTextureDawn);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUCopyTextureForBrowserOptions &el)
{
  SERIALISE_MEMBER(flipY);
  SERIALISE_MEMBER(needsColorSpaceConversion);
  SERIALISE_MEMBER(srcAlphaMode);
  SERIALISE_MEMBER(dstAlphaMode);
  SERIALISE_MEMBER(internalUsage);
}

INSTANTIATE_SERIALISE_TYPE(WGPUCopyTextureForBrowserOptions);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnWGSLBlocklist &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnWGSLBlocklist);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnAdapterPropertiesPowerPreference &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(powerPreference);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnAdapterPropertiesPowerPreference);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnBufferDescriptorErrorInfoFromWireClient &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(outOfMemory);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnBufferDescriptorErrorInfoFromWireClient);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnCompilationMessageUtf16 &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(linePos);
  SERIALISE_MEMBER(offset);
  SERIALISE_MEMBER(length);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnCompilationMessageUtf16);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnDrmFormatProperties &el)
{
  SERIALISE_MEMBER(modifier);
  SERIALISE_MEMBER(modifierPlaneCount);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnDrmFormatProperties);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnEncoderInternalUsageDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(useInternalUsages);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnEncoderInternalUsageDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnExperimentalImmediateDataLimits &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(maxImmediateDataRangeByteSize);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnExperimentalImmediateDataLimits);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnExperimentalSubgroupLimits &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(minSubgroupSize);
  SERIALISE_MEMBER(maxSubgroupSize);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnExperimentalSubgroupLimits);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnInjectedInvalidSType &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(invalidSType);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnInjectedInvalidSType);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnRenderPassColorAttachmentRenderToSingleSampled &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(implicitSampleCount);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnRenderPassColorAttachmentRenderToSingleSampled);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnShaderModuleSPIRVOptionsDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(allowNonUniformDerivatives);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnShaderModuleSPIRVOptionsDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnTexelCopyBufferRowAlignmentLimits &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(minTexelCopyBufferRowAlignment);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnTexelCopyBufferRowAlignmentLimits);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnTextureInternalUsageDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(internalUsage);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnTextureInternalUsageDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnTogglesDescriptor &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnTogglesDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnWireWGSLControl &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(enableExperimental);
  SERIALISE_MEMBER(enableUnsafe);
  SERIALISE_MEMBER(enableTesting);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnWireWGSLControl);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUExtent2D &el)
{
  SERIALISE_MEMBER(width);
  SERIALISE_MEMBER(height);
}

INSTANTIATE_SERIALISE_TYPE(WGPUExtent2D);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUExtent3D &el)
{
  SERIALISE_MEMBER(width);
  SERIALISE_MEMBER(height);
  SERIALISE_MEMBER(depthOrArrayLayers);
}

INSTANTIATE_SERIALISE_TYPE(WGPUExtent3D);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUExternalTextureBindingEntry &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(externalTexture);
}

INSTANTIATE_SERIALISE_TYPE(WGPUExternalTextureBindingEntry);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUExternalTextureBindingLayout &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUExternalTextureBindingLayout);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUFuture &el)
{
  SERIALISE_MEMBER(id);
}

INSTANTIATE_SERIALISE_TYPE(WGPUFuture);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUInstanceCapabilities &el)
{
  SERIALISE_MEMBER(timedWaitAnyEnable);
  SERIALISE_MEMBER(timedWaitAnyMaxCount);
}

INSTANTIATE_SERIALISE_TYPE(WGPUInstanceCapabilities);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUMemoryHeapInfo &el)
{
  SERIALISE_MEMBER(properties);
  SERIALISE_MEMBER(size);
}

INSTANTIATE_SERIALISE_TYPE(WGPUMemoryHeapInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUMultisampleState &el)
{
  SERIALISE_MEMBER(count);
  SERIALISE_MEMBER(mask);
  SERIALISE_MEMBER(alphaToCoverageEnabled);
}

INSTANTIATE_SERIALISE_TYPE(WGPUMultisampleState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUOrigin2D &el)
{
  SERIALISE_MEMBER(x);
  SERIALISE_MEMBER(y);
}

INSTANTIATE_SERIALISE_TYPE(WGPUOrigin2D);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUOrigin3D &el)
{
  SERIALISE_MEMBER(x);
  SERIALISE_MEMBER(y);
  SERIALISE_MEMBER(z);
}

INSTANTIATE_SERIALISE_TYPE(WGPUOrigin3D);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUPassTimestampWrites &el)
{
  SERIALISE_MEMBER(querySet);
  SERIALISE_MEMBER(beginningOfPassWriteIndex);
  SERIALISE_MEMBER(endOfPassWriteIndex);
}

INSTANTIATE_SERIALISE_TYPE(WGPUPassTimestampWrites);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUPipelineLayoutStorageAttachment &el)
{
  SERIALISE_MEMBER(offset);
  SERIALISE_MEMBER(format);
}

INSTANTIATE_SERIALISE_TYPE(WGPUPipelineLayoutStorageAttachment);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUPrimitiveState &el)
{
  SERIALISE_MEMBER(topology);
  SERIALISE_MEMBER(stripIndexFormat);
  SERIALISE_MEMBER(frontFace);
  SERIALISE_MEMBER(cullMode);
  SERIALISE_MEMBER(unclippedDepth);
}

INSTANTIATE_SERIALISE_TYPE(WGPUPrimitiveState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURenderPassDepthStencilAttachment &el)
{
  SERIALISE_MEMBER(view);
  SERIALISE_MEMBER(depthLoadOp);
  SERIALISE_MEMBER(depthStoreOp);
  SERIALISE_MEMBER(depthClearValue);
  SERIALISE_MEMBER(depthReadOnly);
  SERIALISE_MEMBER(stencilLoadOp);
  SERIALISE_MEMBER(stencilStoreOp);
  SERIALISE_MEMBER(stencilClearValue);
  SERIALISE_MEMBER(stencilReadOnly);
}

INSTANTIATE_SERIALISE_TYPE(WGPURenderPassDepthStencilAttachment);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURenderPassDescriptorExpandResolveRect &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(x);
  SERIALISE_MEMBER(y);
  SERIALISE_MEMBER(width);
  SERIALISE_MEMBER(height);
}

INSTANTIATE_SERIALISE_TYPE(WGPURenderPassDescriptorExpandResolveRect);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURenderPassMaxDrawCount &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(maxDrawCount);
}

INSTANTIATE_SERIALISE_TYPE(WGPURenderPassMaxDrawCount);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURequestAdapterWebXROptions &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(xrCompatible);
}

INSTANTIATE_SERIALISE_TYPE(WGPURequestAdapterWebXROptions);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSamplerBindingLayout &el)
{
  SERIALISE_MEMBER(type);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSamplerBindingLayout);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUShaderModuleCompilationOptions &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(strictMath);
}

INSTANTIATE_SERIALISE_TYPE(WGPUShaderModuleCompilationOptions);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUShaderSourceSPIRV &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(codeSize);
}

INSTANTIATE_SERIALISE_TYPE(WGPUShaderSourceSPIRV);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedBufferMemoryBeginAccessDescriptor &el)
{
  SERIALISE_MEMBER(initialized);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedBufferMemoryBeginAccessDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedBufferMemoryEndAccessState &el)
{
  SERIALISE_MEMBER(initialized);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedBufferMemoryEndAccessState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedBufferMemoryProperties &el)
{
  SERIALISE_MEMBER(usage);
  SERIALISE_MEMBER(size);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedBufferMemoryProperties);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceDXGISharedHandleDescriptor &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceDXGISharedHandleDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceDXGISharedHandleExportInfo &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceDXGISharedHandleExportInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceEGLSyncDescriptor &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceEGLSyncDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceEGLSyncExportInfo &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceEGLSyncExportInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceMTLSharedEventDescriptor &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceMTLSharedEventDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceMTLSharedEventExportInfo &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceMTLSharedEventExportInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceSyncFDDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(handle);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceSyncFDDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceSyncFDExportInfo &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(handle);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceSyncFDExportInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceVkSemaphoreOpaqueFDDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(handle);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceVkSemaphoreOpaqueFDDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceVkSemaphoreOpaqueFDExportInfo &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(handle);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceVkSemaphoreOpaqueFDExportInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceVkSemaphoreZirconHandleDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(handle);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceVkSemaphoreZirconHandleDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceVkSemaphoreZirconHandleExportInfo &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(handle);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceVkSemaphoreZirconHandleExportInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryD3DSwapchainBeginState &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(isSwapchain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryD3DSwapchainBeginState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryDXGISharedHandleDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(useKeyedMutex);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryDXGISharedHandleDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryEGLImageDescriptor &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryEGLImageDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryIOSurfaceDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(allowStorageBinding);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryIOSurfaceDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryAHardwareBufferDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(useExternalFormat);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryAHardwareBufferDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryDmaBufPlane &el)
{
  SERIALISE_MEMBER(fd);
  SERIALISE_MEMBER(offset);
  SERIALISE_MEMBER(stride);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryDmaBufPlane);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryOpaqueFDDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(memoryFD);
  SERIALISE_MEMBER(memoryTypeIndex);
  SERIALISE_MEMBER(allocationSize);
  SERIALISE_MEMBER(dedicatedAllocation);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryOpaqueFDDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryVkDedicatedAllocationDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(dedicatedAllocation);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryVkDedicatedAllocationDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryVkImageLayoutBeginState &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(oldLayout);
  SERIALISE_MEMBER(newLayout);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryVkImageLayoutBeginState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryVkImageLayoutEndState &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(oldLayout);
  SERIALISE_MEMBER(newLayout);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryVkImageLayoutEndState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryZirconHandleDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(memoryFD);
  SERIALISE_MEMBER(allocationSize);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryZirconHandleDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUStaticSamplerBindingLayout &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(sampler);
  SERIALISE_MEMBER(sampledTextureBinding);
}

INSTANTIATE_SERIALISE_TYPE(WGPUStaticSamplerBindingLayout);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUStencilFaceState &el)
{
  SERIALISE_MEMBER(compare);
  SERIALISE_MEMBER(failOp);
  SERIALISE_MEMBER(depthFailOp);
  SERIALISE_MEMBER(passOp);
}

INSTANTIATE_SERIALISE_TYPE(WGPUStencilFaceState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUStorageTextureBindingLayout &el)
{
  SERIALISE_MEMBER(access);
  SERIALISE_MEMBER(format);
  SERIALISE_MEMBER(viewDimension);
}

INSTANTIATE_SERIALISE_TYPE(WGPUStorageTextureBindingLayout);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUStringView &el)
{
  SERIALISE_MEMBER(length);
}

INSTANTIATE_SERIALISE_TYPE(WGPUStringView);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSubgroupMatrixConfig &el)
{
  SERIALISE_MEMBER(componentType);
  SERIALISE_MEMBER(resultComponentType);
  SERIALISE_MEMBER(M);
  SERIALISE_MEMBER(N);
  SERIALISE_MEMBER(K);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSubgroupMatrixConfig);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSupportedWGSLLanguageFeatures &el)
{
}

INSTANTIATE_SERIALISE_TYPE(WGPUSupportedWGSLLanguageFeatures);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSupportedFeatures &el)
{
}

INSTANTIATE_SERIALISE_TYPE(WGPUSupportedFeatures);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceCapabilities &el)
{
  SERIALISE_MEMBER(usages);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceCapabilities);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceColorManagement &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(colorSpace);
  SERIALISE_MEMBER(toneMappingMode);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceColorManagement);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceConfiguration &el)
{
  SERIALISE_MEMBER(device);
  SERIALISE_MEMBER(format);
  SERIALISE_MEMBER(usage);
  SERIALISE_MEMBER(width);
  SERIALISE_MEMBER(height);
  SERIALISE_MEMBER(alphaMode);
  SERIALISE_MEMBER(presentMode);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceConfiguration);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceDescriptorFromWindowsCoreWindow &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceDescriptorFromWindowsCoreWindow);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceDescriptorFromWindowsSwapChainPanel &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceDescriptorFromWindowsSwapChainPanel);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceSourceXCBWindow &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(window);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceSourceXCBWindow);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceSourceAndroidNativeWindow &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceSourceAndroidNativeWindow);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceSourceMetalLayer &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceSourceMetalLayer);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceSourceWaylandSurface &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceSourceWaylandSurface);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceSourceWindowsHWND &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceSourceWindowsHWND);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceSourceXlibWindow &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(window);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceSourceXlibWindow);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceTexture &el)
{
  SERIALISE_MEMBER(texture);
  SERIALISE_MEMBER(status);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceTexture);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUTexelCopyBufferLayout &el)
{
  SERIALISE_MEMBER(offset);
  SERIALISE_MEMBER(bytesPerRow);
  SERIALISE_MEMBER(rowsPerImage);
}

INSTANTIATE_SERIALISE_TYPE(WGPUTexelCopyBufferLayout);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUTextureBindingLayout &el)
{
  SERIALISE_MEMBER(sampleType);
  SERIALISE_MEMBER(viewDimension);
  SERIALISE_MEMBER(multisampled);
}

INSTANTIATE_SERIALISE_TYPE(WGPUTextureBindingLayout);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUTextureBindingViewDimensionDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(textureBindingViewDimension);
}

INSTANTIATE_SERIALISE_TYPE(WGPUTextureBindingViewDimensionDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUVertexAttribute &el)
{
  SERIALISE_MEMBER(format);
  SERIALISE_MEMBER(offset);
  SERIALISE_MEMBER(shaderLocation);
}

INSTANTIATE_SERIALISE_TYPE(WGPUVertexAttribute);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUYCbCrVkDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(vkFormat);
  SERIALISE_MEMBER(vkYCbCrModel);
  SERIALISE_MEMBER(vkYCbCrRange);
  SERIALISE_MEMBER(vkComponentSwizzleRed);
  SERIALISE_MEMBER(vkComponentSwizzleGreen);
  SERIALISE_MEMBER(vkComponentSwizzleBlue);
  SERIALISE_MEMBER(vkComponentSwizzleAlpha);
  SERIALISE_MEMBER(vkXChromaOffset);
  SERIALISE_MEMBER(vkYChromaOffset);
  SERIALISE_MEMBER(vkChromaFilter);
  SERIALISE_MEMBER(forceExplicitReconstruction);
  SERIALISE_MEMBER(externalFormat);
}

INSTANTIATE_SERIALISE_TYPE(WGPUYCbCrVkDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUAHardwareBufferProperties &el)
{
  SERIALISE_MEMBER(yCbCrInfo);
}

INSTANTIATE_SERIALISE_TYPE(WGPUAHardwareBufferProperties);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUAdapterPropertiesMemoryHeaps &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUAdapterPropertiesMemoryHeaps);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUAdapterPropertiesSubgroupMatrixConfigs &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUAdapterPropertiesSubgroupMatrixConfigs);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUBindGroupEntry &el)
{
  SERIALISE_MEMBER(binding);
  SERIALISE_MEMBER(buffer);
  SERIALISE_MEMBER(offset);
  SERIALISE_MEMBER(size);
  SERIALISE_MEMBER(sampler);
  SERIALISE_MEMBER(textureView);
}

INSTANTIATE_SERIALISE_TYPE(WGPUBindGroupEntry);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUBindGroupLayoutEntry &el)
{
  SERIALISE_MEMBER(binding);
  SERIALISE_MEMBER(visibility);
  SERIALISE_MEMBER(buffer);
  SERIALISE_MEMBER(sampler);
  SERIALISE_MEMBER(texture);
  SERIALISE_MEMBER(storageTexture);
}

INSTANTIATE_SERIALISE_TYPE(WGPUBindGroupLayoutEntry);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUBlendState &el)
{
  SERIALISE_MEMBER(color);
  SERIALISE_MEMBER(alpha);
}

INSTANTIATE_SERIALISE_TYPE(WGPUBlendState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUBufferDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(usage);
  SERIALISE_MEMBER(size);
  SERIALISE_MEMBER(mappedAtCreation);
}

INSTANTIATE_SERIALISE_TYPE(WGPUBufferDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUCommandBufferDescriptor &el)
{
  SERIALISE_MEMBER(label);
}

INSTANTIATE_SERIALISE_TYPE(WGPUCommandBufferDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUCommandEncoderDescriptor &el)
{
  SERIALISE_MEMBER(label);
}

INSTANTIATE_SERIALISE_TYPE(WGPUCommandEncoderDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUCompilationMessage &el)
{
  SERIALISE_MEMBER(message);
  SERIALISE_MEMBER(type);
  SERIALISE_MEMBER(lineNum);
  SERIALISE_MEMBER(linePos);
  SERIALISE_MEMBER(offset);
  SERIALISE_MEMBER(length);
}

INSTANTIATE_SERIALISE_TYPE(WGPUCompilationMessage);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUComputePassDescriptor &el)
{
  SERIALISE_MEMBER(label);
}

INSTANTIATE_SERIALISE_TYPE(WGPUComputePassDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUConstantEntry &el)
{
  SERIALISE_MEMBER(key);
  SERIALISE_MEMBER(value);
}

INSTANTIATE_SERIALISE_TYPE(WGPUConstantEntry);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnCacheDeviceDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(isolationKey);
  SERIALISE_MEMBER(loadDataFunction);
  SERIALISE_MEMBER(storeDataFunction);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnCacheDeviceDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnDrmFormatCapabilities &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnDrmFormatCapabilities);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDepthStencilState &el)
{
  SERIALISE_MEMBER(format);
  SERIALISE_MEMBER(depthWriteEnabled);
  SERIALISE_MEMBER(depthCompare);
  SERIALISE_MEMBER(stencilFront);
  SERIALISE_MEMBER(stencilBack);
  SERIALISE_MEMBER(stencilReadMask);
  SERIALISE_MEMBER(stencilWriteMask);
  SERIALISE_MEMBER(depthBias);
  SERIALISE_MEMBER(depthBiasSlopeScale);
  SERIALISE_MEMBER(depthBiasClamp);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDepthStencilState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUEmscriptenSurfaceSourceCanvasHTMLSelector &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(selector);
}

INSTANTIATE_SERIALISE_TYPE(WGPUEmscriptenSurfaceSourceCanvasHTMLSelector);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUExternalTextureDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(plane0);
  SERIALISE_MEMBER(plane1);
  SERIALISE_MEMBER(cropOrigin);
  SERIALISE_MEMBER(cropSize);
  SERIALISE_MEMBER(apparentSize);
  SERIALISE_MEMBER(doYuvToRgbConversionOnly);
  SERIALISE_MEMBER(mirrored);
  SERIALISE_MEMBER(rotation);
}

INSTANTIATE_SERIALISE_TYPE(WGPUExternalTextureDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUFutureWaitInfo &el)
{
  SERIALISE_MEMBER(future);
  SERIALISE_MEMBER(completed);
}

INSTANTIATE_SERIALISE_TYPE(WGPUFutureWaitInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUImageCopyExternalTexture &el)
{
  SERIALISE_MEMBER(externalTexture);
  SERIALISE_MEMBER(origin);
  SERIALISE_MEMBER(naturalSize);
}

INSTANTIATE_SERIALISE_TYPE(WGPUImageCopyExternalTexture);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUInstanceDescriptor &el)
{
  SERIALISE_MEMBER(capabilities);
}

INSTANTIATE_SERIALISE_TYPE(WGPUInstanceDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPULimits &el)
{
  SERIALISE_MEMBER(maxTextureDimension1D);
  SERIALISE_MEMBER(maxTextureDimension2D);
  SERIALISE_MEMBER(maxTextureDimension3D);
  SERIALISE_MEMBER(maxTextureArrayLayers);
  SERIALISE_MEMBER(maxBindGroups);
  SERIALISE_MEMBER(maxBindGroupsPlusVertexBuffers);
  SERIALISE_MEMBER(maxBindingsPerBindGroup);
  SERIALISE_MEMBER(maxDynamicUniformBuffersPerPipelineLayout);
  SERIALISE_MEMBER(maxDynamicStorageBuffersPerPipelineLayout);
  SERIALISE_MEMBER(maxSampledTexturesPerShaderStage);
  SERIALISE_MEMBER(maxSamplersPerShaderStage);
  SERIALISE_MEMBER(maxStorageBuffersPerShaderStage);
  SERIALISE_MEMBER(maxStorageTexturesPerShaderStage);
  SERIALISE_MEMBER(maxUniformBuffersPerShaderStage);
  SERIALISE_MEMBER(maxUniformBufferBindingSize);
  SERIALISE_MEMBER(maxStorageBufferBindingSize);
  SERIALISE_MEMBER(minUniformBufferOffsetAlignment);
  SERIALISE_MEMBER(minStorageBufferOffsetAlignment);
  SERIALISE_MEMBER(maxVertexBuffers);
  SERIALISE_MEMBER(maxBufferSize);
  SERIALISE_MEMBER(maxVertexAttributes);
  SERIALISE_MEMBER(maxVertexBufferArrayStride);
  SERIALISE_MEMBER(maxInterStageShaderVariables);
  SERIALISE_MEMBER(maxColorAttachments);
  SERIALISE_MEMBER(maxColorAttachmentBytesPerSample);
  SERIALISE_MEMBER(maxComputeWorkgroupStorageSize);
  SERIALISE_MEMBER(maxComputeInvocationsPerWorkgroup);
  SERIALISE_MEMBER(maxComputeWorkgroupSizeX);
  SERIALISE_MEMBER(maxComputeWorkgroupSizeY);
  SERIALISE_MEMBER(maxComputeWorkgroupSizeZ);
  SERIALISE_MEMBER(maxComputeWorkgroupsPerDimension);
  SERIALISE_MEMBER(maxStorageBuffersInVertexStage);
  SERIALISE_MEMBER(maxStorageTexturesInVertexStage);
  SERIALISE_MEMBER(maxStorageBuffersInFragmentStage);
  SERIALISE_MEMBER(maxStorageTexturesInFragmentStage);
}

INSTANTIATE_SERIALISE_TYPE(WGPULimits);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUPipelineLayoutPixelLocalStorage &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(totalPixelLocalStorageSize);
}

INSTANTIATE_SERIALISE_TYPE(WGPUPipelineLayoutPixelLocalStorage);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUQuerySetDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(type);
  SERIALISE_MEMBER(count);
}

INSTANTIATE_SERIALISE_TYPE(WGPUQuerySetDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUQueueDescriptor &el)
{
  SERIALISE_MEMBER(label);
}

INSTANTIATE_SERIALISE_TYPE(WGPUQueueDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURenderBundleDescriptor &el)
{
  SERIALISE_MEMBER(label);
}

INSTANTIATE_SERIALISE_TYPE(WGPURenderBundleDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURenderBundleEncoderDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(depthStencilFormat);
  SERIALISE_MEMBER(depthReadOnly);
  SERIALISE_MEMBER(stencilReadOnly);
  SERIALISE_MEMBER(sampleCount);
}

INSTANTIATE_SERIALISE_TYPE(WGPURenderBundleEncoderDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURenderPassColorAttachment &el)
{
  SERIALISE_MEMBER(view);
  SERIALISE_MEMBER(depthSlice);
  SERIALISE_MEMBER(resolveTarget);
  SERIALISE_MEMBER(loadOp);
  SERIALISE_MEMBER(storeOp);
  SERIALISE_MEMBER(clearValue);
}

INSTANTIATE_SERIALISE_TYPE(WGPURenderPassColorAttachment);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURenderPassStorageAttachment &el)
{
  SERIALISE_MEMBER(offset);
  SERIALISE_MEMBER(storage);
  SERIALISE_MEMBER(loadOp);
  SERIALISE_MEMBER(storeOp);
  SERIALISE_MEMBER(clearValue);
}

INSTANTIATE_SERIALISE_TYPE(WGPURenderPassStorageAttachment);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURequestAdapterOptions &el)
{
  SERIALISE_MEMBER(featureLevel);
  SERIALISE_MEMBER(powerPreference);
  SERIALISE_MEMBER(forceFallbackAdapter);
  SERIALISE_MEMBER(backendType);
  SERIALISE_MEMBER(compatibleSurface);
}

INSTANTIATE_SERIALISE_TYPE(WGPURequestAdapterOptions);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSamplerDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(addressModeU);
  SERIALISE_MEMBER(addressModeV);
  SERIALISE_MEMBER(addressModeW);
  SERIALISE_MEMBER(magFilter);
  SERIALISE_MEMBER(minFilter);
  SERIALISE_MEMBER(mipmapFilter);
  SERIALISE_MEMBER(lodMinClamp);
  SERIALISE_MEMBER(lodMaxClamp);
  SERIALISE_MEMBER(compare);
  SERIALISE_MEMBER(maxAnisotropy);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSamplerDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUShaderSourceWGSL &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(code);
}

INSTANTIATE_SERIALISE_TYPE(WGPUShaderSourceWGSL);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedBufferMemoryDescriptor &el)
{
  SERIALISE_MEMBER(label);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedBufferMemoryDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceDescriptor &el)
{
  SERIALISE_MEMBER(label);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceExportInfo &el)
{
  SERIALISE_MEMBER(type);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceExportInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryAHardwareBufferProperties &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(yCbCrInfo);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryAHardwareBufferProperties);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryBeginAccessDescriptor &el)
{
  SERIALISE_MEMBER(concurrentRead);
  SERIALISE_MEMBER(initialized);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryBeginAccessDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryDmaBufDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(size);
  SERIALISE_MEMBER(drmFormat);
  SERIALISE_MEMBER(drmModifier);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryDmaBufDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryEndAccessState &el)
{
  SERIALISE_MEMBER(initialized);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryEndAccessState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUTexelCopyBufferInfo &el)
{
  SERIALISE_MEMBER(layout);
  SERIALISE_MEMBER(buffer);
}

INSTANTIATE_SERIALISE_TYPE(WGPUTexelCopyBufferInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUTexelCopyTextureInfo &el)
{
  SERIALISE_MEMBER(texture);
  SERIALISE_MEMBER(mipLevel);
  SERIALISE_MEMBER(origin);
  SERIALISE_MEMBER(aspect);
}

INSTANTIATE_SERIALISE_TYPE(WGPUTexelCopyTextureInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUTextureDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(usage);
  SERIALISE_MEMBER(dimension);
  SERIALISE_MEMBER(size);
  SERIALISE_MEMBER(format);
  SERIALISE_MEMBER(mipLevelCount);
  SERIALISE_MEMBER(sampleCount);
}

INSTANTIATE_SERIALISE_TYPE(WGPUTextureDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUTextureViewDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(format);
  SERIALISE_MEMBER(dimension);
  SERIALISE_MEMBER(baseMipLevel);
  SERIALISE_MEMBER(baseArrayLayer);
  SERIALISE_MEMBER(aspect);
  SERIALISE_MEMBER(usage);
  SERIALISE_MEMBER(mipLevelCount);
  SERIALISE_MEMBER(arrayLayerCount);
}

INSTANTIATE_SERIALISE_TYPE(WGPUTextureViewDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUVertexBufferLayout &el)
{
  SERIALISE_MEMBER(stepMode);
  SERIALISE_MEMBER(arrayStride);
}

INSTANTIATE_SERIALISE_TYPE(WGPUVertexBufferLayout);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUAdapterInfo &el)
{
  SERIALISE_MEMBER(vendor);
  SERIALISE_MEMBER(architecture);
  SERIALISE_MEMBER(device);
  SERIALISE_MEMBER(description);
  SERIALISE_MEMBER(backendType);
  SERIALISE_MEMBER(adapterType);
  SERIALISE_MEMBER(vendorID);
  SERIALISE_MEMBER(deviceID);
  SERIALISE_MEMBER(subgroupMinSize);
  SERIALISE_MEMBER(subgroupMaxSize);
}

INSTANTIATE_SERIALISE_TYPE(WGPUAdapterInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUBindGroupDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(layout);
}

INSTANTIATE_SERIALISE_TYPE(WGPUBindGroupDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUBindGroupLayoutDescriptor &el)
{
  SERIALISE_MEMBER(label);
}

INSTANTIATE_SERIALISE_TYPE(WGPUBindGroupLayoutDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUColorTargetState &el)
{
  SERIALISE_MEMBER(format);
  SERIALISE_MEMBER(writeMask);
}

INSTANTIATE_SERIALISE_TYPE(WGPUColorTargetState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUCompilationInfo &el)
{
}

INSTANTIATE_SERIALISE_TYPE(WGPUCompilationInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUComputeState &el)
{
  SERIALISE_MEMBER(module);
  SERIALISE_MEMBER(entryPoint);
}

INSTANTIATE_SERIALISE_TYPE(WGPUComputeState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnFormatCapabilities &el)
{
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnFormatCapabilities);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDeviceDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(defaultQueue);
  SERIALISE_MEMBER(deviceLostCallbackInfo);
  SERIALISE_MEMBER(uncapturedErrorCallbackInfo);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDeviceDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUPipelineLayoutDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(immediateDataRangeByteSize);
}

INSTANTIATE_SERIALISE_TYPE(WGPUPipelineLayoutDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURenderPassPixelLocalStorage &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(totalPixelLocalStorageSize);
}

INSTANTIATE_SERIALISE_TYPE(WGPURenderPassPixelLocalStorage);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUShaderModuleDescriptor &el)
{
  SERIALISE_MEMBER(label);
}

INSTANTIATE_SERIALISE_TYPE(WGPUShaderModuleDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryDescriptor &el)
{
  SERIALISE_MEMBER(label);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryProperties &el)
{
  SERIALISE_MEMBER(usage);
  SERIALISE_MEMBER(size);
  SERIALISE_MEMBER(format);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryProperties);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceDescriptor &el)
{
  SERIALISE_MEMBER(label);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUVertexState &el)
{
  SERIALISE_MEMBER(module);
  SERIALISE_MEMBER(entryPoint);
}

INSTANTIATE_SERIALISE_TYPE(WGPUVertexState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUComputePipelineDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(layout);
  SERIALISE_MEMBER(compute);
}

INSTANTIATE_SERIALISE_TYPE(WGPUComputePipelineDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUFragmentState &el)
{
  SERIALISE_MEMBER(module);
  SERIALISE_MEMBER(entryPoint);
}

INSTANTIATE_SERIALISE_TYPE(WGPUFragmentState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURenderPassDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(occlusionQuerySet);
}

INSTANTIATE_SERIALISE_TYPE(WGPURenderPassDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURenderPipelineDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(layout);
  SERIALISE_MEMBER(vertex);
  SERIALISE_MEMBER(primitive);
  SERIALISE_MEMBER(multisample);
}

INSTANTIATE_SERIALISE_TYPE(WGPURenderPipelineDescriptor);


// Enums
template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUChainedStruct &el)
{
  SERIALISE_MEMBER(sType);
}

INSTANTIATE_SERIALISE_TYPE(WGPUChainedStruct);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUBufferMapCallbackInfo &el)
{
  SERIALISE_MEMBER(mode);
  SERIALISE_MEMBER(callback);
}

INSTANTIATE_SERIALISE_TYPE(WGPUBufferMapCallbackInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUCompilationInfoCallbackInfo &el)
{
  SERIALISE_MEMBER(mode);
  SERIALISE_MEMBER(callback);
}

INSTANTIATE_SERIALISE_TYPE(WGPUCompilationInfoCallbackInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUCreateComputePipelineAsyncCallbackInfo &el)
{
  SERIALISE_MEMBER(mode);
  SERIALISE_MEMBER(callback);
}

INSTANTIATE_SERIALISE_TYPE(WGPUCreateComputePipelineAsyncCallbackInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUCreateRenderPipelineAsyncCallbackInfo &el)
{
  SERIALISE_MEMBER(mode);
  SERIALISE_MEMBER(callback);
}

INSTANTIATE_SERIALISE_TYPE(WGPUCreateRenderPipelineAsyncCallbackInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDeviceLostCallbackInfo &el)
{
  SERIALISE_MEMBER(mode);
  SERIALISE_MEMBER(callback);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDeviceLostCallbackInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPULoggingCallbackInfo &el)
{
  SERIALISE_MEMBER(callback);
}

INSTANTIATE_SERIALISE_TYPE(WGPULoggingCallbackInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUPopErrorScopeCallbackInfo &el)
{
  SERIALISE_MEMBER(mode);
  SERIALISE_MEMBER(callback);
}

INSTANTIATE_SERIALISE_TYPE(WGPUPopErrorScopeCallbackInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUQueueWorkDoneCallbackInfo &el)
{
  SERIALISE_MEMBER(mode);
  SERIALISE_MEMBER(callback);
}

INSTANTIATE_SERIALISE_TYPE(WGPUQueueWorkDoneCallbackInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURequestAdapterCallbackInfo &el)
{
  SERIALISE_MEMBER(mode);
  SERIALISE_MEMBER(callback);
}

INSTANTIATE_SERIALISE_TYPE(WGPURequestAdapterCallbackInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURequestDeviceCallbackInfo &el)
{
  SERIALISE_MEMBER(mode);
  SERIALISE_MEMBER(callback);
}

INSTANTIATE_SERIALISE_TYPE(WGPURequestDeviceCallbackInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUUncapturedErrorCallbackInfo &el)
{
  SERIALISE_MEMBER(callback);
}

INSTANTIATE_SERIALISE_TYPE(WGPUUncapturedErrorCallbackInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUINTERNAL_HAVE_EMDAWNWEBGPU_HEADER &el)
{
  SERIALISE_MEMBER(unused);
}

INSTANTIATE_SERIALISE_TYPE(WGPUINTERNAL_HAVE_EMDAWNWEBGPU_HEADER);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUAdapterPropertiesD3D &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(shaderModel);
}

INSTANTIATE_SERIALISE_TYPE(WGPUAdapterPropertiesD3D);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUAdapterPropertiesSubgroups &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(subgroupMinSize);
  SERIALISE_MEMBER(subgroupMaxSize);
}

INSTANTIATE_SERIALISE_TYPE(WGPUAdapterPropertiesSubgroups);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUAdapterPropertiesVk &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(driverVersion);
}

INSTANTIATE_SERIALISE_TYPE(WGPUAdapterPropertiesVk);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUBlendComponent &el)
{
  SERIALISE_MEMBER(operation);
  SERIALISE_MEMBER(srcFactor);
  SERIALISE_MEMBER(dstFactor);
}

INSTANTIATE_SERIALISE_TYPE(WGPUBlendComponent);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUBufferBindingLayout &el)
{
  SERIALISE_MEMBER(type);
  SERIALISE_MEMBER(hasDynamicOffset);
  SERIALISE_MEMBER(minBindingSize);
}

INSTANTIATE_SERIALISE_TYPE(WGPUBufferBindingLayout);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUBufferHostMappedPointer &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(disposeCallback);
}

INSTANTIATE_SERIALISE_TYPE(WGPUBufferHostMappedPointer);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUColor &el)
{
  SERIALISE_MEMBER(r);
  SERIALISE_MEMBER(g);
  SERIALISE_MEMBER(b);
  SERIALISE_MEMBER(a);
}

INSTANTIATE_SERIALISE_TYPE(WGPUColor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUColorTargetStateExpandResolveTextureDawn &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(enabled);
}

INSTANTIATE_SERIALISE_TYPE(WGPUColorTargetStateExpandResolveTextureDawn);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUCopyTextureForBrowserOptions &el)
{
  SERIALISE_MEMBER(flipY);
  SERIALISE_MEMBER(needsColorSpaceConversion);
  SERIALISE_MEMBER(srcAlphaMode);
  SERIALISE_MEMBER(dstAlphaMode);
  SERIALISE_MEMBER(internalUsage);
}

INSTANTIATE_SERIALISE_TYPE(WGPUCopyTextureForBrowserOptions);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnWGSLBlocklist &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnWGSLBlocklist);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnAdapterPropertiesPowerPreference &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(powerPreference);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnAdapterPropertiesPowerPreference);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnBufferDescriptorErrorInfoFromWireClient &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(outOfMemory);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnBufferDescriptorErrorInfoFromWireClient);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnCompilationMessageUtf16 &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(linePos);
  SERIALISE_MEMBER(offset);
  SERIALISE_MEMBER(length);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnCompilationMessageUtf16);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnDrmFormatProperties &el)
{
  SERIALISE_MEMBER(modifier);
  SERIALISE_MEMBER(modifierPlaneCount);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnDrmFormatProperties);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnEncoderInternalUsageDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(useInternalUsages);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnEncoderInternalUsageDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnExperimentalImmediateDataLimits &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(maxImmediateDataRangeByteSize);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnExperimentalImmediateDataLimits);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnExperimentalSubgroupLimits &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(minSubgroupSize);
  SERIALISE_MEMBER(maxSubgroupSize);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnExperimentalSubgroupLimits);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnInjectedInvalidSType &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(invalidSType);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnInjectedInvalidSType);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnRenderPassColorAttachmentRenderToSingleSampled &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(implicitSampleCount);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnRenderPassColorAttachmentRenderToSingleSampled);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnShaderModuleSPIRVOptionsDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(allowNonUniformDerivatives);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnShaderModuleSPIRVOptionsDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnTexelCopyBufferRowAlignmentLimits &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(minTexelCopyBufferRowAlignment);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnTexelCopyBufferRowAlignmentLimits);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnTextureInternalUsageDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(internalUsage);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnTextureInternalUsageDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnTogglesDescriptor &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnTogglesDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnWireWGSLControl &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(enableExperimental);
  SERIALISE_MEMBER(enableUnsafe);
  SERIALISE_MEMBER(enableTesting);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnWireWGSLControl);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUExtent2D &el)
{
  SERIALISE_MEMBER(width);
  SERIALISE_MEMBER(height);
}

INSTANTIATE_SERIALISE_TYPE(WGPUExtent2D);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUExtent3D &el)
{
  SERIALISE_MEMBER(width);
  SERIALISE_MEMBER(height);
  SERIALISE_MEMBER(depthOrArrayLayers);
}

INSTANTIATE_SERIALISE_TYPE(WGPUExtent3D);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUExternalTextureBindingEntry &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(externalTexture);
}

INSTANTIATE_SERIALISE_TYPE(WGPUExternalTextureBindingEntry);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUExternalTextureBindingLayout &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUExternalTextureBindingLayout);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUFuture &el)
{
  SERIALISE_MEMBER(id);
}

INSTANTIATE_SERIALISE_TYPE(WGPUFuture);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUInstanceCapabilities &el)
{
  SERIALISE_MEMBER(timedWaitAnyEnable);
  SERIALISE_MEMBER(timedWaitAnyMaxCount);
}

INSTANTIATE_SERIALISE_TYPE(WGPUInstanceCapabilities);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUMemoryHeapInfo &el)
{
  SERIALISE_MEMBER(properties);
  SERIALISE_MEMBER(size);
}

INSTANTIATE_SERIALISE_TYPE(WGPUMemoryHeapInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUMultisampleState &el)
{
  SERIALISE_MEMBER(count);
  SERIALISE_MEMBER(mask);
  SERIALISE_MEMBER(alphaToCoverageEnabled);
}

INSTANTIATE_SERIALISE_TYPE(WGPUMultisampleState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUOrigin2D &el)
{
  SERIALISE_MEMBER(x);
  SERIALISE_MEMBER(y);
}

INSTANTIATE_SERIALISE_TYPE(WGPUOrigin2D);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUOrigin3D &el)
{
  SERIALISE_MEMBER(x);
  SERIALISE_MEMBER(y);
  SERIALISE_MEMBER(z);
}

INSTANTIATE_SERIALISE_TYPE(WGPUOrigin3D);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUPassTimestampWrites &el)
{
  SERIALISE_MEMBER(querySet);
  SERIALISE_MEMBER(beginningOfPassWriteIndex);
  SERIALISE_MEMBER(endOfPassWriteIndex);
}

INSTANTIATE_SERIALISE_TYPE(WGPUPassTimestampWrites);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUPipelineLayoutStorageAttachment &el)
{
  SERIALISE_MEMBER(offset);
  SERIALISE_MEMBER(format);
}

INSTANTIATE_SERIALISE_TYPE(WGPUPipelineLayoutStorageAttachment);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUPrimitiveState &el)
{
  SERIALISE_MEMBER(topology);
  SERIALISE_MEMBER(stripIndexFormat);
  SERIALISE_MEMBER(frontFace);
  SERIALISE_MEMBER(cullMode);
  SERIALISE_MEMBER(unclippedDepth);
}

INSTANTIATE_SERIALISE_TYPE(WGPUPrimitiveState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURenderPassDepthStencilAttachment &el)
{
  SERIALISE_MEMBER(view);
  SERIALISE_MEMBER(depthLoadOp);
  SERIALISE_MEMBER(depthStoreOp);
  SERIALISE_MEMBER(depthClearValue);
  SERIALISE_MEMBER(depthReadOnly);
  SERIALISE_MEMBER(stencilLoadOp);
  SERIALISE_MEMBER(stencilStoreOp);
  SERIALISE_MEMBER(stencilClearValue);
  SERIALISE_MEMBER(stencilReadOnly);
}

INSTANTIATE_SERIALISE_TYPE(WGPURenderPassDepthStencilAttachment);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURenderPassDescriptorExpandResolveRect &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(x);
  SERIALISE_MEMBER(y);
  SERIALISE_MEMBER(width);
  SERIALISE_MEMBER(height);
}

INSTANTIATE_SERIALISE_TYPE(WGPURenderPassDescriptorExpandResolveRect);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURenderPassMaxDrawCount &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(maxDrawCount);
}

INSTANTIATE_SERIALISE_TYPE(WGPURenderPassMaxDrawCount);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURequestAdapterWebXROptions &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(xrCompatible);
}

INSTANTIATE_SERIALISE_TYPE(WGPURequestAdapterWebXROptions);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSamplerBindingLayout &el)
{
  SERIALISE_MEMBER(type);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSamplerBindingLayout);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUShaderModuleCompilationOptions &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(strictMath);
}

INSTANTIATE_SERIALISE_TYPE(WGPUShaderModuleCompilationOptions);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUShaderSourceSPIRV &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(codeSize);
}

INSTANTIATE_SERIALISE_TYPE(WGPUShaderSourceSPIRV);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedBufferMemoryBeginAccessDescriptor &el)
{
  SERIALISE_MEMBER(initialized);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedBufferMemoryBeginAccessDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedBufferMemoryEndAccessState &el)
{
  SERIALISE_MEMBER(initialized);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedBufferMemoryEndAccessState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedBufferMemoryProperties &el)
{
  SERIALISE_MEMBER(usage);
  SERIALISE_MEMBER(size);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedBufferMemoryProperties);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceDXGISharedHandleDescriptor &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceDXGISharedHandleDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceDXGISharedHandleExportInfo &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceDXGISharedHandleExportInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceEGLSyncDescriptor &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceEGLSyncDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceEGLSyncExportInfo &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceEGLSyncExportInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceMTLSharedEventDescriptor &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceMTLSharedEventDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceMTLSharedEventExportInfo &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceMTLSharedEventExportInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceSyncFDDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(handle);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceSyncFDDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceSyncFDExportInfo &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(handle);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceSyncFDExportInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceVkSemaphoreOpaqueFDDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(handle);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceVkSemaphoreOpaqueFDDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceVkSemaphoreOpaqueFDExportInfo &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(handle);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceVkSemaphoreOpaqueFDExportInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceVkSemaphoreZirconHandleDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(handle);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceVkSemaphoreZirconHandleDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceVkSemaphoreZirconHandleExportInfo &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(handle);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceVkSemaphoreZirconHandleExportInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryD3DSwapchainBeginState &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(isSwapchain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryD3DSwapchainBeginState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryDXGISharedHandleDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(useKeyedMutex);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryDXGISharedHandleDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryEGLImageDescriptor &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryEGLImageDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryIOSurfaceDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(allowStorageBinding);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryIOSurfaceDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryAHardwareBufferDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(useExternalFormat);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryAHardwareBufferDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryDmaBufPlane &el)
{
  SERIALISE_MEMBER(fd);
  SERIALISE_MEMBER(offset);
  SERIALISE_MEMBER(stride);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryDmaBufPlane);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryOpaqueFDDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(memoryFD);
  SERIALISE_MEMBER(memoryTypeIndex);
  SERIALISE_MEMBER(allocationSize);
  SERIALISE_MEMBER(dedicatedAllocation);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryOpaqueFDDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryVkDedicatedAllocationDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(dedicatedAllocation);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryVkDedicatedAllocationDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryVkImageLayoutBeginState &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(oldLayout);
  SERIALISE_MEMBER(newLayout);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryVkImageLayoutBeginState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryVkImageLayoutEndState &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(oldLayout);
  SERIALISE_MEMBER(newLayout);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryVkImageLayoutEndState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryZirconHandleDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(memoryFD);
  SERIALISE_MEMBER(allocationSize);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryZirconHandleDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUStaticSamplerBindingLayout &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(sampler);
  SERIALISE_MEMBER(sampledTextureBinding);
}

INSTANTIATE_SERIALISE_TYPE(WGPUStaticSamplerBindingLayout);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUStencilFaceState &el)
{
  SERIALISE_MEMBER(compare);
  SERIALISE_MEMBER(failOp);
  SERIALISE_MEMBER(depthFailOp);
  SERIALISE_MEMBER(passOp);
}

INSTANTIATE_SERIALISE_TYPE(WGPUStencilFaceState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUStorageTextureBindingLayout &el)
{
  SERIALISE_MEMBER(access);
  SERIALISE_MEMBER(format);
  SERIALISE_MEMBER(viewDimension);
}

INSTANTIATE_SERIALISE_TYPE(WGPUStorageTextureBindingLayout);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUStringView &el)
{
  SERIALISE_MEMBER(length);
}

INSTANTIATE_SERIALISE_TYPE(WGPUStringView);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSubgroupMatrixConfig &el)
{
  SERIALISE_MEMBER(componentType);
  SERIALISE_MEMBER(resultComponentType);
  SERIALISE_MEMBER(M);
  SERIALISE_MEMBER(N);
  SERIALISE_MEMBER(K);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSubgroupMatrixConfig);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSupportedWGSLLanguageFeatures &el)
{
}

INSTANTIATE_SERIALISE_TYPE(WGPUSupportedWGSLLanguageFeatures);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSupportedFeatures &el)
{
}

INSTANTIATE_SERIALISE_TYPE(WGPUSupportedFeatures);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceCapabilities &el)
{
  SERIALISE_MEMBER(usages);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceCapabilities);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceColorManagement &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(colorSpace);
  SERIALISE_MEMBER(toneMappingMode);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceColorManagement);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceConfiguration &el)
{
  SERIALISE_MEMBER(device);
  SERIALISE_MEMBER(format);
  SERIALISE_MEMBER(usage);
  SERIALISE_MEMBER(width);
  SERIALISE_MEMBER(height);
  SERIALISE_MEMBER(alphaMode);
  SERIALISE_MEMBER(presentMode);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceConfiguration);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceDescriptorFromWindowsCoreWindow &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceDescriptorFromWindowsCoreWindow);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceDescriptorFromWindowsSwapChainPanel &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceDescriptorFromWindowsSwapChainPanel);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceSourceXCBWindow &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(window);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceSourceXCBWindow);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceSourceAndroidNativeWindow &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceSourceAndroidNativeWindow);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceSourceMetalLayer &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceSourceMetalLayer);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceSourceWaylandSurface &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceSourceWaylandSurface);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceSourceWindowsHWND &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceSourceWindowsHWND);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceSourceXlibWindow &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(window);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceSourceXlibWindow);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceTexture &el)
{
  SERIALISE_MEMBER(texture);
  SERIALISE_MEMBER(status);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceTexture);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUTexelCopyBufferLayout &el)
{
  SERIALISE_MEMBER(offset);
  SERIALISE_MEMBER(bytesPerRow);
  SERIALISE_MEMBER(rowsPerImage);
}

INSTANTIATE_SERIALISE_TYPE(WGPUTexelCopyBufferLayout);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUTextureBindingLayout &el)
{
  SERIALISE_MEMBER(sampleType);
  SERIALISE_MEMBER(viewDimension);
  SERIALISE_MEMBER(multisampled);
}

INSTANTIATE_SERIALISE_TYPE(WGPUTextureBindingLayout);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUTextureBindingViewDimensionDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(textureBindingViewDimension);
}

INSTANTIATE_SERIALISE_TYPE(WGPUTextureBindingViewDimensionDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUVertexAttribute &el)
{
  SERIALISE_MEMBER(format);
  SERIALISE_MEMBER(offset);
  SERIALISE_MEMBER(shaderLocation);
}

INSTANTIATE_SERIALISE_TYPE(WGPUVertexAttribute);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUYCbCrVkDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(vkFormat);
  SERIALISE_MEMBER(vkYCbCrModel);
  SERIALISE_MEMBER(vkYCbCrRange);
  SERIALISE_MEMBER(vkComponentSwizzleRed);
  SERIALISE_MEMBER(vkComponentSwizzleGreen);
  SERIALISE_MEMBER(vkComponentSwizzleBlue);
  SERIALISE_MEMBER(vkComponentSwizzleAlpha);
  SERIALISE_MEMBER(vkXChromaOffset);
  SERIALISE_MEMBER(vkYChromaOffset);
  SERIALISE_MEMBER(vkChromaFilter);
  SERIALISE_MEMBER(forceExplicitReconstruction);
  SERIALISE_MEMBER(externalFormat);
}

INSTANTIATE_SERIALISE_TYPE(WGPUYCbCrVkDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUAHardwareBufferProperties &el)
{
  SERIALISE_MEMBER(yCbCrInfo);
}

INSTANTIATE_SERIALISE_TYPE(WGPUAHardwareBufferProperties);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUAdapterPropertiesMemoryHeaps &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUAdapterPropertiesMemoryHeaps);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUAdapterPropertiesSubgroupMatrixConfigs &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUAdapterPropertiesSubgroupMatrixConfigs);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUBindGroupEntry &el)
{
  SERIALISE_MEMBER(binding);
  SERIALISE_MEMBER(buffer);
  SERIALISE_MEMBER(offset);
  SERIALISE_MEMBER(size);
  SERIALISE_MEMBER(sampler);
  SERIALISE_MEMBER(textureView);
}

INSTANTIATE_SERIALISE_TYPE(WGPUBindGroupEntry);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUBindGroupLayoutEntry &el)
{
  SERIALISE_MEMBER(binding);
  SERIALISE_MEMBER(visibility);
  SERIALISE_MEMBER(buffer);
  SERIALISE_MEMBER(sampler);
  SERIALISE_MEMBER(texture);
  SERIALISE_MEMBER(storageTexture);
}

INSTANTIATE_SERIALISE_TYPE(WGPUBindGroupLayoutEntry);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUBlendState &el)
{
  SERIALISE_MEMBER(color);
  SERIALISE_MEMBER(alpha);
}

INSTANTIATE_SERIALISE_TYPE(WGPUBlendState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUBufferDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(usage);
  SERIALISE_MEMBER(size);
  SERIALISE_MEMBER(mappedAtCreation);
}

INSTANTIATE_SERIALISE_TYPE(WGPUBufferDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUCommandBufferDescriptor &el)
{
  SERIALISE_MEMBER(label);
}

INSTANTIATE_SERIALISE_TYPE(WGPUCommandBufferDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUCommandEncoderDescriptor &el)
{
  SERIALISE_MEMBER(label);
}

INSTANTIATE_SERIALISE_TYPE(WGPUCommandEncoderDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUCompilationMessage &el)
{
  SERIALISE_MEMBER(message);
  SERIALISE_MEMBER(type);
  SERIALISE_MEMBER(lineNum);
  SERIALISE_MEMBER(linePos);
  SERIALISE_MEMBER(offset);
  SERIALISE_MEMBER(length);
}

INSTANTIATE_SERIALISE_TYPE(WGPUCompilationMessage);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUComputePassDescriptor &el)
{
  SERIALISE_MEMBER(label);
}

INSTANTIATE_SERIALISE_TYPE(WGPUComputePassDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUConstantEntry &el)
{
  SERIALISE_MEMBER(key);
  SERIALISE_MEMBER(value);
}

INSTANTIATE_SERIALISE_TYPE(WGPUConstantEntry);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnCacheDeviceDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(isolationKey);
  SERIALISE_MEMBER(loadDataFunction);
  SERIALISE_MEMBER(storeDataFunction);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnCacheDeviceDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnDrmFormatCapabilities &el)
{
  SERIALISE_MEMBER(chain);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnDrmFormatCapabilities);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDepthStencilState &el)
{
  SERIALISE_MEMBER(format);
  SERIALISE_MEMBER(depthWriteEnabled);
  SERIALISE_MEMBER(depthCompare);
  SERIALISE_MEMBER(stencilFront);
  SERIALISE_MEMBER(stencilBack);
  SERIALISE_MEMBER(stencilReadMask);
  SERIALISE_MEMBER(stencilWriteMask);
  SERIALISE_MEMBER(depthBias);
  SERIALISE_MEMBER(depthBiasSlopeScale);
  SERIALISE_MEMBER(depthBiasClamp);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDepthStencilState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUEmscriptenSurfaceSourceCanvasHTMLSelector &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(selector);
}

INSTANTIATE_SERIALISE_TYPE(WGPUEmscriptenSurfaceSourceCanvasHTMLSelector);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUExternalTextureDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(plane0);
  SERIALISE_MEMBER(plane1);
  SERIALISE_MEMBER(cropOrigin);
  SERIALISE_MEMBER(cropSize);
  SERIALISE_MEMBER(apparentSize);
  SERIALISE_MEMBER(doYuvToRgbConversionOnly);
  SERIALISE_MEMBER(mirrored);
  SERIALISE_MEMBER(rotation);
}

INSTANTIATE_SERIALISE_TYPE(WGPUExternalTextureDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUFutureWaitInfo &el)
{
  SERIALISE_MEMBER(future);
  SERIALISE_MEMBER(completed);
}

INSTANTIATE_SERIALISE_TYPE(WGPUFutureWaitInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUImageCopyExternalTexture &el)
{
  SERIALISE_MEMBER(externalTexture);
  SERIALISE_MEMBER(origin);
  SERIALISE_MEMBER(naturalSize);
}

INSTANTIATE_SERIALISE_TYPE(WGPUImageCopyExternalTexture);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUInstanceDescriptor &el)
{
  SERIALISE_MEMBER(capabilities);
}

INSTANTIATE_SERIALISE_TYPE(WGPUInstanceDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPULimits &el)
{
  SERIALISE_MEMBER(maxTextureDimension1D);
  SERIALISE_MEMBER(maxTextureDimension2D);
  SERIALISE_MEMBER(maxTextureDimension3D);
  SERIALISE_MEMBER(maxTextureArrayLayers);
  SERIALISE_MEMBER(maxBindGroups);
  SERIALISE_MEMBER(maxBindGroupsPlusVertexBuffers);
  SERIALISE_MEMBER(maxBindingsPerBindGroup);
  SERIALISE_MEMBER(maxDynamicUniformBuffersPerPipelineLayout);
  SERIALISE_MEMBER(maxDynamicStorageBuffersPerPipelineLayout);
  SERIALISE_MEMBER(maxSampledTexturesPerShaderStage);
  SERIALISE_MEMBER(maxSamplersPerShaderStage);
  SERIALISE_MEMBER(maxStorageBuffersPerShaderStage);
  SERIALISE_MEMBER(maxStorageTexturesPerShaderStage);
  SERIALISE_MEMBER(maxUniformBuffersPerShaderStage);
  SERIALISE_MEMBER(maxUniformBufferBindingSize);
  SERIALISE_MEMBER(maxStorageBufferBindingSize);
  SERIALISE_MEMBER(minUniformBufferOffsetAlignment);
  SERIALISE_MEMBER(minStorageBufferOffsetAlignment);
  SERIALISE_MEMBER(maxVertexBuffers);
  SERIALISE_MEMBER(maxBufferSize);
  SERIALISE_MEMBER(maxVertexAttributes);
  SERIALISE_MEMBER(maxVertexBufferArrayStride);
  SERIALISE_MEMBER(maxInterStageShaderVariables);
  SERIALISE_MEMBER(maxColorAttachments);
  SERIALISE_MEMBER(maxColorAttachmentBytesPerSample);
  SERIALISE_MEMBER(maxComputeWorkgroupStorageSize);
  SERIALISE_MEMBER(maxComputeInvocationsPerWorkgroup);
  SERIALISE_MEMBER(maxComputeWorkgroupSizeX);
  SERIALISE_MEMBER(maxComputeWorkgroupSizeY);
  SERIALISE_MEMBER(maxComputeWorkgroupSizeZ);
  SERIALISE_MEMBER(maxComputeWorkgroupsPerDimension);
  SERIALISE_MEMBER(maxStorageBuffersInVertexStage);
  SERIALISE_MEMBER(maxStorageTexturesInVertexStage);
  SERIALISE_MEMBER(maxStorageBuffersInFragmentStage);
  SERIALISE_MEMBER(maxStorageTexturesInFragmentStage);
}

INSTANTIATE_SERIALISE_TYPE(WGPULimits);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUPipelineLayoutPixelLocalStorage &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(totalPixelLocalStorageSize);
}

INSTANTIATE_SERIALISE_TYPE(WGPUPipelineLayoutPixelLocalStorage);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUQuerySetDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(type);
  SERIALISE_MEMBER(count);
}

INSTANTIATE_SERIALISE_TYPE(WGPUQuerySetDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUQueueDescriptor &el)
{
  SERIALISE_MEMBER(label);
}

INSTANTIATE_SERIALISE_TYPE(WGPUQueueDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURenderBundleDescriptor &el)
{
  SERIALISE_MEMBER(label);
}

INSTANTIATE_SERIALISE_TYPE(WGPURenderBundleDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURenderBundleEncoderDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(depthStencilFormat);
  SERIALISE_MEMBER(depthReadOnly);
  SERIALISE_MEMBER(stencilReadOnly);
  SERIALISE_MEMBER(sampleCount);
}

INSTANTIATE_SERIALISE_TYPE(WGPURenderBundleEncoderDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURenderPassColorAttachment &el)
{
  SERIALISE_MEMBER(view);
  SERIALISE_MEMBER(depthSlice);
  SERIALISE_MEMBER(resolveTarget);
  SERIALISE_MEMBER(loadOp);
  SERIALISE_MEMBER(storeOp);
  SERIALISE_MEMBER(clearValue);
}

INSTANTIATE_SERIALISE_TYPE(WGPURenderPassColorAttachment);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURenderPassStorageAttachment &el)
{
  SERIALISE_MEMBER(offset);
  SERIALISE_MEMBER(storage);
  SERIALISE_MEMBER(loadOp);
  SERIALISE_MEMBER(storeOp);
  SERIALISE_MEMBER(clearValue);
}

INSTANTIATE_SERIALISE_TYPE(WGPURenderPassStorageAttachment);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURequestAdapterOptions &el)
{
  SERIALISE_MEMBER(featureLevel);
  SERIALISE_MEMBER(powerPreference);
  SERIALISE_MEMBER(forceFallbackAdapter);
  SERIALISE_MEMBER(backendType);
  SERIALISE_MEMBER(compatibleSurface);
}

INSTANTIATE_SERIALISE_TYPE(WGPURequestAdapterOptions);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSamplerDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(addressModeU);
  SERIALISE_MEMBER(addressModeV);
  SERIALISE_MEMBER(addressModeW);
  SERIALISE_MEMBER(magFilter);
  SERIALISE_MEMBER(minFilter);
  SERIALISE_MEMBER(mipmapFilter);
  SERIALISE_MEMBER(lodMinClamp);
  SERIALISE_MEMBER(lodMaxClamp);
  SERIALISE_MEMBER(compare);
  SERIALISE_MEMBER(maxAnisotropy);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSamplerDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUShaderSourceWGSL &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(code);
}

INSTANTIATE_SERIALISE_TYPE(WGPUShaderSourceWGSL);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedBufferMemoryDescriptor &el)
{
  SERIALISE_MEMBER(label);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedBufferMemoryDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceDescriptor &el)
{
  SERIALISE_MEMBER(label);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedFenceExportInfo &el)
{
  SERIALISE_MEMBER(type);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedFenceExportInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryAHardwareBufferProperties &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(yCbCrInfo);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryAHardwareBufferProperties);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryBeginAccessDescriptor &el)
{
  SERIALISE_MEMBER(concurrentRead);
  SERIALISE_MEMBER(initialized);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryBeginAccessDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryDmaBufDescriptor &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(size);
  SERIALISE_MEMBER(drmFormat);
  SERIALISE_MEMBER(drmModifier);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryDmaBufDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryEndAccessState &el)
{
  SERIALISE_MEMBER(initialized);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryEndAccessState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUTexelCopyBufferInfo &el)
{
  SERIALISE_MEMBER(layout);
  SERIALISE_MEMBER(buffer);
}

INSTANTIATE_SERIALISE_TYPE(WGPUTexelCopyBufferInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUTexelCopyTextureInfo &el)
{
  SERIALISE_MEMBER(texture);
  SERIALISE_MEMBER(mipLevel);
  SERIALISE_MEMBER(origin);
  SERIALISE_MEMBER(aspect);
}

INSTANTIATE_SERIALISE_TYPE(WGPUTexelCopyTextureInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUTextureDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(usage);
  SERIALISE_MEMBER(dimension);
  SERIALISE_MEMBER(size);
  SERIALISE_MEMBER(format);
  SERIALISE_MEMBER(mipLevelCount);
  SERIALISE_MEMBER(sampleCount);
}

INSTANTIATE_SERIALISE_TYPE(WGPUTextureDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUTextureViewDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(format);
  SERIALISE_MEMBER(dimension);
  SERIALISE_MEMBER(baseMipLevel);
  SERIALISE_MEMBER(baseArrayLayer);
  SERIALISE_MEMBER(aspect);
  SERIALISE_MEMBER(usage);
  SERIALISE_MEMBER(mipLevelCount);
  SERIALISE_MEMBER(arrayLayerCount);
}

INSTANTIATE_SERIALISE_TYPE(WGPUTextureViewDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUVertexBufferLayout &el)
{
  SERIALISE_MEMBER(stepMode);
  SERIALISE_MEMBER(arrayStride);
}

INSTANTIATE_SERIALISE_TYPE(WGPUVertexBufferLayout);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUAdapterInfo &el)
{
  SERIALISE_MEMBER(vendor);
  SERIALISE_MEMBER(architecture);
  SERIALISE_MEMBER(device);
  SERIALISE_MEMBER(description);
  SERIALISE_MEMBER(backendType);
  SERIALISE_MEMBER(adapterType);
  SERIALISE_MEMBER(vendorID);
  SERIALISE_MEMBER(deviceID);
  SERIALISE_MEMBER(subgroupMinSize);
  SERIALISE_MEMBER(subgroupMaxSize);
}

INSTANTIATE_SERIALISE_TYPE(WGPUAdapterInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUBindGroupDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(layout);
}

INSTANTIATE_SERIALISE_TYPE(WGPUBindGroupDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUBindGroupLayoutDescriptor &el)
{
  SERIALISE_MEMBER(label);
}

INSTANTIATE_SERIALISE_TYPE(WGPUBindGroupLayoutDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUColorTargetState &el)
{
  SERIALISE_MEMBER(format);
  SERIALISE_MEMBER(writeMask);
}

INSTANTIATE_SERIALISE_TYPE(WGPUColorTargetState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUCompilationInfo &el)
{
}

INSTANTIATE_SERIALISE_TYPE(WGPUCompilationInfo);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUComputeState &el)
{
  SERIALISE_MEMBER(module);
  SERIALISE_MEMBER(entryPoint);
}

INSTANTIATE_SERIALISE_TYPE(WGPUComputeState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDawnFormatCapabilities &el)
{
}

INSTANTIATE_SERIALISE_TYPE(WGPUDawnFormatCapabilities);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUDeviceDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(defaultQueue);
  SERIALISE_MEMBER(deviceLostCallbackInfo);
  SERIALISE_MEMBER(uncapturedErrorCallbackInfo);
}

INSTANTIATE_SERIALISE_TYPE(WGPUDeviceDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUPipelineLayoutDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(immediateDataRangeByteSize);
}

INSTANTIATE_SERIALISE_TYPE(WGPUPipelineLayoutDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURenderPassPixelLocalStorage &el)
{
  SERIALISE_MEMBER(chain);
  SERIALISE_MEMBER(totalPixelLocalStorageSize);
}

INSTANTIATE_SERIALISE_TYPE(WGPURenderPassPixelLocalStorage);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUShaderModuleDescriptor &el)
{
  SERIALISE_MEMBER(label);
}

INSTANTIATE_SERIALISE_TYPE(WGPUShaderModuleDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryDescriptor &el)
{
  SERIALISE_MEMBER(label);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSharedTextureMemoryProperties &el)
{
  SERIALISE_MEMBER(usage);
  SERIALISE_MEMBER(size);
  SERIALISE_MEMBER(format);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSharedTextureMemoryProperties);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUSurfaceDescriptor &el)
{
  SERIALISE_MEMBER(label);
}

INSTANTIATE_SERIALISE_TYPE(WGPUSurfaceDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUVertexState &el)
{
  SERIALISE_MEMBER(module);
  SERIALISE_MEMBER(entryPoint);
}

INSTANTIATE_SERIALISE_TYPE(WGPUVertexState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUComputePipelineDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(layout);
  SERIALISE_MEMBER(compute);
}

INSTANTIATE_SERIALISE_TYPE(WGPUComputePipelineDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUFragmentState &el)
{
  SERIALISE_MEMBER(module);
  SERIALISE_MEMBER(entryPoint);
}

INSTANTIATE_SERIALISE_TYPE(WGPUFragmentState);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURenderPassDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(occlusionQuerySet);
}

INSTANTIATE_SERIALISE_TYPE(WGPURenderPassDescriptor);

template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPURenderPipelineDescriptor &el)
{
  SERIALISE_MEMBER(label);
  SERIALISE_MEMBER(layout);
  SERIALISE_MEMBER(vertex);
  SERIALISE_MEMBER(primitive);
  SERIALISE_MEMBER(multisample);
}

INSTANTIATE_SERIALISE_TYPE(WGPURenderPipelineDescriptor);

template <>
rdcstr DoStringise(const WGPUWGSLLanguageFeatureName &el)
{
  BEGIN_ENUM_STRINGISE(WGPUWGSLLanguageFeatureName)
  {
    STRINGISE_ENUM(WGPUWGSLLanguageFeatureName_ReadonlyAndReadwriteStorageTextures);
    STRINGISE_ENUM(WGPUWGSLLanguageFeatureName_Packed4x8IntegerDotProduct);
    STRINGISE_ENUM(WGPUWGSLLanguageFeatureName_UnrestrictedPointerParameters);
    STRINGISE_ENUM(WGPUWGSLLanguageFeatureName_PointerCompositeAccess);
    STRINGISE_ENUM(WGPUWGSLLanguageFeatureName_SizedBindingArray);
    STRINGISE_ENUM(WGPUWGSLLanguageFeatureName_ChromiumTestingUnimplemented);
    STRINGISE_ENUM(WGPUWGSLLanguageFeatureName_ChromiumTestingUnsafeExperimental);
    STRINGISE_ENUM(WGPUWGSLLanguageFeatureName_ChromiumTestingExperimental);
    STRINGISE_ENUM(WGPUWGSLLanguageFeatureName_ChromiumTestingShippedWithKillswitch);
    STRINGISE_ENUM(WGPUWGSLLanguageFeatureName_ChromiumTestingShipped);
    STRINGISE_ENUM(WGPUWGSLLanguageFeatureName_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUAdapterType &el)
{
  BEGIN_ENUM_STRINGISE(WGPUAdapterType)
  {
    STRINGISE_ENUM(WGPUAdapterType_DiscreteGPU);
    STRINGISE_ENUM(WGPUAdapterType_IntegratedGPU);
    STRINGISE_ENUM(WGPUAdapterType_CPU);
    STRINGISE_ENUM(WGPUAdapterType_Unknown);
    STRINGISE_ENUM(WGPUAdapterType_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUAddressMode &el)
{
  BEGIN_ENUM_STRINGISE(WGPUAddressMode)
  {
    STRINGISE_ENUM(WGPUAddressMode_Undefined);
    STRINGISE_ENUM(WGPUAddressMode_ClampToEdge);
    STRINGISE_ENUM(WGPUAddressMode_Repeat);
    STRINGISE_ENUM(WGPUAddressMode_MirrorRepeat);
    STRINGISE_ENUM(WGPUAddressMode_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUAlphaMode &el)
{
  BEGIN_ENUM_STRINGISE(WGPUAlphaMode)
  {
    STRINGISE_ENUM(WGPUAlphaMode_Opaque);
    STRINGISE_ENUM(WGPUAlphaMode_Premultiplied);
    STRINGISE_ENUM(WGPUAlphaMode_Unpremultiplied);
    STRINGISE_ENUM(WGPUAlphaMode_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUBackendType &el)
{
  BEGIN_ENUM_STRINGISE(WGPUBackendType)
  {
    STRINGISE_ENUM(WGPUBackendType_Undefined);
    STRINGISE_ENUM(WGPUBackendType_Null);
    STRINGISE_ENUM(WGPUBackendType_WebGPU);
    STRINGISE_ENUM(WGPUBackendType_D3D11);
    STRINGISE_ENUM(WGPUBackendType_D3D12);
    STRINGISE_ENUM(WGPUBackendType_Metal);
    STRINGISE_ENUM(WGPUBackendType_Vulkan);
    STRINGISE_ENUM(WGPUBackendType_OpenGL);
    STRINGISE_ENUM(WGPUBackendType_OpenGLES);
    STRINGISE_ENUM(WGPUBackendType_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUBlendFactor &el)
{
  BEGIN_ENUM_STRINGISE(WGPUBlendFactor)
  {
    STRINGISE_ENUM(WGPUBlendFactor_Undefined);
    STRINGISE_ENUM(WGPUBlendFactor_Zero);
    STRINGISE_ENUM(WGPUBlendFactor_One);
    STRINGISE_ENUM(WGPUBlendFactor_Src);
    STRINGISE_ENUM(WGPUBlendFactor_OneMinusSrc);
    STRINGISE_ENUM(WGPUBlendFactor_SrcAlpha);
    STRINGISE_ENUM(WGPUBlendFactor_OneMinusSrcAlpha);
    STRINGISE_ENUM(WGPUBlendFactor_Dst);
    STRINGISE_ENUM(WGPUBlendFactor_OneMinusDst);
    STRINGISE_ENUM(WGPUBlendFactor_DstAlpha);
    STRINGISE_ENUM(WGPUBlendFactor_OneMinusDstAlpha);
    STRINGISE_ENUM(WGPUBlendFactor_SrcAlphaSaturated);
    STRINGISE_ENUM(WGPUBlendFactor_Constant);
    STRINGISE_ENUM(WGPUBlendFactor_OneMinusConstant);
    STRINGISE_ENUM(WGPUBlendFactor_Src1);
    STRINGISE_ENUM(WGPUBlendFactor_OneMinusSrc1);
    STRINGISE_ENUM(WGPUBlendFactor_Src1Alpha);
    STRINGISE_ENUM(WGPUBlendFactor_OneMinusSrc1Alpha);
    STRINGISE_ENUM(WGPUBlendFactor_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUBlendOperation &el)
{
  BEGIN_ENUM_STRINGISE(WGPUBlendOperation)
  {
    STRINGISE_ENUM(WGPUBlendOperation_Undefined);
    STRINGISE_ENUM(WGPUBlendOperation_Add);
    STRINGISE_ENUM(WGPUBlendOperation_Subtract);
    STRINGISE_ENUM(WGPUBlendOperation_ReverseSubtract);
    STRINGISE_ENUM(WGPUBlendOperation_Min);
    STRINGISE_ENUM(WGPUBlendOperation_Max);
    STRINGISE_ENUM(WGPUBlendOperation_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUBufferBindingType &el)
{
  BEGIN_ENUM_STRINGISE(WGPUBufferBindingType)
  {
    STRINGISE_ENUM(WGPUBufferBindingType_BindingNotUsed);
    STRINGISE_ENUM(WGPUBufferBindingType_Undefined);
    STRINGISE_ENUM(WGPUBufferBindingType_Uniform);
    STRINGISE_ENUM(WGPUBufferBindingType_Storage);
    STRINGISE_ENUM(WGPUBufferBindingType_ReadOnlyStorage);
    STRINGISE_ENUM(WGPUBufferBindingType_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUBufferMapState &el)
{
  BEGIN_ENUM_STRINGISE(WGPUBufferMapState)
  {
    STRINGISE_ENUM(WGPUBufferMapState_Unmapped);
    STRINGISE_ENUM(WGPUBufferMapState_Pending);
    STRINGISE_ENUM(WGPUBufferMapState_Mapped);
    STRINGISE_ENUM(WGPUBufferMapState_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUCallbackMode &el)
{
  BEGIN_ENUM_STRINGISE(WGPUCallbackMode)
  {
    STRINGISE_ENUM(WGPUCallbackMode_WaitAnyOnly);
    STRINGISE_ENUM(WGPUCallbackMode_AllowProcessEvents);
    STRINGISE_ENUM(WGPUCallbackMode_AllowSpontaneous);
    STRINGISE_ENUM(WGPUCallbackMode_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUCompareFunction &el)
{
  BEGIN_ENUM_STRINGISE(WGPUCompareFunction)
  {
    STRINGISE_ENUM(WGPUCompareFunction_Undefined);
    STRINGISE_ENUM(WGPUCompareFunction_Never);
    STRINGISE_ENUM(WGPUCompareFunction_Less);
    STRINGISE_ENUM(WGPUCompareFunction_Equal);
    STRINGISE_ENUM(WGPUCompareFunction_LessEqual);
    STRINGISE_ENUM(WGPUCompareFunction_Greater);
    STRINGISE_ENUM(WGPUCompareFunction_NotEqual);
    STRINGISE_ENUM(WGPUCompareFunction_GreaterEqual);
    STRINGISE_ENUM(WGPUCompareFunction_Always);
    STRINGISE_ENUM(WGPUCompareFunction_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUCompilationInfoRequestStatus &el)
{
  BEGIN_ENUM_STRINGISE(WGPUCompilationInfoRequestStatus)
  {
    STRINGISE_ENUM(WGPUCompilationInfoRequestStatus_Success);
    STRINGISE_ENUM(WGPUCompilationInfoRequestStatus_InstanceDropped);
    STRINGISE_ENUM(WGPUCompilationInfoRequestStatus_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUCompilationMessageType &el)
{
  BEGIN_ENUM_STRINGISE(WGPUCompilationMessageType)
  {
    STRINGISE_ENUM(WGPUCompilationMessageType_Error);
    STRINGISE_ENUM(WGPUCompilationMessageType_Warning);
    STRINGISE_ENUM(WGPUCompilationMessageType_Info);
    STRINGISE_ENUM(WGPUCompilationMessageType_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUCompositeAlphaMode &el)
{
  BEGIN_ENUM_STRINGISE(WGPUCompositeAlphaMode)
  {
    STRINGISE_ENUM(WGPUCompositeAlphaMode_Auto);
    STRINGISE_ENUM(WGPUCompositeAlphaMode_Opaque);
    STRINGISE_ENUM(WGPUCompositeAlphaMode_Premultiplied);
    STRINGISE_ENUM(WGPUCompositeAlphaMode_Unpremultiplied);
    STRINGISE_ENUM(WGPUCompositeAlphaMode_Inherit);
    STRINGISE_ENUM(WGPUCompositeAlphaMode_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUCreatePipelineAsyncStatus &el)
{
  BEGIN_ENUM_STRINGISE(WGPUCreatePipelineAsyncStatus)
  {
    STRINGISE_ENUM(WGPUCreatePipelineAsyncStatus_Success);
    STRINGISE_ENUM(WGPUCreatePipelineAsyncStatus_InstanceDropped);
    STRINGISE_ENUM(WGPUCreatePipelineAsyncStatus_ValidationError);
    STRINGISE_ENUM(WGPUCreatePipelineAsyncStatus_InternalError);
    STRINGISE_ENUM(WGPUCreatePipelineAsyncStatus_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUCullMode &el)
{
  BEGIN_ENUM_STRINGISE(WGPUCullMode)
  {
    STRINGISE_ENUM(WGPUCullMode_Undefined);
    STRINGISE_ENUM(WGPUCullMode_None);
    STRINGISE_ENUM(WGPUCullMode_Front);
    STRINGISE_ENUM(WGPUCullMode_Back);
    STRINGISE_ENUM(WGPUCullMode_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUDeviceLostReason &el)
{
  BEGIN_ENUM_STRINGISE(WGPUDeviceLostReason)
  {
    STRINGISE_ENUM(WGPUDeviceLostReason_Unknown);
    STRINGISE_ENUM(WGPUDeviceLostReason_Destroyed);
    STRINGISE_ENUM(WGPUDeviceLostReason_InstanceDropped);
    STRINGISE_ENUM(WGPUDeviceLostReason_FailedCreation);
    STRINGISE_ENUM(WGPUDeviceLostReason_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUErrorFilter &el)
{
  BEGIN_ENUM_STRINGISE(WGPUErrorFilter)
  {
    STRINGISE_ENUM(WGPUErrorFilter_Validation);
    STRINGISE_ENUM(WGPUErrorFilter_OutOfMemory);
    STRINGISE_ENUM(WGPUErrorFilter_Internal);
    STRINGISE_ENUM(WGPUErrorFilter_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUErrorType &el)
{
  BEGIN_ENUM_STRINGISE(WGPUErrorType)
  {
    STRINGISE_ENUM(WGPUErrorType_NoError);
    STRINGISE_ENUM(WGPUErrorType_Validation);
    STRINGISE_ENUM(WGPUErrorType_OutOfMemory);
    STRINGISE_ENUM(WGPUErrorType_Internal);
    STRINGISE_ENUM(WGPUErrorType_Unknown);
    STRINGISE_ENUM(WGPUErrorType_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUExternalTextureRotation &el)
{
  BEGIN_ENUM_STRINGISE(WGPUExternalTextureRotation)
  {
    STRINGISE_ENUM(WGPUExternalTextureRotation_Rotate0Degrees);
    STRINGISE_ENUM(WGPUExternalTextureRotation_Rotate90Degrees);
    STRINGISE_ENUM(WGPUExternalTextureRotation_Rotate180Degrees);
    STRINGISE_ENUM(WGPUExternalTextureRotation_Rotate270Degrees);
    STRINGISE_ENUM(WGPUExternalTextureRotation_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUFeatureLevel &el)
{
  BEGIN_ENUM_STRINGISE(WGPUFeatureLevel)
  {
    STRINGISE_ENUM(WGPUFeatureLevel_Undefined);
    STRINGISE_ENUM(WGPUFeatureLevel_Compatibility);
    STRINGISE_ENUM(WGPUFeatureLevel_Core);
    STRINGISE_ENUM(WGPUFeatureLevel_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUFeatureName &el)
{
  BEGIN_ENUM_STRINGISE(WGPUFeatureName)
  {
    STRINGISE_ENUM(WGPUFeatureName_DepthClipControl);
    STRINGISE_ENUM(WGPUFeatureName_Depth32FloatStencil8);
    STRINGISE_ENUM(WGPUFeatureName_TimestampQuery);
    STRINGISE_ENUM(WGPUFeatureName_TextureCompressionBC);
    STRINGISE_ENUM(WGPUFeatureName_TextureCompressionBCSliced3D);
    STRINGISE_ENUM(WGPUFeatureName_TextureCompressionETC2);
    STRINGISE_ENUM(WGPUFeatureName_TextureCompressionASTC);
    STRINGISE_ENUM(WGPUFeatureName_TextureCompressionASTCSliced3D);
    STRINGISE_ENUM(WGPUFeatureName_IndirectFirstInstance);
    STRINGISE_ENUM(WGPUFeatureName_ShaderF16);
    STRINGISE_ENUM(WGPUFeatureName_RG11B10UfloatRenderable);
    STRINGISE_ENUM(WGPUFeatureName_BGRA8UnormStorage);
    STRINGISE_ENUM(WGPUFeatureName_Float32Filterable);
    STRINGISE_ENUM(WGPUFeatureName_Float32Blendable);
    STRINGISE_ENUM(WGPUFeatureName_ClipDistances);
    STRINGISE_ENUM(WGPUFeatureName_DualSourceBlending);
    STRINGISE_ENUM(WGPUFeatureName_Subgroups);
    STRINGISE_ENUM(WGPUFeatureName_CoreFeaturesAndLimits);
    STRINGISE_ENUM(WGPUFeatureName_DawnInternalUsages);
    STRINGISE_ENUM(WGPUFeatureName_DawnMultiPlanarFormats);
    STRINGISE_ENUM(WGPUFeatureName_DawnNative);
    STRINGISE_ENUM(WGPUFeatureName_ChromiumExperimentalTimestampQueryInsidePasses);
    STRINGISE_ENUM(WGPUFeatureName_ImplicitDeviceSynchronization);
    STRINGISE_ENUM(WGPUFeatureName_ChromiumExperimentalImmediateData);
    STRINGISE_ENUM(WGPUFeatureName_TransientAttachments);
    STRINGISE_ENUM(WGPUFeatureName_MSAARenderToSingleSampled);
    STRINGISE_ENUM(WGPUFeatureName_SubgroupsF16);
    STRINGISE_ENUM(WGPUFeatureName_D3D11MultithreadProtected);
    STRINGISE_ENUM(WGPUFeatureName_ANGLETextureSharing);
    STRINGISE_ENUM(WGPUFeatureName_PixelLocalStorageCoherent);
    STRINGISE_ENUM(WGPUFeatureName_PixelLocalStorageNonCoherent);
    STRINGISE_ENUM(WGPUFeatureName_Unorm16TextureFormats);
    STRINGISE_ENUM(WGPUFeatureName_Snorm16TextureFormats);
    STRINGISE_ENUM(WGPUFeatureName_MultiPlanarFormatExtendedUsages);
    STRINGISE_ENUM(WGPUFeatureName_MultiPlanarFormatP010);
    STRINGISE_ENUM(WGPUFeatureName_HostMappedPointer);
    STRINGISE_ENUM(WGPUFeatureName_MultiPlanarRenderTargets);
    STRINGISE_ENUM(WGPUFeatureName_MultiPlanarFormatNv12a);
    STRINGISE_ENUM(WGPUFeatureName_FramebufferFetch);
    STRINGISE_ENUM(WGPUFeatureName_BufferMapExtendedUsages);
    STRINGISE_ENUM(WGPUFeatureName_AdapterPropertiesMemoryHeaps);
    STRINGISE_ENUM(WGPUFeatureName_AdapterPropertiesD3D);
    STRINGISE_ENUM(WGPUFeatureName_AdapterPropertiesVk);
    STRINGISE_ENUM(WGPUFeatureName_R8UnormStorage);
    STRINGISE_ENUM(WGPUFeatureName_DawnFormatCapabilities);
    STRINGISE_ENUM(WGPUFeatureName_DawnDrmFormatCapabilities);
    STRINGISE_ENUM(WGPUFeatureName_Norm16TextureFormats);
    STRINGISE_ENUM(WGPUFeatureName_MultiPlanarFormatNv16);
    STRINGISE_ENUM(WGPUFeatureName_MultiPlanarFormatNv24);
    STRINGISE_ENUM(WGPUFeatureName_MultiPlanarFormatP210);
    STRINGISE_ENUM(WGPUFeatureName_MultiPlanarFormatP410);
    STRINGISE_ENUM(WGPUFeatureName_SharedTextureMemoryVkDedicatedAllocation);
    STRINGISE_ENUM(WGPUFeatureName_SharedTextureMemoryAHardwareBuffer);
    STRINGISE_ENUM(WGPUFeatureName_SharedTextureMemoryDmaBuf);
    STRINGISE_ENUM(WGPUFeatureName_SharedTextureMemoryOpaqueFD);
    STRINGISE_ENUM(WGPUFeatureName_SharedTextureMemoryZirconHandle);
    STRINGISE_ENUM(WGPUFeatureName_SharedTextureMemoryDXGISharedHandle);
    STRINGISE_ENUM(WGPUFeatureName_SharedTextureMemoryD3D11Texture2D);
    STRINGISE_ENUM(WGPUFeatureName_SharedTextureMemoryIOSurface);
    STRINGISE_ENUM(WGPUFeatureName_SharedTextureMemoryEGLImage);
    STRINGISE_ENUM(WGPUFeatureName_SharedFenceVkSemaphoreOpaqueFD);
    STRINGISE_ENUM(WGPUFeatureName_SharedFenceSyncFD);
    STRINGISE_ENUM(WGPUFeatureName_SharedFenceVkSemaphoreZirconHandle);
    STRINGISE_ENUM(WGPUFeatureName_SharedFenceDXGISharedHandle);
    STRINGISE_ENUM(WGPUFeatureName_SharedFenceMTLSharedEvent);
    STRINGISE_ENUM(WGPUFeatureName_SharedBufferMemoryD3D12Resource);
    STRINGISE_ENUM(WGPUFeatureName_StaticSamplers);
    STRINGISE_ENUM(WGPUFeatureName_YCbCrVulkanSamplers);
    STRINGISE_ENUM(WGPUFeatureName_ShaderModuleCompilationOptions);
    STRINGISE_ENUM(WGPUFeatureName_DawnLoadResolveTexture);
    STRINGISE_ENUM(WGPUFeatureName_DawnPartialLoadResolveTexture);
    STRINGISE_ENUM(WGPUFeatureName_MultiDrawIndirect);
    STRINGISE_ENUM(WGPUFeatureName_DawnTexelCopyBufferRowAlignment);
    STRINGISE_ENUM(WGPUFeatureName_FlexibleTextureViews);
    STRINGISE_ENUM(WGPUFeatureName_ChromiumExperimentalSubgroupMatrix);
    STRINGISE_ENUM(WGPUFeatureName_SharedFenceEGLSync);
    STRINGISE_ENUM(WGPUFeatureName_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUFilterMode &el)
{
  BEGIN_ENUM_STRINGISE(WGPUFilterMode)
  {
    STRINGISE_ENUM(WGPUFilterMode_Undefined);
    STRINGISE_ENUM(WGPUFilterMode_Nearest);
    STRINGISE_ENUM(WGPUFilterMode_Linear);
    STRINGISE_ENUM(WGPUFilterMode_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUFrontFace &el)
{
  BEGIN_ENUM_STRINGISE(WGPUFrontFace)
  {
    STRINGISE_ENUM(WGPUFrontFace_Undefined);
    STRINGISE_ENUM(WGPUFrontFace_CCW);
    STRINGISE_ENUM(WGPUFrontFace_CW);
    STRINGISE_ENUM(WGPUFrontFace_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUIndexFormat &el)
{
  BEGIN_ENUM_STRINGISE(WGPUIndexFormat)
  {
    STRINGISE_ENUM(WGPUIndexFormat_Undefined);
    STRINGISE_ENUM(WGPUIndexFormat_Uint16);
    STRINGISE_ENUM(WGPUIndexFormat_Uint32);
    STRINGISE_ENUM(WGPUIndexFormat_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPULoadOp &el)
{
  BEGIN_ENUM_STRINGISE(WGPULoadOp)
  {
    STRINGISE_ENUM(WGPULoadOp_Undefined);
    STRINGISE_ENUM(WGPULoadOp_Load);
    STRINGISE_ENUM(WGPULoadOp_Clear);
    STRINGISE_ENUM(WGPULoadOp_ExpandResolveTexture);
    STRINGISE_ENUM(WGPULoadOp_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPULoggingType &el)
{
  BEGIN_ENUM_STRINGISE(WGPULoggingType)
  {
    STRINGISE_ENUM(WGPULoggingType_Verbose);
    STRINGISE_ENUM(WGPULoggingType_Info);
    STRINGISE_ENUM(WGPULoggingType_Warning);
    STRINGISE_ENUM(WGPULoggingType_Error);
    STRINGISE_ENUM(WGPULoggingType_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUMapAsyncStatus &el)
{
  BEGIN_ENUM_STRINGISE(WGPUMapAsyncStatus)
  {
    STRINGISE_ENUM(WGPUMapAsyncStatus_Success);
    STRINGISE_ENUM(WGPUMapAsyncStatus_InstanceDropped);
    STRINGISE_ENUM(WGPUMapAsyncStatus_Error);
    STRINGISE_ENUM(WGPUMapAsyncStatus_Aborted);
    STRINGISE_ENUM(WGPUMapAsyncStatus_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUMipmapFilterMode &el)
{
  BEGIN_ENUM_STRINGISE(WGPUMipmapFilterMode)
  {
    STRINGISE_ENUM(WGPUMipmapFilterMode_Undefined);
    STRINGISE_ENUM(WGPUMipmapFilterMode_Nearest);
    STRINGISE_ENUM(WGPUMipmapFilterMode_Linear);
    STRINGISE_ENUM(WGPUMipmapFilterMode_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUOptionalBool &el)
{
  BEGIN_ENUM_STRINGISE(WGPUOptionalBool)
  {
    STRINGISE_ENUM(WGPUOptionalBool_False);
    STRINGISE_ENUM(WGPUOptionalBool_True);
    STRINGISE_ENUM(WGPUOptionalBool_Undefined);
    STRINGISE_ENUM(WGPUOptionalBool_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUPopErrorScopeStatus &el)
{
  BEGIN_ENUM_STRINGISE(WGPUPopErrorScopeStatus)
  {
    STRINGISE_ENUM(WGPUPopErrorScopeStatus_Success);
    STRINGISE_ENUM(WGPUPopErrorScopeStatus_InstanceDropped);
    STRINGISE_ENUM(WGPUPopErrorScopeStatus_Error);
    STRINGISE_ENUM(WGPUPopErrorScopeStatus_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUPowerPreference &el)
{
  BEGIN_ENUM_STRINGISE(WGPUPowerPreference)
  {
    STRINGISE_ENUM(WGPUPowerPreference_Undefined);
    STRINGISE_ENUM(WGPUPowerPreference_LowPower);
    STRINGISE_ENUM(WGPUPowerPreference_HighPerformance);
    STRINGISE_ENUM(WGPUPowerPreference_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUPredefinedColorSpace &el)
{
  BEGIN_ENUM_STRINGISE(WGPUPredefinedColorSpace)
  {
    STRINGISE_ENUM(WGPUPredefinedColorSpace_SRGB);
    STRINGISE_ENUM(WGPUPredefinedColorSpace_DisplayP3);
    STRINGISE_ENUM(WGPUPredefinedColorSpace_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUPresentMode &el)
{
  BEGIN_ENUM_STRINGISE(WGPUPresentMode)
  {
    STRINGISE_ENUM(WGPUPresentMode_Fifo);
    STRINGISE_ENUM(WGPUPresentMode_FifoRelaxed);
    STRINGISE_ENUM(WGPUPresentMode_Immediate);
    STRINGISE_ENUM(WGPUPresentMode_Mailbox);
    STRINGISE_ENUM(WGPUPresentMode_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUPrimitiveTopology &el)
{
  BEGIN_ENUM_STRINGISE(WGPUPrimitiveTopology)
  {
    STRINGISE_ENUM(WGPUPrimitiveTopology_Undefined);
    STRINGISE_ENUM(WGPUPrimitiveTopology_PointList);
    STRINGISE_ENUM(WGPUPrimitiveTopology_LineList);
    STRINGISE_ENUM(WGPUPrimitiveTopology_LineStrip);
    STRINGISE_ENUM(WGPUPrimitiveTopology_TriangleList);
    STRINGISE_ENUM(WGPUPrimitiveTopology_TriangleStrip);
    STRINGISE_ENUM(WGPUPrimitiveTopology_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUQueryType &el)
{
  BEGIN_ENUM_STRINGISE(WGPUQueryType)
  {
    STRINGISE_ENUM(WGPUQueryType_Occlusion);
    STRINGISE_ENUM(WGPUQueryType_Timestamp);
    STRINGISE_ENUM(WGPUQueryType_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUQueueWorkDoneStatus &el)
{
  BEGIN_ENUM_STRINGISE(WGPUQueueWorkDoneStatus)
  {
    STRINGISE_ENUM(WGPUQueueWorkDoneStatus_Success);
    STRINGISE_ENUM(WGPUQueueWorkDoneStatus_InstanceDropped);
    STRINGISE_ENUM(WGPUQueueWorkDoneStatus_Error);
    STRINGISE_ENUM(WGPUQueueWorkDoneStatus_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPURequestAdapterStatus &el)
{
  BEGIN_ENUM_STRINGISE(WGPURequestAdapterStatus)
  {
    STRINGISE_ENUM(WGPURequestAdapterStatus_Success);
    STRINGISE_ENUM(WGPURequestAdapterStatus_InstanceDropped);
    STRINGISE_ENUM(WGPURequestAdapterStatus_Unavailable);
    STRINGISE_ENUM(WGPURequestAdapterStatus_Error);
    STRINGISE_ENUM(WGPURequestAdapterStatus_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPURequestDeviceStatus &el)
{
  BEGIN_ENUM_STRINGISE(WGPURequestDeviceStatus)
  {
    STRINGISE_ENUM(WGPURequestDeviceStatus_Success);
    STRINGISE_ENUM(WGPURequestDeviceStatus_InstanceDropped);
    STRINGISE_ENUM(WGPURequestDeviceStatus_Error);
    STRINGISE_ENUM(WGPURequestDeviceStatus_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUSType &el)
{
  BEGIN_ENUM_STRINGISE(WGPUSType)
  {
    STRINGISE_ENUM(WGPUSType_ShaderSourceSPIRV);
    STRINGISE_ENUM(WGPUSType_ShaderSourceWGSL);
    STRINGISE_ENUM(WGPUSType_RenderPassMaxDrawCount);
    STRINGISE_ENUM(WGPUSType_SurfaceSourceMetalLayer);
    STRINGISE_ENUM(WGPUSType_SurfaceSourceWindowsHWND);
    STRINGISE_ENUM(WGPUSType_SurfaceSourceXlibWindow);
    STRINGISE_ENUM(WGPUSType_SurfaceSourceWaylandSurface);
    STRINGISE_ENUM(WGPUSType_SurfaceSourceAndroidNativeWindow);
    STRINGISE_ENUM(WGPUSType_SurfaceSourceXCBWindow);
    STRINGISE_ENUM(WGPUSType_SurfaceColorManagement);
    STRINGISE_ENUM(WGPUSType_RequestAdapterWebXROptions);
    STRINGISE_ENUM(WGPUSType_AdapterPropertiesSubgroups);
    STRINGISE_ENUM(WGPUSType_TextureBindingViewDimensionDescriptor);
    STRINGISE_ENUM(WGPUSType_EmscriptenSurfaceSourceCanvasHTMLSelector);
    STRINGISE_ENUM(WGPUSType_SurfaceDescriptorFromWindowsCoreWindow);
    STRINGISE_ENUM(WGPUSType_ExternalTextureBindingEntry);
    STRINGISE_ENUM(WGPUSType_ExternalTextureBindingLayout);
    STRINGISE_ENUM(WGPUSType_SurfaceDescriptorFromWindowsSwapChainPanel);
    STRINGISE_ENUM(WGPUSType_DawnTextureInternalUsageDescriptor);
    STRINGISE_ENUM(WGPUSType_DawnEncoderInternalUsageDescriptor);
    STRINGISE_ENUM(WGPUSType_DawnInstanceDescriptor);
    STRINGISE_ENUM(WGPUSType_DawnCacheDeviceDescriptor);
    STRINGISE_ENUM(WGPUSType_DawnAdapterPropertiesPowerPreference);
    STRINGISE_ENUM(WGPUSType_DawnBufferDescriptorErrorInfoFromWireClient);
    STRINGISE_ENUM(WGPUSType_DawnTogglesDescriptor);
    STRINGISE_ENUM(WGPUSType_DawnShaderModuleSPIRVOptionsDescriptor);
    STRINGISE_ENUM(WGPUSType_RequestAdapterOptionsLUID);
    STRINGISE_ENUM(WGPUSType_RequestAdapterOptionsGetGLProc);
    STRINGISE_ENUM(WGPUSType_RequestAdapterOptionsD3D11Device);
    STRINGISE_ENUM(WGPUSType_DawnRenderPassColorAttachmentRenderToSingleSampled);
    STRINGISE_ENUM(WGPUSType_RenderPassPixelLocalStorage);
    STRINGISE_ENUM(WGPUSType_PipelineLayoutPixelLocalStorage);
    STRINGISE_ENUM(WGPUSType_BufferHostMappedPointer);
    STRINGISE_ENUM(WGPUSType_DawnExperimentalSubgroupLimits);
    STRINGISE_ENUM(WGPUSType_AdapterPropertiesMemoryHeaps);
    STRINGISE_ENUM(WGPUSType_AdapterPropertiesD3D);
    STRINGISE_ENUM(WGPUSType_AdapterPropertiesVk);
    STRINGISE_ENUM(WGPUSType_DawnWireWGSLControl);
    STRINGISE_ENUM(WGPUSType_DawnWGSLBlocklist);
    STRINGISE_ENUM(WGPUSType_DawnDrmFormatCapabilities);
    STRINGISE_ENUM(WGPUSType_ShaderModuleCompilationOptions);
    STRINGISE_ENUM(WGPUSType_ColorTargetStateExpandResolveTextureDawn);
    STRINGISE_ENUM(WGPUSType_RenderPassDescriptorExpandResolveRect);
    STRINGISE_ENUM(WGPUSType_SharedTextureMemoryVkDedicatedAllocationDescriptor);
    STRINGISE_ENUM(WGPUSType_SharedTextureMemoryAHardwareBufferDescriptor);
    STRINGISE_ENUM(WGPUSType_SharedTextureMemoryDmaBufDescriptor);
    STRINGISE_ENUM(WGPUSType_SharedTextureMemoryOpaqueFDDescriptor);
    STRINGISE_ENUM(WGPUSType_SharedTextureMemoryZirconHandleDescriptor);
    STRINGISE_ENUM(WGPUSType_SharedTextureMemoryDXGISharedHandleDescriptor);
    STRINGISE_ENUM(WGPUSType_SharedTextureMemoryD3D11Texture2DDescriptor);
    STRINGISE_ENUM(WGPUSType_SharedTextureMemoryIOSurfaceDescriptor);
    STRINGISE_ENUM(WGPUSType_SharedTextureMemoryEGLImageDescriptor);
    STRINGISE_ENUM(WGPUSType_SharedTextureMemoryInitializedBeginState);
    STRINGISE_ENUM(WGPUSType_SharedTextureMemoryInitializedEndState);
    STRINGISE_ENUM(WGPUSType_SharedTextureMemoryVkImageLayoutBeginState);
    STRINGISE_ENUM(WGPUSType_SharedTextureMemoryVkImageLayoutEndState);
    STRINGISE_ENUM(WGPUSType_SharedTextureMemoryD3DSwapchainBeginState);
    STRINGISE_ENUM(WGPUSType_SharedFenceVkSemaphoreOpaqueFDDescriptor);
    STRINGISE_ENUM(WGPUSType_SharedFenceVkSemaphoreOpaqueFDExportInfo);
    STRINGISE_ENUM(WGPUSType_SharedFenceSyncFDDescriptor);
    STRINGISE_ENUM(WGPUSType_SharedFenceSyncFDExportInfo);
    STRINGISE_ENUM(WGPUSType_SharedFenceVkSemaphoreZirconHandleDescriptor);
    STRINGISE_ENUM(WGPUSType_SharedFenceVkSemaphoreZirconHandleExportInfo);
    STRINGISE_ENUM(WGPUSType_SharedFenceDXGISharedHandleDescriptor);
    STRINGISE_ENUM(WGPUSType_SharedFenceDXGISharedHandleExportInfo);
    STRINGISE_ENUM(WGPUSType_SharedFenceMTLSharedEventDescriptor);
    STRINGISE_ENUM(WGPUSType_SharedFenceMTLSharedEventExportInfo);
    STRINGISE_ENUM(WGPUSType_SharedBufferMemoryD3D12ResourceDescriptor);
    STRINGISE_ENUM(WGPUSType_StaticSamplerBindingLayout);
    STRINGISE_ENUM(WGPUSType_YCbCrVkDescriptor);
    STRINGISE_ENUM(WGPUSType_SharedTextureMemoryAHardwareBufferProperties);
    STRINGISE_ENUM(WGPUSType_AHardwareBufferProperties);
    STRINGISE_ENUM(WGPUSType_DawnExperimentalImmediateDataLimits);
    STRINGISE_ENUM(WGPUSType_DawnTexelCopyBufferRowAlignmentLimits);
    STRINGISE_ENUM(WGPUSType_AdapterPropertiesSubgroupMatrixConfigs);
    STRINGISE_ENUM(WGPUSType_SharedFenceEGLSyncDescriptor);
    STRINGISE_ENUM(WGPUSType_SharedFenceEGLSyncExportInfo);
    STRINGISE_ENUM(WGPUSType_DawnInjectedInvalidSType);
    STRINGISE_ENUM(WGPUSType_DawnCompilationMessageUtf16);
    STRINGISE_ENUM(WGPUSType_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUSamplerBindingType &el)
{
  BEGIN_ENUM_STRINGISE(WGPUSamplerBindingType)
  {
    STRINGISE_ENUM(WGPUSamplerBindingType_BindingNotUsed);
    STRINGISE_ENUM(WGPUSamplerBindingType_Undefined);
    STRINGISE_ENUM(WGPUSamplerBindingType_Filtering);
    STRINGISE_ENUM(WGPUSamplerBindingType_NonFiltering);
    STRINGISE_ENUM(WGPUSamplerBindingType_Comparison);
    STRINGISE_ENUM(WGPUSamplerBindingType_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUSharedFenceType &el)
{
  BEGIN_ENUM_STRINGISE(WGPUSharedFenceType)
  {
    STRINGISE_ENUM(WGPUSharedFenceType_VkSemaphoreOpaqueFD);
    STRINGISE_ENUM(WGPUSharedFenceType_SyncFD);
    STRINGISE_ENUM(WGPUSharedFenceType_VkSemaphoreZirconHandle);
    STRINGISE_ENUM(WGPUSharedFenceType_DXGISharedHandle);
    STRINGISE_ENUM(WGPUSharedFenceType_MTLSharedEvent);
    STRINGISE_ENUM(WGPUSharedFenceType_EGLSync);
    STRINGISE_ENUM(WGPUSharedFenceType_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUStatus &el)
{
  BEGIN_ENUM_STRINGISE(WGPUStatus)
  {
    STRINGISE_ENUM(WGPUStatus_Success);
    STRINGISE_ENUM(WGPUStatus_Error);
    STRINGISE_ENUM(WGPUStatus_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUStencilOperation &el)
{
  BEGIN_ENUM_STRINGISE(WGPUStencilOperation)
  {
    STRINGISE_ENUM(WGPUStencilOperation_Undefined);
    STRINGISE_ENUM(WGPUStencilOperation_Keep);
    STRINGISE_ENUM(WGPUStencilOperation_Zero);
    STRINGISE_ENUM(WGPUStencilOperation_Replace);
    STRINGISE_ENUM(WGPUStencilOperation_Invert);
    STRINGISE_ENUM(WGPUStencilOperation_IncrementClamp);
    STRINGISE_ENUM(WGPUStencilOperation_DecrementClamp);
    STRINGISE_ENUM(WGPUStencilOperation_IncrementWrap);
    STRINGISE_ENUM(WGPUStencilOperation_DecrementWrap);
    STRINGISE_ENUM(WGPUStencilOperation_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUStorageTextureAccess &el)
{
  BEGIN_ENUM_STRINGISE(WGPUStorageTextureAccess)
  {
    STRINGISE_ENUM(WGPUStorageTextureAccess_BindingNotUsed);
    STRINGISE_ENUM(WGPUStorageTextureAccess_Undefined);
    STRINGISE_ENUM(WGPUStorageTextureAccess_WriteOnly);
    STRINGISE_ENUM(WGPUStorageTextureAccess_ReadOnly);
    STRINGISE_ENUM(WGPUStorageTextureAccess_ReadWrite);
    STRINGISE_ENUM(WGPUStorageTextureAccess_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUStoreOp &el)
{
  BEGIN_ENUM_STRINGISE(WGPUStoreOp)
  {
    STRINGISE_ENUM(WGPUStoreOp_Undefined);
    STRINGISE_ENUM(WGPUStoreOp_Store);
    STRINGISE_ENUM(WGPUStoreOp_Discard);
    STRINGISE_ENUM(WGPUStoreOp_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUSubgroupMatrixComponentType &el)
{
  BEGIN_ENUM_STRINGISE(WGPUSubgroupMatrixComponentType)
  {
    STRINGISE_ENUM(WGPUSubgroupMatrixComponentType_F32);
    STRINGISE_ENUM(WGPUSubgroupMatrixComponentType_F16);
    STRINGISE_ENUM(WGPUSubgroupMatrixComponentType_U32);
    STRINGISE_ENUM(WGPUSubgroupMatrixComponentType_I32);
    STRINGISE_ENUM(WGPUSubgroupMatrixComponentType_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUSurfaceGetCurrentTextureStatus &el)
{
  BEGIN_ENUM_STRINGISE(WGPUSurfaceGetCurrentTextureStatus)
  {
    STRINGISE_ENUM(WGPUSurfaceGetCurrentTextureStatus_SuccessOptimal);
    STRINGISE_ENUM(WGPUSurfaceGetCurrentTextureStatus_SuccessSuboptimal);
    STRINGISE_ENUM(WGPUSurfaceGetCurrentTextureStatus_Timeout);
    STRINGISE_ENUM(WGPUSurfaceGetCurrentTextureStatus_Outdated);
    STRINGISE_ENUM(WGPUSurfaceGetCurrentTextureStatus_Lost);
    STRINGISE_ENUM(WGPUSurfaceGetCurrentTextureStatus_Error);
    STRINGISE_ENUM(WGPUSurfaceGetCurrentTextureStatus_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUTextureAspect &el)
{
  BEGIN_ENUM_STRINGISE(WGPUTextureAspect)
  {
    STRINGISE_ENUM(WGPUTextureAspect_Undefined);
    STRINGISE_ENUM(WGPUTextureAspect_All);
    STRINGISE_ENUM(WGPUTextureAspect_StencilOnly);
    STRINGISE_ENUM(WGPUTextureAspect_DepthOnly);
    STRINGISE_ENUM(WGPUTextureAspect_Plane0Only);
    STRINGISE_ENUM(WGPUTextureAspect_Plane1Only);
    STRINGISE_ENUM(WGPUTextureAspect_Plane2Only);
    STRINGISE_ENUM(WGPUTextureAspect_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUTextureDimension &el)
{
  BEGIN_ENUM_STRINGISE(WGPUTextureDimension)
  {
    STRINGISE_ENUM(WGPUTextureDimension_Undefined);
    STRINGISE_ENUM(WGPUTextureDimension_1D);
    STRINGISE_ENUM(WGPUTextureDimension_2D);
    STRINGISE_ENUM(WGPUTextureDimension_3D);
    STRINGISE_ENUM(WGPUTextureDimension_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUTextureFormat &el)
{
  BEGIN_ENUM_STRINGISE(WGPUTextureFormat)
  {
    STRINGISE_ENUM(WGPUTextureFormat_Undefined);
    STRINGISE_ENUM(WGPUTextureFormat_R8Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_R8Snorm);
    STRINGISE_ENUM(WGPUTextureFormat_R8Uint);
    STRINGISE_ENUM(WGPUTextureFormat_R8Sint);
    STRINGISE_ENUM(WGPUTextureFormat_R16Uint);
    STRINGISE_ENUM(WGPUTextureFormat_R16Sint);
    STRINGISE_ENUM(WGPUTextureFormat_R16Float);
    STRINGISE_ENUM(WGPUTextureFormat_RG8Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_RG8Snorm);
    STRINGISE_ENUM(WGPUTextureFormat_RG8Uint);
    STRINGISE_ENUM(WGPUTextureFormat_RG8Sint);
    STRINGISE_ENUM(WGPUTextureFormat_R32Float);
    STRINGISE_ENUM(WGPUTextureFormat_R32Uint);
    STRINGISE_ENUM(WGPUTextureFormat_R32Sint);
    STRINGISE_ENUM(WGPUTextureFormat_RG16Uint);
    STRINGISE_ENUM(WGPUTextureFormat_RG16Sint);
    STRINGISE_ENUM(WGPUTextureFormat_RG16Float);
    STRINGISE_ENUM(WGPUTextureFormat_RGBA8Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_RGBA8UnormSrgb);
    STRINGISE_ENUM(WGPUTextureFormat_RGBA8Snorm);
    STRINGISE_ENUM(WGPUTextureFormat_RGBA8Uint);
    STRINGISE_ENUM(WGPUTextureFormat_RGBA8Sint);
    STRINGISE_ENUM(WGPUTextureFormat_BGRA8Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_BGRA8UnormSrgb);
    STRINGISE_ENUM(WGPUTextureFormat_RGB10A2Uint);
    STRINGISE_ENUM(WGPUTextureFormat_RGB10A2Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_RG11B10Ufloat);
    STRINGISE_ENUM(WGPUTextureFormat_RGB9E5Ufloat);
    STRINGISE_ENUM(WGPUTextureFormat_RG32Float);
    STRINGISE_ENUM(WGPUTextureFormat_RG32Uint);
    STRINGISE_ENUM(WGPUTextureFormat_RG32Sint);
    STRINGISE_ENUM(WGPUTextureFormat_RGBA16Uint);
    STRINGISE_ENUM(WGPUTextureFormat_RGBA16Sint);
    STRINGISE_ENUM(WGPUTextureFormat_RGBA16Float);
    STRINGISE_ENUM(WGPUTextureFormat_RGBA32Float);
    STRINGISE_ENUM(WGPUTextureFormat_RGBA32Uint);
    STRINGISE_ENUM(WGPUTextureFormat_RGBA32Sint);
    STRINGISE_ENUM(WGPUTextureFormat_Stencil8);
    STRINGISE_ENUM(WGPUTextureFormat_Depth16Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_Depth24Plus);
    STRINGISE_ENUM(WGPUTextureFormat_Depth24PlusStencil8);
    STRINGISE_ENUM(WGPUTextureFormat_Depth32Float);
    STRINGISE_ENUM(WGPUTextureFormat_Depth32FloatStencil8);
    STRINGISE_ENUM(WGPUTextureFormat_BC1RGBAUnorm);
    STRINGISE_ENUM(WGPUTextureFormat_BC1RGBAUnormSrgb);
    STRINGISE_ENUM(WGPUTextureFormat_BC2RGBAUnorm);
    STRINGISE_ENUM(WGPUTextureFormat_BC2RGBAUnormSrgb);
    STRINGISE_ENUM(WGPUTextureFormat_BC3RGBAUnorm);
    STRINGISE_ENUM(WGPUTextureFormat_BC3RGBAUnormSrgb);
    STRINGISE_ENUM(WGPUTextureFormat_BC4RUnorm);
    STRINGISE_ENUM(WGPUTextureFormat_BC4RSnorm);
    STRINGISE_ENUM(WGPUTextureFormat_BC5RGUnorm);
    STRINGISE_ENUM(WGPUTextureFormat_BC5RGSnorm);
    STRINGISE_ENUM(WGPUTextureFormat_BC6HRGBUfloat);
    STRINGISE_ENUM(WGPUTextureFormat_BC6HRGBFloat);
    STRINGISE_ENUM(WGPUTextureFormat_BC7RGBAUnorm);
    STRINGISE_ENUM(WGPUTextureFormat_BC7RGBAUnormSrgb);
    STRINGISE_ENUM(WGPUTextureFormat_ETC2RGB8Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_ETC2RGB8UnormSrgb);
    STRINGISE_ENUM(WGPUTextureFormat_ETC2RGB8A1Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_ETC2RGB8A1UnormSrgb);
    STRINGISE_ENUM(WGPUTextureFormat_ETC2RGBA8Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_ETC2RGBA8UnormSrgb);
    STRINGISE_ENUM(WGPUTextureFormat_EACR11Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_EACR11Snorm);
    STRINGISE_ENUM(WGPUTextureFormat_EACRG11Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_EACRG11Snorm);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC4x4Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC4x4UnormSrgb);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC5x4Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC5x4UnormSrgb);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC5x5Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC5x5UnormSrgb);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC6x5Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC6x5UnormSrgb);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC6x6Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC6x6UnormSrgb);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC8x5Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC8x5UnormSrgb);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC8x6Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC8x6UnormSrgb);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC8x8Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC8x8UnormSrgb);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC10x5Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC10x5UnormSrgb);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC10x6Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC10x6UnormSrgb);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC10x8Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC10x8UnormSrgb);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC10x10Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC10x10UnormSrgb);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC12x10Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC12x10UnormSrgb);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC12x12Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_ASTC12x12UnormSrgb);
    STRINGISE_ENUM(WGPUTextureFormat_R16Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_RG16Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_RGBA16Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_R16Snorm);
    STRINGISE_ENUM(WGPUTextureFormat_RG16Snorm);
    STRINGISE_ENUM(WGPUTextureFormat_RGBA16Snorm);
    STRINGISE_ENUM(WGPUTextureFormat_R8BG8Biplanar420Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_R10X6BG10X6Biplanar420Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_R8BG8A8Triplanar420Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_R8BG8Biplanar422Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_R8BG8Biplanar444Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_R10X6BG10X6Biplanar422Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_R10X6BG10X6Biplanar444Unorm);
    STRINGISE_ENUM(WGPUTextureFormat_External);
    STRINGISE_ENUM(WGPUTextureFormat_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUTextureSampleType &el)
{
  BEGIN_ENUM_STRINGISE(WGPUTextureSampleType)
  {
    STRINGISE_ENUM(WGPUTextureSampleType_BindingNotUsed);
    STRINGISE_ENUM(WGPUTextureSampleType_Undefined);
    STRINGISE_ENUM(WGPUTextureSampleType_Float);
    STRINGISE_ENUM(WGPUTextureSampleType_UnfilterableFloat);
    STRINGISE_ENUM(WGPUTextureSampleType_Depth);
    STRINGISE_ENUM(WGPUTextureSampleType_Sint);
    STRINGISE_ENUM(WGPUTextureSampleType_Uint);
    STRINGISE_ENUM(WGPUTextureSampleType_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUTextureViewDimension &el)
{
  BEGIN_ENUM_STRINGISE(WGPUTextureViewDimension)
  {
    STRINGISE_ENUM(WGPUTextureViewDimension_Undefined);
    STRINGISE_ENUM(WGPUTextureViewDimension_1D);
    STRINGISE_ENUM(WGPUTextureViewDimension_2D);
    STRINGISE_ENUM(WGPUTextureViewDimension_2DArray);
    STRINGISE_ENUM(WGPUTextureViewDimension_Cube);
    STRINGISE_ENUM(WGPUTextureViewDimension_CubeArray);
    STRINGISE_ENUM(WGPUTextureViewDimension_3D);
    STRINGISE_ENUM(WGPUTextureViewDimension_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUToneMappingMode &el)
{
  BEGIN_ENUM_STRINGISE(WGPUToneMappingMode)
  {
    STRINGISE_ENUM(WGPUToneMappingMode_Standard);
    STRINGISE_ENUM(WGPUToneMappingMode_Extended);
    STRINGISE_ENUM(WGPUToneMappingMode_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUVertexFormat &el)
{
  BEGIN_ENUM_STRINGISE(WGPUVertexFormat)
  {
    STRINGISE_ENUM(WGPUVertexFormat_Uint8);
    STRINGISE_ENUM(WGPUVertexFormat_Uint8x2);
    STRINGISE_ENUM(WGPUVertexFormat_Uint8x4);
    STRINGISE_ENUM(WGPUVertexFormat_Sint8);
    STRINGISE_ENUM(WGPUVertexFormat_Sint8x2);
    STRINGISE_ENUM(WGPUVertexFormat_Sint8x4);
    STRINGISE_ENUM(WGPUVertexFormat_Unorm8);
    STRINGISE_ENUM(WGPUVertexFormat_Unorm8x2);
    STRINGISE_ENUM(WGPUVertexFormat_Unorm8x4);
    STRINGISE_ENUM(WGPUVertexFormat_Snorm8);
    STRINGISE_ENUM(WGPUVertexFormat_Snorm8x2);
    STRINGISE_ENUM(WGPUVertexFormat_Snorm8x4);
    STRINGISE_ENUM(WGPUVertexFormat_Uint16);
    STRINGISE_ENUM(WGPUVertexFormat_Uint16x2);
    STRINGISE_ENUM(WGPUVertexFormat_Uint16x4);
    STRINGISE_ENUM(WGPUVertexFormat_Sint16);
    STRINGISE_ENUM(WGPUVertexFormat_Sint16x2);
    STRINGISE_ENUM(WGPUVertexFormat_Sint16x4);
    STRINGISE_ENUM(WGPUVertexFormat_Unorm16);
    STRINGISE_ENUM(WGPUVertexFormat_Unorm16x2);
    STRINGISE_ENUM(WGPUVertexFormat_Unorm16x4);
    STRINGISE_ENUM(WGPUVertexFormat_Snorm16);
    STRINGISE_ENUM(WGPUVertexFormat_Snorm16x2);
    STRINGISE_ENUM(WGPUVertexFormat_Snorm16x4);
    STRINGISE_ENUM(WGPUVertexFormat_Float16);
    STRINGISE_ENUM(WGPUVertexFormat_Float16x2);
    STRINGISE_ENUM(WGPUVertexFormat_Float16x4);
    STRINGISE_ENUM(WGPUVertexFormat_Float32);
    STRINGISE_ENUM(WGPUVertexFormat_Float32x2);
    STRINGISE_ENUM(WGPUVertexFormat_Float32x3);
    STRINGISE_ENUM(WGPUVertexFormat_Float32x4);
    STRINGISE_ENUM(WGPUVertexFormat_Uint32);
    STRINGISE_ENUM(WGPUVertexFormat_Uint32x2);
    STRINGISE_ENUM(WGPUVertexFormat_Uint32x3);
    STRINGISE_ENUM(WGPUVertexFormat_Uint32x4);
    STRINGISE_ENUM(WGPUVertexFormat_Sint32);
    STRINGISE_ENUM(WGPUVertexFormat_Sint32x2);
    STRINGISE_ENUM(WGPUVertexFormat_Sint32x3);
    STRINGISE_ENUM(WGPUVertexFormat_Sint32x4);
    STRINGISE_ENUM(WGPUVertexFormat_Unorm10_10_10_2);
    STRINGISE_ENUM(WGPUVertexFormat_Unorm8x4BGRA);
    STRINGISE_ENUM(WGPUVertexFormat_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUVertexStepMode &el)
{
  BEGIN_ENUM_STRINGISE(WGPUVertexStepMode)
  {
    STRINGISE_ENUM(WGPUVertexStepMode_Undefined);
    STRINGISE_ENUM(WGPUVertexStepMode_Vertex);
    STRINGISE_ENUM(WGPUVertexStepMode_Instance);
    STRINGISE_ENUM(WGPUVertexStepMode_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUWaitStatus &el)
{
  BEGIN_ENUM_STRINGISE(WGPUWaitStatus)
  {
    STRINGISE_ENUM(WGPUWaitStatus_Success);
    STRINGISE_ENUM(WGPUWaitStatus_TimedOut);
    STRINGISE_ENUM(WGPUWaitStatus_Error);
    STRINGISE_ENUM(WGPUWaitStatus_Force32);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUBufferUsage &el)
{
  BEGIN_ENUM_STRINGISE(WGPUBufferUsage)
  {
    STRINGISE_ENUM(WGPUBufferUsage_None);
    STRINGISE_ENUM(WGPUBufferUsage_MapRead);
    STRINGISE_ENUM(WGPUBufferUsage_MapWrite);
    STRINGISE_ENUM(WGPUBufferUsage_CopySrc);
    STRINGISE_ENUM(WGPUBufferUsage_CopyDst);
    STRINGISE_ENUM(WGPUBufferUsage_Index);
    STRINGISE_ENUM(WGPUBufferUsage_Vertex);
    STRINGISE_ENUM(WGPUBufferUsage_Uniform);
    STRINGISE_ENUM(WGPUBufferUsage_Storage);
    STRINGISE_ENUM(WGPUBufferUsage_Indirect);
    STRINGISE_ENUM(WGPUBufferUsage_QueryResolve);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUColorWriteMask &el)
{
  BEGIN_ENUM_STRINGISE(WGPUColorWriteMask)
  {
    STRINGISE_ENUM(WGPUColorWriteMask_None);
    STRINGISE_ENUM(WGPUColorWriteMask_Red);
    STRINGISE_ENUM(WGPUColorWriteMask_Green);
    STRINGISE_ENUM(WGPUColorWriteMask_Blue);
    STRINGISE_ENUM(WGPUColorWriteMask_Alpha);
    STRINGISE_ENUM(WGPUColorWriteMask_All);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUHeapProperty &el)
{
  BEGIN_ENUM_STRINGISE(WGPUHeapProperty)
  {
    STRINGISE_ENUM(WGPUHeapProperty_None);
    STRINGISE_ENUM(WGPUHeapProperty_DeviceLocal);
    STRINGISE_ENUM(WGPUHeapProperty_HostVisible);
    STRINGISE_ENUM(WGPUHeapProperty_HostCoherent);
    STRINGISE_ENUM(WGPUHeapProperty_HostUncached);
    STRINGISE_ENUM(WGPUHeapProperty_HostCached);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUMapMode &el)
{
  BEGIN_ENUM_STRINGISE(WGPUMapMode)
  {
    STRINGISE_ENUM(WGPUMapMode_None);
    STRINGISE_ENUM(WGPUMapMode_Read);
    STRINGISE_ENUM(WGPUMapMode_Write);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUShaderStage &el)
{
  BEGIN_ENUM_STRINGISE(WGPUShaderStage)
  {
    STRINGISE_ENUM(WGPUShaderStage_None);
    STRINGISE_ENUM(WGPUShaderStage_Vertex);
    STRINGISE_ENUM(WGPUShaderStage_Fragment);
    STRINGISE_ENUM(WGPUShaderStage_Compute);
  }
  END_ENUM_STRINGISE();
}

template <>
rdcstr DoStringise(const WGPUTextureUsage &el)
{
  BEGIN_ENUM_STRINGISE(WGPUTextureUsage)
  {
    STRINGISE_ENUM(WGPUTextureUsage_None);
    STRINGISE_ENUM(WGPUTextureUsage_CopySrc);
    STRINGISE_ENUM(WGPUTextureUsage_CopyDst);
    STRINGISE_ENUM(WGPUTextureUsage_TextureBinding);
    STRINGISE_ENUM(WGPUTextureUsage_StorageBinding);
    STRINGISE_ENUM(WGPUTextureUsage_RenderAttachment);
    STRINGISE_ENUM(WGPUTextureUsage_TransientAttachment);
    STRINGISE_ENUM(WGPUTextureUsage_StorageAttachment);
  }
  END_ENUM_STRINGISE();
}


// Object handles
template <typename SerialiserType>
void DoSerialise(SerialiserType &ser, WGPUInstance &el)
{
  SERIALISE_ELEMENT(el);
}

INSTANTIATE_SERIALISE_TYPE(WGPUInstance);
