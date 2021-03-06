//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXGMetalSpriteTexture-Protocol.h>

@class NSIndexSet, NSMutableDictionary, NSMutableIndexSet, NSObject, NSString, PXGColorProgram;
@protocol MTLDevice, MTLTexture, OS_dispatch_queue, PXGMetalTextureAtlasDelegate;

@interface PXGMetalTextureAtlas <PXGMetalSpriteTexture>
{
    id <MTLDevice> _device;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_layoutQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_syncQueue;	// 24 = 0x18
    long long _cols;	// 32 = 0x20
    NSMutableIndexSet *_thumbnailIndexesUsedBySprites;	// 40 = 0x28
    NSMutableIndexSet *_spriteIndexesUsedBySprites;	// 48 = 0x30
    unsigned int *_spriteIndexByThumbnailIndex;	// 56 = 0x38
    NSIndexSet *_renderedSpriteIndexes;	// 64 = 0x40
    _Atomic short _count;	// 72 = 0x48
    NSMutableIndexSet *_thumbnailIndexesPendingCheckin;	// 80 = 0x50
    NSMutableIndexSet *_thumbnailIndexesBeingCheckedIn;	// 88 = 0x58
    _Atomic unsigned char _isPerformingThumbnailCheckin;	// 96 = 0x60
    char *_retainCountByThumbnailIndex;	// 104 = 0x68
    CDStruct_183601bc *_guarded_textureInfoByThumbnailIndex;	// 112 = 0x70
    NSMutableIndexSet *_syncQueue_availableThumbnailIndexes;	// 120 = 0x78
    NSMutableDictionary *_syncQueue_thumbnailsInUseByRenderPass;	// 128 = 0x80
    struct {
        int _field1;
        unsigned int _field2;
        unsigned int _field3;
    } *_syncQueue_pendingThumbnailRequestInfo;	// 136 = 0x88
    unsigned long long _syncQueue_pendingThumbnailRequestInfoCount;	// 144 = 0x90
    unsigned long long _syncQueue_pendingThumbnailRequestInfoCapacity;	// 152 = 0x98
    unsigned int _capacity;	// 160 = 0xa0
    id <MTLTexture> _texture;	// 168 = 0xa8
    PXGColorProgram *_colorProgram;	// 176 = 0xb0
    long long _renderPipelineIndex;	// 184 = 0xb8
    NSIndexSet *_skipRenderSpriteIndexes;	// 192 = 0xc0
    unsigned long long _pixelFormat;	// 200 = 0xc8
    id <PXGMetalTextureAtlasDelegate> _delegate;	// 208 = 0xd0
    struct CGSize _thumbnailSize;	// 216 = 0xd8
}

+ (unsigned int)maxCapacityForThumbnailSize:(struct CGSize)arg1 pixelFormat:(unsigned long long)arg2;	// IMP=0x00000000006cf122
- (void).cxx_destruct;	// IMP=0x00000000006ce8fb
@property(nonatomic) __weak id <PXGMetalTextureAtlasDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned int capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(readonly, nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(retain, nonatomic) NSIndexSet *skipRenderSpriteIndexes; // @synthesize skipRenderSpriteIndexes=_skipRenderSpriteIndexes;
@property(nonatomic) long long renderPipelineIndex; // @synthesize renderPipelineIndex=_renderPipelineIndex;
@property(readonly, nonatomic) PXGColorProgram *colorProgram; // @synthesize colorProgram=_colorProgram;
@property(readonly, nonatomic) id <MTLTexture> texture; // @synthesize texture=_texture;
- (void)_syncQueue_checkinThumbnailIndex:(unsigned int)arg1;	// IMP=0x00000000006ce80c
- (unsigned int)_syncQueue_checkoutNextThumbnailIndex;	// IMP=0x00000000006ce793
- (void)_syncQueue_resizeStorageIfNeeded;	// IMP=0x00000000006ce725
@property(readonly, nonatomic) id <MTLTexture> chromaTexture;
@property(readonly, nonatomic) int shaderFlags;
@property(readonly, nonatomic) _Bool isCaptureTexture;
@property(readonly, nonatomic) _Bool isAtlas;
- (void)cleanupAfterRender:(long long)arg1;	// IMP=0x00000000006ce6a8
- (void)prepareForRender:(long long)arg1;	// IMP=0x00000000006ce5f8
@property(readonly, nonatomic) _Bool isOpaque;
@property(readonly, nonatomic) struct CGSize pixelSize;
@property(readonly, nonatomic) struct CGImage *imageRepresentation;
@property(readonly, nonatomic) int presentationType;
@property(readonly, nonatomic) long long estimatedByteSize;
- (void)removeSpriteIndex:(unsigned int)arg1;	// IMP=0x00000000006ce4ab
- (void)processPendingTextureRequestIDsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000006ce40a
- (void)addSpriteWithTextureRequestID:(int)arg1 deliveryOrder:(unsigned int)arg2;	// IMP=0x00000000006ce372
- (_Bool)containsSpriteIndex:(unsigned int)arg1;	// IMP=0x00000000006ce31f
- (void)getTextureInfos:(CDStruct_183601bc *)arg1 forSpriteIndexes:(unsigned int *)arg2 geometries:(const CDStruct_4f725fed *)arg3 spriteStyles:(const CDStruct_76b550e2 *)arg4 spriteInfos:(const CDStruct_9d1ebe49 *)arg5 screenScale:(double)arg6 count:(unsigned int)arg7;	// IMP=0x00000000006ce1a9
- (void)enumerateSpriteIndexes:(CDUnknownBlockType)arg1;	// IMP=0x00000000006ce0ed
- (void)getSpriteIndexes:(unsigned int *)arg1 maxSpriteCount:(unsigned int)arg2;	// IMP=0x00000000006cdf4a
@property(readonly, nonatomic) NSIndexSet *spriteIndexes;
@property(readonly, nonatomic) unsigned int spriteCount;
@property(readonly, nonatomic) NSIndexSet *renderedSpriteIndexes;
- (void)_syncQueue_releaseThumbnailsAtIndexes:(id)arg1;	// IMP=0x00000000006cde0b
- (void)_syncQueue_releaseThumbnailAtIndex:(long long)arg1;	// IMP=0x00000000006cdd3f
- (void)_syncQueue_retainThumbnailsAtIndexes:(id)arg1;	// IMP=0x00000000006cdce2
- (void)_syncQueue_retainThumbnailAtIndex:(long long)arg1;	// IMP=0x00000000006cdcce
- (void)applyChangeDetails:(id)arg1;	// IMP=0x00000000006cdbc5
- (void)processPendingThumbnailRequestIDsWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000006cdb12
- (void)_checkinPendingThumbnailIndexesIfNeeded;	// IMP=0x00000000006cda23
- (void)removeSpriteIndex:(unsigned int)arg1 atThumbnailIndex:(unsigned int)arg2;	// IMP=0x00000000006cd98a
- (void)_invalidateRenderedSpriteIndexes;	// IMP=0x00000000006cd969
- (void)addSpriteWithTextureRequestID:(int)arg1 thumbnailData:(id)arg2 size:(struct CGSize)arg3 bytesPerRow:(unsigned long long)arg4 contentsRect:(struct CGRect)arg5;	// IMP=0x00000000006cd566
@property(readonly, copy, nonatomic) NSIndexSet *thumbnailIndexesUsedBySprites;
@property(readonly) _Bool isUnused;
@property(readonly, nonatomic) unsigned int count;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000006cd2ba
- (id)init;	// IMP=0x00000000006cd240
- (id)initWithThumbnailSize:(struct CGSize)arg1 pixelFormat:(unsigned long long)arg2 capacity:(unsigned int)arg3 colorProgram:(id)arg4 device:(id)arg5 layoutQueue:(id)arg6;	// IMP=0x00000000006ccbf3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) _Bool hasSprites;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isDegraded;
@property(readonly) Class superclass;

@end

