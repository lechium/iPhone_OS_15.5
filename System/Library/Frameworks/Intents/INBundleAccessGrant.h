//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

@interface INBundleAccessGrant : NSObject
{
    long long _acquireCount;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    NSDictionary *_securityScopedURLs;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000c2a7f
@property(readonly, nonatomic) NSDictionary *securityScopedURLs; // @synthesize securityScopedURLs=_securityScopedURLs;
- (void)dealloc;	// IMP=0x00000000000c2a2c
- (void)relinquish;	// IMP=0x00000000000c28a5
- (void)acquire;	// IMP=0x00000000000c2704
@property(readonly, nonatomic) NSSet *bundleIdentifiers;
- (id)initWithSecurityScopedURLs:(id)arg1;	// IMP=0x00000000000c25ef

@end

