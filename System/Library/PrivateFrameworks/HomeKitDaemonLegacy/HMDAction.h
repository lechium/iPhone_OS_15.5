//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDBackingStoreModelBackedObjectProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class HMDActionSet, NSArray, NSDictionary, NSString, NSUUID;

@interface HMDAction : HMFObject <NSSecureCoding, HMDBackingStoreModelBackedObjectProtocol, HMDBackingStoreObjectProtocol, HMFLogging>
{
    NSUUID *_uuid;	// 8 = 0x8
    HMDActionSet *_actionSet;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000072b1ad
+ (id)logCategory;	// IMP=0x000000000072b17d
+ (id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2;	// IMP=0x000000000072b175
- (void).cxx_destruct;	// IMP=0x000000000072b146
@property(nonatomic) __weak HMDActionSet *actionSet; // @synthesize actionSet=_actionSet;
@property(readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)attributeDescriptions;	// IMP=0x000000000072afda
- (void)configureWithHome:(id)arg1;	// IMP=0x000000000072afd4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000072af08
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000072ad2b
- (id)logIdentifier;	// IMP=0x000000000072acdb
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x000000000072acd5
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000072ab16
- (id)modelBackedObjects;	// IMP=0x000000000072aab6
- (id)backingStoreObjectsWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x000000000072aa1e
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x000000000072a975
@property(readonly, copy, nonatomic) NSUUID *modelParentIdentifier;
@property(readonly, copy, nonatomic) NSUUID *modelIdentifier;
@property(readonly) Class modelClass;
@property(readonly) _Bool isUnsecuringAction;
- (_Bool)isAssociatedWithAccessory:(id)arg1;	// IMP=0x000000000072a7ab
@property(readonly, copy) NSArray *associatedAccessories;
@property(readonly) unsigned long long entitlementsForNotification;
@property(readonly) _Bool requiresDeviceUnlock;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x000000000072a6d9
- (void)executeWithSource:(unsigned long long)arg1 clientName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000072a618
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) NSString *stateDump;
@property(readonly) unsigned long long type;
- (void)updateActionSetIfNil:(id)arg1;	// IMP=0x000000000072a361
- (id)initWithUUID:(id)arg1 actionSet:(id)arg2;	// IMP=0x000000000072a2bf
- (id)init;	// IMP=0x000000000072a217

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
