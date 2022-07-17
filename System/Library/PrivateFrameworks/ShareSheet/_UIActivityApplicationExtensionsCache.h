//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface _UIActivityApplicationExtensionsCache : NSObject
{
    _Bool _primed;	// 8 = 0x8
    unsigned long long _cacheMisses;	// 16 = 0x10
    unsigned long long _cacheHits;	// 24 = 0x18
    struct os_unfair_lock_s _cacheLock;	// 32 = 0x20
    _Bool _precached;	// 36 = 0x24
    NSObject<OS_dispatch_queue> *_primedExtensionsQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_discoveryQueue;	// 48 = 0x30
    NSMutableDictionary *_cachedResults;	// 56 = 0x38
    NSMutableDictionary *_extensionMatchTokens;	// 64 = 0x40
}

+ (id)sharedExtensionsCache;	// IMP=0x000000000001b9e3
- (void).cxx_destruct;	// IMP=0x000000000001d7d2
@property(retain, nonatomic) NSMutableDictionary *extensionMatchTokens; // @synthesize extensionMatchTokens=_extensionMatchTokens;
@property(retain, nonatomic) NSMutableDictionary *cachedResults; // @synthesize cachedResults=_cachedResults;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *discoveryQueue; // @synthesize discoveryQueue=_discoveryQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *primedExtensionsQueue; // @synthesize primedExtensionsQueue=_primedExtensionsQueue;
- (id)reportExtensionsCacheResult;	// IMP=0x000000000001d666
- (id)extensionsResultWithMatchingAttributes:(id)arg1;	// IMP=0x000000000001cff5
- (void)primeExtensionsResultWithMatchingAttributes:(id)arg1;	// IMP=0x000000000001c89b
- (void)_startContinuousExtensionDiscoveryForAttributes:(id)arg1 cacheKey:(id)arg2;	// IMP=0x000000000001c471
- (void)_cacheMatchingExtensions:(id)arg1 cacheKey:(id)arg2 error:(id)arg3;	// IMP=0x000000000001c382
- (void)_cacheMatchingExtensionsResult:(id)arg1 cacheKey:(id)arg2;	// IMP=0x000000000001c2e8
- (id)_matchingExtensionsCachedResultForKey:(id)arg1;	// IMP=0x000000000001c254
- (void)_startPrecachingContinuousExtensionDiscovery;	// IMP=0x000000000001bb7f
- (id)init;	// IMP=0x000000000001ba38

@end
