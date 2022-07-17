//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLDebugCommandBuffer, MTLDepthStencilDescriptor, MTLRenderPassDescriptor, NSMutableSet;
@protocol MTLDepthStencilState, MTLRenderPipelineState;

@interface MTLDebugRenderCommandEncoder
{
    unsigned int _dirtyBits;	// 36 = 0x24
    _Bool _openGLModeEnabled;	// 40 = 0x28
    CDStruct_4bcfbbae *_vertexBuiltinArguments;	// 48 = 0x30
    struct {
        unsigned long long pixelFormat;
        unsigned long long sampleCount;
    } _attachmentInfo[10];	// 56 = 0x38
    id <MTLRenderPipelineState> _previousRenderPipelineStateWithWritesToImageBlock;	// 216 = 0xd8
    unsigned long long _resolvedRasterSampleCount;	// 224 = 0xe0
    CDStruct_0f4bf8df _vertexBuffers[36];	// 232 = 0xe8
    CDStruct_0f4bf8df _vertexTextures[128];	// 3112 = 0xc28
    CDStruct_0f4bf8df _vertexSamplers[16];	// 13352 = 0x3428
    CDStruct_0f4bf8df _fragmentBuffers[31];	// 14632 = 0x3928
    CDStruct_0f4bf8df _fragmentTextures[128];	// 17112 = 0x42d8
    CDStruct_0f4bf8df _fragmentSamplers[16];	// 27352 = 0x6ad8
    CDStruct_0f4bf8df _tileBuffers[31];	// 28632 = 0x6fd8
    CDStruct_0f4bf8df _tileTextures[128];	// 31112 = 0x7988
    CDStruct_0f4bf8df _tileSamplers[16];	// 41352 = 0xa188
    CDStruct_0f4bf8df _threadgroupMemoryArguments[31];	// 42632 = 0xa688
    unsigned int _encoderState;	// 45112 = 0xb038
    unsigned int _unknownStoreActions;	// 45116 = 0xb03c
    void *_visibilityOffsets;	// 45120 = 0xb040
    struct vector<MTLViewport, std::allocator<MTLViewport>> _viewports;	// 45128 = 0xb048
    struct vector<MTLScissorRect, std::allocator<MTLScissorRect>> _scissorRects;	// 45152 = 0xb060
    unsigned long long _amplificationMode;	// 45176 = 0xb078
    unsigned long long _amplificationValue;	// 45184 = 0xb080
    unsigned long long _vertexAmplificationCount;	// 45192 = 0xb088
    struct deque<id, std::allocator<id>> _updatedFences;	// 45200 = 0xb090
    NSMutableSet *_storingRenderTargets;	// 45248 = 0xb0c0
    MTLDebugCommandBuffer *_commandBuffer;	// 45256 = 0xb0c8
    unsigned long long _maxVertexBuffers;	// 45264 = 0xb0d0
    unsigned long long _attachmentWriteMask;	// 45272 = 0xb0d8
    CDStruct_da2e99ad _objectThreadsPerTG;	// 45280 = 0xb0e0
    CDStruct_da2e99ad _meshThreadsPerTG;	// 45304 = 0xb0f8
    float _lineWidth;	// 45328 = 0xb110
    float _depthBias;	// 45332 = 0xb114
    float _depthBiasSlopeScale;	// 45336 = 0xb118
    float _depthBiasClamp;	// 45340 = 0xb11c
    unsigned int _frontStencilRef;	// 45344 = 0xb120
    unsigned int _backStencilRef;	// 45348 = 0xb124
    float _blendColorRed;	// 45352 = 0xb128
    float _blendColorGreen;	// 45356 = 0xb12c
    float _blendColorBlue;	// 45360 = 0xb130
    float _blendColorAlpha;	// 45364 = 0xb134
    float _tessellationFactorScale;	// 45368 = 0xb138
    MTLRenderPassDescriptor *_descriptor;	// 45376 = 0xb140
    unsigned long long _frontFacingWinding;	// 45384 = 0xb148
    unsigned long long _cullMode;	// 45392 = 0xb150
    unsigned long long _depthClipMode;	// 45400 = 0xb158
    unsigned long long _triangleFillMode;	// 45408 = 0xb160
    id <MTLRenderPipelineState> _renderPipelineState;	// 45416 = 0xb168
    unsigned long long _peakPerSampleStorage;	// 45424 = 0xb170
    unsigned long long _resolvedSampleCount;	// 45432 = 0xb178
    id <MTLDepthStencilState> _depthStencilState;	// 45440 = 0xb180
    MTLDepthStencilDescriptor *_defaultDepthStencilDescriptor;	// 45448 = 0xb188
    unsigned long long _visibilityResultMode;	// 45456 = 0xb190
    unsigned long long _visibilityResultOffset;	// 45464 = 0xb198
    unsigned long long _width;	// 45472 = 0xb1a0
    unsigned long long _height;	// 45480 = 0xb1a8
    unsigned long long _tessellationFactorBufferInstanceStride;	// 45488 = 0xb1b0
    CDStruct_0f4bf8df _tessellationFactorBufferArgument;	// 45496 = 0xb1b8
}

- (id).cxx_construct;	// IMP=0x0000000000096427
- (void).cxx_destruct;	// IMP=0x00000000000963ce
@property(readonly, nonatomic) float tessellationFactorScale; // @synthesize tessellationFactorScale=_tessellationFactorScale;
@property(readonly, nonatomic) unsigned long long tessellationFactorBufferInstanceStride; // @synthesize tessellationFactorBufferInstanceStride=_tessellationFactorBufferInstanceStride;
@property(readonly, nonatomic) CDStruct_0f4bf8df tessellationFactorBufferArgument; // @synthesize tessellationFactorBufferArgument=_tessellationFactorBufferArgument;
@property(readonly) unsigned long long height; // @synthesize height=_height;
@property(readonly) unsigned long long width; // @synthesize width=_width;
@property(readonly, nonatomic) float blendColorAlpha; // @synthesize blendColorAlpha=_blendColorAlpha;
@property(readonly, nonatomic) float blendColorBlue; // @synthesize blendColorBlue=_blendColorBlue;
@property(readonly, nonatomic) float blendColorGreen; // @synthesize blendColorGreen=_blendColorGreen;
@property(readonly, nonatomic) float blendColorRed; // @synthesize blendColorRed=_blendColorRed;
@property(readonly, nonatomic) unsigned long long visibilityResultOffset; // @synthesize visibilityResultOffset=_visibilityResultOffset;
@property(readonly, nonatomic) unsigned long long visibilityResultMode; // @synthesize visibilityResultMode=_visibilityResultMode;
@property(readonly, nonatomic) unsigned int backStencilRef; // @synthesize backStencilRef=_backStencilRef;
@property(readonly, nonatomic) unsigned int frontStencilRef; // @synthesize frontStencilRef=_frontStencilRef;
@property(readonly, nonatomic) MTLDepthStencilDescriptor *defaultDepthStencilDescriptor; // @synthesize defaultDepthStencilDescriptor=_defaultDepthStencilDescriptor;
@property(readonly, nonatomic) id <MTLDepthStencilState> depthStencilState; // @synthesize depthStencilState=_depthStencilState;
@property(readonly, nonatomic) unsigned long long resolvedSampleCount; // @synthesize resolvedSampleCount=_resolvedSampleCount;
@property(readonly, nonatomic) unsigned long long peakPerSampleStorage; // @synthesize peakPerSampleStorage=_peakPerSampleStorage;
@property(readonly, nonatomic) id <MTLRenderPipelineState> renderPipelineState; // @synthesize renderPipelineState=_renderPipelineState;
@property(readonly, nonatomic) unsigned long long triangleFillMode; // @synthesize triangleFillMode=_triangleFillMode;
@property(readonly, nonatomic) float depthBiasClamp; // @synthesize depthBiasClamp=_depthBiasClamp;
@property(readonly, nonatomic) float depthBiasSlopeScale; // @synthesize depthBiasSlopeScale=_depthBiasSlopeScale;
@property(readonly, nonatomic) float depthBias; // @synthesize depthBias=_depthBias;
@property(readonly, nonatomic) float lineWidth; // @synthesize lineWidth=_lineWidth;
@property(readonly, nonatomic) unsigned long long depthClipMode; // @synthesize depthClipMode=_depthClipMode;
@property(readonly, nonatomic) unsigned long long cullMode; // @synthesize cullMode=_cullMode;
@property(readonly, nonatomic) unsigned long long frontFacingWinding; // @synthesize frontFacingWinding=_frontFacingWinding;
@property(readonly, copy, nonatomic) MTLRenderPassDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) unsigned long long attachmentWriteMask; // @synthesize attachmentWriteMask=_attachmentWriteMask;
- (void)setTileAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x000000000009615d
- (void)setFragmentAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x00000000000960f9
- (void)setVertexAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x00000000000960c9
- (void)setAccelerationStructure:(id)arg1 atBufferIndex:(unsigned long long)arg2 maxBuffers:(unsigned long long)arg3 buffers:(CDStruct_0f4bf8df *)arg4 buffersLength:(unsigned long long)arg5 stage:(unsigned long long)arg6;	// IMP=0x0000000000095e0d
- (void)setTileIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000095d97
- (void)setTileIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000095d33
- (void)setFragmentIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000095cbd
- (void)setFragmentIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000095c59
- (void)setVertexIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000095c24
- (void)setVertexIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000095bf4
- (void)setIntersectionFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2 maxBuffers:(unsigned long long)arg3 buffers:(CDStruct_0f4bf8df *)arg4 buffersLength:(unsigned long long)arg5 stage:(unsigned long long)arg6;	// IMP=0x000000000009577f
- (void)setIntersectionFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2 maxBuffers:(unsigned long long)arg3 buffers:(CDStruct_0f4bf8df *)arg4 buffersLength:(unsigned long long)arg5 stage:(unsigned long long)arg6;	// IMP=0x000000000009542b
- (void)setTileVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x00000000000953b5
- (void)setTileVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000095351
- (void)setFragmentVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x00000000000952db
- (void)setFragmentVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000095277
- (void)setVertexVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2;	// IMP=0x0000000000095242
- (void)setVertexVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2;	// IMP=0x0000000000095212
- (void)setVisibleFunctionTables:(const id *)arg1 withBufferRange:(struct _NSRange)arg2 maxBuffers:(unsigned long long)arg3 buffers:(CDStruct_0f4bf8df *)arg4 buffersLength:(unsigned long long)arg5 stage:(unsigned long long)arg6;	// IMP=0x0000000000094d6e
- (void)setVisibleFunctionTable:(id)arg1 atBufferIndex:(unsigned long long)arg2 maxBuffers:(unsigned long long)arg3 buffers:(CDStruct_0f4bf8df *)arg4 buffersLength:(unsigned long long)arg5 stage:(unsigned long long)arg6;	// IMP=0x0000000000094a5a
- (void)sampleCountersInBuffer:(id)arg1 atSampleIndex:(unsigned long long)arg2 withBarrier:(_Bool)arg3;	// IMP=0x000000000009488f
- (void)executeCommandsInBuffer:(id)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;	// IMP=0x00000000000947dc
- (void)executeCommandsInBuffer:(id)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000009467d
- (void)memoryBarrierWithResources:(const id *)arg1 count:(unsigned long long)arg2 afterStages:(unsigned long long)arg3 beforeStages:(unsigned long long)arg4;	// IMP=0x000000000009431e
- (void)memoryBarrierWithScope:(unsigned long long)arg1 afterStages:(unsigned long long)arg2 beforeStages:(unsigned long long)arg3;	// IMP=0x00000000000942a7
- (void)textureBarrier;	// IMP=0x0000000000094283
- (void)filterCounterRangeWithFirstBatch:(unsigned int)arg1 lastBatch:(unsigned int)arg2 filterIndex:(unsigned int)arg3;	// IMP=0x0000000000094206
- (void)drawIndexedPatches:(unsigned long long)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(unsigned long long)arg3 controlPointIndexBuffer:(id)arg4 controlPointIndexBufferOffset:(unsigned long long)arg5 indirectBuffer:(id)arg6 indirectBufferOffset:(unsigned long long)arg7;	// IMP=0x0000000000093f5b
- (void)drawIndexedPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 controlPointIndexBuffer:(id)arg6 controlPointIndexBufferOffset:(unsigned long long)arg7 instanceCount:(unsigned long long)arg8 baseInstance:(unsigned long long)arg9;	// IMP=0x0000000000093ce3
- (void)drawPatches:(unsigned long long)arg1 patchIndexBuffer:(id)arg2 patchIndexBufferOffset:(unsigned long long)arg3 indirectBuffer:(id)arg4 indirectBufferOffset:(unsigned long long)arg5;	// IMP=0x0000000000093adc
- (void)drawPatches:(unsigned long long)arg1 patchStart:(unsigned long long)arg2 patchCount:(unsigned long long)arg3 patchIndexBuffer:(id)arg4 patchIndexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseInstance:(unsigned long long)arg7;	// IMP=0x0000000000093485
- (void)setTessellationFactorScale:(float)arg1;	// IMP=0x000000000009338d
- (void)setTessellationFactorBuffer:(id)arg1 offset:(unsigned long long)arg2 instanceStride:(unsigned long long)arg3;	// IMP=0x000000000009310a
- (void)endEncoding;	// IMP=0x0000000000092b7e
- (void)waitForFence:(id)arg1 beforeStages:(unsigned long long)arg2;	// IMP=0x0000000000092a29
- (void)updateFence:(id)arg1 afterStages:(unsigned long long)arg2;	// IMP=0x0000000000092989
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexType:(unsigned long long)arg2 indexBuffer:(id)arg3 indexBufferOffset:(unsigned long long)arg4 indirectBuffer:(id)arg5 indirectBufferOffset:(unsigned long long)arg6;	// IMP=0x00000000000926ec
- (void)drawPrimitives:(unsigned long long)arg1 indirectBuffer:(id)arg2 indirectBufferOffset:(unsigned long long)arg3;	// IMP=0x0000000000092438
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 baseVertex:(long long)arg7 baseInstance:(unsigned long long)arg8;	// IMP=0x00000000000921df
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 baseInstance:(unsigned long long)arg5;	// IMP=0x0000000000092073
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5;	// IMP=0x0000000000091fc1
- (void)drawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6;	// IMP=0x0000000000091f10
- (void)validateDrawIndexedPrimitives:(unsigned long long)arg1 indexCount:(unsigned long long)arg2 indexType:(unsigned long long)arg3 indexBuffer:(id)arg4 indexBufferOffset:(unsigned long long)arg5 instanceCount:(unsigned long long)arg6 function:(const char *)arg7;	// IMP=0x0000000000091d53
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3;	// IMP=0x0000000000091ce4
- (void)drawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4;	// IMP=0x0000000000091c72
- (void)validateDrawPrimitives:(unsigned long long)arg1 vertexStart:(unsigned long long)arg2 vertexCount:(unsigned long long)arg3 instanceCount:(unsigned long long)arg4 function:(const char *)arg5;	// IMP=0x0000000000091b08
- (void)_validateAllFunctionArguments:(struct _MTLMessageContext *)arg1;	// IMP=0x00000000000919bd
- (void)validateCommonDrawErrors:(unsigned long long)arg1;	// IMP=0x0000000000090e40
- (void)validateCommonDrawErrors:(unsigned long long)arg1 instanceCount:(unsigned long long)arg2 baseInstance:(unsigned long long)arg3 maxVertexID:(unsigned long long)arg4;	// IMP=0x000000000009095d
- (void)updatePipelineData;	// IMP=0x000000000009091f
- (void)setStencilResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(_Bool)arg5;	// IMP=0x000000000009076f
- (void)setStencilResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4;	// IMP=0x00000000000905bd
- (void)setDepthResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(_Bool)arg5;	// IMP=0x000000000009040d
- (void)setDepthResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4;	// IMP=0x000000000009025b
- (void)setColorResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 yInvert:(_Bool)arg5 atIndex:(unsigned long long)arg6;	// IMP=0x0000000000090075
- (void)setColorResolveTexture:(id)arg1 slice:(unsigned long long)arg2 depthPlane:(unsigned long long)arg3 level:(unsigned long long)arg4 atIndex:(unsigned long long)arg5;	// IMP=0x000000000008fe8d
- (void)setBlendColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;	// IMP=0x000000000008fc52
- (void)setVisibilityResultMode:(unsigned long long)arg1 offset:(unsigned long long)arg2;	// IMP=0x000000000008f8ca
- (void)setStencilStoreActionOptions:(unsigned long long)arg1;	// IMP=0x000000000008f7d7
- (void)setDepthStoreActionOptions:(unsigned long long)arg1;	// IMP=0x000000000008f6e4
- (void)setColorStoreActionOptions:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000008f570
- (void)setStencilStoreAction:(unsigned long long)arg1;	// IMP=0x000000000008f2df
- (void)setDepthStoreAction:(unsigned long long)arg1;	// IMP=0x000000000008f1ec
- (void)setColorStoreAction:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000008f078
- (void)setStencilFrontReferenceValue:(unsigned int)arg1 backReferenceValue:(unsigned int)arg2;	// IMP=0x000000000008eae9
- (void)setStencilReferenceValue:(unsigned int)arg1;	// IMP=0x000000000008e98d
- (void)setDepthStencilState:(id)arg1;	// IMP=0x000000000008e79b
- (void)setTriangleFillMode:(unsigned long long)arg1;	// IMP=0x000000000008e63c
- (void)setTriangleFrontFillMode:(unsigned long long)arg1 backFillMode:(unsigned long long)arg2;	// IMP=0x000000000008e52e
- (void)setVertexAmplificationCount:(unsigned long long)arg1 viewMappings:(const CDStruct_1987c1e3 *)arg2;	// IMP=0x000000000008e358
- (void)setVertexAmplificationMode:(unsigned long long)arg1 value:(unsigned long long)arg2;	// IMP=0x000000000008e105
- (void)setTransformFeedbackState:(unsigned long long)arg1;	// IMP=0x000000000008e056
- (void)setScissorRects:(const CDStruct_33dcf794 *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000008dc94
- (void)setScissorRect:(CDStruct_33dcf794)arg1;	// IMP=0x000000000008da43
- (void)setDepthBias:(float)arg1 slopeScale:(float)arg2 clamp:(float)arg3;	// IMP=0x000000000008d880
- (void)setLineWidth:(float)arg1;	// IMP=0x000000000008d6e4
- (void)setDepthClipMode:(unsigned long long)arg1;	// IMP=0x000000000008d565
- (void)setCullMode:(unsigned long long)arg1;	// IMP=0x000000000008d40b
- (void)setFrontFacingWinding:(unsigned long long)arg1;	// IMP=0x000000000008d2b1
- (void)setViewports:(const CDStruct_8727d297 *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000008ce4a
- (void)setViewport:(CDStruct_8727d297)arg1;	// IMP=0x000000000008cacd
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2 stages:(unsigned long long)arg3;	// IMP=0x000000000008c8eb
- (void)useHeaps:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000008c75d
- (void)useHeap:(id)arg1 stages:(unsigned long long)arg2;	// IMP=0x000000000008c612
- (void)useHeap:(id)arg1;	// IMP=0x000000000008c572
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3 stages:(unsigned long long)arg4;	// IMP=0x000000000008c352
- (void)useResources:(const id *)arg1 count:(unsigned long long)arg2 usage:(unsigned long long)arg3;	// IMP=0x000000000008c194
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2 stages:(unsigned long long)arg3;	// IMP=0x000000000008c014
- (void)useResource:(id)arg1 usage:(unsigned long long)arg2;	// IMP=0x000000000008bef1
- (void)setThreadgroupMemoryLength:(unsigned long long)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000008bb64
- (void)_dispatchThreadsPerTile:(CDStruct_14f26992)arg1 inRegion:(CDStruct_1e3be3a8 *)arg2;	// IMP=0x0000000000089857
- (void)dispatchThreadsPerTile:(CDStruct_14f26992)arg1 inRegion:(CDStruct_1e3be3a8)arg2;	// IMP=0x0000000000089827
- (void)dispatchThreadsPerTile:(CDStruct_14f26992)arg1;	// IMP=0x0000000000089813
- (void)setTileSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x0000000000089398
- (void)setTileSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x000000000008908d
- (void)setTileSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000088c9c
- (void)setTileSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000889cc
- (void)setTileTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000885d8
- (void)setTileTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000088305
- (void)setTileBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x0000000000087e09
- (void)setTileBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000087b57
- (void)setTileBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000877e0
- (void)setTileBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000875f6
- (void)setFragmentTexture:(id)arg1 atTextureIndex:(unsigned long long)arg2 samplerState:(id)arg3 atSamplerIndex:(unsigned long long)arg4;	// IMP=0x00000000000870d6
- (void)setFragmentSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x0000000000086c52
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(unsigned long long)arg5;	// IMP=0x0000000000086938
- (void)setFragmentSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000086612
- (void)setFragmentSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x000000000008620c
- (void)setFragmentSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000085f21
- (void)setFragmentTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000085ae2
- (void)setFragmentTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000857c2
- (void)setFragmentBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x00000000000852e8
- (void)setFragmentBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000085013
- (void)setFragmentBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000084c90
- (void)setFragmentBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x0000000000084a9a
- (void)setVertexSamplerStates:(const id *)arg1 lodMinClamps:(const float *)arg2 lodMaxClamps:(const float *)arg3 withRange:(struct _NSRange)arg4;	// IMP=0x0000000000084616
- (void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 lodBias:(float)arg4 atIndex:(unsigned long long)arg5;	// IMP=0x00000000000842fc
- (void)setVertexSamplerState:(id)arg1 lodMinClamp:(float)arg2 lodMaxClamp:(float)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x0000000000083fd6
- (void)setVertexSamplerStates:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x0000000000083bd0
- (void)setVertexSamplerState:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000838e5
- (void)setVertexTextures:(const id *)arg1 withRange:(struct _NSRange)arg2;	// IMP=0x00000000000834a6
- (void)setVertexTexture:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x00000000000831a0
- (void)setVertexBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;	// IMP=0x0000000000082cdf
- (void)setVertexBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000082a40
- (void)setVertexBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000826e3
- (void)setVertexBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x00000000000824ab
- (void)setRenderPipelineState:(id)arg1;	// IMP=0x00000000000820ad
- (void)validateFramebufferWithRenderPipelineState:(id)arg1 context:(struct _MTLMessageContext *)arg2;	// IMP=0x0000000000081ba7
- (id)description;	// IMP=0x0000000000081b93
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x0000000000080980
- (void)dealloc;	// IMP=0x0000000000080870
- (id)initWithRenderCommandEncoder:(id)arg1 parent:(id)arg2 descriptor:(id)arg3;	// IMP=0x00000000000802b6
- (void)_setDefaults;	// IMP=0x000000000007fa98
- (void)enumerateThreadgroupMemoryUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007fa3b
- (void)enumerateTileSamplersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007f9de
- (void)enumerateTileTexturesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007f97e
- (void)enumerateTileBuffersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007f921
- (void)enumerateFragmentSamplersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007f8c4
- (void)enumerateFragmentTexturesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007f864
- (void)enumerateFragmentBuffersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007f807
- (void)enumerateVertexSamplersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007f7aa
- (void)enumerateVertexTexturesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007f74a
- (void)enumerateVertexBuffersUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007f6ed
@property(readonly, nonatomic) CDStruct_33dcf794 scissorRect;
@property(readonly, nonatomic) CDStruct_8727d297 viewport;
@property(readonly, nonatomic) void *scissorRects;
@property(readonly, nonatomic) void *viewports;

@end
