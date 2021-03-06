//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCacheDelegate-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMapTable, NSString, PXLRUMemoryCache;
@protocol NSObject, OS_dispatch_queue;

@interface PXPeopleFaceTileImageManager : NSObject <NSCacheDelegate, PXPhotoLibraryUIChangeObserver>
{
    NSObject<OS_dispatch_queue> *_fetchQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_requestLookupIsolationQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_cropCacheQueue;	// 24 = 0x18
    NSMapTable *_faceTileRequestByRequestID;	// 32 = 0x20
    NSMapTable *_highPriorityCachedIdentifiers;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_highPriorityCachedIdentifiersQueue;	// 48 = 0x30
    PXLRUMemoryCache *_memoryCache;	// 56 = 0x38
    id <NSObject> _memoryWarningObserver;	// 64 = 0x40
    id <NSObject> _backgroundEntraceObserver;	// 72 = 0x48
}

+ (id)sharedManager;	// IMP=0x0000000000244260
+ (id)imageTransformQueue;	// IMP=0x0000000000244230
- (void).cxx_destruct;	// IMP=0x00000000002414f0
@property(retain, nonatomic) id <NSObject> backgroundEntraceObserver; // @synthesize backgroundEntraceObserver=_backgroundEntraceObserver;
@property(retain, nonatomic) id <NSObject> memoryWarningObserver; // @synthesize memoryWarningObserver=_memoryWarningObserver;
@property(readonly, nonatomic) PXLRUMemoryCache *memoryCache; // @synthesize memoryCache=_memoryCache;
- (_Bool)_doesChange:(id)arg1 containVisibleChangesToPHAssetWithOID:(id)arg2;	// IMP=0x0000000000241423
- (id)prepareForPhotoLibraryChange:(id)arg1;	// IMP=0x0000000000240d8e
- (void)_stopListeningForChanges;	// IMP=0x0000000000240d3b
- (void)_startListeningForChanges;	// IMP=0x0000000000240ce8
- (void)clearMemoryCache;	// IMP=0x0000000000240c90
- (void)removeHighPriorityCachedItemIdentifier:(id)arg1 forOwner:(id)arg2;	// IMP=0x0000000000240bd0
- (void)addHighPriorityCachedItemIdentifier:(id)arg1 forOwner:(id)arg2;	// IMP=0x0000000000240b10
- (void)invalidateCacheForPerson:(id)arg1;	// IMP=0x0000000000240987
- (_Bool)isActiveRequestWithRequestID:(int)arg1;	// IMP=0x00000000002408f6
- (void)cancelRequest:(int)arg1;	// IMP=0x00000000002407cf
- (id)_fetchKeyFaceFromPerson:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000240604
- (id)_fetchAssetFromFace:(id)arg1;	// IMP=0x0000000000240475
- (void)_addRequestResult:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x0000000000240237
- (id)_cachedResultForIdentifier:(id)arg1 params:(struct PXFaceTileImageParams)arg2 isLowResResult:(_Bool *)arg3;	// IMP=0x000000000023fe56
- (_Bool)_deliverCachedResultIfPossibleForRequest:(id)arg1 allowDegradedDelivery:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000023fc4f
- (struct CGRect)_normalizedAspectCropRectForFaceRect:(struct CGRect)arg1 aspectRatio:(double)arg2 inImageRect:(struct CGRect)arg3;	// IMP=0x000000000023fbb1
- (void)_cropImage:(id)arg1 synchronous:(_Bool)arg2 cacheResult:(_Bool)arg3 isDegraded:(_Bool)arg4 forRequest:(id)arg5 cropInfo:(CDStruct_7898798c)arg6 didCallFastBlock:(_Bool)arg7 completionBlock:(CDUnknownBlockType)arg8;	// IMP=0x000000000023f805
- (struct CGRect)_boundedCropRectForRect:(struct CGRect)arg1 inRect:(struct CGRect)arg2 withTargetAspectRatio:(double)arg3;	// IMP=0x000000000023f52a
- (void)_requestFaceTileImageRequest:(id)arg1 faceImageRequest:(id)arg2 cacheResult:(_Bool)arg3 completionBlock:(CDUnknownBlockType)arg4 fastDisplayBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000023f1b1
- (int)_requestFaceTileImageFromRequest:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 boundFaceRect:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7 fastDisplayBlock:(CDUnknownBlockType)arg8;	// IMP=0x000000000023eb1e
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 boundFaceRect:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7 fastDisplayBlock:(CDUnknownBlockType)arg8;	// IMP=0x000000000023ea35
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6 fastDisplayBlock:(CDUnknownBlockType)arg7;	// IMP=0x000000000023ea0a
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000000023e9ee
- (int)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000023e9c9
- (int)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 boundFaceRect:(_Bool)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x000000000023e8f4
- (int)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 cacheResult:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000000023e8d8
- (int)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000023e8b3
- (int)requestFaceTileImageFromRequest:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 style:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5 fastDisplayBlock:(CDUnknownBlockType)arg6;	// IMP=0x000000000023e889
- (void)_handleMemoryClearRequest;	// IMP=0x000000000023e592
- (void)dealloc;	// IMP=0x000000000023e4f3
- (id)init;	// IMP=0x000000000023e215

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

