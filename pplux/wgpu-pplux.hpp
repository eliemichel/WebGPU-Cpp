//-----------------------------------
// https://github.com/pplux/wgpu.hpp
//-----------------------------------
#pragma once
#ifndef WEBGPU_H_
#error "You must include the WEBGPU header before this one"
#endif
#include <type_traits>
namespace wgpu {
    #define BASIC_CLASS(Type) \\
        struct Type : public WGPU ## Type{ \\
            typedef Type S; /* S == Self */ \\
            typedef WGPU ## Type W; /* W == WGPU Type */ \\
            operator const W*() const { return this; } \\
    
    #define CLASS(Type) \\
        BASIC_CLASS(Type) \\
        Type() : W() {} \\
    #define SUBCLASS(Type, WGPUSType_value) \\
        BASIC_CLASS(Type) \\
        Type() : W({nullptr, WGPUSType_value}) {} \\
    #define DESCRIPTOR(Type) \\
        BASIC_CLASS(Type) \\
        Type() : W() {} \\
        template<class T> \\
        S& nextInChain(const T *obj) \\
        { \\
            W::nextInChain = (const WGPUChainedStruct*) &(obj->chain); \\
            return *this; \\
        }\\
        template<class T> \\
        S& nextInChain(const T &obj) { return nextInChain(&obj); }
    #define PROP(Name) \\
        S& Name(decltype(W::Name) arg) { W::Name = arg; return *this; }\\
    #define LIST(List, Count) \\
        template<size_t N> \\
        S& List(std::remove_cv_t<std::remove_pointer_t<decltype(W::List)>> const (&args)[N]) { \\
            W::Count = (decltype(W::Count)) N; \\
            W::List = args; \\
            return *this; \\
        } \\
    #define END };
    // Manually Generated
    CLASS(Color)
        PROP(r)
        PROP(g)
        PROP(b)
        PROP(a)
        Color(double r, double g, double b, double a = 1.0) : 
            W({r,g,b,a}){}
    END
    CLASS(Origin3D)
        PROP(x)
        PROP(y)
        PROP(z)
        Origin3D(uint32_t x = 0.0, uint32_t y = 0.0, uint32_t z = 0.0) : 
            W({x,y,z}){}
    END
    // Automatically generated

    typedef WGPUAdapter Adapter;
    typedef WGPUBindGroup BindGroup;
    typedef WGPUBindGroupLayout BindGroupLayout;
    typedef WGPUBuffer Buffer;
    typedef WGPUCommandBuffer CommandBuffer;
    typedef WGPUCommandEncoder CommandEncoder;
    typedef WGPUComputePassEncoder ComputePassEncoder;
    typedef WGPUComputePipeline ComputePipeline;
    typedef WGPUDevice Device;
    typedef WGPUInstance Instance;
    typedef WGPUPipelineLayout PipelineLayout;
    typedef WGPUQuerySet QuerySet;
    typedef WGPUQueue Queue;
    typedef WGPURenderBundle RenderBundle;
    typedef WGPURenderBundleEncoder RenderBundleEncoder;
    typedef WGPURenderPassEncoder RenderPassEncoder;
    typedef WGPURenderPipeline RenderPipeline;
    typedef WGPUSampler Sampler;
    typedef WGPUShaderModule ShaderModule;
    typedef WGPUSurface Surface;
    typedef WGPUTexture Texture;
    typedef WGPUTextureView TextureView;

    CLASS(ChainedStruct)
        PROP(next)
        PROP(sType)
    END

    CLASS(ChainedStructOut)
        PROP(next)
        PROP(sType)
    END

    DESCRIPTOR(AdapterInfo)
        PROP(nextInChain)
        PROP(vendor)
        PROP(architecture)
        PROP(device)
        PROP(description)
        PROP(backendType)
        PROP(adapterType)
        PROP(vendorID)
        PROP(deviceID)
    END

    DESCRIPTOR(AdapterProperties)
        PROP(nextInChain)
        PROP(vendorID)
        PROP(vendorName)
        PROP(architecture)
        PROP(deviceID)
        PROP(name)
        PROP(driverDescription)
        PROP(adapterType)
        PROP(backendType)
    END

    DESCRIPTOR(BindGroupEntry)
        PROP(nextInChain)
        PROP(binding)
        PROP(buffer)
        PROP(offset)
        PROP(size)
        PROP(sampler)
        PROP(textureView)
    END

    CLASS(BlendComponent)
        PROP(operation)
        PROP(srcFactor)
        PROP(dstFactor)
    END

    DESCRIPTOR(BufferBindingLayout)
        PROP(nextInChain)
        PROP(type)
        PROP(hasDynamicOffset)
        PROP(minBindingSize)
    END

    DESCRIPTOR(BufferDescriptor)
        PROP(nextInChain)
        PROP(label)
        PROP(usage)
        PROP(size)
        PROP(mappedAtCreation)
    END

    CLASS(Color)
        PROP(r)
        PROP(g)
        PROP(b)
        PROP(a)
    END

    DESCRIPTOR(CommandBufferDescriptor)
        PROP(nextInChain)
        PROP(label)
    END

    DESCRIPTOR(CommandEncoderDescriptor)
        PROP(nextInChain)
        PROP(label)
    END

    DESCRIPTOR(CompilationMessage)
        PROP(nextInChain)
        PROP(message)
        PROP(type)
        PROP(lineNum)
        PROP(linePos)
        PROP(offset)
        PROP(length)
        PROP(utf16LinePos)
        PROP(utf16Offset)
        PROP(utf16Length)
    END

    CLASS(ComputePassTimestampWrites)
        PROP(querySet)
        PROP(beginningOfPassWriteIndex)
        PROP(endOfPassWriteIndex)
    END

    DESCRIPTOR(ConstantEntry)
        PROP(nextInChain)
        PROP(key)
        PROP(value)
    END

    CLASS(Extent3D)
        PROP(width)
        PROP(height)
        PROP(depthOrArrayLayers)
    END

    DESCRIPTOR(InstanceDescriptor)
        PROP(nextInChain)
    END

    CLASS(Limits)
        PROP(maxTextureDimension1D)
        PROP(maxTextureDimension2D)
        PROP(maxTextureDimension3D)
        PROP(maxTextureArrayLayers)
        PROP(maxBindGroups)
        PROP(maxBindGroupsPlusVertexBuffers)
        PROP(maxBindingsPerBindGroup)
        PROP(maxDynamicUniformBuffersPerPipelineLayout)
        PROP(maxDynamicStorageBuffersPerPipelineLayout)
        PROP(maxSampledTexturesPerShaderStage)
        PROP(maxSamplersPerShaderStage)
        PROP(maxStorageBuffersPerShaderStage)
        PROP(maxStorageTexturesPerShaderStage)
        PROP(maxUniformBuffersPerShaderStage)
        PROP(maxUniformBufferBindingSize)
        PROP(maxStorageBufferBindingSize)
        PROP(minUniformBufferOffsetAlignment)
        PROP(minStorageBufferOffsetAlignment)
        PROP(maxVertexBuffers)
        PROP(maxBufferSize)
        PROP(maxVertexAttributes)
        PROP(maxVertexBufferArrayStride)
        PROP(maxInterStageShaderComponents)
        PROP(maxInterStageShaderVariables)
        PROP(maxColorAttachments)
        PROP(maxColorAttachmentBytesPerSample)
        PROP(maxComputeWorkgroupStorageSize)
        PROP(maxComputeInvocationsPerWorkgroup)
        PROP(maxComputeWorkgroupSizeX)
        PROP(maxComputeWorkgroupSizeY)
        PROP(maxComputeWorkgroupSizeZ)
        PROP(maxComputeWorkgroupsPerDimension)
    END

    DESCRIPTOR(MultisampleState)
        PROP(nextInChain)
        PROP(count)
        PROP(mask)
        PROP(alphaToCoverageEnabled)
    END

    CLASS(Origin3D)
        PROP(x)
        PROP(y)
        PROP(z)
    END

    DESCRIPTOR(PipelineLayoutDescriptor)
        PROP(nextInChain)
        PROP(label)
        LIST(bindGroupLayouts,bindGroupLayoutCount)
    END

    CLASS(PrimitiveDepthClipControl)
        PROP(chain)
        PROP(unclippedDepth)
    END

    DESCRIPTOR(PrimitiveState)
        PROP(nextInChain)
        PROP(topology)
        PROP(stripIndexFormat)
        PROP(frontFace)
        PROP(cullMode)
    END

    DESCRIPTOR(QuerySetDescriptor)
        PROP(nextInChain)
        PROP(label)
        PROP(type)
        PROP(count)
    END

    DESCRIPTOR(QueueDescriptor)
        PROP(nextInChain)
        PROP(label)
    END

    DESCRIPTOR(RenderBundleDescriptor)
        PROP(nextInChain)
        PROP(label)
    END

    DESCRIPTOR(RenderBundleEncoderDescriptor)
        PROP(nextInChain)
        PROP(label)
        LIST(colorFormats,colorFormatCount)
        PROP(depthStencilFormat)
        PROP(depthReadOnly)
        PROP(stencilReadOnly)
        PROP(sampleCount)
    END

    CLASS(RenderPassDepthStencilAttachment)
        PROP(view)
        PROP(depthLoadOp)
        PROP(depthStoreOp)
        PROP(depthClearValue)
        PROP(depthReadOnly)
        PROP(stencilLoadOp)
        PROP(stencilStoreOp)
        PROP(stencilClearValue)
        PROP(stencilReadOnly)
    END

    CLASS(RenderPassDescriptorMaxDrawCount)
        PROP(chain)
        PROP(maxDrawCount)
    END

    CLASS(RenderPassTimestampWrites)
        PROP(querySet)
        PROP(beginningOfPassWriteIndex)
        PROP(endOfPassWriteIndex)
    END

    DESCRIPTOR(RequestAdapterOptions)
        PROP(nextInChain)
        PROP(compatibleSurface)
        PROP(powerPreference)
        PROP(backendType)
        PROP(forceFallbackAdapter)
    END

    DESCRIPTOR(SamplerBindingLayout)
        PROP(nextInChain)
        PROP(type)
    END

    DESCRIPTOR(SamplerDescriptor)
        PROP(nextInChain)
        PROP(label)
        PROP(addressModeU)
        PROP(addressModeV)
        PROP(addressModeW)
        PROP(magFilter)
        PROP(minFilter)
        PROP(mipmapFilter)
        PROP(lodMinClamp)
        PROP(lodMaxClamp)
        PROP(compare)
        PROP(maxAnisotropy)
    END

    DESCRIPTOR(ShaderModuleCompilationHint)
        PROP(nextInChain)
        PROP(entryPoint)
        PROP(layout)
    END

    CLASS(ShaderModuleSPIRVDescriptor)
        PROP(chain)
        PROP(codeSize)
        PROP(code)
    END

    CLASS(ShaderModuleWGSLDescriptor)
        PROP(chain)
        PROP(code)
    END

    CLASS(StencilFaceState)
        PROP(compare)
        PROP(failOp)
        PROP(depthFailOp)
        PROP(passOp)
    END

    DESCRIPTOR(StorageTextureBindingLayout)
        PROP(nextInChain)
        PROP(access)
        PROP(format)
        PROP(viewDimension)
    END

    DESCRIPTOR(SurfaceCapabilities)
        PROP(nextInChain)
        LIST(formats,formatCount)
        LIST(presentModes,presentModeCount)
        LIST(alphaModes,alphaModeCount)
    END

    DESCRIPTOR(SurfaceConfiguration)
        PROP(nextInChain)
        PROP(device)
        PROP(format)
        PROP(usage)
        LIST(viewFormats,viewFormatCount)
        PROP(alphaMode)
        PROP(width)
        PROP(height)
        PROP(presentMode)
    END

    DESCRIPTOR(SurfaceDescriptor)
        PROP(nextInChain)
        PROP(label)
    END

    CLASS(SurfaceDescriptorFromAndroidNativeWindow)
        PROP(chain)
        PROP(window)
    END

    CLASS(SurfaceDescriptorFromCanvasHTMLSelector)
        PROP(chain)
        PROP(selector)
    END

    CLASS(SurfaceDescriptorFromMetalLayer)
        PROP(chain)
        PROP(layer)
    END

    CLASS(SurfaceDescriptorFromWaylandSurface)
        PROP(chain)
        PROP(display)
        PROP(surface)
    END

    CLASS(SurfaceDescriptorFromWindowsHWND)
        PROP(chain)
        PROP(hinstance)
        PROP(hwnd)
    END

    CLASS(SurfaceDescriptorFromXcbWindow)
        PROP(chain)
        PROP(connection)
        PROP(window)
    END

    CLASS(SurfaceDescriptorFromXlibWindow)
        PROP(chain)
        PROP(display)
        PROP(window)
    END

    CLASS(SurfaceTexture)
        PROP(texture)
        PROP(suboptimal)
        PROP(status)
    END

    DESCRIPTOR(TextureBindingLayout)
        PROP(nextInChain)
        PROP(sampleType)
        PROP(viewDimension)
        PROP(multisampled)
    END

    DESCRIPTOR(TextureDataLayout)
        PROP(nextInChain)
        PROP(offset)
        PROP(bytesPerRow)
        PROP(rowsPerImage)
    END

    DESCRIPTOR(TextureViewDescriptor)
        PROP(nextInChain)
        PROP(label)
        PROP(format)
        PROP(dimension)
        PROP(baseMipLevel)
        PROP(baseArrayLayer)
        PROP(aspect)
        PROP(mipLevelCount)
        PROP(arrayLayerCount)
    END

    CLASS(VertexAttribute)
        PROP(format)
        PROP(offset)
        PROP(shaderLocation)
    END

    DESCRIPTOR(BindGroupDescriptor)
        PROP(nextInChain)
        PROP(label)
        PROP(layout)
        LIST(entries,entryCount)
    END

    DESCRIPTOR(BindGroupLayoutEntry)
        PROP(nextInChain)
        PROP(binding)
        PROP(visibility)
        PROP(buffer)
        PROP(sampler)
        PROP(texture)
        PROP(storageTexture)
    END

    CLASS(BlendState)
        PROP(color)
        PROP(alpha)
    END

    DESCRIPTOR(CompilationInfo)
        PROP(nextInChain)
        LIST(messages,messageCount)
    END

    DESCRIPTOR(ComputePassDescriptor)
        PROP(nextInChain)
        PROP(label)
        PROP(timestampWrites)
    END

    DESCRIPTOR(DepthStencilState)
        PROP(nextInChain)
        PROP(format)
        PROP(depthWriteEnabled)
        PROP(depthCompare)
        PROP(stencilFront)
        PROP(stencilBack)
        PROP(stencilReadMask)
        PROP(stencilWriteMask)
        PROP(depthBias)
        PROP(depthBiasSlopeScale)
        PROP(depthBiasClamp)
    END

    DESCRIPTOR(ImageCopyBuffer)
        PROP(nextInChain)
        PROP(layout)
        PROP(buffer)
    END

    DESCRIPTOR(ImageCopyTexture)
        PROP(nextInChain)
        PROP(texture)
        PROP(mipLevel)
        PROP(origin)
        PROP(aspect)
    END

    DESCRIPTOR(ProgrammableStageDescriptor)
        PROP(nextInChain)
        PROP(module)
        PROP(entryPoint)
        LIST(constants,constantCount)
    END

    DESCRIPTOR(RenderPassColorAttachment)
        PROP(nextInChain)
        PROP(view)
        PROP(depthSlice)
        PROP(resolveTarget)
        PROP(loadOp)
        PROP(storeOp)
        PROP(clearValue)
    END

    DESCRIPTOR(RequiredLimits)
        PROP(nextInChain)
        PROP(limits)
    END

    DESCRIPTOR(ShaderModuleDescriptor)
        PROP(nextInChain)
        PROP(label)
        LIST(hints,hintCount)
    END

    DESCRIPTOR(SupportedLimits)
        PROP(nextInChain)
        PROP(limits)
    END

    DESCRIPTOR(TextureDescriptor)
        PROP(nextInChain)
        PROP(label)
        PROP(usage)
        PROP(dimension)
        PROP(size)
        PROP(format)
        LIST(viewFormats,viewFormatCount)
        PROP(mipLevelCount)
        PROP(sampleCount)
    END

    CLASS(VertexBufferLayout)
        PROP(arrayStride)
        PROP(stepMode)
        LIST(attributes,attributeCount)
    END

    DESCRIPTOR(BindGroupLayoutDescriptor)
        PROP(nextInChain)
        PROP(label)
        LIST(entries,entryCount)
    END

    DESCRIPTOR(ColorTargetState)
        PROP(nextInChain)
        PROP(format)
        PROP(blend)
        PROP(writeMask)
    END

    DESCRIPTOR(ComputePipelineDescriptor)
        PROP(nextInChain)
        PROP(label)
        PROP(layout)
        PROP(compute)
    END

    DESCRIPTOR(DeviceDescriptor)
        PROP(nextInChain)
        PROP(label)
        LIST(requiredFeatures,requiredFeatureCount)
        PROP(requiredLimits)
        PROP(defaultQueue)
        PROP(deviceLostCallback)
        PROP(deviceLostUserdata)
    END

    DESCRIPTOR(RenderPassDescriptor)
        PROP(nextInChain)
        PROP(label)
        LIST(colorAttachments,colorAttachmentCount)
        PROP(depthStencilAttachment)
        PROP(occlusionQuerySet)
        PROP(timestampWrites)
    END

    DESCRIPTOR(VertexState)
        PROP(nextInChain)
        PROP(module)
        PROP(entryPoint)
        LIST(constants,constantCount)
        LIST(buffers,bufferCount)
    END

    DESCRIPTOR(FragmentState)
        PROP(nextInChain)
        PROP(module)
        PROP(entryPoint)
        LIST(constants,constantCount)
        LIST(targets,targetCount)
    END

    DESCRIPTOR(RenderPipelineDescriptor)
        PROP(nextInChain)
        PROP(label)
        PROP(layout)
        PROP(vertex)
        PROP(primitive)
        PROP(depthStencil)
        PROP(multisample)
        PROP(fragment)
    END



    #undef CLASS
    #undef SUBCLASS
    #undef DESCRIPTOR
    #undef END
    #undef PROP
} // end wgpu namespace
