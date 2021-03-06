//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MTLCompiler, MTLDeviceFeatureQueries, MTLGPUBVHBuilder, MTLLoader, MTLTargetDeviceArchitecture, NSArray, NSDictionary, NSMutableArray, NSString;
@protocol MTLComputePipelineState, MTLRenderPipelineState, OS_dispatch_data, OS_dispatch_queue;

@interface _MTLDevice : NSObject
{
    CDStruct_b63df89e _limits;	// 8 = 0x8
    void *_supportedGPUFamilies;	// 264 = 0x108
    NSObject<OS_dispatch_queue> *_serialQueue;	// 272 = 0x110
    NSObject<OS_dispatch_queue> *_pipelineSerializationQueue;	// 280 = 0x118
    NSObject<OS_dispatch_queue> *_concurrentQueue;	// 288 = 0x120
    _Bool _hasInitSerializationPaths;	// 296 = 0x128
    _Bool _shaderDebugInfoCaching;	// 297 = 0x129
    NSMutableArray *_progressTrackBufferStack;	// 304 = 0x130
    _Bool _needsEncoderTypeMatchingProgressBlits;	// 312 = 0x138
    id <MTLRenderPipelineState> _progressTrackRenderPipeline;	// 320 = 0x140
    id <MTLComputePipelineState> _progressTrackComputePipeline;	// 328 = 0x148
    MTLDeviceFeatureQueries *_featureQueries;	// 336 = 0x150
    unsigned long long _globalTraceObjectID;	// 344 = 0x158
    _Atomic int _commandQueueCount;	// 352 = 0x160
    void *_libraryBuilder;	// 360 = 0x168
    struct MTLPipelineLibraryBuilder *_pipelineLibraryBuilder;	// 368 = 0x170
    void *_pipelineCollection;	// 376 = 0x178
    NSString *_pipelineDescriptorsOutputFile;	// 384 = 0x180
    NSString *_librariesOutputDirectory;	// 392 = 0x188
    _Bool _collectAllLibraries;	// 400 = 0x190
    _Bool _gpuAssertionsEnabled;	// 401 = 0x191
    MTLLoader *_dynamicLoader;	// 408 = 0x198
    struct os_unfair_lock_s _GPUBVHBuilderLock;	// 416 = 0x1a0
    MTLGPUBVHBuilder *_GPUBVHBuilder;	// 424 = 0x1a8
    struct once_flag _initProgressTrackingOnceToken;	// 432 = 0x1b0
    NSDictionary *_pluginData;	// 440 = 0x1b8
    NSObject<OS_dispatch_data> *_serializedPluginData;	// 448 = 0x1c0
    unsigned long long _commandBufferErrorOptions;	// 456 = 0x1c8
}

+ (_Bool)featureProfile:(unsigned long long)arg1 supportsFeatureSet:(unsigned long long)arg2;	// IMP=0x0000000000048aff
+ (_Bool)useNewPrimitiveRestartBehavior;	// IMP=0x0000000000048aec
- (id).cxx_construct;	// IMP=0x000000000004b107
@property(nonatomic) unsigned long long commandBufferErrorOptions; // @synthesize commandBufferErrorOptions=_commandBufferErrorOptions;
@property _Bool shaderDebugInfoCaching; // @synthesize shaderDebugInfoCaching=_shaderDebugInfoCaching;
@property(readonly) NSObject<OS_dispatch_queue> *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;
@property(readonly) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly) unsigned long long globalTraceObjectID; // @synthesize globalTraceObjectID=_globalTraceObjectID;
@property(copy, nonatomic) NSDictionary *pluginData;
- (void)deserializeCompileTimeStats:(id)arg1 addToDictionary:(id)arg2;	// IMP=0x000000000004b05e
- (id)newAccelerationStructureWithBuffer:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000004b046
- (_Bool)isCompatibleWithAccelerationStructure:(CDStruct_c0454aff)arg1;	// IMP=0x000000000004aff1
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2;	// IMP=0x000000000004afd9
- (id)newAccelerationStructureWithDescriptor:(id)arg1;	// IMP=0x000000000004af7e
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1;	// IMP=0x000000000004af66
- (CDStruct_da2e99ad)accelerationStructureSizesWithDescriptor:(id)arg1;	// IMP=0x000000000004adb2
@property(readonly) MTLGPUBVHBuilder *GPUBVHBuilder;
@property(readonly) _Bool supportsRaytracing;
@property(readonly) _Bool requiresRaytracingEmulation;
@property(readonly) unsigned long long sparseTileSizeInBytes; // @dynamic sparseTileSizeInBytes;
- (void)convertSparseTileRegions:(const CDStruct_caaed6bc *)arg1 toPixelRegions:(CDStruct_caaed6bc *)arg2 withTileSize:(CDStruct_da2e99ad)arg3 numRegions:(unsigned long long)arg4;	// IMP=0x000000000004ac71
- (void)convertSparsePixelRegions:(const CDStruct_caaed6bc *)arg1 toTileRegions:(CDStruct_caaed6bc *)arg2 withTileSize:(CDStruct_da2e99ad)arg3 alignmentMode:(unsigned long long)arg4 numRegions:(unsigned long long)arg5;	// IMP=0x000000000004aadb
@property(readonly, getter=isPlacementHeapSupported) _Bool placementHeapSupported; // @dynamic placementHeapSupported;
- (_Bool)supportsCounterSampling:(unsigned long long)arg1;	// IMP=0x000000000004aab0
- (void)sampleTimestamps:(unsigned long long *)arg1 gpuTimestamp:(unsigned long long *)arg2;	// IMP=0x000000000004aaa2
- (id)resolveCounters:(id)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000004aa9a
- (id)newCounterSampleBufferWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004aa92
@property(readonly) NSArray *counterSets; // @dynamic counterSets;
- (_Bool)supportsRasterizationRateMapWithLayerCount:(unsigned long long)arg1;	// IMP=0x000000000004aa5f
- (id)newRasterizationRateMapWithDescriptor:(id)arg1;	// IMP=0x000000000004a9d5
- (id)newRasterizationRateMapWithScreenSize:(CDStruct_da2e99ad)arg1 layerCount:(unsigned long long)arg2 layers:(const id *)arg3;	// IMP=0x000000000004a9cd
@property(readonly) unsigned long long maxRasterizationRateLayerCount; // @dynamic maxRasterizationRateLayerCount;
@property(getter=areGPUAssertionsEnabled, setter=setGPUAssertionsEnabled:) _Bool gpuAssertionsEnabled;
- (id)newSharedEventWithMachPort:(unsigned int)arg1;	// IMP=0x000000000004a9a5
- (id)newSharedEventWithHandle:(id)arg1;	// IMP=0x000000000004a99d
- (id)newSharedEvent;	// IMP=0x000000000004a995
- (id)newLateEvalEvent;	// IMP=0x000000000004a98d
- (id)newEvent;	// IMP=0x000000000004a985
- (id)newArgumentEncoderWithLayout:(id)arg1;	// IMP=0x000000000004a973
- (id)newArgumentEncoderWithArguments:(id)arg1;	// IMP=0x000000000004a95f
- (id)newArgumentEncoderWithArguments:(id)arg1 structType:(id *)arg2;	// IMP=0x000000000004a870
@property(readonly) struct IndirectArgumentBufferCapabilities indirectArgumentBufferCapabilities; // @dynamic indirectArgumentBufferCapabilities;
- (void)getDefaultSamplePositions:(CDStruct_6e3f967a *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000004a776
- (void)_purgeDevice;	// IMP=0x000000000004a770
- (id)newCommandQueueWithDescriptor:(id)arg1;	// IMP=0x000000000004a768
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;	// IMP=0x000000000004a70f
- (id)newCommandQueue;	// IMP=0x000000000004a6d9
- (void)_decrementCommandQueueCount;	// IMP=0x000000000004a6a3
- (void)_incrementCommandQueueCount;	// IMP=0x000000000004a692
@property(readonly) unsigned long long maxArgumentBufferSamplerCount;
- (unsigned long long)minLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;	// IMP=0x000000000004a60b
- (unsigned long long)minimumLinearTextureAlignmentForPixelFormat:(unsigned long long)arg1;	// IMP=0x000000000004a54c
@property(readonly) unsigned long long deviceCreationFlags;
- (_Bool)supportsPrimitiveType:(unsigned long long)arg1;	// IMP=0x000000000004a537
- (_Bool)supportsTextureSampleCount:(unsigned long long)arg1;	// IMP=0x000000000004a525
- (void)getConstantSamplersBitmasks:(unsigned long long **)arg1 uniqueIdentifiers:(unsigned long long **)arg2 constantSamplerCount:(unsigned long long *)arg3 forComputeVariant:(id)arg4;	// IMP=0x000000000004a514
- (void)getConstantSamplersBitmasks:(unsigned long long **)arg1 uniqueIdentifiers:(unsigned long long **)arg2 constantSamplerCount:(unsigned long long *)arg3 forVertexVariant:(id)arg4 fragmentVariant:(id)arg5;	// IMP=0x000000000004a503
- (id)pipelinePerformanceStatisticsWithComputeVariant:(id)arg1 compileTimeOutput:(id)arg2;	// IMP=0x000000000004a4fb
- (id)pipelinePerformanceStatisticsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2 vertexCompileTimeOutput:(id)arg3 fragmentCompileTimeOutput:(id)arg4;	// IMP=0x000000000004a4f3
- (id)pipelinePerformanceStatisticsWithComputeVariant:(id)arg1;	// IMP=0x000000000004a4eb
- (id)pipelinePerformanceStatisticsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2;	// IMP=0x000000000004a4e3
- (CDStruct_596dc0d1)pipelineFlagsWithComputeVariant:(id)arg1;	// IMP=0x000000000004a4db
- (CDStruct_7ce1aa5b)pipelineFlagsWithVertexVariant:(id)arg1 fragmentVariant:(id)arg2;	// IMP=0x000000000004a4d3
- (id)newComputePipelineWithDescriptor:(id)arg1 variant:(id)arg2 errorMessage:(id *)arg3;	// IMP=0x000000000004a4b5
- (id)newComputePipelineWithDescriptor:(id)arg1 variant:(id)arg2;	// IMP=0x000000000004a4ad
- (id)newRenderPipelineWithDescriptor:(id)arg1 vertexVariant:(id)arg2 fragmentVariant:(id)arg3 errorMessage:(id *)arg4;	// IMP=0x000000000004a49b
- (id)newRenderPipelineWithDescriptor:(id)arg1 vertexVariant:(id)arg2 fragmentVariant:(id)arg3;	// IMP=0x000000000004a493
- (id)newVertexVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2;	// IMP=0x000000000004a441
- (id)newFragmentVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2;	// IMP=0x000000000004a3ef
- (id)newComputeVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2;	// IMP=0x000000000004a39d
- (id)vertexVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2;	// IMP=0x000000000004a395
- (id)fragmentVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2;	// IMP=0x000000000004a38d
- (id)computeVariantWithCompilerOutput:(id)arg1 pipelineStatisticsOutput:(id)arg2;	// IMP=0x000000000004a385
- (void)freeVisibleFunctionKey:(void *)arg1 keySize:(unsigned long long)arg2;	// IMP=0x000000000004a37f
- (void *)visibleFunctionKey:(id)arg1 withFunctionDescriptor:(id)arg2 keySize:(unsigned long long *)arg3;	// IMP=0x000000000004a370
- (void)freeComputeFunctionKey:(void *)arg1 keySize:(unsigned long long)arg2;	// IMP=0x000000000004a36a
- (void)freeComputeLibraryKey:(void *)arg1 libraryKeySize:(unsigned long long)arg2;	// IMP=0x000000000004a35d
- (void *)libraryKeyWithComputePipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 keySize:(unsigned long long *)arg3;	// IMP=0x000000000004a34e
- (void *)computeFunctionKeyWithComputePipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 keySize:(unsigned long long *)arg3;	// IMP=0x000000000004a33f
- (void)freeVertexFunctionKey:(void *)arg1 vertexKeySize:(unsigned long long)arg2;	// IMP=0x000000000004a332
- (void)freeFragmentFunctionKey:(void *)arg1 fragmentKeySize:(unsigned long long)arg2;	// IMP=0x000000000004a325
- (void *)vertexFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 nextStageVariant:(id)arg3 vertexKeySize:(unsigned long long *)arg4;	// IMP=0x000000000004a316
- (void *)fragmentFunctionKeyWithRenderPipelineDescriptor:(id)arg1 options:(unsigned long long)arg2 previousStateVariant:(id)arg3 fragmentKeySize:(unsigned long long *)arg4;	// IMP=0x000000000004a307
- (char *)getMeshFunctionId:(const void *)arg1 compilerOptions:(char **)arg2 compilerOptionsSize:(unsigned long long)arg3;	// IMP=0x000000000004a2ff
- (char *)getObjectFunctionId:(const void *)arg1 compilerOptions:(char **)arg2 compilerOptionsSize:(unsigned long long)arg3;	// IMP=0x000000000004a2f7
- (char *)getFragmentFunctionId:(const void *)arg1 compilerOptions:(char **)arg2 compilerOptionsSize:(unsigned long long)arg3;	// IMP=0x000000000004a2ef
- (char *)getVertexFunctionId:(const void *)arg1 compilerOptions:(char **)arg2 compilerOptionsSize:(unsigned long long)arg3;	// IMP=0x000000000004a2e7
- (char *)getComputeFunctionId:(const void *)arg1 compilerOptions:(char **)arg2 compilerOptionsSize:(unsigned long long)arg3;	// IMP=0x000000000004a2df
- (void)freeTranslatedDriverCompilerOptions:(char **)arg1 compilerOptionsSize:(unsigned long long)arg2;	// IMP=0x000000000004a2d9
- (char **)newTranslatedDriverCompilerOptions:(id)arg1 compilerOptionsSize:(unsigned long long *)arg2;	// IMP=0x000000000004a2ca
@property(readonly) MTLCompiler *compiler;
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004a239
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000004a1b6
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004a163
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004a0d5
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000004a07a
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004a02e
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000049fdb
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000049f4d
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000049ef2
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000049ea6
@property(readonly) unsigned long long maxConstantBufferArguments;
@property(readonly) unsigned long long maxPredicatedNestingDepth;
@property(readonly) unsigned long long maxComputeAttributes;
@property(readonly) unsigned long long maxTextureBufferWidth;
@property(readonly) unsigned long long maxVertexAmplificationCount;
@property(readonly) unsigned long long maxVertexAmplificationFactor;
@property(readonly) unsigned long long maxCustomSamplePositions;
@property(readonly) unsigned long long maxViewportCount;
@property(readonly) unsigned long long maxFenceInstances;
@property(readonly) unsigned long long maxIndirectSamplersPerDevice;
@property(readonly) unsigned long long maxIndirectSamplers;
@property(readonly) unsigned long long maxIndirectTextures;
@property(readonly) unsigned long long maxIndirectBuffers;
@property(readonly) unsigned long long maxTessellationFactor;
@property(readonly) unsigned long long maxInterpolatedComponents;
@property(readonly) unsigned long long maxComputeThreadgroupMemoryAlignmentBytes;
@property(readonly) unsigned long long maxFunctionConstantIndices;
@property(readonly) unsigned long long deviceLinearReadOnlyTextureAlignmentBytes;
@property(readonly) unsigned long long deviceLinearTextureAlignmentBytes;
@property(readonly) unsigned long long iosurfaceReadOnlyTextureAlignmentBytes;
@property(readonly) unsigned long long iosurfaceTextureAlignmentBytes;
@property(readonly) unsigned long long linearTextureAlignmentBytes;
@property(readonly) unsigned long long maxTextureLayers;
@property(readonly) unsigned long long maxTextureDimensionCube;
@property(readonly) unsigned long long maxTextureDepth3D;
@property(readonly) unsigned long long maxTextureHeight3D;
@property(readonly) unsigned long long maxTextureWidth3D;
@property(readonly) unsigned long long maxTextureHeight2D;
@property(readonly) unsigned long long maxTextureWidth2D;
@property(readonly) unsigned long long maxTextureWidth1D;
@property(readonly) unsigned long long minBufferNoCopyAlignmentBytes;
@property(readonly) unsigned long long minConstantBufferAlignmentBytes;
@property(readonly) unsigned long long maxVisibilityQueryOffset;
@property(readonly) float maxPointSize;
@property(readonly) float maxLineWidth;
@property(readonly) unsigned long long maxComputeThreadgroupMemory;
@property(readonly) unsigned long long maxTotalComputeThreadsPerThreadgroup;
@property(readonly) unsigned long long maxComputeLocalMemorySizes;
@property(readonly) unsigned long long maxComputeInlineDataSize;
@property(readonly) unsigned long long maxComputeSamplers;
@property(readonly) unsigned long long maxComputeTextures;
@property(readonly) unsigned long long maxComputeBuffers;
@property(readonly) unsigned long long maxFragmentInlineDataSize;
@property(readonly) unsigned long long maxFragmentSamplers;
@property(readonly) unsigned long long maxFragmentTextures;
@property(readonly) unsigned long long maxFragmentBuffers;
@property(readonly) unsigned long long maxInterpolants;
@property(readonly) unsigned long long maxVertexInlineDataSize;
@property(readonly) unsigned long long maxVertexSamplers;
@property(readonly) unsigned long long maxVertexTextures;
@property(readonly) unsigned long long maxVertexBuffers;
@property(readonly) unsigned long long maxVertexAttributes;
@property(readonly) unsigned long long maxColorAttachments;
@property(readonly) unsigned long long minTilePixels;
@property(readonly) unsigned long long maxTileInlineDataSize;
@property(readonly) unsigned long long maxTileSamplers;
@property(readonly) unsigned long long maxTileTextures;
@property(readonly) unsigned long long maxTileBuffers;
@property(readonly) unsigned long long linearTextureArrayAlignmentSlice;
@property(readonly) unsigned long long linearTextureArrayAlignmentBytes;
@property(readonly) unsigned long long maxFramebufferStorageBits;
@property(readonly) const CDStruct_b63df89e *limits;
- (void)initLimits;	// IMP=0x0000000000048c29
- (_Bool)deviceSupportsFeatureSet:(unsigned long long)arg1;	// IMP=0x0000000000048c21
- (_Bool)deviceOrFeatureProfileSupportsFeatureSet:(unsigned long long)arg1;	// IMP=0x0000000000048bba
- (_Bool)supportsFeatureSet:(unsigned long long)arg1;	// IMP=0x0000000000048ba8
- (_Bool)isMagicMipmapSupported;	// IMP=0x0000000000048ae4
- (id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;	// IMP=0x0000000000048ad2
- (id)newDagStringWithGraphs:(id)arg1;	// IMP=0x0000000000048a64
- (id)newLibraryWithDescriptorSPI:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000048a52
- (id)newLibraryWithDescriptor:(id)arg1 destinationBinaryArchive:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000048a40
- (void)newLibraryWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000048a2e
- (id)newLibraryWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000048a1c
- (id)newLibraryWithStitchedDescriptorSPI:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000048a05
- (id)newLibraryWithStitchedDescriptor:(id)arg1 destinationBinaryArchive:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000048860
- (void)newLibraryWithStitchedDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000048605
- (id)newLibraryWithStitchedDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000477d6
- (id)newLibraryWithDAG:(id)arg1 functions:(id)arg2 error:(id *)arg3;	// IMP=0x000000000004762f
- (id)newComputePipelineStateWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;	// IMP=0x00000000000475a1
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004745a
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000000473d9
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000472a1
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000047233
@property(readonly, getter=isLargeMRTSupported) _Bool largeMRTSupported;
- (void)compileVisibleFunction:(id)arg1 withDescriptor:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000047225
- (void)compileVisibleFunction:(id)arg1 withDescriptor:(id)arg2 error:(id *)arg3;	// IMP=0x000000000004721f
- (void)compileVisibleFunction:(id)arg1 withDescriptor:(id)arg2 destinationBinaryArchive:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000047219
@property(readonly, getter=isFixedLinePointFillDepthGradientSupported) _Bool FixedLinePointFillDepthGradientSupported;
@property(readonly, getter=isAnisoSampleFixSupported) _Bool AnisoSampleFixSupported;
- (_Bool)supportsTextureWriteFPRoundingMode:(long long)arg1;	// IMP=0x00000000000471e8
@property(readonly) long long defaultTextureWriteRoundingMode;
- (_Bool)supportsTextureWriteRoundingMode:(long long)arg1;	// IMP=0x00000000000471d4
@property(readonly, getter=isRTZRoundingSupported) _Bool RTZRoundingSupported;
@property(readonly, getter=areBarycentricCoordsSupported) _Bool barycentricCoordsSupported;
- (_Bool)isClampToHalfBorderSupported;	// IMP=0x00000000000471b2
- (_Bool)isCustomBorderColorSupported;	// IMP=0x00000000000471aa
@property(readonly, getter=isRGB10A2GammaSupported) _Bool RGB10A2GammaSupported;
@property(readonly, getter=isMsaa32bSupported) _Bool msaa32bSupported;
@property(readonly, getter=isBCTextureCompressionSupported) _Bool BCTextureCompressionSupported;
@property(readonly, getter=isFloat32FilteringSupported) _Bool float32FilteringSupported;
- (id)newDynamicLibraryWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000047124
- (id)newDynamicLibraryWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004710d
- (id)newDynamicLibrary:(id)arg1 computeDescriptor:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000470b4
- (id)newDynamicLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004705c
- (id)_newDynamicLibrary:(id)arg1 computeDescriptor:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000046d8c
- (_Bool)validateDynamicLibrary:(id)arg1 state:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000046c72
- (_Bool)validateDynamicLibraryURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000046be0
- (id)newDynamicLibraryError:(unsigned long long)arg1 message:(id)arg2;	// IMP=0x0000000000046b73
- (id)newBinaryArchiveWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000046b31
- (id)newBinaryLibraryWithOptions:(unsigned long long)arg1 url:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000046aae
- (void)dumpPipelineDescriptorsIfRequested;	// IMP=0x0000000000046a63
- (id)endCollectingPipelineDescriptors;	// IMP=0x00000000000469e0
- (void)startCollectingPipelineDescriptorsFromLibrary:(id)arg1 filePath:(id)arg2;	// IMP=0x000000000004696d
- (void)startCollectingPipelineDescriptorsUsingPrefixForNames:(id)arg1;	// IMP=0x00000000000468f2
- (void)startCollectingPipelineDescriptors;	// IMP=0x0000000000046890
- (unsigned long long)optionsForPipelineLibrarySerialization;	// IMP=0x0000000000046885
- (void)registerTileRenderPipelineDescriptor:(id)arg1;	// IMP=0x000000000004683f
- (void)registerComputePipelineDescriptor:(id)arg1;	// IMP=0x00000000000467f9
- (void)registerRenderPipelineDescriptor:(id)arg1;	// IMP=0x00000000000467b3
- (id)newPipelineLibraryWithFilePath:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000466fc
- (id)newDynamicLibraryFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000466ea
- (id)newLibraryWithCIFilters:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;	// IMP=0x00000000000466d0
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000046633
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000046435
- (id)newLibraryWithData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000463df
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000462e9
- (id)newDefaultLibrary;	// IMP=0x000000000004625e
- (CDStruct_c0454aff)pipelineCacheStats;	// IMP=0x0000000000046233
- (CDStruct_c0454aff)libraryCacheStats;	// IMP=0x0000000000046208
- (_Bool)copyShaderCacheToPath:(id)arg1;	// IMP=0x00000000000461d7
- (void)unloadShaderCaches;	// IMP=0x000000000004619f
- (id)productName;	// IMP=0x0000000000046192
- (id)familyName;	// IMP=0x0000000000046185
- (id)vendorName;	// IMP=0x0000000000046178
- (void)compilerPropagatesThreadPriority:(_Bool)arg1;	// IMP=0x0000000000046172
- (id)newStructTypeWithSerializedData:(id)arg1;	// IMP=0x00000000000460c5
- (id)serializeStructType:(id)arg1;	// IMP=0x00000000000460ae
- (id)serializeStructType:(id)arg1 version:(unsigned int)arg2;	// IMP=0x0000000000045fee
- (id)newComputePipelineDescriptorWithSerializedData:(id)arg1 deserializationContext:(id)arg2;	// IMP=0x0000000000045f9a
- (id)serializeComputePipelineDescriptor:(id)arg1;	// IMP=0x0000000000045ec0
- (id)newRenderPipelineDescriptorWithSerializedData:(id)arg1 deserializationContext:(id)arg2;	// IMP=0x0000000000045e6c
- (id)serializeRenderPipelineDescriptor:(id)arg1;	// IMP=0x0000000000045d65
- (id)_deviceWrapper;	// IMP=0x0000000000045d5d
- (void)_setDeviceWrapper:(id)arg1;	// IMP=0x0000000000045d57
@property(readonly) NSString *name;
@property(readonly) unsigned long long sparseTexturesSupport;
- (id)reportLeaks;	// IMP=0x0000000000045ae4
- (_Bool)isQuadDataSharingSupported;	// IMP=0x0000000000045acd
@property(readonly, getter=areRasterOrderGroupsSupported) _Bool rasterOrderGroupsSupported;
@property(readonly) unsigned long long argumentBuffersSupport;
@property(readonly) unsigned long long readWriteTextureSupport;
- (id)newLibraryWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000045966
- (void)releaseCacheEntry:(struct MTLLibraryContainer *)arg1;	// IMP=0x0000000000045952
- (id)newLibraryWithFile:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000045906
- (void)allowLibrariesFromOtherPlatforms;	// IMP=0x00000000000458d0
- (_Bool)isCollectingPipelines;	// IMP=0x00000000000458a8
- (_Bool)isCollectingLibraries;	// IMP=0x0000000000045873
- (void)initSerializationPaths;	// IMP=0x0000000000045755
- (void)setRawBVHBuilderPtr:(id)arg1;	// IMP=0x0000000000045721
- (id)getRawBVHBuilderPtr;	// IMP=0x0000000000045714
- (struct os_unfair_lock_s *)getBVHBuilderLock;	// IMP=0x0000000000045707
- (void *)getShaderCacheKeys;	// IMP=0x00000000000456dc
- (id)newFunctionWithGLIR:(void *)arg1 inputsDescription:(id)arg2 functionType:(unsigned long long)arg3;	// IMP=0x00000000000456a1
- (id)newFunctionWithGLIR:(void *)arg1 functionType:(unsigned long long)arg2;	// IMP=0x0000000000045669
- (id)newFunctionWithGLESIR:(void *)arg1 inputsDescription:(id)arg2 functionType:(unsigned long long)arg3;	// IMP=0x0000000000045656
- (id)newFunctionWithGLESIR:(void *)arg1 functionType:(unsigned long long)arg2;	// IMP=0x0000000000045641
- (id)newFunctionWithGLCoreIR:(void *)arg1 inputsDescription:(id)arg2 functionType:(unsigned long long)arg3;	// IMP=0x0000000000045631
- (id)newFunctionWithGLCoreIR:(void *)arg1 functionType:(unsigned long long)arg2;	// IMP=0x000000000004561f
- (id)description;	// IMP=0x000000000004560b
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000454f5
- (unsigned long long)getSupportedCommandBufferErrorOptions;	// IMP=0x00000000000454ed
- (_Bool)areProgrammableSamplePositionsSupported;	// IMP=0x00000000000454e5
- (id)loadDynamicLibrariesForFunction:(id)arg1 insertLibraries:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00000000000454b8
- (id)loadDynamicLibrariesForFunction:(id)arg1 insertLibraries:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000454a0
- (id)loadDynamicLibrariesForComputeDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000045437
- (id)loadDynamicLibrariesForComputeDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000045420
@property(readonly) MTLTargetDeviceArchitecture *targetDeviceArchitecture;
@property(readonly) const struct MTLTargetDeviceArch *targetDeviceInfo;
- (_Bool)supportsFamily:(long long)arg1;	// IMP=0x00000000000453e0
- (void)initGPUFamilySupport;	// IMP=0x0000000000043c16
- (void)initFeatureQueries;	// IMP=0x0000000000043bbc
- (Class)featureQueryClass;	// IMP=0x0000000000043bab
- (void)dealloc;	// IMP=0x0000000000043a81
- (void)initProgressTracking;	// IMP=0x0000000000043a36
- (id)init;	// IMP=0x00000000000438e2
@property(readonly, nonatomic) _Bool supportsStackOverflowErrorCode;
@property(readonly, nonatomic) _Bool supportsCommandBufferJump;
@property(readonly, nonatomic) _Bool supportsLossyCompression;
@property(readonly, nonatomic) _Bool supportsAtomicUlongVoidMinMax;
@property(readonly, nonatomic) _Bool supportsSparseDepthAttachments;
@property(readonly, nonatomic) _Bool supportsBfloat16Format;
@property(readonly, nonatomic) _Bool supportsSIMDShuffleAndFill;
@property(readonly, nonatomic) _Bool supportsQuadReduction;
@property(readonly, nonatomic) _Bool supportsInterchangeTiled;
@property(readonly, nonatomic) _Bool supportsSIMDGroupMatrix;
@property(readonly, nonatomic) _Bool supportsComputeCompressedTextureWrite;
@property(readonly, nonatomic) _Bool supportsDevicePartitioning;
@property(readonly, nonatomic) _Bool supportsForkJoin;
@property(readonly, nonatomic) _Bool supportsBufferBoundsChecking;
@property(readonly, nonatomic) _Bool supportsYCBCRPackedFormatsXR;
@property(readonly, nonatomic) _Bool supportsYCBCRPackedFormats12;
@property(readonly, nonatomic) _Bool supportsYCBCRPackedFormatsPQ;
@property(readonly, nonatomic) _Bool supportsAnisoSampleFix;
@property(readonly, nonatomic) _Bool supportsRTZRounding;
@property(readonly, nonatomic) _Bool supportsFloat16InfNanFiltering;
@property(readonly, nonatomic) _Bool supportsFloat16BCubicFiltering;
@property(readonly, nonatomic) _Bool supportsForceSeamsOnCubemaps;
@property(readonly, nonatomic) _Bool supportsTexture2DMultisampleArray;
@property(readonly, nonatomic) _Bool supportsDepthClipModeClampExtended;
@property(readonly, nonatomic) _Bool supportsSIMDReduction;
@property(readonly, nonatomic) _Bool supportsMirrorClampToEdgeSamplerMode;
@property(readonly, nonatomic) _Bool supportsBlackOrWhiteSamplerBorderColors;
@property(readonly, nonatomic) _Bool supportsShaderBarycentricCoordinates;
@property(readonly, nonatomic) _Bool supportsPrimitiveMotionBlur;
@property(readonly, nonatomic) _Bool supportsRaytracingFromRender;
@property(readonly, nonatomic) _Bool supportsSharedFunctionTables;
@property(readonly, nonatomic) _Bool supportsFunctionPointersFromRender;
@property(readonly, nonatomic) _Bool supportsRenderDynamicLibraries;
@property(readonly, nonatomic) _Bool supportsStatefulDynamicLibraries;
@property(readonly, nonatomic) _Bool supportsDynamicLibraries;
@property(readonly, nonatomic) _Bool supportsFunctionPointers;
@property(readonly, nonatomic) _Bool supportsIndirectWritableTextures;
@property(readonly, nonatomic) _Bool supportsSparseHeaps;
@property(readonly, nonatomic) _Bool supportsSparseTextures;
@property(readonly, nonatomic) _Bool supportsASTCHDRTextureCompression;
@property(readonly, nonatomic) _Bool supportsYCBCRFormatsXR;
@property(readonly, nonatomic) _Bool supportsYCBCRFormats12;
@property(readonly, nonatomic) _Bool supportsYCBCRFormatsPQ;
@property(readonly, nonatomic) _Bool supportsYCBCRFormats;
@property(readonly, nonatomic) _Bool supportsVariableRateRasterization;
@property(readonly, nonatomic) _Bool supportsWritableArrayOfTextures;
@property(readonly, nonatomic) _Bool supportsSIMDShufflesAndBroadcast;
@property(readonly, nonatomic) _Bool supportsShaderMinLODClamp;
@property(readonly, nonatomic) _Bool supportsSIMDGroup;
@property(readonly, nonatomic) _Bool supportsUnalignedVertexFetch;
@property(readonly, nonatomic) _Bool supportsFP32TessFactors;
@property(readonly, nonatomic) _Bool supportsStencilFeedback;
@property(readonly, nonatomic) _Bool supportsMSAAStencilResolveFilter;
@property(readonly, nonatomic) _Bool supportsIndirectTessellation;
@property(readonly, nonatomic) _Bool supportsViewportAndScissorArray;
@property(readonly, nonatomic) _Bool supportsLayeredRendering;
@property(readonly, nonatomic) _Bool supports2DLinearTexArraySPI;
@property(readonly, nonatomic) _Bool supportsSeparateVisibilityAndShadingRate;
@property(readonly, nonatomic) _Bool supportsNonSquareTileShaders;
@property(readonly, nonatomic) _Bool supportsLinearTexture2DArray;
@property(readonly, nonatomic) _Bool supportsRasterOrderGroupsColorAttachment;
@property(readonly, nonatomic) _Bool supportsRasterOrderGroups;
@property(readonly, nonatomic) _Bool supportsRenderPassWithoutRenderTarget;
@property(readonly, nonatomic) _Bool supportsConcurrentComputeDispatch;
@property(readonly, nonatomic) _Bool supportsQuadShufflesAndBroadcast;
@property(readonly, nonatomic) _Bool supportsTextureCubeArray;
@property(readonly, nonatomic) _Bool supportsReadWriteTextureCubeArguments;
@property(readonly, nonatomic) _Bool supportsReadWriteTextureArguments;
@property(readonly, nonatomic) _Bool supportsNonUniformThreadgroupSize;
@property(readonly, nonatomic) _Bool supportsMipLevelsSmallerThanBlockSize;
@property(readonly, nonatomic) _Bool supportsPostDepthCoverage;
@property(readonly, nonatomic) _Bool supportsNativeHardwareFP16;
@property(readonly, nonatomic) _Bool supportsImageBlockSampleCoverageControl;
@property(readonly, nonatomic) _Bool supportsTileShaders;
@property(readonly, nonatomic) _Bool supportsImageBlocks;
@property(readonly, nonatomic) _Bool supportsRenderTextureWrites;
@property(readonly, nonatomic) _Bool supportsQuadGroup;
@property(readonly, nonatomic) _Bool supportsMemoryOrderAtomics;
@property(readonly, nonatomic) _Bool supportsAlphaYUVFormats;
@property(readonly, nonatomic) _Bool supportsTextureSwizzle;
@property(readonly, nonatomic) _Bool supportsTextureOutOfBoundsReads;
@property(readonly, nonatomic) _Bool supportsNorm16BCubicFiltering;
@property(readonly, nonatomic) _Bool supportsIndirectTextures;
@property(readonly, nonatomic) _Bool supportsIndirectStageInRegion;
@property(readonly, nonatomic) _Bool supportsCMPIndirectCommandBuffers;
@property(readonly, nonatomic) _Bool supportsGFXIndirectCommandBuffers;
@property(readonly, nonatomic) _Bool supportsMSAADepthResolveFilter;
@property(readonly, nonatomic) _Bool supportsMSAAStencilResolve;
@property(readonly, nonatomic) _Bool supportsMSAADepthResolve;
@property(readonly, nonatomic) _Bool supportsSamplerCompareFunction;
@property(readonly, nonatomic) _Bool supportsMutableTier1ArgumentBuffers;
@property(readonly, nonatomic) _Bool supportsCombinedMSAAStoreAndResolveAction;
@property(readonly, nonatomic) _Bool supportsArrayOfSamplers;
@property(readonly, nonatomic) _Bool supportsArrayOfTextures;
@property(readonly, nonatomic) _Bool supportsReadWriteBufferArguments;
@property(readonly, nonatomic) _Bool supportsTessellation;
@property(readonly, nonatomic) _Bool supportsIndirectDrawAndDispatch;
@property(readonly, nonatomic) _Bool supportsBaseVertexInstanceDrawing;
@property(readonly, nonatomic) _Bool supportsCountingOcclusionQuery;
@property(readonly, nonatomic) _Bool supportsFragmentBufferWrites;
@property(readonly, nonatomic) _Bool supportsExtendedXR10Formats;
@property(readonly, nonatomic) _Bool supports3DASTCTextures;
@property(readonly, nonatomic) _Bool supportsPacked32TextureBufferWrites;
@property(readonly, nonatomic) _Bool supportsDepthClipMode;
@property(readonly, nonatomic) _Bool supportsSRGBwrites;
@property(readonly, nonatomic) _Bool supportsPublicXR10Formats;
@property(readonly, nonatomic) _Bool supportsExtendedYUVFormats;
@property(readonly, nonatomic) _Bool supportsASTCTextureCompression;
@property(readonly, nonatomic) _Bool supportsBinaryLibraries;
@property(readonly, nonatomic) _Bool supportsBinaryArchives;
@property(readonly, nonatomic) _Bool supportsIABHashForTools;
@property(readonly, nonatomic) _Bool supportsDynamicControlPointCount;
@property(readonly, nonatomic) _Bool supportsRenderTargetTextureRotation;
@property(readonly, nonatomic) _Bool supportsCompressedTextureViewSPI;
@property(readonly, nonatomic) _Bool supportsGPUStatistics;
@property(readonly, nonatomic) _Bool supportsSeparateDepthStencil;
@property(readonly, nonatomic) _Bool supportsRelaxedTextureViewRequirements;
@property(readonly, nonatomic) _Bool supportsShaderLODAverage;
@property(readonly, nonatomic) _Bool supportsInvariantVertexPosition;
@property(readonly, nonatomic) _Bool supportsFastMathInfNaNPropagation;
@property(readonly, nonatomic) _Bool supportsMemorylessRenderTargets;
@property(readonly, nonatomic) _Bool supportsRenderToLinearTextures;
@property(readonly, nonatomic) _Bool supportsProgrammableBlending;
@property(readonly, nonatomic) _Bool supportsBufferWithIOSurface;
@property(readonly, nonatomic) _Bool supportsFragmentOnlyEncoders;
@property(readonly, nonatomic) _Bool supportsPipelineLibraries;
@property(readonly, nonatomic) _Bool supportsLinearTextureFromSharedBuffer;
@property(readonly, nonatomic) _Bool supportsSharedStorageTextures;
@property(readonly, nonatomic) _Bool supportsSharedStorageHeapResources;
@property(readonly, nonatomic) _Bool supportsNonPrivateMSAATextures;
@property(readonly, nonatomic) _Bool supportsNonPrivateDepthStencilTextures;
@property(readonly, nonatomic) _Bool supportsLimitedYUVFormats;
@property(readonly, nonatomic) _Bool supportsBufferPrefetchStatistics;
@property(readonly, nonatomic) _Bool supportsSharedTextureHandles;
@property(readonly, nonatomic) _Bool supportsNonZeroTextureWriteLOD;
@property(readonly, nonatomic) _Bool supportsLateEvalEvent;
@property(readonly, nonatomic) _Bool supportsFixedLinePointFillDepthGradient;
@property(readonly, nonatomic) _Bool supportsInt64;
@property(readonly, nonatomic) _Bool supportsPullModelInterpolation;
@property(readonly, nonatomic) _Bool supportsOpenCLTextureWriteSwizzles;
@property(readonly, nonatomic) _Bool supportsPlacementHeaps;
@property(readonly, nonatomic) _Bool supportsVertexAmplification;
@property(readonly, nonatomic) _Bool supportsQueryTextureLOD;
@property(readonly, nonatomic) _Bool supports32BitFloatFiltering;
@property(readonly, nonatomic) _Bool supports32BitMSAA;
@property(readonly, nonatomic) _Bool supports32bpcMSAATextures;
@property(readonly, nonatomic) _Bool supportsTLS;
@property(readonly, nonatomic) _Bool supportsGlobalVariableRelocationCompute;
@property(readonly, nonatomic) _Bool supportsGlobalVariableRelocationRender;
@property(readonly, nonatomic) _Bool supportsGlobalVariableRelocation;
@property(readonly, nonatomic) _Bool supportsPrimitiveRestartOverride;
@property(readonly, nonatomic) _Bool supportsRGBA10A2Gamma;
@property(readonly, nonatomic) _Bool supports3DBCTextures;
@property(readonly, nonatomic) _Bool supportsBCTextureCompression;
@property(readonly, nonatomic) _Bool supportsSamplerAddressModeClampToHalfBorder;
@property(readonly, nonatomic) _Bool supportsCustomBorderColor;
@property(readonly, nonatomic) _Bool supportsLargeFramebufferConfigs;
@property(readonly, nonatomic) _Bool supportsProgrammableSamplePositions;
@property(readonly, nonatomic) _Bool supportsStreamingCodecSignaling;
@property(readonly, nonatomic) _Bool supportsReadWriteTextureArgumentsTier2;
@property(readonly, nonatomic) _Bool supportsArgumentBuffersTier2;
@property(readonly, nonatomic) _Bool supportsRenderMemoryBarrier;
@property(readonly, nonatomic) _Bool supportsComputeMemoryBarrier;
@property(readonly, nonatomic) _Bool supportsBufferlessClientStorageTexture;

// Remaining properties
@property(readonly) unsigned long long maxBufferLength; // @dynamic maxBufferLength;

@end

