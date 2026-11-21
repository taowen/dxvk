// Shared by DXVK admission and the runtime installer probe.
      ENABLE_FEATURE(core.features, depthBiasClamp, true),
      ENABLE_FEATURE(core.features, depthBounds, false),
      ENABLE_FEATURE(core.features, depthClamp, true),
      ENABLE_FEATURE(core.features, drawIndirectFirstInstance, false),
      ENABLE_FEATURE(core.features, dualSrcBlend, true),
      ENABLE_FEATURE(core.features, fillModeNonSolid, true),
      ENABLE_FEATURE(core.features, fragmentStoresAndAtomics, false),
      ENABLE_FEATURE(core.features, fullDrawIndexUint32, true),
      ENABLE_FEATURE(core.features, geometryShader, true),
      ENABLE_FEATURE(core.features, imageCubeArray, true),
      ENABLE_FEATURE(core.features, independentBlend, true),
      ENABLE_FEATURE(core.features, logicOp, false),
      ENABLE_FEATURE(core.features, multiDrawIndirect, true),
      ENABLE_FEATURE(core.features, multiViewport, true),
      ENABLE_FEATURE(core.features, occlusionQueryPrecise, true),
      ENABLE_FEATURE(core.features, pipelineStatisticsQuery, false),
      ENABLE_FEATURE(core.features, robustBufferAccess, true),
      ENABLE_FEATURE(core.features, sampleRateShading, true),
      ENABLE_FEATURE(core.features, samplerAnisotropy, false),
      ENABLE_FEATURE(core.features, shaderClipDistance, true),
      ENABLE_FEATURE(core.features, shaderCullDistance, true),
      ENABLE_FEATURE(core.features, shaderFloat64, false),
      ENABLE_FEATURE(core.features, shaderImageGatherExtended, true),
      ENABLE_FEATURE(core.features, shaderInt16, false),
      ENABLE_FEATURE(core.features, shaderInt64, true),
      ENABLE_FEATURE(core.features, shaderSampledImageArrayDynamicIndexing, true),
      ENABLE_FEATURE(core.features, sparseBinding, false),
      ENABLE_FEATURE(core.features, sparseResidencyBuffer, false),
      ENABLE_FEATURE(core.features, sparseResidencyImage2D, false),
      ENABLE_FEATURE(core.features, sparseResidencyImage3D, false),
      ENABLE_FEATURE(core.features, sparseResidency2Samples, false),
      ENABLE_FEATURE(core.features, sparseResidency4Samples, false),
      ENABLE_FEATURE(core.features, sparseResidency8Samples, false),
      ENABLE_FEATURE(core.features, sparseResidency16Samples, false),
      ENABLE_FEATURE(core.features, sparseResidencyAliased, false),
      ENABLE_FEATURE(core.features, shaderResourceResidency, false),
      ENABLE_FEATURE(core.features, shaderResourceMinLod, false),
      ENABLE_FEATURE(core.features, tessellationShader, false),
      ENABLE_FEATURE(core.features, textureCompressionBC, true),
      ENABLE_FEATURE(core.features, variableMultisampleRate, false),
      ENABLE_FEATURE(core.features, vertexPipelineStoresAndAtomics, false),
      ENABLE_FEATURE(core.features, wideLines, false),

      ENABLE_FEATURE(vk11, shaderDrawParameters, true),
      ENABLE_FEATURE(vk11, storagePushConstant16, false),

      ENABLE_FEATURE(vk12, bufferDeviceAddress, true),
      ENABLE_FEATURE(vk12, descriptorIndexing, true),
      ENABLE_FEATURE(vk12, descriptorBindingSampledImageUpdateAfterBind, true),
      ENABLE_FEATURE(vk12, descriptorBindingUpdateUnusedWhilePending, true),
      ENABLE_FEATURE(vk12, descriptorBindingPartiallyBound, true),
      ENABLE_FEATURE(vk12, drawIndirectCount, false),
      ENABLE_FEATURE(vk12, hostQueryReset, true),
      ENABLE_FEATURE(vk12, runtimeDescriptorArray, true),
      ENABLE_FEATURE(vk12, samplerFilterMinmax, false),
      ENABLE_FEATURE(vk12, samplerMirrorClampToEdge, true),
      ENABLE_FEATURE(vk12, shaderInt8, false),
      ENABLE_FEATURE(vk12, shaderOutputViewportIndex, false),
      ENABLE_FEATURE(vk12, shaderOutputLayer, false),
      ENABLE_FEATURE(vk12, timelineSemaphore, true),
      ENABLE_FEATURE(vk12, uniformBufferStandardLayout, true),
      ENABLE_FEATURE(vk12, vulkanMemoryModel, true),

      ENABLE_FEATURE(vk13, dynamicRendering, true),
      ENABLE_FEATURE(vk13, maintenance4, true),
      ENABLE_FEATURE(vk13, robustImageAccess, false),
      ENABLE_FEATURE(vk13, pipelineCreationCacheControl, false),
      ENABLE_FEATURE(vk13, shaderDemoteToHelperInvocation, true),
      ENABLE_FEATURE(vk13, shaderZeroInitializeWorkgroupMemory, true),
      ENABLE_FEATURE(vk13, synchronization2, true),

      /* Allows sampling currently bound render targets for client APIs */
      ENABLE_EXT_FEATURE(extAttachmentFeedbackLoopLayout, attachmentFeedbackLoopLayout, false),

      /* Enables client API features */
      ENABLE_EXT(extConservativeRasterization, false),

      /* Legacy feature exposed in client APIs */
      ENABLE_EXT_FEATURE(extCustomBorderColor, customBorderColors, false),
      ENABLE_EXT_FEATURE(extCustomBorderColor, customBorderColorWithoutFormat, false),

      /* Depth clip matches D3D semantics where depth clamp does not */
      ENABLE_EXT_FEATURE(extDepthClipEnable, depthClipEnable, false),

      /* Controls depth bias behaviour with emulated depth formats */
      ENABLE_EXT_FEATURE(extDepthBiasControl, depthBiasControl, false),
      ENABLE_EXT_FEATURE(extDepthBiasControl, leastRepresentableValueForceUnormRepresentation, false),
      ENABLE_EXT_FEATURE(extDepthBiasControl, floatRepresentation, false),
      ENABLE_EXT_FEATURE(extDepthBiasControl, depthBiasExact, false),

      /* Descriptor buffers for a more efficient binding model */
      ENABLE_EXT_FEATURE(extDescriptorBuffer, descriptorBuffer, false),

      /* Dynamic state to further improve the graphics_pipeline_library experience */
      ENABLE_EXT_FEATURE(extExtendedDynamicState3, extendedDynamicState3AlphaToCoverageEnable, false),
      ENABLE_EXT_FEATURE(extExtendedDynamicState3, extendedDynamicState3DepthClipEnable, false),
      ENABLE_EXT_FEATURE(extExtendedDynamicState3, extendedDynamicState3RasterizationSamples, false),
      ENABLE_EXT_FEATURE(extExtendedDynamicState3, extendedDynamicState3SampleMask, false),
      ENABLE_EXT_FEATURE(extExtendedDynamicState3, extendedDynamicState3LineRasterizationMode, false),

      /* Enables client API features */
      ENABLE_EXT_FEATURE(extFragmentShaderInterlock, fragmentShaderSampleInterlock, false),
      ENABLE_EXT_FEATURE(extFragmentShaderInterlock, fragmentShaderPixelInterlock, false),

      /* Windows-only extension to work around driver-side FSE issues */
      ENABLE_EXT(extFullScreenExclusive, false),

      /* Graphics pipeline libraries for stutter-free gameplay */
      ENABLE_EXT_FEATURE(extGraphicsPipelineLibrary, graphicsPipelineLibrary, false),

      /* HDR metadata */
      ENABLE_EXT(extHdrMetadata, false),

      /* Line rasterization features for client APIs */
      ENABLE_EXT_FEATURE(extLineRasterization, rectangularLines,  false),
      ENABLE_EXT_FEATURE(extLineRasterization, smoothLines, false),

      /* Memory budget and priority for improved memory management */
      ENABLE_EXT(extMemoryBudget, false),
      ENABLE_EXT_FEATURE(extMemoryPriority, memoryPriority, false),

      /* Optionally used to batch consecutive draws */
      ENABLE_EXT_FEATURE(extMultiDraw, multiDraw, false),

      /* Legacy cubemap for older client APIs */
      ENABLE_EXT_FEATURE(extNonSeamlessCubeMap, nonSeamlessCubeMap, false),

      /* Enables more dynamic driver-side memory management */
      ENABLE_EXT_FEATURE(extPageableDeviceLocalMemory, pageableDeviceLocalMemory, false),

      /* Robustness, all features effectively required for correctness */
      ENABLE_EXT_FEATURE(extRobustness2, robustBufferAccess2, true),
      ENABLE_EXT_FEATURE(extRobustness2, robustImageAccess2, false),
      ENABLE_EXT_FEATURE(extRobustness2, nullDescriptor, true),

      /* Shader module identifier, used for pipeline lifetime management in 32-bit */
      ENABLE_EXT_FEATURE(extShaderModuleIdentifier, shaderModuleIdentifier, false),

      /* Stencil export, used both internally and in client APIs */
      ENABLE_EXT(extShaderStencilExport, false),

      /* HDR color space support */
      ENABLE_EXT(extSwapchainColorSpace, false),

      /* Swapchain maintenance, used to implement proper synchronization
       * and dynamic present modes to avoid swapchain recreation */
      ENABLE_EXT_FEATURE(extSwapchainMaintenance1, swapchainMaintenance1, false),

      /* Transform feedback, required for some client APIs */
      ENABLE_EXT_FEATURE(extTransformFeedback, transformFeedback, false),
      ENABLE_EXT_FEATURE(extTransformFeedback, geometryStreams, false),

      /* Vertex attribute divisor, used by client APIs */
      ENABLE_EXT_FEATURE(extVertexAttributeDivisor, vertexAttributeInstanceRateDivisor, false),
      ENABLE_EXT_FEATURE(extVertexAttributeDivisor, vertexAttributeInstanceRateZeroDivisor, false),

      /* External memory features for wine */
      ENABLE_EXT(khrExternalMemoryWin32, false),
      ENABLE_EXT(khrExternalSemaphoreWin32, false),

      /* LOAD_OP_NONE for certain tiler optimizations */
      ENABLE_EXT(khrLoadStoreOpNone, false),

      /* Maintenance features, relied on in various parts of the code */
      ENABLE_EXT_FEATURE(khrMaintenance5, maintenance5, true),
      ENABLE_EXT_FEATURE(khrMaintenance6, maintenance6, false),
      ENABLE_EXT_FEATURE(khrMaintenance7, maintenance7, false),

      /* Dependency for graphics pipeline library */
      ENABLE_EXT(khrPipelineLibrary, false),

      /* Present wait, used for frame pacing and statistics */
      ENABLE_EXT_FEATURE(khrPresentId, presentId, false),
      ENABLE_EXT_FEATURE(khrPresentWait, presentWait, false),

      /* Swapchain, needed for presentation */
      ENABLE_EXT(khrSwapchain, true),

      /* Mutable format used to change srgb-ness of swapchain views */
      ENABLE_EXT(khrSwapchainMutableFormat, false),

      /* Keyed mutex support in wine */
      ENABLE_EXT(khrWin32KeyedMutex, false),

      /* Descriptor pool overallocation, reduces descriptor pool spam in legacy model */
      ENABLE_EXT_FEATURE(nvDescriptorPoolOverallocation, descriptorPoolOverallocation, false),

      /* Reflex support */
      ENABLE_EXT(nvLowLatency2, false),

      /* Raw access chains, improves performance on NV */
      ENABLE_EXT_FEATURE(nvRawAccessChains, shaderRawAccessChains, false),

      /* CUDA interop extensions */
      ENABLE_EXT(nvxBinaryImport, false),
      ENABLE_EXT(nvxImageViewHandle, false),
