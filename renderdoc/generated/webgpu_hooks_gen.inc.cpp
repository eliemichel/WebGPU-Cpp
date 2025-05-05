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
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterInfoFreeMembers);
    WebGPUEventInfo eventInfo;
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuAdapterInfoFreeMembers(value);
}
static void wgpuAdapterPropertiesMemoryHeapsFreeMembers_hook(WGPUAdapterPropertiesMemoryHeaps value) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterPropertiesMemoryHeapsFreeMembers);
    WebGPUEventInfo eventInfo;
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuAdapterPropertiesMemoryHeapsFreeMembers(value);
}
static void wgpuAdapterPropertiesSubgroupMatrixConfigsFreeMembers_hook(WGPUAdapterPropertiesSubgroupMatrixConfigs value) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterPropertiesSubgroupMatrixConfigsFreeMembers);
    WebGPUEventInfo eventInfo;
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuAdapterPropertiesSubgroupMatrixConfigsFreeMembers(value);
}
static void wgpuDawnDrmFormatCapabilitiesFreeMembers_hook(WGPUDawnDrmFormatCapabilities value) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDawnDrmFormatCapabilitiesFreeMembers);
    WebGPUEventInfo eventInfo;
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuDawnDrmFormatCapabilitiesFreeMembers(value);
}
static WGPUStatus wgpuGetInstanceCapabilities_hook(WGPUInstanceCapabilities * capabilities) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcGetInstanceCapabilities);
    WebGPUEventInfo eventInfo;
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuGetInstanceCapabilities(capabilities);
}
static WGPUProc wgpuGetProcAddress_hook(WGPUStringView procName) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcGetProcAddress);
    WebGPUEventInfo eventInfo;
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuGetProcAddress(procName);
}
static void wgpuSharedBufferMemoryEndAccessStateFreeMembers_hook(WGPUSharedBufferMemoryEndAccessState value) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedBufferMemoryEndAccessStateFreeMembers);
    WebGPUEventInfo eventInfo;
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSharedBufferMemoryEndAccessStateFreeMembers(value);
}
static void wgpuSharedTextureMemoryEndAccessStateFreeMembers_hook(WGPUSharedTextureMemoryEndAccessState value) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedTextureMemoryEndAccessStateFreeMembers);
    WebGPUEventInfo eventInfo;
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSharedTextureMemoryEndAccessStateFreeMembers(value);
}
static void wgpuSupportedWGSLLanguageFeaturesFreeMembers_hook(WGPUSupportedWGSLLanguageFeatures value) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSupportedWGSLLanguageFeaturesFreeMembers);
    WebGPUEventInfo eventInfo;
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSupportedWGSLLanguageFeaturesFreeMembers(value);
}
static void wgpuSupportedFeaturesFreeMembers_hook(WGPUSupportedFeatures value) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSupportedFeaturesFreeMembers);
    WebGPUEventInfo eventInfo;
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSupportedFeaturesFreeMembers(value);
}
static void wgpuSurfaceCapabilitiesFreeMembers_hook(WGPUSurfaceCapabilities value) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSurfaceCapabilitiesFreeMembers);
    WebGPUEventInfo eventInfo;
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSurfaceCapabilitiesFreeMembers(value);
}
static WGPUDevice wgpuAdapterCreateDevice_hook(WGPUAdapter adapter, WGPUDeviceDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterCreateDevice);
    WebGPUEventInfo eventInfo;
    if (adapter) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(adapter);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuAdapterCreateDevice(adapter, descriptor);
}
static void wgpuAdapterGetFeatures_hook(WGPUAdapter adapter, WGPUSupportedFeatures * features) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterGetFeatures);
    WebGPUEventInfo eventInfo;
    if (adapter) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(adapter);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuAdapterGetFeatures(adapter, features);
}
static WGPUStatus wgpuAdapterGetFormatCapabilities_hook(WGPUAdapter adapter, WGPUTextureFormat format, WGPUDawnFormatCapabilities * capabilities) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterGetFormatCapabilities);
    WebGPUEventInfo eventInfo;
    if (adapter) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(adapter);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuAdapterGetFormatCapabilities(adapter, format, capabilities);
}
static WGPUStatus wgpuAdapterGetInfo_hook(WGPUAdapter adapter, WGPUAdapterInfo * info) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterGetInfo);
    WebGPUEventInfo eventInfo;
    if (adapter) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(adapter);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuAdapterGetInfo(adapter, info);
}
static WGPUInstance wgpuAdapterGetInstance_hook(WGPUAdapter adapter) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterGetInstance);
    WebGPUEventInfo eventInfo;
    if (adapter) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(adapter);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuAdapterGetInstance(adapter);
}
static WGPUStatus wgpuAdapterGetLimits_hook(WGPUAdapter adapter, WGPULimits * limits) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterGetLimits);
    WebGPUEventInfo eventInfo;
    if (adapter) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(adapter);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuAdapterGetLimits(adapter, limits);
}
static WGPUBool wgpuAdapterHasFeature_hook(WGPUAdapter adapter, WGPUFeatureName feature) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterHasFeature);
    WebGPUEventInfo eventInfo;
    if (adapter) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(adapter);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuAdapterHasFeature(adapter, feature);
}
static WGPUFuture wgpuAdapterRequestDevice_hook(WGPUAdapter adapter, WGPUDeviceDescriptor const * options, WGPURequestDeviceCallbackInfo callbackInfo) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterRequestDevice);
    WebGPUEventInfo eventInfo;
    if (adapter) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(adapter);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuAdapterRequestDevice(adapter, options, callbackInfo);
}
static void wgpuAdapterAddRef_hook(WGPUAdapter adapter) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterAddRef);
    WebGPUEventInfo eventInfo;
    if (adapter) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(adapter);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuAdapterAddRef(adapter);
}
static void wgpuAdapterRelease_hook(WGPUAdapter adapter) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcAdapterRelease);
    WebGPUEventInfo eventInfo;
    if (adapter) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(adapter);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(adapter);
  
  webgpuHooks.procs.wgpuAdapterRelease(adapter);
}
static void wgpuBindGroupSetLabel_hook(WGPUBindGroup bindGroup, WGPUStringView label) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBindGroupSetLabel);
    WebGPUEventInfo eventInfo;
    if (bindGroup) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(bindGroup);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuBindGroupSetLabel(bindGroup, label);
}
static void wgpuBindGroupAddRef_hook(WGPUBindGroup bindGroup) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBindGroupAddRef);
    WebGPUEventInfo eventInfo;
    if (bindGroup) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(bindGroup);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuBindGroupAddRef(bindGroup);
}
static void wgpuBindGroupRelease_hook(WGPUBindGroup bindGroup) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBindGroupRelease);
    WebGPUEventInfo eventInfo;
    if (bindGroup) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(bindGroup);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(bindGroup);
  
  webgpuHooks.procs.wgpuBindGroupRelease(bindGroup);
}
static void wgpuBindGroupLayoutSetLabel_hook(WGPUBindGroupLayout bindGroupLayout, WGPUStringView label) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBindGroupLayoutSetLabel);
    WebGPUEventInfo eventInfo;
    if (bindGroupLayout) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(bindGroupLayout);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuBindGroupLayoutSetLabel(bindGroupLayout, label);
}
static void wgpuBindGroupLayoutAddRef_hook(WGPUBindGroupLayout bindGroupLayout) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBindGroupLayoutAddRef);
    WebGPUEventInfo eventInfo;
    if (bindGroupLayout) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(bindGroupLayout);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuBindGroupLayoutAddRef(bindGroupLayout);
}
static void wgpuBindGroupLayoutRelease_hook(WGPUBindGroupLayout bindGroupLayout) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBindGroupLayoutRelease);
    WebGPUEventInfo eventInfo;
    if (bindGroupLayout) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(bindGroupLayout);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(bindGroupLayout);
  
  webgpuHooks.procs.wgpuBindGroupLayoutRelease(bindGroupLayout);
}
static void wgpuBufferDestroy_hook(WGPUBuffer buffer) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferDestroy);
    WebGPUEventInfo eventInfo;
    if (buffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(buffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuBufferDestroy(buffer);
}
static void const * wgpuBufferGetConstMappedRange_hook(WGPUBuffer buffer, size_t offset, size_t size) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferGetConstMappedRange);
    WebGPUEventInfo eventInfo;
    if (buffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(buffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuBufferGetConstMappedRange(buffer, offset, size);
}
static WGPUBufferMapState wgpuBufferGetMapState_hook(WGPUBuffer buffer) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferGetMapState);
    WebGPUEventInfo eventInfo;
    if (buffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(buffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuBufferGetMapState(buffer);
}
static void * wgpuBufferGetMappedRange_hook(WGPUBuffer buffer, size_t offset, size_t size) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferGetMappedRange);
    WebGPUEventInfo eventInfo;
    if (buffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(buffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuBufferGetMappedRange(buffer, offset, size);
}
static uint64_t wgpuBufferGetSize_hook(WGPUBuffer buffer) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferGetSize);
    WebGPUEventInfo eventInfo;
    if (buffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(buffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuBufferGetSize(buffer);
}
static WGPUBufferUsage wgpuBufferGetUsage_hook(WGPUBuffer buffer) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferGetUsage);
    WebGPUEventInfo eventInfo;
    if (buffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(buffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuBufferGetUsage(buffer);
}
static WGPUFuture wgpuBufferMapAsync_hook(WGPUBuffer buffer, WGPUMapMode mode, size_t offset, size_t size, WGPUBufferMapCallbackInfo callbackInfo) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferMapAsync);
    WebGPUEventInfo eventInfo;
    if (buffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(buffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuBufferMapAsync(buffer, mode, offset, size, callbackInfo);
}
static WGPUStatus wgpuBufferReadMappedRange_hook(WGPUBuffer buffer, size_t offset, void * data, size_t size) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferReadMappedRange);
    WebGPUEventInfo eventInfo;
    if (buffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(buffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuBufferReadMappedRange(buffer, offset, data, size);
}
static void wgpuBufferSetLabel_hook(WGPUBuffer buffer, WGPUStringView label) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferSetLabel);
    WebGPUEventInfo eventInfo;
    if (buffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(buffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuBufferSetLabel(buffer, label);
}
static void wgpuBufferUnmap_hook(WGPUBuffer buffer) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferUnmap);
    WebGPUEventInfo eventInfo;
    if (buffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(buffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuBufferUnmap(buffer);
}
static WGPUStatus wgpuBufferWriteMappedRange_hook(WGPUBuffer buffer, size_t offset, void const * data, size_t size) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferWriteMappedRange);
    WebGPUEventInfo eventInfo;
    if (buffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(buffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuBufferWriteMappedRange(buffer, offset, data, size);
}
static void wgpuBufferAddRef_hook(WGPUBuffer buffer) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferAddRef);
    WebGPUEventInfo eventInfo;
    if (buffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(buffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuBufferAddRef(buffer);
}
static void wgpuBufferRelease_hook(WGPUBuffer buffer) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcBufferRelease);
    WebGPUEventInfo eventInfo;
    if (buffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(buffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(buffer);
  
  webgpuHooks.procs.wgpuBufferRelease(buffer);
}
static void wgpuCommandBufferSetLabel_hook(WGPUCommandBuffer commandBuffer, WGPUStringView label) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandBufferSetLabel);
    WebGPUEventInfo eventInfo;
    if (commandBuffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(commandBuffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandBufferSetLabel(commandBuffer, label);
}
static void wgpuCommandBufferAddRef_hook(WGPUCommandBuffer commandBuffer) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandBufferAddRef);
    WebGPUEventInfo eventInfo;
    if (commandBuffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(commandBuffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandBufferAddRef(commandBuffer);
}
static void wgpuCommandBufferRelease_hook(WGPUCommandBuffer commandBuffer) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandBufferRelease);
    WebGPUEventInfo eventInfo;
    if (commandBuffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(commandBuffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(commandBuffer);
  
  webgpuHooks.procs.wgpuCommandBufferRelease(commandBuffer);
}
static WGPUComputePassEncoder wgpuCommandEncoderBeginComputePass_hook(WGPUCommandEncoder commandEncoder, WGPUComputePassDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderBeginComputePass);
    WebGPUEventInfo eventInfo;
    if (commandEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(commandEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuCommandEncoderBeginComputePass(commandEncoder, descriptor);
}
static WGPURenderPassEncoder wgpuCommandEncoderBeginRenderPass_hook(WGPUCommandEncoder commandEncoder, WGPURenderPassDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderBeginRenderPass);
    WebGPUEventInfo eventInfo;
    if (commandEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(commandEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuCommandEncoderBeginRenderPass(commandEncoder, descriptor);
}
static void wgpuCommandEncoderClearBuffer_hook(WGPUCommandEncoder commandEncoder, WGPUBuffer buffer, uint64_t offset, uint64_t size) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderClearBuffer);
    WebGPUEventInfo eventInfo;
    if (commandEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(commandEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (buffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(buffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderClearBuffer(commandEncoder, buffer, offset, size);
}
static void wgpuCommandEncoderCopyBufferToBuffer_hook(WGPUCommandEncoder commandEncoder, WGPUBuffer source, uint64_t sourceOffset, WGPUBuffer destination, uint64_t destinationOffset, uint64_t size) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderCopyBufferToBuffer);
    WebGPUEventInfo eventInfo;
    if (commandEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(commandEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (source) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(source);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (destination) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(destination);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderCopyBufferToBuffer(commandEncoder, source, sourceOffset, destination, destinationOffset, size);
}
static void wgpuCommandEncoderCopyBufferToTexture_hook(WGPUCommandEncoder commandEncoder, WGPUTexelCopyBufferInfo const * source, WGPUTexelCopyTextureInfo const * destination, WGPUExtent3D const * copySize) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderCopyBufferToTexture);
    WebGPUEventInfo eventInfo;
    if (commandEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(commandEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderCopyBufferToTexture(commandEncoder, source, destination, copySize);
}
static void wgpuCommandEncoderCopyTextureToBuffer_hook(WGPUCommandEncoder commandEncoder, WGPUTexelCopyTextureInfo const * source, WGPUTexelCopyBufferInfo const * destination, WGPUExtent3D const * copySize) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderCopyTextureToBuffer);
    WebGPUEventInfo eventInfo;
    if (commandEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(commandEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderCopyTextureToBuffer(commandEncoder, source, destination, copySize);
}
static void wgpuCommandEncoderCopyTextureToTexture_hook(WGPUCommandEncoder commandEncoder, WGPUTexelCopyTextureInfo const * source, WGPUTexelCopyTextureInfo const * destination, WGPUExtent3D const * copySize) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderCopyTextureToTexture);
    WebGPUEventInfo eventInfo;
    if (commandEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(commandEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderCopyTextureToTexture(commandEncoder, source, destination, copySize);
}
static WGPUCommandBuffer wgpuCommandEncoderFinish_hook(WGPUCommandEncoder commandEncoder, WGPUCommandBufferDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderFinish);
    WebGPUEventInfo eventInfo;
    if (commandEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(commandEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuCommandEncoderFinish(commandEncoder, descriptor);
}
static void wgpuCommandEncoderInjectValidationError_hook(WGPUCommandEncoder commandEncoder, WGPUStringView message) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderInjectValidationError);
    WebGPUEventInfo eventInfo;
    if (commandEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(commandEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderInjectValidationError(commandEncoder, message);
}
static void wgpuCommandEncoderInsertDebugMarker_hook(WGPUCommandEncoder commandEncoder, WGPUStringView markerLabel) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderInsertDebugMarker);
    WebGPUEventInfo eventInfo;
    if (commandEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(commandEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderInsertDebugMarker(commandEncoder, markerLabel);
}
static void wgpuCommandEncoderPopDebugGroup_hook(WGPUCommandEncoder commandEncoder) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderPopDebugGroup);
    WebGPUEventInfo eventInfo;
    if (commandEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(commandEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderPopDebugGroup(commandEncoder);
}
static void wgpuCommandEncoderPushDebugGroup_hook(WGPUCommandEncoder commandEncoder, WGPUStringView groupLabel) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderPushDebugGroup);
    WebGPUEventInfo eventInfo;
    if (commandEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(commandEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderPushDebugGroup(commandEncoder, groupLabel);
}
static void wgpuCommandEncoderResolveQuerySet_hook(WGPUCommandEncoder commandEncoder, WGPUQuerySet querySet, uint32_t firstQuery, uint32_t queryCount, WGPUBuffer destination, uint64_t destinationOffset) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderResolveQuerySet);
    WebGPUEventInfo eventInfo;
    if (commandEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(commandEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (querySet) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(querySet);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (destination) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(destination);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderResolveQuerySet(commandEncoder, querySet, firstQuery, queryCount, destination, destinationOffset);
}
static void wgpuCommandEncoderSetLabel_hook(WGPUCommandEncoder commandEncoder, WGPUStringView label) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderSetLabel);
    WebGPUEventInfo eventInfo;
    if (commandEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(commandEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderSetLabel(commandEncoder, label);
}
static void wgpuCommandEncoderWriteBuffer_hook(WGPUCommandEncoder commandEncoder, WGPUBuffer buffer, uint64_t bufferOffset, uint8_t const * data, uint64_t size) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderWriteBuffer);
    WebGPUEventInfo eventInfo;
    if (commandEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(commandEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (buffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(buffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderWriteBuffer(commandEncoder, buffer, bufferOffset, data, size);
}
static void wgpuCommandEncoderWriteTimestamp_hook(WGPUCommandEncoder commandEncoder, WGPUQuerySet querySet, uint32_t queryIndex) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderWriteTimestamp);
    WebGPUEventInfo eventInfo;
    if (commandEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(commandEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (querySet) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(querySet);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderWriteTimestamp(commandEncoder, querySet, queryIndex);
}
static void wgpuCommandEncoderAddRef_hook(WGPUCommandEncoder commandEncoder) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderAddRef);
    WebGPUEventInfo eventInfo;
    if (commandEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(commandEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuCommandEncoderAddRef(commandEncoder);
}
static void wgpuCommandEncoderRelease_hook(WGPUCommandEncoder commandEncoder) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcCommandEncoderRelease);
    WebGPUEventInfo eventInfo;
    if (commandEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(commandEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(commandEncoder);
  
  webgpuHooks.procs.wgpuCommandEncoderRelease(commandEncoder);
}
static void wgpuComputePassEncoderDispatchWorkgroups_hook(WGPUComputePassEncoder computePassEncoder, uint32_t workgroupCountX, uint32_t workgroupCountY, uint32_t workgroupCountZ) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderDispatchWorkgroups);
    WebGPUEventInfo eventInfo;
    if (computePassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(computePassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderDispatchWorkgroups(computePassEncoder, workgroupCountX, workgroupCountY, workgroupCountZ);
}
static void wgpuComputePassEncoderDispatchWorkgroupsIndirect_hook(WGPUComputePassEncoder computePassEncoder, WGPUBuffer indirectBuffer, uint64_t indirectOffset) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderDispatchWorkgroupsIndirect);
    WebGPUEventInfo eventInfo;
    if (computePassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(computePassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (indirectBuffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(indirectBuffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderDispatchWorkgroupsIndirect(computePassEncoder, indirectBuffer, indirectOffset);
}
static void wgpuComputePassEncoderEnd_hook(WGPUComputePassEncoder computePassEncoder) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderEnd);
    WebGPUEventInfo eventInfo;
    if (computePassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(computePassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderEnd(computePassEncoder);
}
static void wgpuComputePassEncoderInsertDebugMarker_hook(WGPUComputePassEncoder computePassEncoder, WGPUStringView markerLabel) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderInsertDebugMarker);
    WebGPUEventInfo eventInfo;
    if (computePassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(computePassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderInsertDebugMarker(computePassEncoder, markerLabel);
}
static void wgpuComputePassEncoderPopDebugGroup_hook(WGPUComputePassEncoder computePassEncoder) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderPopDebugGroup);
    WebGPUEventInfo eventInfo;
    if (computePassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(computePassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderPopDebugGroup(computePassEncoder);
}
static void wgpuComputePassEncoderPushDebugGroup_hook(WGPUComputePassEncoder computePassEncoder, WGPUStringView groupLabel) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderPushDebugGroup);
    WebGPUEventInfo eventInfo;
    if (computePassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(computePassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderPushDebugGroup(computePassEncoder, groupLabel);
}
static void wgpuComputePassEncoderSetBindGroup_hook(WGPUComputePassEncoder computePassEncoder, uint32_t groupIndex, WGPUBindGroup group, size_t dynamicOffsetCount, uint32_t const * dynamicOffsets) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderSetBindGroup);
    WebGPUEventInfo eventInfo;
    if (computePassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(computePassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (group) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(group);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderSetBindGroup(computePassEncoder, groupIndex, group, dynamicOffsetCount, dynamicOffsets);
}
static void wgpuComputePassEncoderSetImmediateData_hook(WGPUComputePassEncoder computePassEncoder, uint32_t offset, void const * data, size_t size) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderSetImmediateData);
    WebGPUEventInfo eventInfo;
    if (computePassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(computePassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderSetImmediateData(computePassEncoder, offset, data, size);
}
static void wgpuComputePassEncoderSetLabel_hook(WGPUComputePassEncoder computePassEncoder, WGPUStringView label) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderSetLabel);
    WebGPUEventInfo eventInfo;
    if (computePassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(computePassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderSetLabel(computePassEncoder, label);
}
static void wgpuComputePassEncoderSetPipeline_hook(WGPUComputePassEncoder computePassEncoder, WGPUComputePipeline pipeline) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderSetPipeline);
    WebGPUEventInfo eventInfo;
    if (computePassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(computePassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (pipeline) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(pipeline);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderSetPipeline(computePassEncoder, pipeline);
}
static void wgpuComputePassEncoderWriteTimestamp_hook(WGPUComputePassEncoder computePassEncoder, WGPUQuerySet querySet, uint32_t queryIndex) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderWriteTimestamp);
    WebGPUEventInfo eventInfo;
    if (computePassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(computePassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (querySet) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(querySet);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderWriteTimestamp(computePassEncoder, querySet, queryIndex);
}
static void wgpuComputePassEncoderAddRef_hook(WGPUComputePassEncoder computePassEncoder) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderAddRef);
    WebGPUEventInfo eventInfo;
    if (computePassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(computePassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePassEncoderAddRef(computePassEncoder);
}
static void wgpuComputePassEncoderRelease_hook(WGPUComputePassEncoder computePassEncoder) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePassEncoderRelease);
    WebGPUEventInfo eventInfo;
    if (computePassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(computePassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(computePassEncoder);
  
  webgpuHooks.procs.wgpuComputePassEncoderRelease(computePassEncoder);
}
static WGPUBindGroupLayout wgpuComputePipelineGetBindGroupLayout_hook(WGPUComputePipeline computePipeline, uint32_t groupIndex) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePipelineGetBindGroupLayout);
    WebGPUEventInfo eventInfo;
    if (computePipeline) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(computePipeline);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuComputePipelineGetBindGroupLayout(computePipeline, groupIndex);
}
static void wgpuComputePipelineSetLabel_hook(WGPUComputePipeline computePipeline, WGPUStringView label) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePipelineSetLabel);
    WebGPUEventInfo eventInfo;
    if (computePipeline) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(computePipeline);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePipelineSetLabel(computePipeline, label);
}
static void wgpuComputePipelineAddRef_hook(WGPUComputePipeline computePipeline) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePipelineAddRef);
    WebGPUEventInfo eventInfo;
    if (computePipeline) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(computePipeline);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuComputePipelineAddRef(computePipeline);
}
static void wgpuComputePipelineRelease_hook(WGPUComputePipeline computePipeline) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcComputePipelineRelease);
    WebGPUEventInfo eventInfo;
    if (computePipeline) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(computePipeline);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(computePipeline);
  
  webgpuHooks.procs.wgpuComputePipelineRelease(computePipeline);
}
static WGPUBindGroup wgpuDeviceCreateBindGroup_hook(WGPUDevice device, WGPUBindGroupDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateBindGroup);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  WGPUBindGroup bindgroup = webgpuHooks.procs.wgpuDeviceCreateBindGroup(device, descriptor);
  // Register resource
  ResourceId resourceId = ResourceIDGen::GetNewUniqueID();
  auto* res = webgpuHooks.capturer.GetResourceManager();
  auto* record = res->AddResourceRecord(resourceId);
  res->SetResourceHandle(resourceId, bindgroup);
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ResBindGroup);
    SERIALISE_ELEMENT(resourceId);
    SERIALISE_ELEMENT(*descriptor);
    record->AddChunk(scope.Get());
  }
  
  if (RenderDoc::Inst().IsFrameCapturing())
  {
    res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
  }
  
  return bindgroup;
}
static WGPUBindGroupLayout wgpuDeviceCreateBindGroupLayout_hook(WGPUDevice device, WGPUBindGroupLayoutDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateBindGroupLayout);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  WGPUBindGroupLayout bindgrouplayout = webgpuHooks.procs.wgpuDeviceCreateBindGroupLayout(device, descriptor);
  // Register resource
  ResourceId resourceId = ResourceIDGen::GetNewUniqueID();
  auto* res = webgpuHooks.capturer.GetResourceManager();
  auto* record = res->AddResourceRecord(resourceId);
  res->SetResourceHandle(resourceId, bindgrouplayout);
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ResBindGroupLayout);
    SERIALISE_ELEMENT(resourceId);
    SERIALISE_ELEMENT(*descriptor);
    record->AddChunk(scope.Get());
  }
  
  if (RenderDoc::Inst().IsFrameCapturing())
  {
    res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
  }
  
  return bindgrouplayout;
}
static WGPUBuffer wgpuDeviceCreateBuffer_hook(WGPUDevice device, WGPUBufferDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateBuffer);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  WGPUBuffer buffer = webgpuHooks.procs.wgpuDeviceCreateBuffer(device, descriptor);
  // Register resource
  ResourceId resourceId = ResourceIDGen::GetNewUniqueID();
  auto* res = webgpuHooks.capturer.GetResourceManager();
  auto* record = res->AddResourceRecord(resourceId);
  res->SetResourceHandle(resourceId, buffer);
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ResBuffer);
    SERIALISE_ELEMENT(resourceId);
    SERIALISE_ELEMENT(*descriptor);
    record->AddChunk(scope.Get());
  }
  
  if (RenderDoc::Inst().IsFrameCapturing())
  {
    res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
  }
  
  return buffer;
}
static WGPUCommandEncoder wgpuDeviceCreateCommandEncoder_hook(WGPUDevice device, WGPUCommandEncoderDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateCommandEncoder);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  WGPUCommandEncoder commandencoder = webgpuHooks.procs.wgpuDeviceCreateCommandEncoder(device, descriptor);
  // Register resource
  ResourceId resourceId = ResourceIDGen::GetNewUniqueID();
  auto* res = webgpuHooks.capturer.GetResourceManager();
  auto* record = res->AddResourceRecord(resourceId);
  res->SetResourceHandle(resourceId, commandencoder);
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ResCommandEncoder);
    SERIALISE_ELEMENT(resourceId);
    SERIALISE_ELEMENT(*descriptor);
    record->AddChunk(scope.Get());
  }
  
  if (RenderDoc::Inst().IsFrameCapturing())
  {
    res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
  }
  
  return commandencoder;
}
static WGPUComputePipeline wgpuDeviceCreateComputePipeline_hook(WGPUDevice device, WGPUComputePipelineDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateComputePipeline);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  WGPUComputePipeline computepipeline = webgpuHooks.procs.wgpuDeviceCreateComputePipeline(device, descriptor);
  // Register resource
  ResourceId resourceId = ResourceIDGen::GetNewUniqueID();
  auto* res = webgpuHooks.capturer.GetResourceManager();
  auto* record = res->AddResourceRecord(resourceId);
  res->SetResourceHandle(resourceId, computepipeline);
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ResComputePipeline);
    SERIALISE_ELEMENT(resourceId);
    SERIALISE_ELEMENT(*descriptor);
    record->AddChunk(scope.Get());
  }
  
  if (RenderDoc::Inst().IsFrameCapturing())
  {
    res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
  }
  
  return computepipeline;
}
static WGPUFuture wgpuDeviceCreateComputePipelineAsync_hook(WGPUDevice device, WGPUComputePipelineDescriptor const * descriptor, WGPUCreateComputePipelineAsyncCallbackInfo callbackInfo) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateComputePipelineAsync);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateComputePipelineAsync(device, descriptor, callbackInfo);
}
static WGPUBuffer wgpuDeviceCreateErrorBuffer_hook(WGPUDevice device, WGPUBufferDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateErrorBuffer);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateErrorBuffer(device, descriptor);
}
static WGPUExternalTexture wgpuDeviceCreateErrorExternalTexture_hook(WGPUDevice device) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateErrorExternalTexture);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateErrorExternalTexture(device);
}
static WGPUShaderModule wgpuDeviceCreateErrorShaderModule_hook(WGPUDevice device, WGPUShaderModuleDescriptor const * descriptor, WGPUStringView errorMessage) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateErrorShaderModule);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateErrorShaderModule(device, descriptor, errorMessage);
}
static WGPUTexture wgpuDeviceCreateErrorTexture_hook(WGPUDevice device, WGPUTextureDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateErrorTexture);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateErrorTexture(device, descriptor);
}
static WGPUExternalTexture wgpuDeviceCreateExternalTexture_hook(WGPUDevice device, WGPUExternalTextureDescriptor const * externalTextureDescriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateExternalTexture);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  WGPUExternalTexture externaltexture = webgpuHooks.procs.wgpuDeviceCreateExternalTexture(device, externalTextureDescriptor);
  // Register resource
  ResourceId resourceId = ResourceIDGen::GetNewUniqueID();
  auto* res = webgpuHooks.capturer.GetResourceManager();
  auto* record = res->AddResourceRecord(resourceId);
  res->SetResourceHandle(resourceId, externaltexture);
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ResExternalTexture);
    SERIALISE_ELEMENT(resourceId);
    SERIALISE_ELEMENT(*externalTextureDescriptor);
    record->AddChunk(scope.Get());
  }
  
  if (RenderDoc::Inst().IsFrameCapturing())
  {
    res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
  }
  
  return externaltexture;
}
static WGPUPipelineLayout wgpuDeviceCreatePipelineLayout_hook(WGPUDevice device, WGPUPipelineLayoutDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreatePipelineLayout);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  WGPUPipelineLayout pipelinelayout = webgpuHooks.procs.wgpuDeviceCreatePipelineLayout(device, descriptor);
  // Register resource
  ResourceId resourceId = ResourceIDGen::GetNewUniqueID();
  auto* res = webgpuHooks.capturer.GetResourceManager();
  auto* record = res->AddResourceRecord(resourceId);
  res->SetResourceHandle(resourceId, pipelinelayout);
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ResPipelineLayout);
    SERIALISE_ELEMENT(resourceId);
    SERIALISE_ELEMENT(*descriptor);
    record->AddChunk(scope.Get());
  }
  
  if (RenderDoc::Inst().IsFrameCapturing())
  {
    res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
  }
  
  return pipelinelayout;
}
static WGPUQuerySet wgpuDeviceCreateQuerySet_hook(WGPUDevice device, WGPUQuerySetDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateQuerySet);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  WGPUQuerySet queryset = webgpuHooks.procs.wgpuDeviceCreateQuerySet(device, descriptor);
  // Register resource
  ResourceId resourceId = ResourceIDGen::GetNewUniqueID();
  auto* res = webgpuHooks.capturer.GetResourceManager();
  auto* record = res->AddResourceRecord(resourceId);
  res->SetResourceHandle(resourceId, queryset);
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ResQuerySet);
    SERIALISE_ELEMENT(resourceId);
    SERIALISE_ELEMENT(*descriptor);
    record->AddChunk(scope.Get());
  }
  
  if (RenderDoc::Inst().IsFrameCapturing())
  {
    res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
  }
  
  return queryset;
}
static WGPURenderBundleEncoder wgpuDeviceCreateRenderBundleEncoder_hook(WGPUDevice device, WGPURenderBundleEncoderDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateRenderBundleEncoder);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  WGPURenderBundleEncoder renderbundleencoder = webgpuHooks.procs.wgpuDeviceCreateRenderBundleEncoder(device, descriptor);
  // Register resource
  ResourceId resourceId = ResourceIDGen::GetNewUniqueID();
  auto* res = webgpuHooks.capturer.GetResourceManager();
  auto* record = res->AddResourceRecord(resourceId);
  res->SetResourceHandle(resourceId, renderbundleencoder);
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ResRenderBundleEncoder);
    SERIALISE_ELEMENT(resourceId);
    SERIALISE_ELEMENT(*descriptor);
    record->AddChunk(scope.Get());
  }
  
  if (RenderDoc::Inst().IsFrameCapturing())
  {
    res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
  }
  
  return renderbundleencoder;
}
static WGPURenderPipeline wgpuDeviceCreateRenderPipeline_hook(WGPUDevice device, WGPURenderPipelineDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateRenderPipeline);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  WGPURenderPipeline renderpipeline = webgpuHooks.procs.wgpuDeviceCreateRenderPipeline(device, descriptor);
  // Register resource
  ResourceId resourceId = ResourceIDGen::GetNewUniqueID();
  auto* res = webgpuHooks.capturer.GetResourceManager();
  auto* record = res->AddResourceRecord(resourceId);
  res->SetResourceHandle(resourceId, renderpipeline);
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ResRenderPipeline);
    SERIALISE_ELEMENT(resourceId);
    SERIALISE_ELEMENT(*descriptor);
    record->AddChunk(scope.Get());
  }
  
  if (RenderDoc::Inst().IsFrameCapturing())
  {
    res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
  }
  
  return renderpipeline;
}
static WGPUFuture wgpuDeviceCreateRenderPipelineAsync_hook(WGPUDevice device, WGPURenderPipelineDescriptor const * descriptor, WGPUCreateRenderPipelineAsyncCallbackInfo callbackInfo) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateRenderPipelineAsync);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceCreateRenderPipelineAsync(device, descriptor, callbackInfo);
}
static WGPUSampler wgpuDeviceCreateSampler_hook(WGPUDevice device, WGPUSamplerDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateSampler);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  WGPUSampler sampler = webgpuHooks.procs.wgpuDeviceCreateSampler(device, descriptor);
  // Register resource
  ResourceId resourceId = ResourceIDGen::GetNewUniqueID();
  auto* res = webgpuHooks.capturer.GetResourceManager();
  auto* record = res->AddResourceRecord(resourceId);
  res->SetResourceHandle(resourceId, sampler);
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ResSampler);
    SERIALISE_ELEMENT(resourceId);
    SERIALISE_ELEMENT(*descriptor);
    record->AddChunk(scope.Get());
  }
  
  if (RenderDoc::Inst().IsFrameCapturing())
  {
    res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
  }
  
  return sampler;
}
static WGPUShaderModule wgpuDeviceCreateShaderModule_hook(WGPUDevice device, WGPUShaderModuleDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateShaderModule);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  WGPUShaderModule shadermodule = webgpuHooks.procs.wgpuDeviceCreateShaderModule(device, descriptor);
  // Register resource
  ResourceId resourceId = ResourceIDGen::GetNewUniqueID();
  auto* res = webgpuHooks.capturer.GetResourceManager();
  auto* record = res->AddResourceRecord(resourceId);
  res->SetResourceHandle(resourceId, shadermodule);
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ResShaderModule);
    SERIALISE_ELEMENT(resourceId);
    SERIALISE_ELEMENT(*descriptor);
    record->AddChunk(scope.Get());
  }
  
  if (RenderDoc::Inst().IsFrameCapturing())
  {
    res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
  }
  
  return shadermodule;
}
static WGPUTexture wgpuDeviceCreateTexture_hook(WGPUDevice device, WGPUTextureDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceCreateTexture);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  WGPUTexture texture = webgpuHooks.procs.wgpuDeviceCreateTexture(device, descriptor);
  // Register resource
  ResourceId resourceId = ResourceIDGen::GetNewUniqueID();
  auto* res = webgpuHooks.capturer.GetResourceManager();
  auto* record = res->AddResourceRecord(resourceId);
  res->SetResourceHandle(resourceId, texture);
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ResTexture);
    SERIALISE_ELEMENT(resourceId);
    SERIALISE_ELEMENT(*descriptor);
    record->AddChunk(scope.Get());
  }
  
  if (RenderDoc::Inst().IsFrameCapturing())
  {
    res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
  }
  
  return texture;
}
static void wgpuDeviceDestroy_hook(WGPUDevice device) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceDestroy);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuDeviceDestroy(device);
}
static void wgpuDeviceForceLoss_hook(WGPUDevice device, WGPUDeviceLostReason type, WGPUStringView message) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceForceLoss);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuDeviceForceLoss(device, type, message);
}
static WGPUStatus wgpuDeviceGetAHardwareBufferProperties_hook(WGPUDevice device, void * handle, WGPUAHardwareBufferProperties * properties) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceGetAHardwareBufferProperties);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceGetAHardwareBufferProperties(device, handle, properties);
}
static WGPUAdapter wgpuDeviceGetAdapter_hook(WGPUDevice device) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceGetAdapter);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceGetAdapter(device);
}
static WGPUStatus wgpuDeviceGetAdapterInfo_hook(WGPUDevice device, WGPUAdapterInfo * adapterInfo) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceGetAdapterInfo);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceGetAdapterInfo(device, adapterInfo);
}
static void wgpuDeviceGetFeatures_hook(WGPUDevice device, WGPUSupportedFeatures * features) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceGetFeatures);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuDeviceGetFeatures(device, features);
}
static WGPUStatus wgpuDeviceGetLimits_hook(WGPUDevice device, WGPULimits * limits) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceGetLimits);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceGetLimits(device, limits);
}
static WGPUFuture wgpuDeviceGetLostFuture_hook(WGPUDevice device) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceGetLostFuture);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceGetLostFuture(device);
}
static WGPUQueue wgpuDeviceGetQueue_hook(WGPUDevice device) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceGetQueue);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceGetQueue(device);
}
static WGPUBool wgpuDeviceHasFeature_hook(WGPUDevice device, WGPUFeatureName feature) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceHasFeature);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceHasFeature(device, feature);
}
static WGPUSharedBufferMemory wgpuDeviceImportSharedBufferMemory_hook(WGPUDevice device, WGPUSharedBufferMemoryDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceImportSharedBufferMemory);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceImportSharedBufferMemory(device, descriptor);
}
static WGPUSharedFence wgpuDeviceImportSharedFence_hook(WGPUDevice device, WGPUSharedFenceDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceImportSharedFence);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceImportSharedFence(device, descriptor);
}
static WGPUSharedTextureMemory wgpuDeviceImportSharedTextureMemory_hook(WGPUDevice device, WGPUSharedTextureMemoryDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceImportSharedTextureMemory);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDeviceImportSharedTextureMemory(device, descriptor);
}
static void wgpuDeviceInjectError_hook(WGPUDevice device, WGPUErrorType type, WGPUStringView message) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceInjectError);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuDeviceInjectError(device, type, message);
}
static WGPUFuture wgpuDevicePopErrorScope_hook(WGPUDevice device, WGPUPopErrorScopeCallbackInfo callbackInfo) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDevicePopErrorScope);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuDevicePopErrorScope(device, callbackInfo);
}
static void wgpuDevicePushErrorScope_hook(WGPUDevice device, WGPUErrorFilter filter) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDevicePushErrorScope);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuDevicePushErrorScope(device, filter);
}
static void wgpuDeviceSetLabel_hook(WGPUDevice device, WGPUStringView label) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceSetLabel);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuDeviceSetLabel(device, label);
}
static void wgpuDeviceSetLoggingCallback_hook(WGPUDevice device, WGPULoggingCallbackInfo callbackInfo) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceSetLoggingCallback);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuDeviceSetLoggingCallback(device, callbackInfo);
}
static void wgpuDeviceTick_hook(WGPUDevice device) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceTick);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuDeviceTick(device);
}
static void wgpuDeviceValidateTextureDescriptor_hook(WGPUDevice device, WGPUTextureDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceValidateTextureDescriptor);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuDeviceValidateTextureDescriptor(device, descriptor);
}
static void wgpuDeviceAddRef_hook(WGPUDevice device) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceAddRef);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuDeviceAddRef(device);
}
static void wgpuDeviceRelease_hook(WGPUDevice device) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcDeviceRelease);
    WebGPUEventInfo eventInfo;
    if (device) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(device);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(device);
  
  webgpuHooks.procs.wgpuDeviceRelease(device);
}
static void wgpuExternalTextureDestroy_hook(WGPUExternalTexture externalTexture) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcExternalTextureDestroy);
    WebGPUEventInfo eventInfo;
    if (externalTexture) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(externalTexture);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuExternalTextureDestroy(externalTexture);
}
static void wgpuExternalTextureExpire_hook(WGPUExternalTexture externalTexture) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcExternalTextureExpire);
    WebGPUEventInfo eventInfo;
    if (externalTexture) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(externalTexture);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuExternalTextureExpire(externalTexture);
}
static void wgpuExternalTextureRefresh_hook(WGPUExternalTexture externalTexture) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcExternalTextureRefresh);
    WebGPUEventInfo eventInfo;
    if (externalTexture) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(externalTexture);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuExternalTextureRefresh(externalTexture);
}
static void wgpuExternalTextureSetLabel_hook(WGPUExternalTexture externalTexture, WGPUStringView label) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcExternalTextureSetLabel);
    WebGPUEventInfo eventInfo;
    if (externalTexture) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(externalTexture);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuExternalTextureSetLabel(externalTexture, label);
}
static void wgpuExternalTextureAddRef_hook(WGPUExternalTexture externalTexture) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcExternalTextureAddRef);
    WebGPUEventInfo eventInfo;
    if (externalTexture) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(externalTexture);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuExternalTextureAddRef(externalTexture);
}
static void wgpuExternalTextureRelease_hook(WGPUExternalTexture externalTexture) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcExternalTextureRelease);
    WebGPUEventInfo eventInfo;
    if (externalTexture) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(externalTexture);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(externalTexture);
  
  webgpuHooks.procs.wgpuExternalTextureRelease(externalTexture);
}
static WGPUSurface wgpuInstanceCreateSurface_hook(WGPUInstance instance, WGPUSurfaceDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcInstanceCreateSurface);
    WebGPUEventInfo eventInfo;
    if (instance) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(instance);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuInstanceCreateSurface(instance, descriptor);
}
static WGPUStatus wgpuInstanceGetWGSLLanguageFeatures_hook(WGPUInstance instance, WGPUSupportedWGSLLanguageFeatures * features) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcInstanceGetWGSLLanguageFeatures);
    WebGPUEventInfo eventInfo;
    if (instance) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(instance);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuInstanceGetWGSLLanguageFeatures(instance, features);
}
static WGPUBool wgpuInstanceHasWGSLLanguageFeature_hook(WGPUInstance instance, WGPUWGSLLanguageFeatureName feature) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcInstanceHasWGSLLanguageFeature);
    WebGPUEventInfo eventInfo;
    if (instance) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(instance);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuInstanceHasWGSLLanguageFeature(instance, feature);
}
static void wgpuInstanceProcessEvents_hook(WGPUInstance instance) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcInstanceProcessEvents);
    WebGPUEventInfo eventInfo;
    if (instance) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(instance);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuInstanceProcessEvents(instance);
}
static WGPUFuture wgpuInstanceRequestAdapter_hook(WGPUInstance instance, WGPURequestAdapterOptions const * options, WGPURequestAdapterCallbackInfo callbackInfo) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcInstanceRequestAdapter);
    WebGPUEventInfo eventInfo;
    if (instance) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(instance);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuInstanceRequestAdapter(instance, options, callbackInfo);
}
static WGPUWaitStatus wgpuInstanceWaitAny_hook(WGPUInstance instance, size_t futureCount, WGPUFutureWaitInfo * futures, uint64_t timeoutNS) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcInstanceWaitAny);
    WebGPUEventInfo eventInfo;
    if (instance) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(instance);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuInstanceWaitAny(instance, futureCount, futures, timeoutNS);
}
static void wgpuInstanceAddRef_hook(WGPUInstance instance) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcInstanceAddRef);
    WebGPUEventInfo eventInfo;
    if (instance) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(instance);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuInstanceAddRef(instance);
}
static void wgpuPipelineLayoutSetLabel_hook(WGPUPipelineLayout pipelineLayout, WGPUStringView label) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcPipelineLayoutSetLabel);
    WebGPUEventInfo eventInfo;
    if (pipelineLayout) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(pipelineLayout);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuPipelineLayoutSetLabel(pipelineLayout, label);
}
static void wgpuPipelineLayoutAddRef_hook(WGPUPipelineLayout pipelineLayout) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcPipelineLayoutAddRef);
    WebGPUEventInfo eventInfo;
    if (pipelineLayout) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(pipelineLayout);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuPipelineLayoutAddRef(pipelineLayout);
}
static void wgpuPipelineLayoutRelease_hook(WGPUPipelineLayout pipelineLayout) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcPipelineLayoutRelease);
    WebGPUEventInfo eventInfo;
    if (pipelineLayout) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(pipelineLayout);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(pipelineLayout);
  
  webgpuHooks.procs.wgpuPipelineLayoutRelease(pipelineLayout);
}
static void wgpuQuerySetDestroy_hook(WGPUQuerySet querySet) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQuerySetDestroy);
    WebGPUEventInfo eventInfo;
    if (querySet) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(querySet);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuQuerySetDestroy(querySet);
}
static uint32_t wgpuQuerySetGetCount_hook(WGPUQuerySet querySet) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQuerySetGetCount);
    WebGPUEventInfo eventInfo;
    if (querySet) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(querySet);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuQuerySetGetCount(querySet);
}
static WGPUQueryType wgpuQuerySetGetType_hook(WGPUQuerySet querySet) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQuerySetGetType);
    WebGPUEventInfo eventInfo;
    if (querySet) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(querySet);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuQuerySetGetType(querySet);
}
static void wgpuQuerySetSetLabel_hook(WGPUQuerySet querySet, WGPUStringView label) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQuerySetSetLabel);
    WebGPUEventInfo eventInfo;
    if (querySet) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(querySet);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuQuerySetSetLabel(querySet, label);
}
static void wgpuQuerySetAddRef_hook(WGPUQuerySet querySet) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQuerySetAddRef);
    WebGPUEventInfo eventInfo;
    if (querySet) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(querySet);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuQuerySetAddRef(querySet);
}
static void wgpuQuerySetRelease_hook(WGPUQuerySet querySet) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQuerySetRelease);
    WebGPUEventInfo eventInfo;
    if (querySet) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(querySet);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(querySet);
  
  webgpuHooks.procs.wgpuQuerySetRelease(querySet);
}
static void wgpuQueueCopyExternalTextureForBrowser_hook(WGPUQueue queue, WGPUImageCopyExternalTexture const * source, WGPUTexelCopyTextureInfo const * destination, WGPUExtent3D const * copySize, WGPUCopyTextureForBrowserOptions const * options) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQueueCopyExternalTextureForBrowser);
    WebGPUEventInfo eventInfo;
    if (queue) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(queue);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuQueueCopyExternalTextureForBrowser(queue, source, destination, copySize, options);
}
static void wgpuQueueCopyTextureForBrowser_hook(WGPUQueue queue, WGPUTexelCopyTextureInfo const * source, WGPUTexelCopyTextureInfo const * destination, WGPUExtent3D const * copySize, WGPUCopyTextureForBrowserOptions const * options) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQueueCopyTextureForBrowser);
    WebGPUEventInfo eventInfo;
    if (queue) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(queue);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuQueueCopyTextureForBrowser(queue, source, destination, copySize, options);
}
static WGPUFuture wgpuQueueOnSubmittedWorkDone_hook(WGPUQueue queue, WGPUQueueWorkDoneCallbackInfo callbackInfo) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQueueOnSubmittedWorkDone);
    WebGPUEventInfo eventInfo;
    if (queue) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(queue);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuQueueOnSubmittedWorkDone(queue, callbackInfo);
}
static void wgpuQueueSetLabel_hook(WGPUQueue queue, WGPUStringView label) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQueueSetLabel);
    WebGPUEventInfo eventInfo;
    if (queue) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(queue);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuQueueSetLabel(queue, label);
}
static void wgpuQueueSubmit_hook(WGPUQueue queue, size_t commandCount, WGPUCommandBuffer const * commands) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQueueSubmit);
    WebGPUEventInfo eventInfo;
    if (queue) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(queue);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuQueueSubmit(queue, commandCount, commands);
}
static void wgpuQueueWriteBuffer_hook(WGPUQueue queue, WGPUBuffer buffer, uint64_t bufferOffset, void const * data, size_t size) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQueueWriteBuffer);
    WebGPUEventInfo eventInfo;
    if (queue) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(queue);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (buffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(buffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuQueueWriteBuffer(queue, buffer, bufferOffset, data, size);
}
static void wgpuQueueWriteTexture_hook(WGPUQueue queue, WGPUTexelCopyTextureInfo const * destination, void const * data, size_t dataSize, WGPUTexelCopyBufferLayout const * dataLayout, WGPUExtent3D const * writeSize) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQueueWriteTexture);
    WebGPUEventInfo eventInfo;
    if (queue) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(queue);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuQueueWriteTexture(queue, destination, data, dataSize, dataLayout, writeSize);
}
static void wgpuQueueAddRef_hook(WGPUQueue queue) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQueueAddRef);
    WebGPUEventInfo eventInfo;
    if (queue) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(queue);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuQueueAddRef(queue);
}
static void wgpuQueueRelease_hook(WGPUQueue queue) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcQueueRelease);
    WebGPUEventInfo eventInfo;
    if (queue) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(queue);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(queue);
  
  webgpuHooks.procs.wgpuQueueRelease(queue);
}
static void wgpuRenderBundleSetLabel_hook(WGPURenderBundle renderBundle, WGPUStringView label) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleSetLabel);
    WebGPUEventInfo eventInfo;
    if (renderBundle) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderBundle);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleSetLabel(renderBundle, label);
}
static void wgpuRenderBundleAddRef_hook(WGPURenderBundle renderBundle) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleAddRef);
    WebGPUEventInfo eventInfo;
    if (renderBundle) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderBundle);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleAddRef(renderBundle);
}
static void wgpuRenderBundleRelease_hook(WGPURenderBundle renderBundle) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleRelease);
    WebGPUEventInfo eventInfo;
    if (renderBundle) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderBundle);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(renderBundle);
  
  webgpuHooks.procs.wgpuRenderBundleRelease(renderBundle);
}
static void wgpuRenderBundleEncoderDraw_hook(WGPURenderBundleEncoder renderBundleEncoder, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderDraw);
    WebGPUEventInfo eventInfo;
    if (renderBundleEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderBundleEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderDraw(renderBundleEncoder, vertexCount, instanceCount, firstVertex, firstInstance);
}
static void wgpuRenderBundleEncoderDrawIndexed_hook(WGPURenderBundleEncoder renderBundleEncoder, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t baseVertex, uint32_t firstInstance) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderDrawIndexed);
    WebGPUEventInfo eventInfo;
    if (renderBundleEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderBundleEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderDrawIndexed(renderBundleEncoder, indexCount, instanceCount, firstIndex, baseVertex, firstInstance);
}
static void wgpuRenderBundleEncoderDrawIndexedIndirect_hook(WGPURenderBundleEncoder renderBundleEncoder, WGPUBuffer indirectBuffer, uint64_t indirectOffset) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderDrawIndexedIndirect);
    WebGPUEventInfo eventInfo;
    if (renderBundleEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderBundleEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (indirectBuffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(indirectBuffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderDrawIndexedIndirect(renderBundleEncoder, indirectBuffer, indirectOffset);
}
static void wgpuRenderBundleEncoderDrawIndirect_hook(WGPURenderBundleEncoder renderBundleEncoder, WGPUBuffer indirectBuffer, uint64_t indirectOffset) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderDrawIndirect);
    WebGPUEventInfo eventInfo;
    if (renderBundleEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderBundleEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (indirectBuffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(indirectBuffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderDrawIndirect(renderBundleEncoder, indirectBuffer, indirectOffset);
}
static WGPURenderBundle wgpuRenderBundleEncoderFinish_hook(WGPURenderBundleEncoder renderBundleEncoder, WGPURenderBundleDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderFinish);
    WebGPUEventInfo eventInfo;
    if (renderBundleEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderBundleEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuRenderBundleEncoderFinish(renderBundleEncoder, descriptor);
}
static void wgpuRenderBundleEncoderInsertDebugMarker_hook(WGPURenderBundleEncoder renderBundleEncoder, WGPUStringView markerLabel) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderInsertDebugMarker);
    WebGPUEventInfo eventInfo;
    if (renderBundleEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderBundleEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderInsertDebugMarker(renderBundleEncoder, markerLabel);
}
static void wgpuRenderBundleEncoderPopDebugGroup_hook(WGPURenderBundleEncoder renderBundleEncoder) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderPopDebugGroup);
    WebGPUEventInfo eventInfo;
    if (renderBundleEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderBundleEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderPopDebugGroup(renderBundleEncoder);
}
static void wgpuRenderBundleEncoderPushDebugGroup_hook(WGPURenderBundleEncoder renderBundleEncoder, WGPUStringView groupLabel) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderPushDebugGroup);
    WebGPUEventInfo eventInfo;
    if (renderBundleEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderBundleEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderPushDebugGroup(renderBundleEncoder, groupLabel);
}
static void wgpuRenderBundleEncoderSetBindGroup_hook(WGPURenderBundleEncoder renderBundleEncoder, uint32_t groupIndex, WGPUBindGroup group, size_t dynamicOffsetCount, uint32_t const * dynamicOffsets) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderSetBindGroup);
    WebGPUEventInfo eventInfo;
    if (renderBundleEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderBundleEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (group) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(group);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderSetBindGroup(renderBundleEncoder, groupIndex, group, dynamicOffsetCount, dynamicOffsets);
}
static void wgpuRenderBundleEncoderSetImmediateData_hook(WGPURenderBundleEncoder renderBundleEncoder, uint32_t offset, void const * data, size_t size) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderSetImmediateData);
    WebGPUEventInfo eventInfo;
    if (renderBundleEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderBundleEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderSetImmediateData(renderBundleEncoder, offset, data, size);
}
static void wgpuRenderBundleEncoderSetIndexBuffer_hook(WGPURenderBundleEncoder renderBundleEncoder, WGPUBuffer buffer, WGPUIndexFormat format, uint64_t offset, uint64_t size) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderSetIndexBuffer);
    WebGPUEventInfo eventInfo;
    if (renderBundleEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderBundleEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (buffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(buffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderSetIndexBuffer(renderBundleEncoder, buffer, format, offset, size);
}
static void wgpuRenderBundleEncoderSetLabel_hook(WGPURenderBundleEncoder renderBundleEncoder, WGPUStringView label) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderSetLabel);
    WebGPUEventInfo eventInfo;
    if (renderBundleEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderBundleEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderSetLabel(renderBundleEncoder, label);
}
static void wgpuRenderBundleEncoderSetPipeline_hook(WGPURenderBundleEncoder renderBundleEncoder, WGPURenderPipeline pipeline) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderSetPipeline);
    WebGPUEventInfo eventInfo;
    if (renderBundleEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderBundleEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (pipeline) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(pipeline);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderSetPipeline(renderBundleEncoder, pipeline);
}
static void wgpuRenderBundleEncoderSetVertexBuffer_hook(WGPURenderBundleEncoder renderBundleEncoder, uint32_t slot, WGPUBuffer buffer, uint64_t offset, uint64_t size) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderSetVertexBuffer);
    WebGPUEventInfo eventInfo;
    if (renderBundleEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderBundleEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (buffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(buffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderSetVertexBuffer(renderBundleEncoder, slot, buffer, offset, size);
}
static void wgpuRenderBundleEncoderAddRef_hook(WGPURenderBundleEncoder renderBundleEncoder) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderAddRef);
    WebGPUEventInfo eventInfo;
    if (renderBundleEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderBundleEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderBundleEncoderAddRef(renderBundleEncoder);
}
static void wgpuRenderBundleEncoderRelease_hook(WGPURenderBundleEncoder renderBundleEncoder) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderBundleEncoderRelease);
    WebGPUEventInfo eventInfo;
    if (renderBundleEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderBundleEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(renderBundleEncoder);
  
  webgpuHooks.procs.wgpuRenderBundleEncoderRelease(renderBundleEncoder);
}
static void wgpuRenderPassEncoderBeginOcclusionQuery_hook(WGPURenderPassEncoder renderPassEncoder, uint32_t queryIndex) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderBeginOcclusionQuery);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderBeginOcclusionQuery(renderPassEncoder, queryIndex);
}
static void wgpuRenderPassEncoderDraw_hook(WGPURenderPassEncoder renderPassEncoder, uint32_t vertexCount, uint32_t instanceCount, uint32_t firstVertex, uint32_t firstInstance) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderDraw);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderDraw(renderPassEncoder, vertexCount, instanceCount, firstVertex, firstInstance);
}
static void wgpuRenderPassEncoderDrawIndexed_hook(WGPURenderPassEncoder renderPassEncoder, uint32_t indexCount, uint32_t instanceCount, uint32_t firstIndex, int32_t baseVertex, uint32_t firstInstance) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderDrawIndexed);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderDrawIndexed(renderPassEncoder, indexCount, instanceCount, firstIndex, baseVertex, firstInstance);
}
static void wgpuRenderPassEncoderDrawIndexedIndirect_hook(WGPURenderPassEncoder renderPassEncoder, WGPUBuffer indirectBuffer, uint64_t indirectOffset) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderDrawIndexedIndirect);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (indirectBuffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(indirectBuffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderDrawIndexedIndirect(renderPassEncoder, indirectBuffer, indirectOffset);
}
static void wgpuRenderPassEncoderDrawIndirect_hook(WGPURenderPassEncoder renderPassEncoder, WGPUBuffer indirectBuffer, uint64_t indirectOffset) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderDrawIndirect);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (indirectBuffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(indirectBuffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderDrawIndirect(renderPassEncoder, indirectBuffer, indirectOffset);
}
static void wgpuRenderPassEncoderEnd_hook(WGPURenderPassEncoder renderPassEncoder) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderEnd);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderEnd(renderPassEncoder);
}
static void wgpuRenderPassEncoderEndOcclusionQuery_hook(WGPURenderPassEncoder renderPassEncoder) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderEndOcclusionQuery);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderEndOcclusionQuery(renderPassEncoder);
}
static void wgpuRenderPassEncoderExecuteBundles_hook(WGPURenderPassEncoder renderPassEncoder, size_t bundleCount, WGPURenderBundle const * bundles) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderExecuteBundles);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderExecuteBundles(renderPassEncoder, bundleCount, bundles);
}
static void wgpuRenderPassEncoderInsertDebugMarker_hook(WGPURenderPassEncoder renderPassEncoder, WGPUStringView markerLabel) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderInsertDebugMarker);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderInsertDebugMarker(renderPassEncoder, markerLabel);
}
static void wgpuRenderPassEncoderMultiDrawIndexedIndirect_hook(WGPURenderPassEncoder renderPassEncoder, WGPUBuffer indirectBuffer, uint64_t indirectOffset, uint32_t maxDrawCount, WGPUBuffer drawCountBuffer, uint64_t drawCountBufferOffset) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderMultiDrawIndexedIndirect);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (indirectBuffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(indirectBuffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (drawCountBuffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(drawCountBuffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderMultiDrawIndexedIndirect(renderPassEncoder, indirectBuffer, indirectOffset, maxDrawCount, drawCountBuffer, drawCountBufferOffset);
}
static void wgpuRenderPassEncoderMultiDrawIndirect_hook(WGPURenderPassEncoder renderPassEncoder, WGPUBuffer indirectBuffer, uint64_t indirectOffset, uint32_t maxDrawCount, WGPUBuffer drawCountBuffer, uint64_t drawCountBufferOffset) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderMultiDrawIndirect);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (indirectBuffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(indirectBuffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (drawCountBuffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(drawCountBuffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderMultiDrawIndirect(renderPassEncoder, indirectBuffer, indirectOffset, maxDrawCount, drawCountBuffer, drawCountBufferOffset);
}
static void wgpuRenderPassEncoderPixelLocalStorageBarrier_hook(WGPURenderPassEncoder renderPassEncoder) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderPixelLocalStorageBarrier);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderPixelLocalStorageBarrier(renderPassEncoder);
}
static void wgpuRenderPassEncoderPopDebugGroup_hook(WGPURenderPassEncoder renderPassEncoder) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderPopDebugGroup);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderPopDebugGroup(renderPassEncoder);
}
static void wgpuRenderPassEncoderPushDebugGroup_hook(WGPURenderPassEncoder renderPassEncoder, WGPUStringView groupLabel) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderPushDebugGroup);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderPushDebugGroup(renderPassEncoder, groupLabel);
}
static void wgpuRenderPassEncoderSetBindGroup_hook(WGPURenderPassEncoder renderPassEncoder, uint32_t groupIndex, WGPUBindGroup group, size_t dynamicOffsetCount, uint32_t const * dynamicOffsets) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderSetBindGroup);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (group) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(group);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderSetBindGroup(renderPassEncoder, groupIndex, group, dynamicOffsetCount, dynamicOffsets);
}
static void wgpuRenderPassEncoderSetBlendConstant_hook(WGPURenderPassEncoder renderPassEncoder, WGPUColor const * color) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderSetBlendConstant);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderSetBlendConstant(renderPassEncoder, color);
}
static void wgpuRenderPassEncoderSetImmediateData_hook(WGPURenderPassEncoder renderPassEncoder, uint32_t offset, void const * data, size_t size) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderSetImmediateData);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderSetImmediateData(renderPassEncoder, offset, data, size);
}
static void wgpuRenderPassEncoderSetIndexBuffer_hook(WGPURenderPassEncoder renderPassEncoder, WGPUBuffer buffer, WGPUIndexFormat format, uint64_t offset, uint64_t size) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderSetIndexBuffer);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (buffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(buffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderSetIndexBuffer(renderPassEncoder, buffer, format, offset, size);
}
static void wgpuRenderPassEncoderSetLabel_hook(WGPURenderPassEncoder renderPassEncoder, WGPUStringView label) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderSetLabel);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderSetLabel(renderPassEncoder, label);
}
static void wgpuRenderPassEncoderSetPipeline_hook(WGPURenderPassEncoder renderPassEncoder, WGPURenderPipeline pipeline) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderSetPipeline);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (pipeline) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(pipeline);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderSetPipeline(renderPassEncoder, pipeline);
}
static void wgpuRenderPassEncoderSetScissorRect_hook(WGPURenderPassEncoder renderPassEncoder, uint32_t x, uint32_t y, uint32_t width, uint32_t height) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderSetScissorRect);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderSetScissorRect(renderPassEncoder, x, y, width, height);
}
static void wgpuRenderPassEncoderSetStencilReference_hook(WGPURenderPassEncoder renderPassEncoder, uint32_t reference) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderSetStencilReference);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderSetStencilReference(renderPassEncoder, reference);
}
static void wgpuRenderPassEncoderSetVertexBuffer_hook(WGPURenderPassEncoder renderPassEncoder, uint32_t slot, WGPUBuffer buffer, uint64_t offset, uint64_t size) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderSetVertexBuffer);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (buffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(buffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderSetVertexBuffer(renderPassEncoder, slot, buffer, offset, size);
}
static void wgpuRenderPassEncoderSetViewport_hook(WGPURenderPassEncoder renderPassEncoder, float x, float y, float width, float height, float minDepth, float maxDepth) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderSetViewport);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderSetViewport(renderPassEncoder, x, y, width, height, minDepth, maxDepth);
}
static void wgpuRenderPassEncoderWriteTimestamp_hook(WGPURenderPassEncoder renderPassEncoder, WGPUQuerySet querySet, uint32_t queryIndex) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderWriteTimestamp);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (querySet) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(querySet);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderWriteTimestamp(renderPassEncoder, querySet, queryIndex);
}
static void wgpuRenderPassEncoderAddRef_hook(WGPURenderPassEncoder renderPassEncoder) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderAddRef);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPassEncoderAddRef(renderPassEncoder);
}
static void wgpuRenderPassEncoderRelease_hook(WGPURenderPassEncoder renderPassEncoder) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPassEncoderRelease);
    WebGPUEventInfo eventInfo;
    if (renderPassEncoder) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPassEncoder);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(renderPassEncoder);
  
  webgpuHooks.procs.wgpuRenderPassEncoderRelease(renderPassEncoder);
}
static WGPUBindGroupLayout wgpuRenderPipelineGetBindGroupLayout_hook(WGPURenderPipeline renderPipeline, uint32_t groupIndex) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPipelineGetBindGroupLayout);
    WebGPUEventInfo eventInfo;
    if (renderPipeline) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPipeline);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuRenderPipelineGetBindGroupLayout(renderPipeline, groupIndex);
}
static void wgpuRenderPipelineSetLabel_hook(WGPURenderPipeline renderPipeline, WGPUStringView label) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPipelineSetLabel);
    WebGPUEventInfo eventInfo;
    if (renderPipeline) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPipeline);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPipelineSetLabel(renderPipeline, label);
}
static void wgpuRenderPipelineAddRef_hook(WGPURenderPipeline renderPipeline) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPipelineAddRef);
    WebGPUEventInfo eventInfo;
    if (renderPipeline) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPipeline);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuRenderPipelineAddRef(renderPipeline);
}
static void wgpuRenderPipelineRelease_hook(WGPURenderPipeline renderPipeline) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcRenderPipelineRelease);
    WebGPUEventInfo eventInfo;
    if (renderPipeline) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(renderPipeline);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(renderPipeline);
  
  webgpuHooks.procs.wgpuRenderPipelineRelease(renderPipeline);
}
static void wgpuSamplerSetLabel_hook(WGPUSampler sampler, WGPUStringView label) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSamplerSetLabel);
    WebGPUEventInfo eventInfo;
    if (sampler) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(sampler);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSamplerSetLabel(sampler, label);
}
static void wgpuSamplerAddRef_hook(WGPUSampler sampler) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSamplerAddRef);
    WebGPUEventInfo eventInfo;
    if (sampler) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(sampler);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSamplerAddRef(sampler);
}
static void wgpuSamplerRelease_hook(WGPUSampler sampler) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSamplerRelease);
    WebGPUEventInfo eventInfo;
    if (sampler) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(sampler);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(sampler);
  
  webgpuHooks.procs.wgpuSamplerRelease(sampler);
}
static WGPUFuture wgpuShaderModuleGetCompilationInfo_hook(WGPUShaderModule shaderModule, WGPUCompilationInfoCallbackInfo callbackInfo) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcShaderModuleGetCompilationInfo);
    WebGPUEventInfo eventInfo;
    if (shaderModule) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(shaderModule);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuShaderModuleGetCompilationInfo(shaderModule, callbackInfo);
}
static void wgpuShaderModuleSetLabel_hook(WGPUShaderModule shaderModule, WGPUStringView label) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcShaderModuleSetLabel);
    WebGPUEventInfo eventInfo;
    if (shaderModule) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(shaderModule);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuShaderModuleSetLabel(shaderModule, label);
}
static void wgpuShaderModuleAddRef_hook(WGPUShaderModule shaderModule) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcShaderModuleAddRef);
    WebGPUEventInfo eventInfo;
    if (shaderModule) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(shaderModule);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuShaderModuleAddRef(shaderModule);
}
static void wgpuShaderModuleRelease_hook(WGPUShaderModule shaderModule) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcShaderModuleRelease);
    WebGPUEventInfo eventInfo;
    if (shaderModule) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(shaderModule);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(shaderModule);
  
  webgpuHooks.procs.wgpuShaderModuleRelease(shaderModule);
}
static WGPUStatus wgpuSharedBufferMemoryBeginAccess_hook(WGPUSharedBufferMemory sharedBufferMemory, WGPUBuffer buffer, WGPUSharedBufferMemoryBeginAccessDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedBufferMemoryBeginAccess);
    WebGPUEventInfo eventInfo;
    if (sharedBufferMemory) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(sharedBufferMemory);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (buffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(buffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuSharedBufferMemoryBeginAccess(sharedBufferMemory, buffer, descriptor);
}
static WGPUBuffer wgpuSharedBufferMemoryCreateBuffer_hook(WGPUSharedBufferMemory sharedBufferMemory, WGPUBufferDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedBufferMemoryCreateBuffer);
    WebGPUEventInfo eventInfo;
    if (sharedBufferMemory) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(sharedBufferMemory);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuSharedBufferMemoryCreateBuffer(sharedBufferMemory, descriptor);
}
static WGPUStatus wgpuSharedBufferMemoryEndAccess_hook(WGPUSharedBufferMemory sharedBufferMemory, WGPUBuffer buffer, WGPUSharedBufferMemoryEndAccessState * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedBufferMemoryEndAccess);
    WebGPUEventInfo eventInfo;
    if (sharedBufferMemory) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(sharedBufferMemory);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (buffer) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(buffer);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuSharedBufferMemoryEndAccess(sharedBufferMemory, buffer, descriptor);
}
static WGPUStatus wgpuSharedBufferMemoryGetProperties_hook(WGPUSharedBufferMemory sharedBufferMemory, WGPUSharedBufferMemoryProperties * properties) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedBufferMemoryGetProperties);
    WebGPUEventInfo eventInfo;
    if (sharedBufferMemory) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(sharedBufferMemory);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuSharedBufferMemoryGetProperties(sharedBufferMemory, properties);
}
static WGPUBool wgpuSharedBufferMemoryIsDeviceLost_hook(WGPUSharedBufferMemory sharedBufferMemory) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedBufferMemoryIsDeviceLost);
    WebGPUEventInfo eventInfo;
    if (sharedBufferMemory) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(sharedBufferMemory);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuSharedBufferMemoryIsDeviceLost(sharedBufferMemory);
}
static void wgpuSharedBufferMemorySetLabel_hook(WGPUSharedBufferMemory sharedBufferMemory, WGPUStringView label) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedBufferMemorySetLabel);
    WebGPUEventInfo eventInfo;
    if (sharedBufferMemory) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(sharedBufferMemory);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSharedBufferMemorySetLabel(sharedBufferMemory, label);
}
static void wgpuSharedBufferMemoryAddRef_hook(WGPUSharedBufferMemory sharedBufferMemory) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedBufferMemoryAddRef);
    WebGPUEventInfo eventInfo;
    if (sharedBufferMemory) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(sharedBufferMemory);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSharedBufferMemoryAddRef(sharedBufferMemory);
}
static void wgpuSharedBufferMemoryRelease_hook(WGPUSharedBufferMemory sharedBufferMemory) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedBufferMemoryRelease);
    WebGPUEventInfo eventInfo;
    if (sharedBufferMemory) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(sharedBufferMemory);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(sharedBufferMemory);
  
  webgpuHooks.procs.wgpuSharedBufferMemoryRelease(sharedBufferMemory);
}
static void wgpuSharedFenceExportInfo_hook(WGPUSharedFence sharedFence, WGPUSharedFenceExportInfo * info) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedFenceExportInfo);
    WebGPUEventInfo eventInfo;
    if (sharedFence) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(sharedFence);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSharedFenceExportInfo(sharedFence, info);
}
static void wgpuSharedFenceAddRef_hook(WGPUSharedFence sharedFence) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedFenceAddRef);
    WebGPUEventInfo eventInfo;
    if (sharedFence) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(sharedFence);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSharedFenceAddRef(sharedFence);
}
static void wgpuSharedFenceRelease_hook(WGPUSharedFence sharedFence) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedFenceRelease);
    WebGPUEventInfo eventInfo;
    if (sharedFence) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(sharedFence);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(sharedFence);
  
  webgpuHooks.procs.wgpuSharedFenceRelease(sharedFence);
}
static WGPUStatus wgpuSharedTextureMemoryBeginAccess_hook(WGPUSharedTextureMemory sharedTextureMemory, WGPUTexture texture, WGPUSharedTextureMemoryBeginAccessDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedTextureMemoryBeginAccess);
    WebGPUEventInfo eventInfo;
    if (sharedTextureMemory) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(sharedTextureMemory);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (texture) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(texture);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuSharedTextureMemoryBeginAccess(sharedTextureMemory, texture, descriptor);
}
static WGPUTexture wgpuSharedTextureMemoryCreateTexture_hook(WGPUSharedTextureMemory sharedTextureMemory, WGPUTextureDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedTextureMemoryCreateTexture);
    WebGPUEventInfo eventInfo;
    if (sharedTextureMemory) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(sharedTextureMemory);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuSharedTextureMemoryCreateTexture(sharedTextureMemory, descriptor);
}
static WGPUStatus wgpuSharedTextureMemoryEndAccess_hook(WGPUSharedTextureMemory sharedTextureMemory, WGPUTexture texture, WGPUSharedTextureMemoryEndAccessState * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedTextureMemoryEndAccess);
    WebGPUEventInfo eventInfo;
    if (sharedTextureMemory) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(sharedTextureMemory);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (texture) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(texture);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuSharedTextureMemoryEndAccess(sharedTextureMemory, texture, descriptor);
}
static WGPUStatus wgpuSharedTextureMemoryGetProperties_hook(WGPUSharedTextureMemory sharedTextureMemory, WGPUSharedTextureMemoryProperties * properties) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedTextureMemoryGetProperties);
    WebGPUEventInfo eventInfo;
    if (sharedTextureMemory) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(sharedTextureMemory);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuSharedTextureMemoryGetProperties(sharedTextureMemory, properties);
}
static WGPUBool wgpuSharedTextureMemoryIsDeviceLost_hook(WGPUSharedTextureMemory sharedTextureMemory) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedTextureMemoryIsDeviceLost);
    WebGPUEventInfo eventInfo;
    if (sharedTextureMemory) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(sharedTextureMemory);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuSharedTextureMemoryIsDeviceLost(sharedTextureMemory);
}
static void wgpuSharedTextureMemorySetLabel_hook(WGPUSharedTextureMemory sharedTextureMemory, WGPUStringView label) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedTextureMemorySetLabel);
    WebGPUEventInfo eventInfo;
    if (sharedTextureMemory) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(sharedTextureMemory);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSharedTextureMemorySetLabel(sharedTextureMemory, label);
}
static void wgpuSharedTextureMemoryAddRef_hook(WGPUSharedTextureMemory sharedTextureMemory) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedTextureMemoryAddRef);
    WebGPUEventInfo eventInfo;
    if (sharedTextureMemory) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(sharedTextureMemory);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSharedTextureMemoryAddRef(sharedTextureMemory);
}
static void wgpuSharedTextureMemoryRelease_hook(WGPUSharedTextureMemory sharedTextureMemory) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSharedTextureMemoryRelease);
    WebGPUEventInfo eventInfo;
    if (sharedTextureMemory) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(sharedTextureMemory);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(sharedTextureMemory);
  
  webgpuHooks.procs.wgpuSharedTextureMemoryRelease(sharedTextureMemory);
}
static void wgpuSurfaceConfigure_hook(WGPUSurface surface, WGPUSurfaceConfiguration const * config) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSurfaceConfigure);
    WebGPUEventInfo eventInfo;
    if (surface) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(surface);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSurfaceConfigure(surface, config);
}
static WGPUStatus wgpuSurfaceGetCapabilities_hook(WGPUSurface surface, WGPUAdapter adapter, WGPUSurfaceCapabilities * capabilities) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSurfaceGetCapabilities);
    WebGPUEventInfo eventInfo;
    if (surface) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(surface);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    if (adapter) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(adapter);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuSurfaceGetCapabilities(surface, adapter, capabilities);
}
static void wgpuSurfaceGetCurrentTexture_hook(WGPUSurface surface, WGPUSurfaceTexture * surfaceTexture) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSurfaceGetCurrentTexture);
    WebGPUEventInfo eventInfo;
    if (surface) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(surface);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSurfaceGetCurrentTexture(surface, surfaceTexture);
}
static void wgpuSurfaceSetLabel_hook(WGPUSurface surface, WGPUStringView label) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSurfaceSetLabel);
    WebGPUEventInfo eventInfo;
    if (surface) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(surface);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSurfaceSetLabel(surface, label);
}
static void wgpuSurfaceUnconfigure_hook(WGPUSurface surface) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSurfaceUnconfigure);
    WebGPUEventInfo eventInfo;
    if (surface) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(surface);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSurfaceUnconfigure(surface);
}
static void wgpuSurfaceAddRef_hook(WGPUSurface surface) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSurfaceAddRef);
    WebGPUEventInfo eventInfo;
    if (surface) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(surface);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuSurfaceAddRef(surface);
}
static void wgpuSurfaceRelease_hook(WGPUSurface surface) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcSurfaceRelease);
    WebGPUEventInfo eventInfo;
    if (surface) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(surface);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(surface);
  
  webgpuHooks.procs.wgpuSurfaceRelease(surface);
}
static WGPUTextureView wgpuTextureCreateErrorView_hook(WGPUTexture texture, WGPUTextureViewDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureCreateErrorView);
    WebGPUEventInfo eventInfo;
    if (texture) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(texture);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuTextureCreateErrorView(texture, descriptor);
}
static WGPUTextureView wgpuTextureCreateView_hook(WGPUTexture texture, WGPUTextureViewDescriptor const * descriptor) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureCreateView);
    WebGPUEventInfo eventInfo;
    if (texture) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(texture);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuTextureCreateView(texture, descriptor);
}
static void wgpuTextureDestroy_hook(WGPUTexture texture) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureDestroy);
    WebGPUEventInfo eventInfo;
    if (texture) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(texture);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuTextureDestroy(texture);
}
static uint32_t wgpuTextureGetDepthOrArrayLayers_hook(WGPUTexture texture) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureGetDepthOrArrayLayers);
    WebGPUEventInfo eventInfo;
    if (texture) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(texture);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuTextureGetDepthOrArrayLayers(texture);
}
static WGPUTextureDimension wgpuTextureGetDimension_hook(WGPUTexture texture) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureGetDimension);
    WebGPUEventInfo eventInfo;
    if (texture) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(texture);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuTextureGetDimension(texture);
}
static WGPUTextureFormat wgpuTextureGetFormat_hook(WGPUTexture texture) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureGetFormat);
    WebGPUEventInfo eventInfo;
    if (texture) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(texture);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuTextureGetFormat(texture);
}
static uint32_t wgpuTextureGetHeight_hook(WGPUTexture texture) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureGetHeight);
    WebGPUEventInfo eventInfo;
    if (texture) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(texture);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuTextureGetHeight(texture);
}
static uint32_t wgpuTextureGetMipLevelCount_hook(WGPUTexture texture) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureGetMipLevelCount);
    WebGPUEventInfo eventInfo;
    if (texture) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(texture);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuTextureGetMipLevelCount(texture);
}
static uint32_t wgpuTextureGetSampleCount_hook(WGPUTexture texture) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureGetSampleCount);
    WebGPUEventInfo eventInfo;
    if (texture) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(texture);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuTextureGetSampleCount(texture);
}
static WGPUTextureUsage wgpuTextureGetUsage_hook(WGPUTexture texture) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureGetUsage);
    WebGPUEventInfo eventInfo;
    if (texture) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(texture);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuTextureGetUsage(texture);
}
static uint32_t wgpuTextureGetWidth_hook(WGPUTexture texture) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureGetWidth);
    WebGPUEventInfo eventInfo;
    if (texture) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(texture);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  return webgpuHooks.procs.wgpuTextureGetWidth(texture);
}
static void wgpuTextureSetLabel_hook(WGPUTexture texture, WGPUStringView label) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureSetLabel);
    WebGPUEventInfo eventInfo;
    if (texture) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(texture);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuTextureSetLabel(texture, label);
}
static void wgpuTextureAddRef_hook(WGPUTexture texture) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureAddRef);
    WebGPUEventInfo eventInfo;
    if (texture) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(texture);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuTextureAddRef(texture);
}
static void wgpuTextureRelease_hook(WGPUTexture texture) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureRelease);
    WebGPUEventInfo eventInfo;
    if (texture) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(texture);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(texture);
  
  webgpuHooks.procs.wgpuTextureRelease(texture);
}
static void wgpuTextureViewSetLabel_hook(WGPUTextureView textureView, WGPUStringView label) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureViewSetLabel);
    WebGPUEventInfo eventInfo;
    if (textureView) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(textureView);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuTextureViewSetLabel(textureView, label);
}
static void wgpuTextureViewAddRef_hook(WGPUTextureView textureView) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureViewAddRef);
    WebGPUEventInfo eventInfo;
    if (textureView) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(textureView);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  webgpuHooks.procs.wgpuTextureViewAddRef(textureView);
}
static void wgpuTextureViewRelease_hook(WGPUTextureView textureView) {
  if(RenderDoc::Inst().IsFrameCapturing())
  {
    WriteSerialiser &ser = webgpuHooks.capturer.GetScratchSerialiser();
    SCOPED_SERIALISE_CHUNK(WebGPUChunk::ProcTextureViewRelease);
    WebGPUEventInfo eventInfo;
    if (textureView) {  auto* res = webgpuHooks.capturer.GetResourceManager();
      ResourceId resourceId = res->GetResourceId(textureView);
      WebGPUResourceUsage usage;
      usage.usage = ResourceUsage::All_RWResource;
      usage.view = resourceId;
      if (usage.view != ResourceId::Null()) {    eventInfo.resourceUsages.push_back(usage);
        if (RenderDoc::Inst().IsFrameCapturing())
        {
          res->MarkResourceFrameReferenced(resourceId, eFrameRef_CompleteWrite);
        }
      }
    }
    SERIALISE_ELEMENT(eventInfo);
    webgpuHooks.capturer.AddChunk(scope.Get());
  }
  auto* res = webgpuHooks.capturer.GetResourceManager();
  res->ReleaseResource(textureView);
  
  webgpuHooks.procs.wgpuTextureViewRelease(textureView);
}
