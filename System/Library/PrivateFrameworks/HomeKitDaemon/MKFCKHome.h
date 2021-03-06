//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKFCKRoom, MKFCKUser, NSArray, NSData, NSDate, NSDictionary, NSSet, NSString, NSUUID;

@interface MKFCKHome
{
}

+ (id)createWithLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x00000000001e74c5
+ (_Bool)exportDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x00000000001e71ea
+ (_Bool)exportUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x00000000001e6ad9
+ (_Bool)exportInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;	// IMP=0x00000000001e63ee
+ (_Bool)importDeleteWithObjectID:(id)arg1 modelID:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x00000000001e5dac
+ (_Bool)importUpdateWithObjectID:(id)arg1 updatedProperties:(id)arg2 additionalUpdates:(id)arg3 context:(id)arg4;	// IMP=0x00000000001e5d22
+ (_Bool)importInsertWithObjectID:(id)arg1 additionalUpdates:(id)arg2 context:(id)arg3;	// IMP=0x00000000001e5c88
+ (id)_createHomeManagerContextFromContext:(id)arg1;	// IMP=0x00000000000055de
+ (id)_homeManagerContextFromContext:(id)arg1;	// IMP=0x00000000000053ee
+ (id)_homeManagerHomeWithModelID:(id)arg1 homeManager:(id)arg2 context:(id)arg3;	// IMP=0x0000000000005297
+ (id)fetchRequest;	// IMP=0x0000000000b91c86
- (id)homeModelID;	// IMP=0x00000000001e49d8
- (_Bool)_exportRelationshipsFromLocalModel:(id)arg1 localRelationship:(id)arg2 cloudRelationship:(id)arg3 context:(id)arg4;	// IMP=0x00000000001e46e4
- (_Bool)_exportRelationshipsFromLocalModel:(id)arg1 localRelationshipName:(id)arg2 context:(id)arg3;	// IMP=0x00000000001e45b5
- (_Bool)_importRelationshipsIntoLocalModel:(id)arg1 localRelationshipName:(id)arg2 context:(id)arg3;	// IMP=0x00000000001e41c7
- (id)initWithContext:(id)arg1 assignStore:(id)arg2;	// IMP=0x00000000001e410c
- (_Bool)_exportHomeManagerWithContext:(id)arg1;	// IMP=0x00000000000041f4
- (_Bool)_importHomeManagerWithContext:(id)arg1;	// IMP=0x00000000000037c8
- (_Bool)_exportUsersFromLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x00000000001dfb26
- (_Bool)_importUsersIntoLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x00000000001df85b
- (_Bool)validateOwner:(id *)arg1 error:(id *)arg2;	// IMP=0x00000000001e808e
- (_Bool)_exportSettingsFromLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x00000000003d8881
- (_Bool)_importSettingsIntoLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x00000000003d84b2
- (_Bool)_exportRoomsFromLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x000000000043b871
- (_Bool)_importRoomsIntoLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x000000000043b5f5
- (_Bool)_exportApplicationDataFromLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x00000000004ac6b3
- (_Bool)_importApplicationDataIntoLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x00000000004ac636
- (_Bool)_exportAutomationsFromLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x00000000004af882
- (_Bool)_importAutomationsIntoLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x00000000004af87a
- (_Bool)_exportTriggersFromLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x000000000055dabf
- (_Bool)_importTriggersIntoLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x000000000055daa3
- (_Bool)_exportScenesFromLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x00000000005c6f01
- (_Bool)_importScenesIntoLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x00000000005c6ee5
- (_Bool)_exportResidentsFromLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x000000000060ea4c
- (_Bool)_importResidentsIntoLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x000000000060ea30
- (_Bool)_exportZonesFromLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x000000000071774a
- (_Bool)_importZonesIntoLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x000000000071772e
- (_Bool)_exportAccessoriesFromLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x00000000007dfad6
- (_Bool)_importAccessoriesIntoLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x00000000007dfaba
- (_Bool)_exportInvitationOutgoingFromLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x000000000091d7a7
- (_Bool)_importInvitationOutgoingIntoLocalModel:(id)arg1 context:(id)arg2;	// IMP=0x000000000091d78b

// Remaining properties
@property(retain, nonatomic) NSSet *accessories; // @dynamic accessories;
@property(retain, nonatomic) NSDictionary *applicationData; // @dynamic applicationData;
@property(copy, nonatomic) NSUUID *conflictResolutionUUID; // @dynamic conflictResolutionUUID;
@property(copy, nonatomic) NSDate *creationDate; // @dynamic creationDate;
@property(retain, nonatomic) MKFCKRoom *defaultRoom; // @dynamic defaultRoom;
@property(nonatomic) _Bool didOnboardLocationServices; // @dynamic didOnboardLocationServices;
@property(nonatomic) _Bool doorbellChimeEnabled; // @dynamic doorbellChimeEnabled;
@property(copy, nonatomic) NSDate *firstHAPAccessoryAddedDate; // @dynamic firstHAPAccessoryAddedDate;
@property(nonatomic) _Bool hasAnyUserAcknowledgedCameraRecordingOnboarding; // @dynamic hasAnyUserAcknowledgedCameraRecordingOnboarding;
@property(nonatomic) _Bool hasOnboardedForAccessCode; // @dynamic hasOnboardedForAccessCode;
@property(nonatomic) _Bool hasOnboardedForWalletKey; // @dynamic hasOnboardedForWalletKey;
@property(retain, nonatomic) NSDictionary *homeManagerApplicationData; // @dynamic homeManagerApplicationData;
@property(retain, nonatomic) NSSet *invitations; // @dynamic invitations;
@property(nonatomic) _Bool locationServicesEnabled; // @dynamic locationServicesEnabled;
@property(copy, nonatomic) NSUUID *modelID; // @dynamic modelID;
@property(nonatomic) _Bool multiUserEnabled; // @dynamic multiUserEnabled;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSArray *networkProtectionGroups; // @dynamic networkProtectionGroups;
@property(nonatomic) long long networkProtectionMode; // @dynamic networkProtectionMode;
@property(retain, nonatomic) NSData *nfcReaderKey; // @dynamic nfcReaderKey;
@property(retain, nonatomic) MKFCKUser *owner; // @dynamic owner;
@property(nonatomic) long long primaryHomeCounter; // @dynamic primaryHomeCounter;
@property(retain, nonatomic) NSSet *residents; // @dynamic residents;
@property(retain, nonatomic) NSSet *rooms; // @dynamic rooms;
@property(retain, nonatomic) NSSet *scenes; // @dynamic scenes;
@property(nonatomic) _Bool settingAutomaticSoftwareUpdateEnabled; // @dynamic settingAutomaticSoftwareUpdateEnabled;
@property(nonatomic) _Bool settingAutomaticThirdPartyAccessorySoftwareUpdateEnabled; // @dynamic settingAutomaticThirdPartyAccessorySoftwareUpdateEnabled;
@property(nonatomic) long long settingMediaMinimumUserPrivilege; // @dynamic settingMediaMinimumUserPrivilege;
@property(copy, nonatomic) NSString *settingMediaPassword; // @dynamic settingMediaPassword;
@property(nonatomic) _Bool settingMediaPeerToPeerEnabled; // @dynamic settingMediaPeerToPeerEnabled;
@property(copy, nonatomic) NSString *threadNetworkID; // @dynamic threadNetworkID;
@property(retain, nonatomic) NSSet *triggers; // @dynamic triggers;
@property(retain, nonatomic) NSSet *users; // @dynamic users;
@property(copy, nonatomic) NSDate *writerTimestamp; // @dynamic writerTimestamp;
@property(copy, nonatomic) NSString *writerVersion; // @dynamic writerVersion;
@property(retain, nonatomic) NSSet *zones; // @dynamic zones;

@end

