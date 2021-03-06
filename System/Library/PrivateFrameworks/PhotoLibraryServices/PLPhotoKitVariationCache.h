//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSURL;
@protocol OS_dispatch_queue;

@interface PLPhotoKitVariationCache : NSObject
{
    NSObject<OS_dispatch_queue> *_cacheQueue;	// 8 = 0x8
    NSCache *_memoryCache;	// 16 = 0x10
    NSURL *_cacheURL;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000cdcd8
@property(readonly) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
- (_Bool)_removeCachesForURL:(id)arg1;	// IMP=0x00000000000cdb74
- (void)_saveToMemoryCache:(id)arg1 forFileURL:(id)arg2 fileSize:(unsigned long long)arg3;	// IMP=0x00000000000cdad8
- (id)_readInfoForURL:(id)arg1;	// IMP=0x00000000000cd8c9
- (_Bool)_writeInfo:(id)arg1 atURL:(id)arg2;	// IMP=0x00000000000cd6fe
- (id)_fileURLWithIdentifier:(id)arg1 sourceType:(long long)arg2 pathExtension:(id)arg3;	// IMP=0x00000000000cd571
- (_Bool)deleteCacheForAssetIdentifier:(id)arg1;	// IMP=0x00000000000cd55d
- (_Bool)deleteCacheForAssetIdentifier:(id)arg1 sourceType:(long long)arg2;	// IMP=0x00000000000cd485
- (unsigned long long)purgeAll;	// IMP=0x00000000000cd3f9
- (unsigned long long)evictIfNeeded;	// IMP=0x00000000000cd36d
- (_Bool)_performChangesForAssetIdentifier:(id)arg1 sourceType:(long long)arg2 changesBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cd264
- (id)gatingResultForVariationType:(long long)arg1 assetIdentifier:(id)arg2;	// IMP=0x00000000000cd24f
- (id)gatingResultForVariationType:(long long)arg1 assetIdentifier:(id)arg2 sourceType:(long long)arg3;	// IMP=0x00000000000cd13b
- (void)saveGatingResult:(id)arg1 forVariationType:(long long)arg2 assetIdentifier:(id)arg3;	// IMP=0x00000000000cd126
- (void)saveGatingResult:(id)arg1 forVariationType:(long long)arg2 assetIdentifier:(id)arg3 sourceType:(long long)arg4;	// IMP=0x00000000000cd03b
- (id)portraitEffectSettingsForAssetIdentifier:(id)arg1;	// IMP=0x00000000000cd027
- (id)portraitEffectSettingsForAssetIdentifier:(id)arg1 sourceType:(long long)arg2;	// IMP=0x00000000000ccf28
- (void)savePortraitEffectSettings:(id)arg1 assetIdentifier:(id)arg2;	// IMP=0x00000000000ccf11
- (void)savePortraitEffectSettings:(id)arg1 sourceType:(long long)arg2 assetIdentifier:(id)arg3;	// IMP=0x00000000000cce31
- (id)analysisResultForAssetIdentifier:(id)arg1 sourceType:(long long)arg2;	// IMP=0x00000000000ccd32
- (id)analysisResultForAssetIdentifier:(id)arg1;	// IMP=0x00000000000ccd1e
- (void)saveAnalysisResult:(id)arg1 assetIdentifier:(id)arg2 sourceType:(long long)arg3;	// IMP=0x00000000000ccc3e
- (void)saveAnalysisResult:(id)arg1 assetIdentifier:(id)arg2;	// IMP=0x00000000000ccc29
- (id)initWithCacheURL:(id)arg1;	// IMP=0x00000000000ccacf
- (id)initWithPathManager:(id)arg1;	// IMP=0x00000000000cca33

@end

