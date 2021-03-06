//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MTLRenderPipelineDescriptor, MTLRenderPipelineReflection, MTLTileRenderPipelineDescriptor;

@interface MTLDebugRenderPipelineState
{
    unsigned long long _maxVertexCount;	// 40 = 0x28
    unsigned long long _maxInstanceCount;	// 48 = 0x30
    unsigned long long _maxPatchCount;	// 56 = 0x38
    unsigned long long _rasterSampleCount;	// 64 = 0x40
    unsigned long long _colorPixelFormat[8];	// 72 = 0x48
    unsigned long long _depthPixelFormat;	// 136 = 0x88
    unsigned long long _stencilPixelFormat;	// 144 = 0x90
    unsigned long long _vertexDescriptorLayoutCount;	// 152 = 0x98
    struct {
        unsigned long long bufferIndex;
        unsigned long long bufferStride;
    } _vertexDescriptorLayouts[31];	// 160 = 0xa0
    _Bool _threadgroupSizeMatchesTileSize;	// 656 = 0x290
    unsigned long long _attachmentWriteMask;	// 664 = 0x298
    MTLRenderPipelineDescriptor *_descriptor;	// 672 = 0x2a0
    MTLRenderPipelineReflection *_reflection;	// 680 = 0x2a8
    MTLTileRenderPipelineDescriptor *_tileDescriptor;	// 688 = 0x2b0
}

@property(readonly, nonatomic) MTLTileRenderPipelineDescriptor *tileDescriptor; // @synthesize tileDescriptor=_tileDescriptor;
@property(readonly, nonatomic) MTLRenderPipelineReflection *reflection; // @synthesize reflection=_reflection;
@property(readonly, nonatomic) MTLRenderPipelineDescriptor *descriptor; // @synthesize descriptor=_descriptor;
@property(readonly, nonatomic) unsigned long long attachmentWriteMask; // @synthesize attachmentWriteMask=_attachmentWriteMask;
- (id)newIntersectionFunctionTableWithDescriptor:(id)arg1 stage:(unsigned long long)arg2;	// IMP=0x00000000000a079c
- (id)newTileIntersectionFunctionTableWithDescriptor:(id)arg1;	// IMP=0x00000000000a0782
- (id)newFragmentIntersectionFunctionTableWithDescriptor:(id)arg1;	// IMP=0x00000000000a0768
- (id)newVertexIntersectionFunctionTableWithDescriptor:(id)arg1;	// IMP=0x00000000000a074e
- (id)newIntersectionFunctionTableWithDescriptor:(id)arg1 withStage:(unsigned long long)arg2 selector:(SEL)arg3;	// IMP=0x00000000000a065a
- (id)functionHandleWithFunction:(id)arg1 stage:(unsigned long long)arg2;	// IMP=0x00000000000a053e
- (id)tileFunctionHandleWithFunction:(id)arg1;	// IMP=0x00000000000a0524
- (id)fragmentFunctionHandleWithFunction:(id)arg1;	// IMP=0x00000000000a050a
- (id)vertexFunctionHandleWithFunction:(id)arg1;	// IMP=0x00000000000a04f0
- (id)functionHandleWithFunction:(id)arg1 stage:(unsigned long long)arg2 selector:(SEL)arg3;	// IMP=0x00000000000a0415
- (id)functionHandleToDebugFunctionHandle:(id)arg1 parentFunction:(id)arg2 stage:(unsigned long long)arg3;	// IMP=0x00000000000a02ff
- (id)newVisibleFunctionTableWithDescriptor:(id)arg1 stage:(unsigned long long)arg2;	// IMP=0x00000000000a01db
- (id)newVisibleFunctionTableFromTileStageWithDescriptor:(id)arg1;	// IMP=0x00000000000a01c1
- (id)newVisibleFunctionTableFromFragmentStageWithDescriptor:(id)arg1;	// IMP=0x00000000000a01a7
- (id)newVisibleFunctionTableFromVertexStageWithDescriptor:(id)arg1;	// IMP=0x00000000000a018d
- (id)newVisibleFunctionTableWithDescriptor:(id)arg1 stage:(unsigned long long)arg2 selector:(SEL)arg3;	// IMP=0x00000000000a004d
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009fb74
- (id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000009f9c7
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg1 fragmentAdditionalBinaryFunctions:(id)arg2 error:(id *)arg3;	// IMP=0x000000000009f720
- (id)validateBinaryFunctions:(id)arg1 stage:(unsigned long long)arg2;	// IMP=0x000000000009f488
- (void)validateHandleForSetFunction:(id)arg1;	// IMP=0x000000000009f3cd
- (_Bool)isAncestorOf:(id)arg1;	// IMP=0x000000000009f36e
- (id)getParameter:(id)arg1;	// IMP=0x000000000009f33d
- (id)description;	// IMP=0x000000000009f329
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x000000000009f2a0
- (void)_updateCachedPipelineState;	// IMP=0x000000000009eebf
@property(readonly, nonatomic) _Bool rasterizationEnabled;
- (void)dealloc;	// IMP=0x000000000009ee23
- (_Bool)isImageBlockLayoutInputCompatibleWithOutputOf:(id)arg1;	// IMP=0x000000000009ed57
- (id)outputImageBlockData;	// IMP=0x000000000009eca5
- (id)_findMasterStruct:(id)arg1 includeImageBlockData:(_Bool)arg2;	// IMP=0x000000000009eb9c
- (void)_updateCachedTilePipelineState;	// IMP=0x000000000009eaf2
- (id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 tileDescriptor:(id)arg4;	// IMP=0x000000000009ea3d
- (id)initWithPipelineState:(id)arg1 reflection:(id)arg2 parent:(id)arg3 descriptor:(id)arg4;	// IMP=0x000000000009e970

@end

