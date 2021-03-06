//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;

@interface INBundleAccessManager : NSObject
{
    struct {
        unsigned int _requestCount;
        unsigned int _securityScopeCacheHitCount;
        unsigned int _accessibleCacheHitCount;
        unsigned int _cacheMissCount;
        unsigned int _imageServiceLoadCount;
    } _stats;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 28 = 0x1c
    NSMutableDictionary *_securityScopedURLs;	// 32 = 0x20
    NSMutableSet *_accessibleBundleIDs;	// 40 = 0x28
}

+ (id)sharedManager;	// IMP=0x00000000000c2c18
- (void).cxx_destruct;	// IMP=0x00000000000c24fc
@property(readonly, nonatomic) NSMutableSet *accessibleBundleIDs; // @synthesize accessibleBundleIDs=_accessibleBundleIDs;
@property(readonly, nonatomic) NSMutableDictionary *securityScopedURLs; // @synthesize securityScopedURLs=_securityScopedURLs;
- (id)_stats;	// IMP=0x00000000000c2456
- (id)_grantForBundleIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c1d6c
- (id)grantForBundleIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c1d01
- (id)grantForBundleIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c1c2f
- (id)init;	// IMP=0x00000000000c1bc0

@end

