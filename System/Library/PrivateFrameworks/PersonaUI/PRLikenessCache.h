//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSURL;
@protocol OS_dispatch_queue;

@interface PRLikenessCache : NSObject
{
    NSCache *_inMemoryCache;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_cacheLookupQueue;	// 16 = 0x10
    _Bool _useMemory;	// 24 = 0x18
    _Bool _useFilesystem;	// 25 = 0x19
    _Bool _renderIfNeeded;	// 26 = 0x1a
    NSURL *_cacheDirectory;	// 32 = 0x20
}

+ (id)_propertyValueForURL:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000005c1a
+ (_Bool)_purgeOldCacheFilesInDirectory:(id)arg1;	// IMP=0x0000000000005758
+ (_Bool)_removeImageAtURL:(id)arg1;	// IMP=0x000000000000560e
+ (_Bool)_writeImage:(id)arg1 toURL:(id)arg2;	// IMP=0x000000000000541b
+ (id)_imageAtURL:(id)arg1;	// IMP=0x00000000000052e6
+ (_Bool)_ensureExistenceOfDirectory:(id)arg1;	// IMP=0x0000000000003f98
+ (id)_staticRepresentationCacheURL;	// IMP=0x0000000000003efc
+ (id)_applicationCacheDirectory;	// IMP=0x0000000000003e2c
+ (id)sharedInstance;	// IMP=0x0000000000003d9b
- (void).cxx_destruct;	// IMP=0x0000000000005d6d
@property(nonatomic) _Bool renderIfNeeded; // @synthesize renderIfNeeded=_renderIfNeeded;
@property(nonatomic) _Bool useFilesystem; // @synthesize useFilesystem=_useFilesystem;
@property(nonatomic) _Bool useMemory; // @synthesize useMemory=_useMemory;
@property(retain, nonatomic) NSURL *cacheDirectory; // @synthesize cacheDirectory=_cacheDirectory;
- (void)_fetchWithReadBlock:(CDUnknownBlockType)arg1 writeBlock:(CDUnknownBlockType)arg2 renderBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000510f
- (void)_renderImageForLikeness:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004e94
- (void)_fetchFromFilesystem:(id)arg1 context:(id)arg2 renderBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000004cda
- (void)_fetchFromMemory:(id)arg1 context:(id)arg2 renderBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000004a5b
- (void)imageForLikeness:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000004498
- (id)_cacheURLForLikeness:(id)arg1 context:(id)arg2;	// IMP=0x0000000000004400
- (id)_cacheKeyForLikeness:(id)arg1 context:(id)arg2;	// IMP=0x00000000000042b8
- (id)init;	// IMP=0x00000000000040ea

@end
