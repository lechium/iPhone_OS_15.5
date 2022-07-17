//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreServices/UMUserPersonaUpdateObserver-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _LSPersonaDatabase : NSObject <UMUserPersonaUpdateObserver>
{
    struct os_unfair_lock_s _ivarLock;	// 8 = 0x8
    struct os_unfair_lock_s _uncachedCalloutLock;	// 12 = 0xc
    _Bool _registered;	// 16 = 0x10
    NSDictionary *_cachedBundleIDToPersonasMap;	// 24 = 0x18
    NSString *_cachedSystemPersonaIdentifier;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x000000000014b6b4
- (void).cxx_destruct;	// IMP=0x000000000014c01e
- (_Bool)personaListContainsSystemPersona:(id)arg1;	// IMP=0x000000000014bf88
- (id)personaIdentifiersForBundleIdentifier:(id)arg1;	// IMP=0x000000000014bece
- (id)getSystemPersonaIdentifier;	// IMP=0x000000000014be8a
- (id)getBundleIDToPersonasMap;	// IMP=0x000000000014be46
- (void)getCachedBundleIDToPersonasMap:(id *)arg1 systemPersonaIdentifier:(id *)arg2;	// IMP=0x000000000014bd1e
- (void)personaListDidUpdate;	// IMP=0x000000000014bc7f
- (void)getUncachedBundleIDToPersonasMap:(id *)arg1 systemPersonaIdentifier:(id *)arg2;	// IMP=0x000000000014b719
- (id)initPrivately;	// IMP=0x000000000014b61e
- (void)registerWithUserManagerForAttempt:(unsigned long long)arg1 maxAttempts:(unsigned long long)arg2;	// IMP=0x000000000014b3b7
- (void)registerWithUserManager;	// IMP=0x000000000014b39b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
