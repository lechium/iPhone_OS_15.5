//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Metal/MTLRenderPipelineState-Protocol.h>

@class MTLDebugInstrumentationData, NSString;
@protocol MTLDevice;

@interface _MTLRenderPipelineState : NSObject <MTLRenderPipelineState>
{
    NSString *_label;	// 8 = 0x8
    id <MTLDevice> _device;	// 16 = 0x10
    _Bool _threadgroupSizeMatchesTileSize;	// 24 = 0x18
    MTLDebugInstrumentationData *_vertexDebugInstrumentationData;	// 32 = 0x20
    MTLDebugInstrumentationData *_fragmentDebugInstrumentationData;	// 40 = 0x28
    MTLDebugInstrumentationData *_tileDebugInstrumentationData;	// 48 = 0x30
    _Bool _supportIndirectCommandBuffers;	// 56 = 0x38
    long long _textureWriteRoundingMode;	// 64 = 0x40
    unsigned long long _resourceIndex;	// 72 = 0x48
    unsigned long long _gpuAddress;	// 80 = 0x50
    unsigned long long _imageBlockSampleLength;	// 88 = 0x58
}

@property(readonly) unsigned long long imageBlockSampleLength; // @synthesize imageBlockSampleLength=_imageBlockSampleLength;
@property(readonly) _Bool threadgroupSizeMatchesTileSize; // @synthesize threadgroupSizeMatchesTileSize=_threadgroupSizeMatchesTileSize;
@property(readonly, nonatomic) unsigned long long gpuAddress; // @synthesize gpuAddress=_gpuAddress;
@property(readonly, nonatomic) unsigned long long resourceIndex; // @synthesize resourceIndex=_resourceIndex;
@property(retain, nonatomic) MTLDebugInstrumentationData *tileDebugInstrumentationData; // @synthesize tileDebugInstrumentationData=_tileDebugInstrumentationData;
@property(retain, nonatomic) MTLDebugInstrumentationData *fragmentDebugInstrumentationData; // @synthesize fragmentDebugInstrumentationData=_fragmentDebugInstrumentationData;
@property(retain, nonatomic) MTLDebugInstrumentationData *vertexDebugInstrumentationData; // @synthesize vertexDebugInstrumentationData=_vertexDebugInstrumentationData;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(readonly) NSString *label; // @synthesize label=_label;
- (id)newIntersectionFunctionTableWithDescriptor:(id)arg1 stage:(unsigned long long)arg2;	// IMP=0x00000000000a2583
- (id)newTileIntersectionFunctionTableWithDescriptor:(id)arg1;	// IMP=0x00000000000a2552
- (id)newFragmentIntersectionFunctionTableWithDescriptor:(id)arg1;	// IMP=0x00000000000a2521
- (id)newVertexIntersectionFunctionTableWithDescriptor:(id)arg1;	// IMP=0x00000000000a24f0
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a2434
- (id)newTileRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a2410
- (id)newRenderPipelineStateWithAdditionalBinaryFunctions:(id)arg1 fragmentAdditionalBinaryFunctions:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000a23ec
- (id)newVisibleFunctionTableWithDescriptor:(id)arg1 stage:(unsigned long long)arg2;	// IMP=0x00000000000a23af
- (id)newVisibleFunctionTableFromTileStageWithDescriptor:(id)arg1;	// IMP=0x00000000000a237e
- (id)newVisibleFunctionTableFromFragmentStageWithDescriptor:(id)arg1;	// IMP=0x00000000000a234d
- (id)newVisibleFunctionTableFromVertexStageWithDescriptor:(id)arg1;	// IMP=0x00000000000a231c
- (id)functionHandleWithFunction:(id)arg1 stage:(unsigned long long)arg2;	// IMP=0x00000000000a22df
- (id)tileFunctionHandleWithFunction:(id)arg1;	// IMP=0x00000000000a22bb
- (id)fragmentFunctionHandleWithFunction:(id)arg1;	// IMP=0x00000000000a2297
- (id)vertexFunctionHandleWithFunction:(id)arg1;	// IMP=0x00000000000a2273
@property(readonly, nonatomic) unsigned long long allocatedSize;
- (long long)textureWriteFPRoundingMode;	// IMP=0x00000000000a2261
@property(readonly) long long textureWriteRoundingMode;
@property(readonly) unsigned long long uniqueIdentifier;
@property(readonly) _Bool supportIndirectCommandBuffers;
@property(readonly) unsigned long long maxTotalThreadsPerThreadgroup;
@property(readonly) unsigned long long imageblockSampleLength;
- (unsigned long long)imageblockMemoryLengthForDimensions:(CDStruct_da2e99ad)arg1;	// IMP=0x00000000000a222d
- (void)dealloc;	// IMP=0x00000000000a21bb
- (id)initWithTileParent:(id)arg1;	// IMP=0x00000000000a206b
- (id)initWithParent:(id)arg1;	// IMP=0x00000000000a1f2b
- (id)initWithDeviceAndTileDesc:(id)arg1 tilePipelineStateDescriptor:(id)arg2;	// IMP=0x00000000000a1dab
- (id)initWithDevice:(id)arg1 pipelineStateDescriptor:(id)arg2;	// IMP=0x00000000000a1bdb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

