//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SSVURLCacheConfiguration;
@protocol OS_dispatch_queue;

@interface SSVURLCache : NSObject
{
    NSObject<OS_dispatch_queue> *_accessSerialQueue;	// 8 = 0x8
    struct __CFURLStorageSession *_cacheStorageSession;	// 16 = 0x10
    SSVURLCacheConfiguration *_configuration;	// 24 = 0x18
    struct _CFURLCache *_urlCache;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000026baa
- (void)storeConnectionResponse:(id)arg1 forRequestProperties:(id)arg2 userInfo:(id)arg3;	// IMP=0x00000000000269b5
- (void)storeConnectionResponse:(id)arg1 forRequestProperties:(id)arg2;	// IMP=0x00000000000269a0
- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;	// IMP=0x00000000000265a1
- (void)saveMemoryCacheToDisk;	// IMP=0x000000000002653d
- (void)removeAllCachedResponses;	// IMP=0x00000000000264d9
- (void)loadMemoryCacheFromDisk;	// IMP=0x0000000000026475
- (void)configureRequest:(id)arg1;	// IMP=0x0000000000026436
- (id)cachedConnectionResponseForRequestProperties:(id)arg1 cachedResponse:(id *)arg2;	// IMP=0x000000000002624a
- (id)cachedConnectionResponseForRequestProperties:(id)arg1;	// IMP=0x0000000000026236
- (id)cachedResponseForRequest:(id)arg1;	// IMP=0x0000000000025f4d
- (void)dealloc;	// IMP=0x0000000000025f00
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000025dd8
- (id)init;	// IMP=0x0000000000025d80

@end
