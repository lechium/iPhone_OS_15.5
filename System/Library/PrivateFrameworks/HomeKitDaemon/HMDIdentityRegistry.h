//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDHomeManager, NSArray, NSMutableArray, NSRecursiveLock, NSString;

@interface HMDIdentityRegistry : HMFObject <HMFLogging, HMFDumpState>
{
    NSMutableArray *_registeredIdentities;	// 8 = 0x8
    HMDHomeManager *_homeManager;	// 16 = 0x10
    NSRecursiveLock *_lock;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0000000000184229
+ (id)sharedRegistry;	// IMP=0x00000000001841c6
- (void).cxx_destruct;	// IMP=0x000000000018178f
@property(readonly, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
- (id)dumpState;	// IMP=0x00000000001805d5
- (void)reset;	// IMP=0x0000000000180557
- (void)deregisterIdentity:(id)arg1 object:(id)arg2;	// IMP=0x000000000018045b
- (void)registerIdentity:(id)arg1 account:(id)arg2 object:(id)arg3;	// IMP=0x00000000001801e5
- (void)registerIdentity:(id)arg1 device:(id)arg2 object:(id)arg3;	// IMP=0x000000000017ff6f
- (id)accountsForIdentity:(id)arg1;	// IMP=0x000000000017fe24
- (id)identitiesForAccount:(id)arg1;	// IMP=0x000000000017fcd4
- (id)identitiesForDevice:(id)arg1;	// IMP=0x000000000017fb49
- (id)userForDevice:(id)arg1;	// IMP=0x000000000017fa56
- (id)_userForIdenity:(id)arg1;	// IMP=0x000000000017f8b2
- (void)configureWithHomeManager:(id)arg1;	// IMP=0x000000000017f8a0
- (id)identityForIdentifier:(id)arg1;	// IMP=0x000000000017f755
@property(readonly) NSArray *registeredIdentities;
- (id)attributeDescriptions;	// IMP=0x000000000017f582
- (id)init;	// IMP=0x000000000017f4ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

