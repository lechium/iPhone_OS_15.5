//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;

@interface INCache : NSObject
{
    NSCache *_underlyingCache;	// 8 = 0x8
}

+ (id)sharedCache;	// IMP=0x000000000029e560
- (void).cxx_destruct;	// IMP=0x000000000029e550
- (void)removeAllCacheableObjects;	// IMP=0x000000000029e53a
- (id)consumeCacheableObjectForIdentifier:(id)arg1;	// IMP=0x000000000029e446
- (id)cacheableObjectForIdentifier:(id)arg1;	// IMP=0x000000000029e36c
- (void)removeCacheableObject:(id)arg1;	// IMP=0x000000000029e27e
- (void)addCacheableObject:(id)arg1;	// IMP=0x000000000029e18d
@property(readonly, nonatomic) NSCache *_cacheDictionary;
- (id)_init;	// IMP=0x000000000029e129
- (id)init;	// IMP=0x000000000029e117

@end

