//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessory, HMAccessoryCategory, HMAccessoryOwnershipToken, HMMatterTopology, HMSetupAccessoryPayload, NSArray, NSError, NSString, NSURL, NSUUID;

@interface HMSetupAccessoryDescription : NSObject <HMFObject, NSCopying, NSSecureCoding>
{
    _Bool _addAndSetupAccessories;	// 8 = 0x8
    _Bool _entitledForHomeKitSPI;	// 9 = 0x9
    _Bool _entitledForThirdPartySetupAccessoryPayload;	// 10 = 0xa
    _Bool _userConsentedForReplace;	// 11 = 0xb
    NSString *_setupCode;	// 16 = 0x10
    NSUUID *_accessoryUUID;	// 24 = 0x18
    NSString *_accessoryName;	// 32 = 0x20
    NSString *_manufacturerName;	// 40 = 0x28
    NSString *_marketingName;	// 48 = 0x30
    NSURL *_installationGuideURL;	// 56 = 0x38
    NSString *_appIdentifier;	// 64 = 0x40
    NSUUID *_homeUUID;	// 72 = 0x48
    NSString *_storeID;	// 80 = 0x50
    NSString *_bundleID;	// 88 = 0x58
    NSString *_suggestedRoomName;	// 96 = 0x60
    NSString *_suggestedAccessoryName;	// 104 = 0x68
    HMSetupAccessoryPayload *_setupAccessoryPayload;	// 112 = 0x70
    unsigned long long _certificationStatus;	// 120 = 0x78
    HMAccessory *_accessoryBeingReplaced;	// 128 = 0x80
    NSError *_cancellationReason;	// 136 = 0x88
    HMMatterTopology *_topology;	// 144 = 0x90
    HMAccessoryCategory *_category;	// 152 = 0x98
    NSUUID *_suggestedRoomUUID;	// 160 = 0xa0
    HMAccessoryOwnershipToken *_ownershipToken;	// 168 = 0xa8
    NSUUID *_addRequestIdentifier;	// 176 = 0xb0
    NSString *_accessoryServerIdentifier;	// 184 = 0xb8
}

+ (id)shortDescription;	// IMP=0x0000000000058b42
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000058b3a
- (void).cxx_destruct;	// IMP=0x0000000000058a2b
@property(copy, nonatomic) NSString *accessoryServerIdentifier; // @synthesize accessoryServerIdentifier=_accessoryServerIdentifier;
@property(nonatomic) _Bool userConsentedForReplace; // @synthesize userConsentedForReplace=_userConsentedForReplace;
@property(copy, nonatomic) NSUUID *addRequestIdentifier; // @synthesize addRequestIdentifier=_addRequestIdentifier;
@property(copy, nonatomic) HMAccessoryOwnershipToken *ownershipToken; // @synthesize ownershipToken=_ownershipToken;
@property(copy, nonatomic) NSUUID *suggestedRoomUUID; // @synthesize suggestedRoomUUID=_suggestedRoomUUID;
@property(retain, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property(retain, nonatomic) HMMatterTopology *topology; // @synthesize topology=_topology;
@property(retain, nonatomic) NSError *cancellationReason; // @synthesize cancellationReason=_cancellationReason;
@property(nonatomic) __weak HMAccessory *accessoryBeingReplaced; // @synthesize accessoryBeingReplaced=_accessoryBeingReplaced;
@property(nonatomic) unsigned long long certificationStatus; // @synthesize certificationStatus=_certificationStatus;
@property(retain, nonatomic) HMSetupAccessoryPayload *setupAccessoryPayload; // @synthesize setupAccessoryPayload=_setupAccessoryPayload;
@property(copy, nonatomic) NSString *suggestedAccessoryName; // @synthesize suggestedAccessoryName=_suggestedAccessoryName;
@property(copy, nonatomic) NSString *suggestedRoomName; // @synthesize suggestedRoomName=_suggestedRoomName;
@property(nonatomic, getter=isEntitledForThirdPartySetupAccessoryPayload) _Bool entitledForThirdPartySetupAccessoryPayload; // @synthesize entitledForThirdPartySetupAccessoryPayload=_entitledForThirdPartySetupAccessoryPayload;
@property(nonatomic, getter=isEntitledForHomeKitSPI) _Bool entitledForHomeKitSPI; // @synthesize entitledForHomeKitSPI=_entitledForHomeKitSPI;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSString *storeID; // @synthesize storeID=_storeID;
@property(readonly, copy, nonatomic) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
@property(nonatomic) _Bool addAndSetupAccessories; // @synthesize addAndSetupAccessories=_addAndSetupAccessories;
@property(copy, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(copy, nonatomic) NSURL *installationGuideURL; // @synthesize installationGuideURL=_installationGuideURL;
@property(copy, nonatomic) NSString *marketingName; // @synthesize marketingName=_marketingName;
@property(copy, nonatomic) NSString *manufacturerName; // @synthesize manufacturerName=_manufacturerName;
@property(copy, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property(copy, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000056f2d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000056a35
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000565ea
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000560e5
@property(readonly, copy, nonatomic) NSUUID *suggestedRoomUniqueIdentifier;
@property(readonly, nonatomic) _Bool hasAddRequest;
@property(readonly, copy, nonatomic) NSString *setupID;
@property(copy, nonatomic) NSString *setupCode; // @synthesize setupCode=_setupCode;
@property(readonly, nonatomic, getter=isPaired) _Bool paired;
@property(readonly, nonatomic) _Bool supportsBTLE;
@property(readonly, nonatomic) _Bool supportsWAC;
@property(readonly, nonatomic) _Bool supportsIP;
- (void)updateAccessoryCategory:(id)arg1;	// IMP=0x0000000000055cd7
- (void)updateAppIdentifier:(id)arg1;	// IMP=0x0000000000055c90
- (void)updateOwnershipToken:(id)arg1;	// IMP=0x0000000000055c7e
- (void)updateWithAccessory:(id)arg1;	// IMP=0x0000000000055b70
- (void)updateWithSetupAccessoryPayload:(id)arg1;	// IMP=0x0000000000055b29
- (id)initWithStagedCHIPAccessoryPairingIdentifier:(id)arg1;	// IMP=0x0000000000055aa6
- (id)initWithAddRequest:(id)arg1 setupAccessoryPayload:(id)arg2 appID:(id)arg3 ownershipToken:(id)arg4;	// IMP=0x000000000005593f
- (id)initToSetupAccessoriesWithSetupAccessoryPayload:(id)arg1 appID:(id)arg2 homeName:(id)arg3 homeUUID:(id)arg4 trustedOrigin:(_Bool)arg5 ownershipToken:(id)arg6;	// IMP=0x0000000000055926
- (id)initWithSetupAccessoryPayload:(id)arg1 appID:(id)arg2 homeUUID:(id)arg3 ownershipToken:(id)arg4;	// IMP=0x0000000000055817
- (id)initWithAppIdentifier:(id)arg1 homeUUID:(id)arg2;	// IMP=0x0000000000055752
- (id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2 appID:(id)arg3 homeName:(id)arg4 homeUUID:(id)arg5 trustedOrigin:(_Bool)arg6;	// IMP=0x000000000005573c
- (id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2 appID:(id)arg3 homeUUID:(id)arg4;	// IMP=0x0000000000055623

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

