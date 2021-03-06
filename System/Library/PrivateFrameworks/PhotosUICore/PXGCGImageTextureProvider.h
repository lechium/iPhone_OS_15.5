//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCache, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface PXGCGImageTextureProvider
{
    NSCache *_imageCache;	// 8 = 0x8
    NSCache *_additionalInfoCache;	// 16 = 0x10
    NSMapTable *_aliveImagesCache;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000412c
- (void)_clearStrongCaches;	// IMP=0x00000000000040e3
- (void)_updateCacheLimit;	// IMP=0x000000000000409d
- (void)releaseCachedResources;	// IMP=0x000000000000405c
- (void)lowMemoryModeDidChange;	// IMP=0x000000000000401b
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
- (void)invalidateCache;	// IMP=0x0000000000003f87
- (void)cacheAdditionalInfo:(id)arg1 withKey:(id)arg2;	// IMP=0x0000000000003ed6
- (void)requestCGImageAndAdditionalInfoWithCacheKey:(id)arg1 imageProvider:(CDUnknownBlockType)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003cb5
- (void)requestCGImageWithCacheKey:(id)arg1 imageProvider:(CDUnknownBlockType)arg2 resultHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000003ad9
- (id)init;	// IMP=0x0000000000003a1e

@end

