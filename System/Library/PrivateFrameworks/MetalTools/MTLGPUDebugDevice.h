//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSMutableArray;
@protocol MTLComputePipelineState, MTLDepthStencilState, MTLRenderPipelineState;

@interface MTLGPUDebugDevice
{
    struct MetalBufferHeap bufferHeap;	// 96 = 0x60
    struct Options boundsCheckOptions;	// 248 = 0xf8
    struct GPUDebugDeviceOptions deviceOptions;	// 276 = 0x114
    struct GPUDebugBufferDescriptorHeap globalBufferHeap;	// 280 = 0x118
    struct GPUDebugConstantBufferCache constantBufferCache;	// 416 = 0x1a0
    struct GlobalResidentBufferList globalICBBufferResidentList;	// 536 = 0x218
    NSData *_boundsCheckOptionsData;	// 632 = 0x278
    NSMutableArray *_argumentDescriptors;	// 640 = 0x280
    struct once_flag _deviceInitFlag;	// 648 = 0x288
    struct once_flag _icbPipelineInit;	// 656 = 0x290
    id <MTLRenderPipelineState> _icbInheritVertexPipelineState;	// 664 = 0x298
    id <MTLRenderPipelineState> _icbInheritNoneVertexPipelineState;	// 672 = 0x2a0
    id <MTLRenderPipelineState> _icbInheritBuffersVertexPipelineState;	// 680 = 0x2a8
    id <MTLDepthStencilState> _icbDepthStencilState;	// 688 = 0x2b0
    id <MTLComputePipelineState> _icbInheritComputePipelineState;	// 696 = 0x2b8
    id <MTLComputePipelineState> _icbInheritNoneComputePipelineState;	// 704 = 0x2c0
    id <MTLComputePipelineState> _icbInheritBuffersComputePipelineState;	// 712 = 0x2c8
    id <MTLComputePipelineState> _icbInheritBothComputePipelineState;	// 720 = 0x2d0
    id <MTLComputePipelineState> _accelerationStructureComputePipelineState;	// 728 = 0x2d8
}

- (id).cxx_construct;	// IMP=0x000000000001d516
- (void).cxx_destruct;	// IMP=0x000000000001d480
@property(readonly, nonatomic) id <MTLComputePipelineState> accelerationStructureComputePipelineState; // @synthesize accelerationStructureComputePipelineState=_accelerationStructureComputePipelineState;
@property(readonly, nonatomic) _Bool supportsResourceUsageValidation;
- (id)getFunctionForBaseObject:(id)arg1 library:(id)arg2;	// IMP=0x000000000001d3c8
- (id)getDynamicLibraryForBaseObject:(id)arg1;	// IMP=0x000000000001d2d1
- (_Bool)supportsForkJoin;	// IMP=0x000000000001d2c9
- (_Bool)supportsStackOverflowErrorCode;	// IMP=0x000000000001d2c1
- (_Bool)supportsRaytracingFromRender;	// IMP=0x000000000001d28f
- (_Bool)supportsRaytracing;	// IMP=0x000000000001d27b
- (_Bool)supportsSharedFunctionTables;	// IMP=0x000000000001d269
- (_Bool)supportsFunctionPointersFromRender;	// IMP=0x000000000001d257
- (_Bool)supportsRenderDynamicLibraries;	// IMP=0x000000000001d200
- (_Bool)supportsGFXIndirectCommandBuffers;	// IMP=0x000000000001d1f8
- (_Bool)supportsCMPIndirectCommandBuffers;	// IMP=0x000000000001d1c6
- (_Bool)supportsArgumentBuffersTier2;	// IMP=0x000000000001d1b0
- (id)newIntersectionFunctionTableWithDescriptor:(id)arg1;	// IMP=0x000000000001d131
- (id)newVisibleFunctionTableWithDescriptor:(id)arg1;	// IMP=0x000000000001d0be
- (id)newAccelerationStructureWithBuffer:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000001d019
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1 resourceIndex:(unsigned long long)arg2;	// IMP=0x000000000001cf91
- (id)newAccelerationStructureWithDescriptor:(id)arg1;	// IMP=0x000000000001cf01
- (id)newAccelerationStructureWithSize:(unsigned long long)arg1;	// IMP=0x000000000001ce7e
- (CDStruct_14f26992)accelerationStructureSizesWithDescriptor:(id)arg1;	// IMP=0x000000000001ce07
- (void)validateRaytracing;	// IMP=0x000000000001cdd3
- (id)newArgumentEncoderWithLayout:(id)arg1;	// IMP=0x000000000001cdcb
- (id)newArgumentEncoderWithArguments:(id)arg1;	// IMP=0x000000000001ca97
- (id)newArgumentEncoderWithArguments:(id)arg1 structType:(id *)arg2;	// IMP=0x000000000001ca0f
- (id)newTextureWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 descriptor:(id)arg3 deallocator:(CDUnknownBlockType)arg4;	// IMP=0x000000000001c9a6
- (id)newTextureWithDescriptor:(id)arg1 iosurface:(struct __IOSurface *)arg2 plane:(unsigned long long)arg3;	// IMP=0x000000000001c93d
- (id)newTextureWithDescriptor:(id)arg1;	// IMP=0x000000000001c8d4
- (id)newHeapWithDescriptor:(id)arg1;	// IMP=0x000000000001c856
- (id)newBufferWithDescriptor:(id)arg1;	// IMP=0x000000000001c7e4
- (id)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 gpuAddress:(unsigned long long)arg4 deallocator:(CDUnknownBlockType)arg5;	// IMP=0x000000000001c7dc
- (id)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 gpuAddress:(unsigned long long)arg4;	// IMP=0x000000000001c7d4
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2 gpuAddress:(unsigned long long)arg3;	// IMP=0x000000000001c7cc
- (id)newBufferWithIOSurface:(struct __IOSurface *)arg1;	// IMP=0x000000000001c75a
- (id)newBufferWithBytesNoCopy:(void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3 deallocator:(CDUnknownBlockType)arg4;	// IMP=0x000000000001c6c5
- (id)newBufferWithBytes:(const void *)arg1 length:(unsigned long long)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000001c63f
- (id)newBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000001c5be
- (id)newBinaryLibraryWithOptions:(unsigned long long)arg1 url:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001c531
- (id)newBinaryArchiveWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001c4b3
- (id)loadDynamicLibrariesForFunction:(id)arg1 insertLibraries:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x000000000001c068
- (id)loadDynamicLibrariesForFunction:(id)arg1 insertLibraries:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001c050
- (id)loadDynamicLibrariesForComputeDescriptor:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000001bfec
- (id)loadDynamicLibrariesForComputeDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001bf88
- (id)newDynamicLibrary:(id)arg1 computeDescriptor:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001be77
- (id)newDynamicLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001bd9e
- (id)newDynamicLibraryWithURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000001bcd3
- (id)newDynamicLibraryFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001bcb9
- (id)newDynamicLibraryWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001bc9f
- (void)newLibraryWithSource:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001bbc7
- (id)newLibraryWithSource:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001ba77
- (id)newLibraryWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001b9e0
- (id)newLibraryWithData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001b949
- (id)newLibraryWithFile:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001b8b2
- (id)newDagStringWithGraphs:(id)arg1;	// IMP=0x000000000001b892
- (id)newLibraryWithDescriptorSPI:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001b880
- (void)newLibraryWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b86e
- (id)newLibraryWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001b85c
- (id)newLibraryWithStitchedDescriptorSPI:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001b7bc
- (void)newLibraryWithStitchedDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001b6cc
- (id)newLibraryWithStitchedDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001b62c
- (id)unwrapStitchedLibraryDescriptor:(id)arg1;	// IMP=0x000000000001b536
- (id)newLibraryWithDAG:(id)arg1 functions:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001b3e3
- (id)newDefaultLibraryWithBundle:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001b34c
- (id)newDefaultLibrary;	// IMP=0x000000000001b2c1
- (id)newLibraryWithCIFilters:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;	// IMP=0x000000000001b0b0
- (id)newLibraryWithImageFilterFunctionsSPI:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;	// IMP=0x000000000001ae9f
- (id)newLibraryWithCIFiltersForComputePipeline:(id)arg1 imageFilterFunctionInfo:(const CDStruct_dbc1e4aa *)arg2 error:(id *)arg3;	// IMP=0x000000000001ac74
@property(readonly, nonatomic) id <MTLComputePipelineState> ICB_Inherit_Both_ComputePipelineState;
@property(readonly, nonatomic) id <MTLComputePipelineState> ICB_Inherit_Buffers_ComputePipelineState;
@property(readonly, nonatomic) id <MTLComputePipelineState> ICB_Inherit_None_ComputePipelineState;
@property(readonly, nonatomic) id <MTLComputePipelineState> ICB_Inherit_PSO_ComputePipelineState;
@property(readonly, nonatomic) id <MTLDepthStencilState> ICB_DepthStencilState;
@property(readonly, nonatomic) id <MTLRenderPipelineState> ICB_Inherit_Buffers_VertexPipelineState;
@property(readonly, nonatomic) id <MTLRenderPipelineState> ICB_Inherit_None_VertexPipelineState;
@property(readonly, nonatomic) id <MTLRenderPipelineState> ICB_Inherit_PSO_VertexPipelineState;
- (id)newIndirectCommandBufferWithDescriptor:(id)arg1 maxCommandCount:(unsigned long long)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000001aa7b
- (id)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000001a9fa
- (void)newComputePipelineStateWithFunction:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001a98b
- (void)newComputePipelineStateWithFunction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a91c
- (id)newComputePipelineStateWithFunction:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001a8ae
- (void)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001a712
- (void)newComputePipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a6b2
- (id)newComputePipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000001a576
- (id)newComputePipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001a55c
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001a3d2
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001a3b8
- (void)newRenderPipelineStateWithTileDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a358
- (id)newRenderPipelineStateWithTileDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000001a220
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001a077
- (void)newRenderPipelineStateWithDescriptor:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000019ffd
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 options:(unsigned long long)arg2 reflection:(id *)arg3 error:(id *)arg4;	// IMP=0x0000000000019e67
- (id)newRenderPipelineStateWithDescriptor:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019e4d
- (id)newCommandQueueWithMaxCommandBufferCount:(unsigned long long)arg1;	// IMP=0x0000000000019df7
- (id)newCommandQueue;	// IMP=0x0000000000019dbf
- (id)newCommandQueueWithDescriptor:(id)arg1;	// IMP=0x0000000000019d4b
- (void)onComputePipelineCreated:(id)arg1;	// IMP=0x0000000000019d05
- (void)onRenderPipelineCreated:(id)arg1;	// IMP=0x0000000000019a20
- (id)unwrapAndModifyTileRenderPipelineDescriptor:(id *)arg1 options:(unsigned long long *)arg2;	// IMP=0x00000000000199b3
- (id)_modifyTilePipelineDescriptor:(id)arg1;	// IMP=0x00000000000198cb
- (id)unwrapAndModifyComputePipelineDescriptor:(id *)arg1 options:(unsigned long long *)arg2;	// IMP=0x000000000001985e
- (id)_modifyComputePipelineDescriptor:(id)arg1;	// IMP=0x0000000000019798
- (id)unwrapAndModifyRenderPipelineDescriptor:(id *)arg1 options:(unsigned long long *)arg2;	// IMP=0x000000000001972b
- (id)_modifyRenderPipelineDescriptor:(id)arg1;	// IMP=0x00000000000194bd
- (void)_prepareInsertLibraries:(id)arg1;	// IMP=0x00000000000193ae
- (void)_prepareBinaryLinkedFunctions:(id)arg1;	// IMP=0x000000000001929c
- (id)_modifyPluginData:(id)arg1;	// IMP=0x0000000000019237
- (void)_modifyCompileOptions:(unsigned long long *)arg1;	// IMP=0x000000000001920a
- (void)modifyFunctionDescriptor:(id)arg1;	// IMP=0x00000000000191a6
- (id)newInternalBufferWithLength:(unsigned long long)arg1 options:(unsigned long long)arg2;	// IMP=0x0000000000019186
- (id)newStageArgumentBuffer;	// IMP=0x000000000001915c
- (id)newStageBufferArgumentEncoder;	// IMP=0x000000000001912e
- (void)dealloc;	// IMP=0x0000000000019014
- (id)initWithBaseObject:(id)arg1 parent:(id)arg2;	// IMP=0x00000000000183ee

@end

