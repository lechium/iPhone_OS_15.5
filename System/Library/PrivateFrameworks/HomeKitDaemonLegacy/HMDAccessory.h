//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMDBulletinIdentifiers-Protocol.h>
#import <HomeKitDaemonLegacy/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemonLegacy/HMFDumpState-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class HMAccessoryCategory, HMDAccessoryNetworkAccessViolation, HMDAccessoryVersion, HMDApplicationData, HMDHome, HMDNetworkRouterFirewallRuleAccessoryIdentifier, HMDRoom, HMDSoftwareUpdate, HMDUserManagementOperationTimestamp, HMDVendorModelEntry, HMFMessageDispatcher, HMFVersion, NSArray, NSData, NSDate, NSDictionary, NSMutableSet, NSNumber, NSObject, NSSet, NSString, NSUUID;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDAccessory : HMFObject <HMDBulletinIdentifiers, NSSecureCoding, HMDHomeMessageReceiver, HMDBackingStoreObjectProtocol, HMFDumpState, HMFLogging>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    _Bool _primary;	// 16 = 0x10
    _Bool _reachable;	// 17 = 0x11
    _Bool _remotelyReachable;	// 18 = 0x12
    NSMutableSet *_accessoryProfiles;	// 24 = 0x18
    _Bool _suspended;	// 32 = 0x20
    _Bool _reachabilityPingEnabled;	// 33 = 0x21
    _Bool _reachablilityPingNotificationEnabled;	// 34 = 0x22
    _Bool _custom1WoBLE;	// 35 = 0x23
    _Bool _resetOnBackoffExpiry;	// 36 = 0x24
    _Bool _supportsDoorbellChime;	// 37 = 0x25
    _Bool _supportsCoordinationDoorbellChime;	// 38 = 0x26
    _Bool _shouldProcessTransactionRemoval;	// 39 = 0x27
    _Bool _supportsManagedConfigurationProfile;	// 40 = 0x28
    _Bool _suspendCapable;	// 41 = 0x29
    _Bool _remoteAccessEnabled;	// 42 = 0x2a
    _Bool _custom1WoWLAN;	// 43 = 0x2b
    NSString *_identifier;	// 48 = 0x30
    HMDRoom *_room;	// 56 = 0x38
    NSString *_model;	// 64 = 0x40
    NSString *_initialModel;	// 72 = 0x48
    NSString *_manufacturer;	// 80 = 0x50
    NSString *_initialManufacturer;	// 88 = 0x58
    HMDAccessoryVersion *_firmwareVersion;	// 96 = 0x60
    NSString *_serialNumber;	// 104 = 0x68
    HMDApplicationData *_appData;	// 112 = 0x70
    NSString *_productData;	// 120 = 0x78
    NSString *_providedName;	// 128 = 0x80
    unsigned long long _configNumber;	// 136 = 0x88
    NSNumber *_networkClientIdentifier;	// 144 = 0x90
    NSUUID *_networkRouterUUID;	// 152 = 0x98
    long long _currentNetworkProtectionMode;	// 160 = 0xa0
    long long _networkClientLAN;	// 168 = 0xa8
    NSUUID *_networkClientProfileFingerprint;	// 176 = 0xb0
    long long _wiFiCredentialType;	// 184 = 0xb8
    NSArray *_allowedHosts;	// 192 = 0xc0
    NSData *_wiFiUniquePreSharedKey;	// 200 = 0xc8
    NSUUID *_configuredNetworkProtectionGroupUUID;	// 208 = 0xd0
    NSUUID *_defaultNetworkProtectionGroupUUID;	// 216 = 0xd8
    HMFVersion *_primaryProfileVersion;	// 224 = 0xe0
    NSNumber *_initialCategoryIdentifier;	// 232 = 0xe8
    HMDSoftwareUpdate *_softwareUpdate;	// 240 = 0xf0
    HMDUserManagementOperationTimestamp *_sharedAdminAddedTimestamp;	// 248 = 0xf8
    HMDUserManagementOperationTimestamp *_pairingsAuditedTimestamp;	// 256 = 0x100
    NSDate *_timeBecameUnreachable;	// 264 = 0x108
    NSDate *_timeBecameReachable;	// 272 = 0x110
    NSString *_pendingConfigurationIdentifier;	// 280 = 0x118
    double _lastPairingFailureTime;	// 288 = 0x120
    unsigned long long _consecutivePairingFailures;	// 296 = 0x128
    NSUUID *_preferredMediaUserUUID;	// 304 = 0x130
    NSNumber *_preferredMediaUserSelectionTypeNumber;	// 312 = 0x138
    HMDAccessory *_hostAccessory;	// 320 = 0x140
    NSUUID *_uuid;	// 328 = 0x148
    HMAccessoryCategory *_category;	// 336 = 0x150
    HMDHome *_home;	// 344 = 0x158
    NSString *_configurationAppIdentifier;	// 352 = 0x160
    NSArray *_transportReports;	// 360 = 0x168
    HMDAccessoryNetworkAccessViolation *_networkAccessViolation;	// 368 = 0x170
    NSObject<OS_dispatch_queue> *_workQueue;	// 376 = 0x178
    HMFMessageDispatcher *_msgDispatcher;	// 384 = 0x180
    NSNumber *_categoryIdentifier;	// 392 = 0x188
    NSString *_configuredName;	// 400 = 0x190
    unsigned long long _accessoryReprovisionState;	// 408 = 0x198
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003762ea
+ (_Bool)hasMessageReceiverChildren;	// IMP=0x00000000003762e2
+ (id)logCategory;	// IMP=0x00000000003762b2
+ (_Bool)splitProductDataIntoProductGroupAndProductNumber:(id)arg1 productGroup:(id *)arg2 productNumber:(id *)arg3;	// IMP=0x00000000003761f0
+ (_Bool)validateProductData:(id)arg1;	// IMP=0x000000000037612d
- (void).cxx_destruct;	// IMP=0x000000000036ffd9
@property(nonatomic) _Bool custom1WoWLAN; // @synthesize custom1WoWLAN=_custom1WoWLAN;
@property(nonatomic) unsigned long long accessoryReprovisionState; // @synthesize accessoryReprovisionState=_accessoryReprovisionState;
@property(retain, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
@property(retain, nonatomic) NSNumber *categoryIdentifier; // @synthesize categoryIdentifier=_categoryIdentifier;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(nonatomic, getter=isRemoteAccessEnabled) _Bool remoteAccessEnabled; // @synthesize remoteAccessEnabled=_remoteAccessEnabled;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) HMDAccessoryNetworkAccessViolation *networkAccessViolation; // @synthesize networkAccessViolation=_networkAccessViolation;
@property(nonatomic, getter=isSuspendCapable) _Bool suspendCapable; // @synthesize suspendCapable=_suspendCapable;
@property(nonatomic, getter=isPrimary) _Bool primary; // @synthesize primary=_primary;
@property(readonly) _Bool supportsManagedConfigurationProfile; // @synthesize supportsManagedConfigurationProfile=_supportsManagedConfigurationProfile;
@property(copy, nonatomic) NSArray *transportReports; // @synthesize transportReports=_transportReports;
@property _Bool shouldProcessTransactionRemoval; // @synthesize shouldProcessTransactionRemoval=_shouldProcessTransactionRemoval;
@property(readonly, nonatomic) _Bool supportsCoordinationDoorbellChime; // @synthesize supportsCoordinationDoorbellChime=_supportsCoordinationDoorbellChime;
@property(readonly, nonatomic) _Bool supportsDoorbellChime; // @synthesize supportsDoorbellChime=_supportsDoorbellChime;
@property(copy, nonatomic) NSString *configurationAppIdentifier; // @synthesize configurationAppIdentifier=_configurationAppIdentifier;
@property __weak HMDHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSNumber *preferredMediaUserSelectionTypeNumber; // @synthesize preferredMediaUserSelectionTypeNumber=_preferredMediaUserSelectionTypeNumber;
@property(copy, nonatomic) NSUUID *preferredMediaUserUUID; // @synthesize preferredMediaUserUUID=_preferredMediaUserUUID;
@property(nonatomic) unsigned long long consecutivePairingFailures; // @synthesize consecutivePairingFailures=_consecutivePairingFailures;
@property(retain, nonatomic) NSArray *allowedHosts; // @synthesize allowedHosts=_allowedHosts;
@property(nonatomic) long long wiFiCredentialType; // @synthesize wiFiCredentialType=_wiFiCredentialType;
@property(nonatomic, getter=isSuspended) _Bool suspended; // @synthesize suspended=_suspended;
- (void)logEventWithEvent:(id)arg1;	// IMP=0x000000000036fca8
- (void)notifyClientsOfUpdatedAccessoryControllableValue:(_Bool)arg1;	// IMP=0x000000000036f968
- (_Bool)supportsUnreachablePing;	// IMP=0x000000000036f960
- (void)stopReachabilityCheck;	// IMP=0x000000000036f8b8
- (void)startReachabilityCheck;	// IMP=0x000000000036f810
- (void)handleRemovedSoftwareUpdateModel:(id)arg1 message:(id)arg2;	// IMP=0x000000000036f529
- (void)handleAddedSoftwareUpdateModel:(id)arg1 message:(id)arg2;	// IMP=0x000000000036f216
- (void)handleUpdatedSoftwareUpdateModel:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000036efbc
- (_Bool)_allowSoftwareUpdateChangeFromSource:(unsigned long long)arg1;	// IMP=0x000000000036ef4c
- (void)_applySoftwareUpdateModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000036edcb
- (void)updateSoftwareUpdate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000036ecef
@property(readonly, nonatomic) _Bool supportsFirmwareUpdate;
- (_Bool)supportsSoftwareUpdate;	// IMP=0x000000000036ecdf
@property(retain, nonatomic) HMDSoftwareUpdate *softwareUpdate; // @synthesize softwareUpdate=_softwareUpdate;
- (void)__handlePairingIdentityRequest:(id)arg1;	// IMP=0x000000000036e3c3
- (_Bool)supportsMinimumUserPrivilege;	// IMP=0x000000000036e3bb
- (void)_updateHost:(id)arg1;	// IMP=0x000000000036e006
@property(nonatomic) __weak HMDAccessory *hostAccessory; // @synthesize hostAccessory=_hostAccessory;
- (void)removeHostedAccessory:(id)arg1;	// IMP=0x000000000036de7a
- (void)addHostedAccessory:(id)arg1;	// IMP=0x000000000036ddc4
- (id)hashRouteID;	// IMP=0x000000000036dd28
- (_Bool)providesHashRouteID;	// IMP=0x000000000036dd20
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000036ca41
- (_Bool)supportsDiagnosticsTransfer;	// IMP=0x000000000036ca39
@property(readonly, nonatomic) _Bool supportsAnnounce;
@property(readonly, nonatomic) _Bool supportsThirdPartyMusic;
@property(readonly, nonatomic) _Bool supportsMusicAlarm;
- (_Bool)_shouldFilterAccessoryProfile:(id)arg1;	// IMP=0x000000000036ca19
@property(readonly, nonatomic) _Bool supportsCompanionInitiatedRestart;
@property(readonly, nonatomic) _Bool supportsMultiUser;
@property(readonly, nonatomic) _Bool supportsTargetControl;
@property(readonly, nonatomic) _Bool supportsTargetController;
- (void)autoConfigureTargetControllers;	// IMP=0x000000000036c9f3
- (void)handleIdentifyAccessoryMessage:(id)arg1;	// IMP=0x000000000036c978
@property(readonly) _Bool supportsIdentify;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000036bba7
@property(readonly, copy) NSSet *messageReceiverChildren;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
- (id)messageDestination;	// IMP=0x000000000036ba3d
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x000000000036b998
- (id)dumpNetworkState;	// IMP=0x000000000036b80f
- (id)dumpSimpleState;	// IMP=0x000000000036b602
- (id)dumpState;	// IMP=0x000000000036a7f9
- (void)didUpdateCurrentNetworkProtection;	// IMP=0x000000000036a7f3
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x000000000036a60b
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x000000000036a1c6
@property(readonly) _Bool supportsUserManagement;
- (void)__handleAuditPairings:(id)arg1;	// IMP=0x0000000000369cac
- (void)__handleListPairings:(id)arg1;	// IMP=0x0000000000369ae0
- (_Bool)shouldEnableDaemonRelaunch;	// IMP=0x0000000000369ad8
- (void)didEncounterError:(id)arg1;	// IMP=0x000000000036978c
- (void)__handleUpdatePendingConfigurationIdentifierMessage:(id)arg1;	// IMP=0x0000000000369462
@property(copy, nonatomic) NSString *pendingConfigurationIdentifier; // @synthesize pendingConfigurationIdentifier=_pendingConfigurationIdentifier;
@property(retain, nonatomic) NSUUID *configuredNetworkProtectionGroupUUID; // @synthesize configuredNetworkProtectionGroupUUID=_configuredNetworkProtectionGroupUUID;
@property(readonly, nonatomic) NSUUID *defaultNetworkProtectionGroupUUID; // @synthesize defaultNetworkProtectionGroupUUID=_defaultNetworkProtectionGroupUUID;
- (id)networkProtectionGroupUUID;	// IMP=0x0000000000368eff
- (void)saveNetworkAccessViolation:(id)arg1;	// IMP=0x0000000000368e4e
- (void)_handleWiFiReconfiguration:(id)arg1;	// IMP=0x0000000000368b67
- (void)saveWiFiUniquePreSharedKey:(id)arg1 credentialType:(long long)arg2;	// IMP=0x0000000000368ab0
@property(retain, nonatomic) NSData *wiFiUniquePreSharedKey; // @synthesize wiFiUniquePreSharedKey=_wiFiUniquePreSharedKey;
- (void)setWifiCredentialType:(long long)arg1;	// IMP=0x0000000000368813
- (_Bool)supportsWiFiReconfiguration;	// IMP=0x0000000000368712
- (void)saveCurrentNetworkProtectionMode:(long long)arg1 assignedLAN:(long long)arg2 allowedWANHosts:(id)arg3 profileFingerprint:(id)arg4;	// IMP=0x000000000036861e
@property(retain, nonatomic) NSUUID *networkClientProfileFingerprint; // @synthesize networkClientProfileFingerprint=_networkClientProfileFingerprint;
@property(nonatomic) long long networkClientLAN; // @synthesize networkClientLAN=_networkClientLAN;
@property(nonatomic) long long currentNetworkProtectionMode; // @synthesize currentNetworkProtectionMode=_currentNetworkProtectionMode;
- (long long)targetNetworkProtectionMode;	// IMP=0x000000000036815d
- (void)saveNetworkClientIdentifier:(id)arg1 networkRouterUUID:(id)arg2 clearProfileFingerprint:(_Bool)arg3;	// IMP=0x0000000000368077
@property(retain, nonatomic) NSUUID *networkRouterUUID; // @synthesize networkRouterUUID=_networkRouterUUID;
@property(retain, nonatomic) NSNumber *networkClientIdentifier; // @synthesize networkClientIdentifier=_networkClientIdentifier;
- (_Bool)needsAirplayAccess;	// IMP=0x0000000000367c81
- (_Bool)supportsNetworkProtection;	// IMP=0x0000000000367c79
@property(retain, nonatomic) HMFVersion *primaryProfileVersion; // @synthesize primaryProfileVersion=_primaryProfileVersion;
- (void)setAccessoryProfiles:(id)arg1;	// IMP=0x00000000003679b7
- (void)removeAccessoryProfile:(id)arg1;	// IMP=0x00000000003678dc
- (void)addAccessoryProfile:(id)arg1;	// IMP=0x000000000036777f
@property(readonly, copy) NSArray *accessoryProfiles;
- (void)appDataRemoved:(id)arg1 message:(id)arg2;	// IMP=0x00000000003675cf
- (void)appDataUpdated:(id)arg1 message:(id)arg2;	// IMP=0x0000000000367454
- (void)__handleSetAppData:(id)arg1;	// IMP=0x000000000036701a
@property(retain, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
- (void)_configNumberUpdated;	// IMP=0x0000000000366dee
@property(nonatomic) unsigned long long configNumber; // @synthesize configNumber=_configNumber;
- (id)runtimeState;	// IMP=0x0000000000366aae
- (void)_remoteAccessEnabled:(_Bool)arg1;	// IMP=0x0000000000366895
- (void)remoteAccessEnabled:(_Bool)arg1;	// IMP=0x0000000000366819
- (void)_notifyConnectivityChangedWithReachabilityState:(_Bool)arg1 remoteAccessChanged:(_Bool)arg2;	// IMP=0x0000000000366639
- (id)messageSendPolicy;	// IMP=0x0000000000366606
@property(nonatomic) _Bool custom1WoBLE; // @synthesize custom1WoBLE=_custom1WoBLE;
@property(readonly, nonatomic) long long reachableTransports;
- (_Bool)isReachableForXPCClients;	// IMP=0x0000000000366456
@property(nonatomic, getter=isRemotelyReachable) _Bool remotelyReachable; // @synthesize remotelyReachable=_remotelyReachable;
@property(nonatomic, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
@property(copy, nonatomic) NSDate *timeBecameReachable; // @synthesize timeBecameReachable=_timeBecameReachable;
@property(copy, nonatomic) NSDate *timeBecameUnreachable; // @synthesize timeBecameUnreachable=_timeBecameUnreachable;
@property(nonatomic) _Bool reachablilityPingNotificationEnabled; // @synthesize reachablilityPingNotificationEnabled=_reachablilityPingNotificationEnabled;
@property(nonatomic) _Bool reachabilityPingEnabled; // @synthesize reachabilityPingEnabled=_reachabilityPingEnabled;
- (void)setSuspendedCapable:(_Bool)arg1;	// IMP=0x000000000036532f
@property(readonly, nonatomic) _Bool supportsPersonalRequests;
@property(readonly, nonatomic) _Bool supportsMediaContentProfile;
@property(readonly) _Bool requiresHomeAppForManagement;
- (void)removeAdvertisement:(id)arg1;	// IMP=0x0000000000365218
- (void)addAdvertisement:(id)arg1;	// IMP=0x0000000000365212
@property(retain, nonatomic) HMDUserManagementOperationTimestamp *pairingsAuditedTimestamp; // @synthesize pairingsAuditedTimestamp=_pairingsAuditedTimestamp;
@property(retain, nonatomic) HMDUserManagementOperationTimestamp *sharedAdminAddedTimestamp; // @synthesize sharedAdminAddedTimestamp=_sharedAdminAddedTimestamp;
- (void)notifyAccessoryNameChanged:(_Bool)arg1;	// IMP=0x0000000000364a44
- (void)updateMediaSession:(id)arg1;	// IMP=0x0000000000364993
@property(readonly, copy, nonatomic) HMDVendorModelEntry *vendorInfo;
@property(readonly, nonatomic) NSString *productGroup;
- (void)setProductData:(id)arg1;	// IMP=0x000000000036472d
@property(readonly, nonatomic) NSString *productData; // @synthesize productData=_productData;
- (void)setSerialNumber:(id)arg1;	// IMP=0x0000000000364536
@property(readonly, copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
- (void)setFirmwareVersion:(id)arg1;	// IMP=0x0000000000364267
@property(readonly, copy, nonatomic) HMDAccessoryVersion *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
- (void)setInitialManufacturer:(id)arg1;	// IMP=0x0000000000364070
@property(readonly, copy, nonatomic) NSString *initialManufacturer; // @synthesize initialManufacturer=_initialManufacturer;
- (void)setManufacturer:(id)arg1;	// IMP=0x0000000000363e79
@property(readonly, copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
- (void)setInitialModel:(id)arg1;	// IMP=0x0000000000363c82
@property(readonly, copy, nonatomic) NSString *initialModel; // @synthesize initialModel=_initialModel;
- (void)setModel:(id)arg1;	// IMP=0x0000000000363a8b
@property(readonly, copy, nonatomic) NSString *model; // @synthesize model=_model;
- (void)__handleRename:(id)arg1;	// IMP=0x000000000036368f
- (void)_renameAccessory:(id)arg1 resetName:(_Bool)arg2 message:(id)arg3;	// IMP=0x0000000000363489
@property(copy, nonatomic) NSString *providedName; // @synthesize providedName=_providedName;
- (id)getConfiguredName;	// IMP=0x0000000000363255
- (void)_handleUpdatedName:(id)arg1;	// IMP=0x0000000000363177
@property(readonly, copy, nonatomic) NSString *name;
- (void)__handleGetAccessoryAdvertisingParams:(id)arg1;	// IMP=0x0000000000363014
- (void)setInitialCategoryIdentifier:(id)arg1;	// IMP=0x0000000000362f49
@property(readonly, nonatomic) NSNumber *initialCategoryIdentifier; // @synthesize initialCategoryIdentifier=_initialCategoryIdentifier;
- (id)_updateCategory:(id)arg1 notifyClients:(_Bool)arg2;	// IMP=0x0000000000362ab3
- (void)updateCategory:(id)arg1;	// IMP=0x000000000036284b
- (_Bool)_updateRoom:(id)arg1 source:(unsigned long long)arg2;	// IMP=0x000000000036246a
- (void)__handleUpdateRoom:(id)arg1;	// IMP=0x0000000000361fb2
- (id)modelWithUpdatedRoom:(id)arg1;	// IMP=0x0000000000361e0c
- (void)updateRoom:(id)arg1 source:(unsigned long long)arg2;	// IMP=0x0000000000361d55
@property(retain, nonatomic) HMDRoom *room; // @synthesize room=_room;
@property(readonly, nonatomic) _Bool hasBattery;
@property(readonly, copy) NSUUID *endpointIdentifier;
@property(readonly, copy) NSUUID *spiClientIdentifier;
@property(nonatomic) _Bool resetOnBackoffExpiry; // @synthesize resetOnBackoffExpiry=_resetOnBackoffExpiry;
- (void)setConsecutivePairingFailure:(unsigned long long)arg1;	// IMP=0x000000000036188d
- (unsigned long long)consecutivePairingFailure;	// IMP=0x0000000000361794
@property(nonatomic) double lastPairingFailureTime; // @synthesize lastPairingFailureTime=_lastPairingFailureTime;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)removeCloudData;	// IMP=0x00000000003612b8
- (void)unconfigure;	// IMP=0x000000000036116e
- (void)configureWithHome:(id)arg1 msgDispatcher:(id)arg2 configurationTracker:(id)arg3 initialConfiguration:(_Bool)arg4;	// IMP=0x0000000000361028
- (void)_relayIdentifyAccessorytoResidentForMessage:(id)arg1;	// IMP=0x0000000000360ed5
- (void)__handleIdentify:(id)arg1;	// IMP=0x0000000000360bc5
- (void)handleAccessoryUpdateShouldProcessTransactionRemovalValueRequestMessage:(id)arg1;	// IMP=0x000000000036095a
- (void)_registerForMessages;	// IMP=0x000000000035fdf5
- (id)backingStoreObjects:(long long)arg1;	// IMP=0x000000000035fc8f
- (void)populateModelObject:(id)arg1 version:(long long)arg2;	// IMP=0x000000000035f152
- (id)transactionWithObjectChangeType:(unsigned long long)arg1;	// IMP=0x000000000035f096
- (id)shortDescription;	// IMP=0x000000000035ef06
- (unsigned long long)supportedTransports;	// IMP=0x000000000035ee1e
@property(readonly, getter=isCurrentAccessory) _Bool currentAccessory;
- (id)attributeDescriptions;	// IMP=0x000000000035e820
- (id)privateDescription;	// IMP=0x000000000035e75e
- (void)dealloc;	// IMP=0x000000000035e698
- (void)sendRemovalRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000035e42f
- (void)sendRemovalRequest;	// IMP=0x000000000035e41b
- (void)runTransactionWithPreferredMediaUserUUID:(id)arg1 selectionType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000035e415
- (void)setDefaultPreferredMediaUserIfRemoved:(id)arg1 defaultUser:(id)arg2;	// IMP=0x000000000035e18e
- (void)setPreferredMediaUser:(id)arg1 selectionType:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000035e093
- (void)encodePreferredMediaUser:(id)arg1;	// IMP=0x000000000035dfbb
- (void)decodePreferredMediaUser:(id)arg1;	// IMP=0x000000000035dee9
- (void)transactionAccessoryUpdatedForPreferredMediaUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000035db40
- (void)runTransactionWithModels:(id)arg1 label:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000035d8bf
- (void)runTransactionWithModel:(id)arg1 label:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000035d7ea
- (id)initWithTransaction:(id)arg1 home:(id)arg2;	// IMP=0x000000000035cf0c
- (id)init;	// IMP=0x000000000035ccf0
- (id)accessoryBulletinContext;	// IMP=0x00000000000239d0
@property(readonly, copy, nonatomic) NSUUID *contextSPIUniqueIdentifier;
@property(readonly, copy, nonatomic) NSString *contextID;
- (void)_handlePreviewAllowedHosts:(id)arg1;	// IMP=0x000000000021eb19
- (void)populateVendorDetailsForCoreAnalytics:(id)arg1 keyPrefix:(id)arg2;	// IMP=0x00000000004a0677
- (id)vendorDetailsForAWD;	// IMP=0x00000000004a0528
- (id)metricLoggingVendorDetails;	// IMP=0x00000000004a04f2
@property(readonly, copy) NSDictionary *assistantObject;
@property(readonly, copy) NSString *urlString;
@property(readonly) HMDNetworkRouterFirewallRuleAccessoryIdentifier *metadataIdentifier;
- (id)networkProtectionReportForAWD;	// IMP=0x0000000000a8d502
- (int)networkProtectionStatusForAnalytics;	// IMP=0x0000000000a8d41c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
