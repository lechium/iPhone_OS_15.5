//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCloudShareTrustManagerDataSource-Protocol.h>
#import <HomeKitDaemonLegacy/HMDCloudShareTrustManagerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemonLegacy/HMDRemoteEventRouterUserAccessControlProvider-Protocol.h>
#import <HomeKitDaemonLegacy/HMDSettingsControllerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDUserDataControllerDataSource-Protocol.h>
#import <HomeKitDaemonLegacy/HMDUserDataControllerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDUserSettingsBackingStoreControllerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMDUserSettingsInitialValueProviding-Protocol.h>
#import <HomeKitDaemonLegacy/HMFDumpState-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class AVOutputDeviceAuthorizedPeer, HAPPairingIdentity, HMBShareUserID, HMDAccountHandle, HMDAccountIdentifier, HMDAssistantAccessControl, HMDCloudShareMessenger, HMDCloudShareTrustManager, HMDHome, HMDPersonSettingsManager, HMDPhotosPersonManager, HMDSettingsControllerDependency, HMDSiriMultiUserNewLanguageNotificationManager, HMDUserDataController, HMDUserPhotosPersonDataManager, HMDUserSettingsBackingStoreController, HMFMessageDispatcher, HMPhotosPersonManagerSettings, HMUserPresenceAuthorization, NAFuture, NSData, NSNumber, NSObject, NSSet, NSString, NSUUID;
@protocol HMDUserDataSource, HMFLocking, OS_dispatch_queue;

@interface HMDUser : HMFObject <HMDCloudShareTrustManagerDataSource, HMDCloudShareTrustManagerDelegate, HMDUserDataControllerDelegate, HMDUserSettingsBackingStoreControllerDelegate, HMDUserDataControllerDataSource, HMFLogging, HMFDumpState, HMDBackingStoreObjectProtocol, HMDHomeMessageReceiver, HMDSettingsControllerDelegate, HMDRemoteEventRouterUserAccessControlProvider, HMDUserSettingsInitialValueProviding, NSSecureCoding>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSUUID *_uuid;	// 24 = 0x18
    _Bool _remoteAccessAllowed;	// 32 = 0x20
    HMDAccountHandle *_accountHandle;	// 40 = 0x28
    HMDAccountIdentifier *_accountIdentifier;	// 48 = 0x30
    _Bool _needsiTunesMultiUserRepair;	// 56 = 0x38
    unsigned long long _privilege;	// 64 = 0x40
    HMDHome *_home;	// 72 = 0x48
    NSString *_userID;	// 80 = 0x50
    HMUserPresenceAuthorization *_presenceAuthStatus;	// 88 = 0x58
    NSNumber *_camerasAccessLevelValue;	// 96 = 0x60
    HAPPairingIdentity *_pairingIdentity;	// 104 = 0x68
    NSString *_displayName;	// 112 = 0x70
    HMDAssistantAccessControl *_assistantAccessControl;	// 120 = 0x78
    unsigned long long _announceAccessLevel;	// 128 = 0x80
    long long _userCloudShareWithOwnerMessagingState;	// 136 = 0x88
    HMBShareUserID *_cloudShareID;	// 144 = 0x90
    NAFuture *_cloudShareIDFuture;	// 152 = 0x98
    HMDUserPhotosPersonDataManager *_photosPersonDataManager;	// 160 = 0xa0
    HMDPersonSettingsManager *_personSettingsManager;	// 168 = 0xa8
    NSString *_accessCode;	// 176 = 0xb0
    NSUUID *_accessCodeChangedByUserUUID;	// 184 = 0xb8
    HMDUserDataController *_userDataController;	// 192 = 0xc0
    HMDSettingsControllerDependency *_sharedSettingsControllerDependency;	// 200 = 0xc8
    HMDCloudShareMessenger *_shareMessenger;	// 208 = 0xd0
    HMDSettingsControllerDependency *_privateSettingsControllerDependency;	// 216 = 0xd8
    HMDUserSettingsBackingStoreController *_privateBackingStoreController;	// 224 = 0xe0
    id <HMDUserDataSource> _dataSource;	// 232 = 0xe8
    HMDSiriMultiUserNewLanguageNotificationManager *_siriMultiUserNewLanguageNotificationManager;	// 240 = 0xf0
    HMFMessageDispatcher *_messageDispatcher;	// 248 = 0xf8
    unsigned long long _announceNotificationModeForCurrentDevice;	// 256 = 0x100
    HMDCloudShareTrustManager *_cloudShareTrustManager;	// 264 = 0x108
    HMDUserSettingsBackingStoreController *_sharedBackingStoreController;	// 272 = 0x110
}

+ (id)userDictionaryWithUserID:(id)arg1 privilege:(unsigned long long)arg2 remoteAccessAllowed:(_Bool)arg3 cameraAccessLevel:(unsigned long long)arg4 announceAccessAllowed:(id)arg5 announceAccessLevel:(unsigned long long)arg6;	// IMP=0x000000000090c839
+ (id)userWithDictionary:(id)arg1 home:(id)arg2;	// IMP=0x000000000090c4e0
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000090c4d8
+ (_Bool)hasMessageReceiverChildren;	// IMP=0x000000000090c4d0
+ (id)logCategory;	// IMP=0x000000000090c4a0
+ (id)UUIDWithUserID:(id)arg1 forHomeIdentifier:(id)arg2 uuid:(id)arg3 pairingIdentity:(id)arg4;	// IMP=0x000000000090c1fa
+ (id)userIDForAccountHandle:(id)arg1;	// IMP=0x000000000090c1a7
+ (id)ownerWithUserID:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 homeManager:(id)arg4;	// IMP=0x000000000090be92
+ (id)currentUserWithPrivilege:(unsigned long long)arg1 forHome:(id)arg2;	// IMP=0x000000000090bcd3
- (void).cxx_destruct;	// IMP=0x00000000009048e8
@property(retain) HMDUserSettingsBackingStoreController *sharedBackingStoreController; // @synthesize sharedBackingStoreController=_sharedBackingStoreController;
@property(retain) HMDCloudShareTrustManager *cloudShareTrustManager; // @synthesize cloudShareTrustManager=_cloudShareTrustManager;
@property unsigned long long announceNotificationModeForCurrentDevice; // @synthesize announceNotificationModeForCurrentDevice=_announceNotificationModeForCurrentDevice;
@property(retain) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain) HMDSiriMultiUserNewLanguageNotificationManager *siriMultiUserNewLanguageNotificationManager; // @synthesize siriMultiUserNewLanguageNotificationManager=_siriMultiUserNewLanguageNotificationManager;
@property(readonly) id <HMDUserDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property _Bool needsiTunesMultiUserRepair; // @synthesize needsiTunesMultiUserRepair=_needsiTunesMultiUserRepair;
@property(retain) HMDUserSettingsBackingStoreController *privateBackingStoreController; // @synthesize privateBackingStoreController=_privateBackingStoreController;
@property(retain) HMDSettingsControllerDependency *privateSettingsControllerDependency; // @synthesize privateSettingsControllerDependency=_privateSettingsControllerDependency;
@property(retain) HMDCloudShareMessenger *shareMessenger; // @synthesize shareMessenger=_shareMessenger;
@property(retain) HMDSettingsControllerDependency *sharedSettingsControllerDependency; // @synthesize sharedSettingsControllerDependency=_sharedSettingsControllerDependency;
@property(retain) HMDUserDataController *userDataController; // @synthesize userDataController=_userDataController;
@property(retain) NSUUID *accessCodeChangedByUserUUID; // @synthesize accessCodeChangedByUserUUID=_accessCodeChangedByUserUUID;
@property(copy) NSString *accessCode; // @synthesize accessCode=_accessCode;
@property(retain) HMDPersonSettingsManager *personSettingsManager; // @synthesize personSettingsManager=_personSettingsManager;
@property(retain) HMDUserPhotosPersonDataManager *photosPersonDataManager; // @synthesize photosPersonDataManager=_photosPersonDataManager;
@property(readonly) NAFuture *cloudShareIDFuture; // @synthesize cloudShareIDFuture=_cloudShareIDFuture;
@property(retain) HMBShareUserID *cloudShareID; // @synthesize cloudShareID=_cloudShareID;
@property(copy, setter=setUUID:) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)allAccessoryUUID;	// IMP=0x00000000009045ae
- (void)applyConditionalValueUpdateToModels:(id)arg1;	// IMP=0x00000000009045a8
- (id)pushTokensForDevicesObservingSubjectDevice:(id)arg1 subActivity:(id)arg2;	// IMP=0x00000000009044e8
- (void)deregisterIDSActivityObserver:(id)arg1;	// IMP=0x0000000000904476
- (void)deregisterIDSActivityObserver:(id)arg1 subActivity:(id)arg2 subjectDevice:(id)arg3;	// IMP=0x000000000090435a
- (void)updateIDSActivityObserver:(id)arg1;	// IMP=0x00000000009042a6
- (void)registerIDSActivityObserver:(id)arg1 subActivity:(id)arg2 subjectDevice:(id)arg3;	// IMP=0x000000000090418a
- (void)cloudShareTrustManager:(id)arg1 didRemoveUserWithUUID:(id)arg2;	// IMP=0x0000000000904002
- (void)didRemoveTrustZoneInCloudShareTrustManager:(id)arg1;	// IMP=0x0000000000903f29
- (void)didFinishConfiguringForCloudShareTrustManager:(id)arg1;	// IMP=0x0000000000903e62
- (void)cloudShareTrustManager:(id)arg1 didFetchOwnerCloudShareID:(id)arg2;	// IMP=0x0000000000903d4a
- (_Bool)isOwnerCapableForTrustManager:(id)arg1;	// IMP=0x0000000000903d06
- (id)homeForCloudShareTrustManager:(id)arg1;	// IMP=0x0000000000903cf4
- (id)ownerForCloudShareTrustManager:(id)arg1;	// IMP=0x0000000000903ceb
- (id)zoneNameForCloudShareTrustManager:(id)arg1;	// IMP=0x0000000000903c6a
- (_Bool)cloudShareTrustManager:(id)arg1 shouldShareTrustWithUser:(id)arg2;	// IMP=0x0000000000903b31
- (void)configureCloudShareTrustManager;	// IMP=0x000000000090390d
- (id)trustTargetUUID;	// IMP=0x0000000000903822
- (void)updateCloudShareID:(id)arg1;	// IMP=0x0000000000903513
- (void)removeCloudShareID;	// IMP=0x00000000009033d4
- (_Bool)userDataController:(id)arg1 isHAPAccessory:(id)arg2;	// IMP=0x00000000009031cf
- (_Bool)userDataController:(id)arg1 isAppleMediaAccessory:(id)arg2;	// IMP=0x0000000000902fca
- (id)privateZoneControllerForUserDataController:(id)arg1;	// IMP=0x0000000000902fb8
- (id)sharedZoneControllerForUserDataController:(id)arg1;	// IMP=0x0000000000902fa6
- (void)postUserSettingsUpdatedNotificationWithReason:(id)arg1;	// IMP=0x0000000000902ece
- (void)userDataControllerDidUpdateMediaContentProfile:(id)arg1;	// IMP=0x0000000000902eb5
- (void)userDataControllerDidUpdateAssistantAccessControl:(id)arg1;	// IMP=0x0000000000902e9c
- (_Bool)userDataController:(id)arg1 isMediaContentProfileCapableAccessoryID:(id)arg2;	// IMP=0x0000000000902bad
- (_Bool)userDataController:(id)arg1 isPersonalRequestCapableAccessoryID:(id)arg2;	// IMP=0x00000000009028be
- (void)backingStoreController:(id)arg1 didUpdatePhotosPersonManagerSettingsModel:(id)arg2 previousPhotosPersonManagerSettingsModel:(id)arg3;	// IMP=0x0000000000902823
- (id)ownerForUserSettingsBackingStoreController:(id)arg1;	// IMP=0x000000000090281a
- (id)backingStoreController:(id)arg1 createParticipantManagerForCloudZone:(id)arg2;	// IMP=0x0000000000902719
- (void)didStopBackingStoreController:(id)arg1;	// IMP=0x0000000000902549
- (void)didStartLocalZoneForBackingStoreController:(id)arg1;	// IMP=0x00000000009023dc
- (void)didStartBackingStoreController:(id)arg1;	// IMP=0x000000000090236a
@property(readonly) NSUUID *userUUID;
@property(readonly) _Bool isRunningOnHomeOwnersDevice;
- (id)settingsControllerFollowerKeyPaths:(id)arg1;	// IMP=0x000000000090224a
- (id)settingsController:(id)arg1 willUpdateSettingAtKeyPath:(id)arg2 withValue:(id)arg3;	// IMP=0x0000000000901e2d
- (void)settingsController:(id)arg1 didUpdateWithCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000901ddf
- (id)dictionaryEncoding;	// IMP=0x0000000000901cdb
- (void)removeCloudData;	// IMP=0x0000000000901bd3
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2;	// IMP=0x000000000090178f
- (id)modelObjectWithChangeType:(unsigned long long)arg1;	// IMP=0x0000000000901778
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x0000000000901508
- (id)announceUserSettingsModelWithChangeType:(unsigned long long)arg1;	// IMP=0x0000000000901460
- (void)migrateCloudZone:(id)arg1 migrationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000090103a
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x0000000000900bda
- (void)_transactionUserUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000008ffbe3
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x00000000008ff4b5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000008fe49e
@property(readonly, copy, nonatomic) NSString *encodingRemoteDisplayName;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000008fd999
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;	// IMP=0x00000000008fd91b
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x00000000008fd8b9
- (id)publicKey;	// IMP=0x00000000008fd83f
- (id)pairingUsername;	// IMP=0x00000000008fd7ef
@property(copy) NSString *userID; // @synthesize userID=_userID;
@property(readonly) NSNumber *notificationContextNFCIdentifier;
@property(readonly) NSNumber *notificationContextHAPIdentifier;
- (void)configurePersonSettingsManager;	// IMP=0x00000000008fd40f
- (void)configurePhotosPersonDataManager;	// IMP=0x00000000008fd2b6
- (id)updatePhotosPersonManagerSettings:(id)arg1;	// IMP=0x00000000008fd233
@property(readonly) HMDPhotosPersonManager *photosPersonManager;
@property(readonly, copy) HMPhotosPersonManagerSettings *photosPersonManagerSettings;
- (void)_handleAnnounceSettingsUpdate:(id)arg1;	// IMP=0x00000000008fcc75
- (void)handleRemovedAccessory:(id)arg1;	// IMP=0x00000000008fcb7e
- (void)removeAccessoriesFromAssistantAccessControlList:(id)arg1;	// IMP=0x00000000008fcb06
- (void)_handleMediaContentProfileAccessControlUpdate:(id)arg1;	// IMP=0x00000000008fc3a9
- (void)handleMediaContentProfileAccessControlUpdate:(id)arg1;	// IMP=0x00000000008fc317
- (void)_handleAssistantAccessControlUpdate:(id)arg1;	// IMP=0x00000000008fb294
- (void)handleAssistantAccessControlUpdate:(id)arg1;	// IMP=0x00000000008fb202
- (_Bool)isCurrentUserAndOwner;	// IMP=0x00000000008fb09e
@property(retain) HMDAssistantAccessControl *assistantAccessControl; // @synthesize assistantAccessControl=_assistantAccessControl;
@property(readonly) NSUUID *assistantAccessControlModelUUID;
@property(readonly, getter=isValid) _Bool valid;
@property(readonly, getter=isRemoteGateway) _Bool remoteGateway;
@property unsigned long long announceAccessLevel; // @synthesize announceAccessLevel=_announceAccessLevel;
- (unsigned long long)defaultAnnounceUserAccessLevel;	// IMP=0x00000000008fad42
@property(readonly, getter=isAnnounceAccessAllowed) _Bool announceAccessAllowed;
- (unsigned long long)camerasAccessLevel;	// IMP=0x00000000008fac34
@property(retain, nonatomic) NSNumber *camerasAccessLevelValue; // @synthesize camerasAccessLevelValue=_camerasAccessLevelValue;
@property(getter=isRemoteAccessAllowed) _Bool remoteAccessAllowed; // @synthesize remoteAccessAllowed=_remoteAccessAllowed;
- (_Bool)refreshDisplayName;	// IMP=0x00000000008fa729
- (void)setDisplayName:(id)arg1;	// IMP=0x00000000008fa65e
@property(readonly, copy) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy) HMUserPresenceAuthorization *presenceAuthStatus; // @synthesize presenceAuthStatus=_presenceAuthStatus;
- (void)__handleRemovedAccount:(id)arg1;	// IMP=0x00000000008fa111
- (void)__handleAddedAccount:(id)arg1;	// IMP=0x00000000008f9f00
- (_Bool)requiresMakoSupport;	// IMP=0x00000000008f9eb7
- (id)account;	// IMP=0x00000000008f9e29
- (void)_handleNeedsiTunesMultiUserRepair:(id)arg1;	// IMP=0x00000000008f9a3f
- (void)_handleShareClientRepairRequest:(id)arg1;	// IMP=0x00000000008f8f58
- (void)_sendAccountMessage:(id)arg1 payload:(id)arg2 deviceCapabilities:(id)arg3 multicast:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000008f8ccf
- (void)_sendSecureShareClientPayloadToMostEligibleDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000008f88cb
- (void)_handleMultiUserSharePayloadRequest:(id)arg1;	// IMP=0x00000000008f7c59
- (void)_handleShareLookupInfoRequest:(id)arg1;	// IMP=0x00000000008f7700
- (void)_handlePairingIdentityRequest:(id)arg1;	// IMP=0x00000000008f6eab
- (void)deregisterIdentity;	// IMP=0x00000000008f6e30
- (void)registerIdentity;	// IMP=0x00000000008f6d83
@property(copy) HAPPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
@property(copy) HMDAccountIdentifier *accountIdentifier;
- (void)setAccountHandle:(id)arg1;	// IMP=0x00000000008f673f
- (id)accountHandle;	// IMP=0x00000000008f6613
@property(readonly) _Bool isCurrentUser;
- (_Bool)updateAdministrator:(_Bool)arg1;	// IMP=0x00000000008f6560
@property unsigned long long privilege; // @synthesize privilege=_privilege;
@property(readonly, getter=isOwner) _Bool owner;
@property(readonly, getter=isAdministrator) _Bool administrator;
- (unsigned long long)_compatiblePrivilege;	// IMP=0x00000000008f62bd
@property __weak HMDHome *home; // @synthesize home=_home;
- (unsigned long long)allowedRemoteEventAccessUserTypes;	// IMP=0x00000000008f609e
- (void)deregisterForMessages;	// IMP=0x00000000008f5fa4
- (void)registerForMessages;	// IMP=0x00000000008f5aa4
- (void)unconfigure;	// IMP=0x00000000008f5a17
- (void)_recoverTrustManagerDueToUUIDChange;	// IMP=0x00000000008f58eb
- (void)updateSharedBackingStoreControllerParticipants;	// IMP=0x00000000008f5899
- (void)_recoverUserSettingsDueToUUIDChange;	// IMP=0x00000000008f5539
- (void)recoverUserCloudDataDueToUUIDChangeFromOldUUID:(id)arg1;	// IMP=0x00000000008f54a7
- (void)_handleCloudShareWithOwnerMessageError;	// IMP=0x00000000008f545a
@property long long userCloudShareWithOwnerMessagingState; // @synthesize userCloudShareWithOwnerMessagingState=_userCloudShareWithOwnerMessagingState;
- (long long)sharedUserSettingsLogEventBackingStoreControllerRunState;	// IMP=0x00000000008f5376
- (void)initializeUserSettingsWithHome:(id)arg1;	// IMP=0x00000000008f4bf5
- (void)handleUserDataControllerInitialized:(id)arg1;	// IMP=0x00000000008f4ba3
- (void)configureWithHome:(id)arg1;	// IMP=0x00000000008f494c
- (_Bool)hasDeviceWithHomeKitVersionGreaterThanVersion:(id)arg1;	// IMP=0x00000000008f4721
- (id)dumpState;	// IMP=0x00000000008f43a4
- (id)attributeDescriptions;	// IMP=0x00000000008f3dcd
- (id)shortDescription;	// IMP=0x00000000008f3d0b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000008f3c36
@property(readonly) unsigned long long hash;
- (void)dealloc;	// IMP=0x00000000008f3b67
- (id)initWithAccountHandle:(id)arg1 homeUUID:(id)arg2 pairingIdentity:(id)arg3 privilege:(unsigned long long)arg4 dataSource:(id)arg5;	// IMP=0x00000000008f3914
- (id)initWithAccountHandle:(id)arg1 homeUUID:(id)arg2 pairingIdentity:(id)arg3 privilege:(unsigned long long)arg4;	// IMP=0x00000000008f3864
- (id)initWithAccountHandle:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 privilege:(unsigned long long)arg4 dataSource:(id)arg5;	// IMP=0x00000000008f3774
- (id)initWithAccountHandle:(id)arg1 home:(id)arg2 pairingIdentity:(id)arg3 privilege:(unsigned long long)arg4;	// IMP=0x00000000008f36c4
- (id)initWithModelObject:(id)arg1;	// IMP=0x00000000008f3333
- (id)privateSettingValuesByKeyPathForAWD;	// IMP=0x00000000008f32e3
- (id)sharedSettingValuesByKeyPathForAWD;	// IMP=0x00000000008f3293
@property(readonly, copy) AVOutputDeviceAuthorizedPeer *av_authorizedPeer;
@property(readonly) _Bool hasCameraClipsAccess;
@property(readonly, copy) NSData *nfcIssuerKeyIdentifier;

// Remaining properties
@property(readonly, getter=isCurrentUser) _Bool currentUser;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly) Class superclass;

@end

