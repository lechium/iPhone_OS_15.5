//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFObject-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class HMDAssistantAccessControlModel, HMDUser, NSArray, NSMutableSet, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDAssistantAccessControl : HMFObject <HMFLogging, HMFObject, NSSecureCoding, HMDBackingStoreObjectProtocol>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableSet *_appleMediaAccessories;	// 16 = 0x10
    NSMutableSet *_hapAccessoryIdentifiers;	// 24 = 0x18
    _Bool _enabled;	// 32 = 0x20
    _Bool _activityNotificationsEnabledForPersonalRequests;	// 33 = 0x21
    HMDUser *_user;	// 40 = 0x28
    unsigned long long _cachedHash;	// 48 = 0x30
    unsigned long long _options;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_clientQueue;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000a24475
+ (id)logCategory;	// IMP=0x0000000000a24445
+ (id)modelIDNamespace;	// IMP=0x0000000000a24415
+ (id)accessControlWithMessage:(id)arg1 user:(id)arg2 currentAccessories:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000a23813
+ (_Bool)isAccessorySupported:(id)arg1;	// IMP=0x0000000000a2367a
- (void).cxx_destruct;	// IMP=0x0000000000a216a4
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a2121e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a20e9f
- (id)logIdentifier;	// IMP=0x0000000000a20e4f
- (id)assistantAccessControlModelWithRemovedAccessories:(id)arg1;	// IMP=0x0000000000a20875
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000a2086f
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000a1fc30
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;	// IMP=0x0000000000a1fab6
@property(readonly, copy) HMDAssistantAccessControlModel *model;
@property(readonly, copy) NSUUID *modelID;
- (void)notifyClientOfUpdateWithMessage:(id)arg1;	// IMP=0x0000000000a1f75e
- (void)removeAccessoriesAddedByOldController:(id)arg1;	// IMP=0x0000000000a1f6ad
- (void)handleRemovedAccessory:(id)arg1;	// IMP=0x0000000000a1f5fc
- (void)removeAccessory:(id)arg1;	// IMP=0x0000000000a1f310
- (void)addAccessory:(id)arg1;	// IMP=0x0000000000a1f0c7
- (void)setAppleMediaAccessories:(id)arg1;	// IMP=0x0000000000a1f05a
- (void)setHapAccessoryIdentifiers:(id)arg1;	// IMP=0x0000000000a1efed
@property(readonly, copy) NSArray *accessories;
@property(getter=areActivityNotificationsEnabledForPersonalRequests) _Bool activityNotificationsEnabledForPersonalRequests; // @synthesize activityNotificationsEnabledForPersonalRequests=_activityNotificationsEnabledForPersonalRequests;
@property unsigned long long options; // @synthesize options=_options;
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0000000000a1ed59
@property(readonly, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property __weak HMDUser *user; // @synthesize user=_user;
@property(readonly) unsigned long long cachedHash; // @synthesize cachedHash=_cachedHash;
@property(readonly, copy) NSString *propertyDescription;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a1e8dd
@property(readonly) unsigned long long hash;
- (void)dealloc;	// IMP=0x0000000000a1e856
- (void)configure;	// IMP=0x0000000000a1e752
- (id)initWithUser:(id)arg1;	// IMP=0x0000000000a1e720
- (id)initWithUser:(id)arg1 appleAccessories:(id)arg2 hapAccessoryIdentifiers:(id)arg3 enabled:(_Bool)arg4 activityNotificationsEnabledForPersonalRequests:(_Bool)arg5;	// IMP=0x0000000000a1e577
- (id)initWithUser:(id)arg1 appleAccessories:(id)arg2 enabled:(_Bool)arg3;	// IMP=0x0000000000a1e54b
- (id)initWithUser:(id)arg1 model:(id)arg2;	// IMP=0x0000000000a1e1f8
- (id)init;	// IMP=0x0000000000a1e150

// Remaining properties
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) Class superclass;

@end

