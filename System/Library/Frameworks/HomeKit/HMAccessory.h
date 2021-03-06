//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMAccessorySettingsAdapterDelegate-Protocol.h>
#import <HomeKit/HMAccessorySettingsContainerInternal-Protocol.h>
#import <HomeKit/HMApplicationData-Protocol.h>
#import <HomeKit/HMControllable-Protocol.h>
#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/HMMediaDestination-Protocol.h>
#import <HomeKit/HMMediaDestinationControllerDataSource-Protocol.h>
#import <HomeKit/HMMediaDestinationInternal-Protocol.h>
#import <HomeKit/HMMutableApplicationData-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMAccessoryCategory, HMAccessorySettings, HMAccessorySettingsAdapter, HMAccessorySettingsController, HMAccessorySettingsDataSource, HMApplicationData, HMDevice, HMFPairingIdentity, HMFSoftwareVersion, HMFUnfairLock, HMFWiFiNetworkInfo, HMHome, HMMediaDestination, HMMediaDestinationController, HMMutableArray, HMNetworkConfigurationProfile, HMRemoteLoginHandler, HMRoom, HMSoftwareUpdateController, HMSupportedAccessoryDiagnostics, HMSymptomsHandler, NSArray, NSDictionary, NSNumber, NSSet, NSString, NSUUID, _HMContext;
@protocol HMAccessoryDelegate, OS_dispatch_queue;

@interface HMAccessory : NSObject <HMMediaDestinationControllerDataSource, HMFLogging, HMFObject, HMAccessorySettingsContainerInternal, HMControllable, HMMediaDestinationInternal, HMMutableApplicationData, HMObjectMerge, HMFMessageReceiver, HMAccessorySettingsAdapterDelegate, NSSecureCoding, HMApplicationData, HMMediaDestination>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    HMDevice *_device;	// 16 = 0x10
    HMSoftwareUpdateController *_softwareUpdateController;	// 24 = 0x18
    NSUUID *_endpointIdentifier;	// 32 = 0x20
    _Bool _currentAccessory;	// 40 = 0x28
    _Bool _supportsIdentify;	// 41 = 0x29
    _Bool _firmwareUpdateAvailable;	// 42 = 0x2a
    _Bool _reachable;	// 43 = 0x2b
    _Bool _bridgedAccessory;	// 44 = 0x2c
    _Bool _controllable;	// 45 = 0x2d
    _Bool _supportsMediaAccessControl;	// 46 = 0x2e
    _Bool _supportsCHIP;	// 47 = 0x2f
    _Bool _supportsTargetControl;	// 48 = 0x30
    _Bool _supportsTargetController;	// 49 = 0x31
    _Bool _targetControllerHardwareSupport;	// 50 = 0x32
    _Bool _supportsMultiUser;	// 51 = 0x33
    _Bool _supportsCompanionInitiatedRestart;	// 52 = 0x34
    _Bool _suspendCapable;	// 53 = 0x35
    _Bool _hasOnboardedForNaturalLighting;	// 54 = 0x36
    _Bool _supportsPreferredMediaUser;	// 55 = 0x37
    _Bool _supportsAccessCodes;	// 56 = 0x38
    _Bool _supportsWalletKey;	// 57 = 0x39
    _Bool _supportsMusicAlarm;	// 58 = 0x3a
    _Bool _supportsAnnounce;	// 59 = 0x3b
    _Bool _supportsDoorbellChime;	// 60 = 0x3c
    _Bool _supportsCoordinationDoorbellChime;	// 61 = 0x3d
    _Bool _supportsThirdPartyMusic;	// 62 = 0x3e
    _Bool _supportsDiagnosticsTransfer;	// 63 = 0x3f
    _Bool _supportsManagedConfigurationProfile;	// 64 = 0x40
    _Bool _supportsMessagedHomePodSettings;	// 65 = 0x41
    _Bool _paired;	// 66 = 0x42
    NSUUID *_uniqueIdentifier;	// 72 = 0x48
    NSUUID *_uuid;	// 80 = 0x50
    id <HMAccessoryDelegate> _delegate;	// 88 = 0x58
    NSString *_name;	// 96 = 0x60
    NSString *_configuredName;	// 104 = 0x68
    NSString *_deviceIdentifier;	// 112 = 0x70
    HMHome *_home;	// 120 = 0x78
    HMRoom *_room;	// 128 = 0x80
    NSString *_model;	// 136 = 0x88
    NSString *_manufacturer;	// 144 = 0x90
    NSString *_firmwareVersion;	// 152 = 0x98
    NSString *_serialNumber;	// 160 = 0xa0
    HMFSoftwareVersion *_softwareVersion;	// 168 = 0xa8
    NSString *_bundleID;	// 176 = 0xb0
    NSString *_storeID;	// 184 = 0xb8
    NSArray *_uniqueIdentifiersForBridgedAccessories;	// 192 = 0xc0
    HMAccessoryCategory *_category;	// 200 = 0xc8
    HMApplicationData *_applicationData;	// 208 = 0xd0
    unsigned long long _transportTypes;	// 216 = 0xd8
    unsigned long long _additionalSetupStatus;	// 224 = 0xe0
    NSNumber *_accessoryFlags;	// 232 = 0xe8
    long long _certificationStatus;	// 240 = 0xf0
    long long _associationOptions;	// 248 = 0xf8
    NSUUID *_accountIdentifier;	// 256 = 0x100
    HMAccessorySettings *_settings;	// 264 = 0x108
    HMFPairingIdentity *_pairingIdentity;	// 272 = 0x110
    HMFWiFiNetworkInfo *_wifiNetworkInfo;	// 280 = 0x118
    NSArray *_controlTargetUUIDs;	// 288 = 0x120
    HMSymptomsHandler *_symptomsHandler;	// 296 = 0x128
    NSUUID *_networkProtectionGroupUUID;	// 304 = 0x130
    unsigned long long _preferredUserSelectionType;	// 312 = 0x138
    NSUUID *_preferredMediaUserUUID;	// 320 = 0x140
    HMSupportedAccessoryDiagnostics *_supportedDiagnostics;	// 328 = 0x148
    unsigned long long _supportedStereoPairVersions;	// 336 = 0x150
    unsigned long long _homePodVariant;	// 344 = 0x158
    unsigned long long _suspendedState;	// 352 = 0x160
    NSString *_assistantIdentifier;	// 360 = 0x168
    NSString *_pendingConfigurationIdentifier;	// 368 = 0x170
    long long _productColor;	// 376 = 0x178
    HMAccessorySettingsDataSource *_accessorySettingsDataSource;	// 384 = 0x180
    HMAccessorySettingsController *_accessorySettingsController;	// 392 = 0x188
    long long _reachableTransports;	// 400 = 0x190
    HMMutableArray *_currentServices;	// 408 = 0x198
    HMAccessorySettingsAdapter *_settingsAdapter;	// 416 = 0x1a0
    unsigned long long _accessoryReprovisionState;	// 424 = 0x1a8
    HMRemoteLoginHandler *_remoteLoginHandler;	// 432 = 0x1b0
    HMMutableArray *_accessoryProfiles;	// 440 = 0x1b8
    _HMContext *_context;	// 448 = 0x1c0
    HMMediaDestinationController *_audioDestinationController;	// 456 = 0x1c8
    HMMediaDestination *_audioDestination;	// 464 = 0x1d0
}

+ (id)shortDescription;	// IMP=0x00000000001a0c6a
+ (id)logCategory;	// IMP=0x00000000001a0c3a
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001a0c32
+ (id)_siriEndpointProfilesForAccessoryProfiles:(id)arg1;	// IMP=0x000000000003986b
+ (id)_televisionProfilesForAccessoryServices:(id)arg1;	// IMP=0x0000000000064225
+ (id)_lightProfilesForAccessoryProfiles:(id)arg1;	// IMP=0x000000000009360b
+ (id)_networkRouterProfilesForAccessoryProfiles:(id)arg1;	// IMP=0x00000000000b4f84
+ (id)accessoryWithAccessoryReference:(id)arg1 home:(id)arg2;	// IMP=0x00000000001e7aa4
+ (id)accessoryWithSerializedDictionaryRepresentation:(id)arg1 home:(id)arg2;	// IMP=0x00000000001e79ef
+ (id)_cameraProfilesForAccessoryProfiles:(id)arg1;	// IMP=0x000000000020a098
+ (id)_networkConfigurationProfilesForCoder:(id)arg1 accessoryIdentifier:(id)arg2;	// IMP=0x0000000000217549
+ (id)_mediaProfilesForAccessoryProfiles:(id)arg1;	// IMP=0x000000000026106d
- (void).cxx_destruct;	// IMP=0x0000000000199d20
@property(retain) HMMediaDestination *audioDestination; // @synthesize audioDestination=_audioDestination;
@property(retain) HMMediaDestinationController *audioDestinationController; // @synthesize audioDestinationController=_audioDestinationController;
@property(retain) _HMContext *context; // @synthesize context=_context;
@property(retain, nonatomic) HMMutableArray *accessoryProfiles; // @synthesize accessoryProfiles=_accessoryProfiles;
@property(retain) HMRemoteLoginHandler *remoteLoginHandler; // @synthesize remoteLoginHandler=_remoteLoginHandler;
@property(nonatomic) unsigned long long accessoryReprovisionState; // @synthesize accessoryReprovisionState=_accessoryReprovisionState;
@property(nonatomic) _Bool paired; // @synthesize paired=_paired;
@property(retain) HMAccessorySettingsAdapter *settingsAdapter; // @synthesize settingsAdapter=_settingsAdapter;
@property(copy, nonatomic) HMMutableArray *currentServices; // @synthesize currentServices=_currentServices;
@property(nonatomic) long long reachableTransports; // @synthesize reachableTransports=_reachableTransports;
@property(retain, nonatomic) HMAccessorySettingsController *accessorySettingsController; // @synthesize accessorySettingsController=_accessorySettingsController;
@property(retain, nonatomic) HMAccessorySettingsDataSource *accessorySettingsDataSource; // @synthesize accessorySettingsDataSource=_accessorySettingsDataSource;
@property(copy, nonatomic) NSString *assistantIdentifier; // @synthesize assistantIdentifier=_assistantIdentifier;
@property(nonatomic) _Bool suspendCapable; // @synthesize suspendCapable=_suspendCapable;
@property(nonatomic) long long associationOptions; // @synthesize associationOptions=_associationOptions;
@property(retain, nonatomic) NSNumber *accessoryFlags; // @synthesize accessoryFlags=_accessoryFlags;
@property(nonatomic) unsigned long long additionalSetupStatus; // @synthesize additionalSetupStatus=_additionalSetupStatus;
@property(nonatomic) unsigned long long transportTypes; // @synthesize transportTypes=_transportTypes;
@property(readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void)updateSettingWithKeyPath:(id)arg1 value:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000199944
- (void)adapter:(id)arg1 didUpdateSettingKeyPaths:(id)arg2;	// IMP=0x0000000000199801
- (void)adapter:(id)arg1 didUpdateSettings:(id)arg2;	// IMP=0x00000000001996a1
- (void)configureSettingsAdapterWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000019962f
- (void)createSettingsAdapterWithDataSource:(id)arg1 controller:(id)arg2 context:(id)arg3;	// IMP=0x0000000000199485
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (void)_invokeDidUpdateSupportsWalletKeyDelegate:(_Bool)arg1;	// IMP=0x0000000000198f54
- (void)initiateDiagnosticsTransferWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001988af
- (void)initiateDiagnosticsTransferWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000198898
@property(retain, nonatomic) HMSupportedAccessoryDiagnostics *supportedDiagnostics; // @synthesize supportedDiagnostics=_supportedDiagnostics;
- (void)_handleSupportsDiagnosticsTransferUpdateMessage:(id)arg1;	// IMP=0x000000000019847e
- (void)_notifyClientsOfDiagnosticsTransferSupportUpdate;	// IMP=0x00000000001982b6
@property(nonatomic) _Bool supportsDiagnosticsTransfer; // @synthesize supportsDiagnosticsTransfer=_supportsDiagnosticsTransfer;
- (id)mediaDestinationController:(id)arg1 destinationWithIdentifier:(id)arg2;	// IMP=0x0000000000197f58
- (void)updateAudioDestinationSupportedOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000197b6c
@property _Bool hasOnboardedForNaturalLighting; // @synthesize hasOnboardedForNaturalLighting=_hasOnboardedForNaturalLighting;
@property(readonly, copy) NSUUID *audioDestinationGroupIdentifier;
@property(readonly, copy) NSArray *audioDestinationMediaProfiles;
@property(readonly, copy) NSString *audioDestinationParentIdentifier;
@property(readonly) _Bool supportsAudioGroup;
@property(readonly) _Bool supportsAudioDestination;
@property(readonly, copy) NSString *audioDestinationName;
@property(readonly) long long audioDestinationType;
@property(readonly, copy) NSString *audioDestinationIdentifier;
- (void)callCompletionHandler:(CDUnknownBlockType)arg1 error:(id)arg2;	// IMP=0x00000000001976a2
- (void)callCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000019768e
- (void)setNetworkProtectionGroupUUID:(id)arg1;	// IMP=0x00000000001975ca
@property(readonly) NSUUID *networkProtectionGroupUUID; // @synthesize networkProtectionGroupUUID=_networkProtectionGroupUUID;
- (void)_notifyClientsOfSupportsMusicAlarmUpdate;	// IMP=0x00000000001972fb
- (void)_handleSupportsCompanionInitiatedRestartUpdatedMessage:(id)arg1;	// IMP=0x0000000000197289
- (void)_notifyClientsOfSupportsCompanionInitiatedRestartUpdate;	// IMP=0x00000000001970df
- (void)_handleMultiUserSupportUpdatedMessage:(id)arg1;	// IMP=0x000000000019706d
- (void)_notifyClientsOfMultiUserSupportUpdate;	// IMP=0x0000000000196ec3
- (void)_handleTargetControlSupportUpdatedMessage:(id)arg1;	// IMP=0x0000000000196db8
- (void)_handleControlTargetsUpdatedMessage:(id)arg1;	// IMP=0x0000000000196237
- (void)resetControlTargetsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000195cee
- (void)removeControlTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000195638
- (void)addControlTarget:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000194f82
- (void)_notifyDelegateOfRemovedControlTarget:(id)arg1;	// IMP=0x0000000000194d58
- (void)_notifyDelegateOfAddedControlTarget:(id)arg1;	// IMP=0x0000000000194b2e
- (void)_notifyClientsOfTargetControlSupportUpdate;	// IMP=0x0000000000194984
- (void)_handleSymptomsHandlerUpdatedMessage:(id)arg1;	// IMP=0x00000000001947eb
- (_Bool)__updateSymptomsHandler:(id)arg1;	// IMP=0x0000000000194681
- (void)_notifyClientsOfSymptomsHandlerAddedOrRemoved:(_Bool)arg1;	// IMP=0x0000000000194372
@property(copy) HMSymptomsHandler *symptomsHandler; // @synthesize symptomsHandler=_symptomsHandler;
- (id)_privateDelegate;	// IMP=0x0000000000194128
- (void)_notifyDelegatesOfUpdatedControllable;	// IMP=0x000000000019402c
- (void)_notifyDelegatesOfAdditionalSetupRequiredChange;	// IMP=0x0000000000193f30
- (void)_handleAccessoryControllableChanged:(id)arg1;	// IMP=0x0000000000193ee5
- (void)_notifyDelegateOfAppDataUpdateForService:(id)arg1;	// IMP=0x0000000000193d0d
- (void)notifyDelegateOfAppDataUpdateForService:(id)arg1;	// IMP=0x0000000000193b89
- (void)_updateApplicationData:(id)arg1 forService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000193579
- (void)updateApplicationData:(id)arg1 forService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000019324a
- (void)updateApplicationData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000193233
- (void)_configureProfilesWithContext:(id)arg1;	// IMP=0x000000000019305b
@property(readonly, copy) NSArray *profiles;
- (void)_handleAccessoryCategoryChanged:(id)arg1;	// IMP=0x0000000000192e78
- (void)_handleServiceMediaSourceIdentifierUpdated:(id)arg1;	// IMP=0x0000000000192da3
- (void)_handleServiceConfigurationState:(id)arg1;	// IMP=0x0000000000192a6c
- (void)_handleServiceSubtype:(id)arg1;	// IMP=0x000000000019273d
- (void)_handleServiceTypeAssociated:(id)arg1;	// IMP=0x000000000019240e
- (void)_handleServiceDefaultNameUpdate:(id)arg1;	// IMP=0x00000000001920df
- (void)_handleServiceRenamed:(id)arg1;	// IMP=0x0000000000191db0
- (void)_deleteSiriHistoryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000001918e8
- (void)deleteSiriHistoryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000191630
- (void)_auditPairingsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001911bf
- (void)_listPairingsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000190d96
- (_Bool)_updateFromAccessory:(id)arg1;	// IMP=0x0000000000190c71
- (void)_identifyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000019095d
- (void)identifyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001906a5
@property(readonly) _Bool supportsIdentify; // @synthesize supportsIdentify=_supportsIdentify;
- (void)setSupportsIdentify:(_Bool)arg1;	// IMP=0x0000000000190515
- (void)updateAccessoryInfo:(id)arg1;	// IMP=0x000000000018fdfa
- (void)_handleAccessoryFlagsChanged:(id)arg1;	// IMP=0x000000000018fd2d
- (void)_handleAccessoryNotificationsUpdated:(id)arg1;	// IMP=0x000000000018f616
- (void)_handleCharacteristicsUpdated:(id)arg1;	// IMP=0x000000000018e861
- (void)handleRuntimeStateUpdate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000018e6a3
- (void)_handleConnectivityChanged:(id)arg1;	// IMP=0x000000000018e124
- (void)_handlePairingStateChanged:(id)arg1;	// IMP=0x000000000018de89
- (void)_handleRenamed:(id)arg1;	// IMP=0x000000000018da8a
- (void)_handleCharacteristicValueUpdated:(id)arg1;	// IMP=0x000000000018d5a0
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x000000000018d4ee
- (void)notifyDelegateUpdatedPreferredMediaUser;	// IMP=0x000000000018d25c
- (void)notifyDelegateUpdatedSupportsPreferredMediaUser;	// IMP=0x000000000018cfca
- (void)notifyDelegateOfAudioDestinationControllerUpdate;	// IMP=0x000000000018cd38
- (void)notifyDelegateOfAudioDestinationUpdate;	// IMP=0x000000000018caa6
- (void)_mergeProfileObjects:(id)arg1;	// IMP=0x000000000018c6f5
- (_Bool)_mergeWithNewObject:(id)arg1;	// IMP=0x0000000000187c15
- (_Bool)_mergeControlTargets:(id)arg1;	// IMP=0x0000000000187444
- (_Bool)_mergeServices:(id)arg1;	// IMP=0x000000000018710a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000187104
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000018579d
@property(readonly, copy) NSUUID *applicationDataIdentifier;
- (id)_handleMultipleCharacteristicsUpdated:(id)arg1 informDelegate:(_Bool)arg2;	// IMP=0x0000000000184e72
- (void)_updateName:(id)arg1 forService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001846d4
- (void)_updateAuthorizationData:(id)arg1 forService:(id)arg2 characteristic:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000184033
- (void)_updateAssociatedServiceType:(id)arg1 forService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000018399e
- (id)_findCharacteristic:(id)arg1 forService:(id)arg2;	// IMP=0x000000000018377a
- (id)_findServiceWithUniqueIdentifier:(id)arg1;	// IMP=0x00000000001835a7
- (id)_findService:(id)arg1;	// IMP=0x00000000001833d4
- (void)_copyFrom:(id)arg1;	// IMP=0x0000000000182b99
- (void)_setNotifyValue:(_Bool)arg1 forCharacteristic:(id)arg2;	// IMP=0x0000000000182b93
- (void)_updateRoom:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000018241a
- (void)_readValueForCharacteristic:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001817a5
- (void)_writeValue:(id)arg1 forCharacteristic:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000180b90
- (void)_updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000180453
- (void)updateAccessoryName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000180122
- (void)updateName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000017fe22
@property(nonatomic) long long certificationStatus; // @synthesize certificationStatus=_certificationStatus;
@property(retain, nonatomic) HMApplicationData *applicationData; // @synthesize applicationData=_applicationData;
@property(nonatomic) unsigned long long suspendedState; // @synthesize suspendedState=_suspendedState;
- (_Bool)isSuspendCapable;	// IMP=0x000000000017f67b
@property(readonly, nonatomic, getter=isBlocked) _Bool blocked;
@property(readonly, copy, nonatomic) NSArray *services;
- (void)validatePairingAuthMethodWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000017f384
- (void)queryAdvertisementInformationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000017f0d7
- (void)setControllable:(_Bool)arg1;	// IMP=0x000000000017f039
@property(readonly, getter=isControllable) _Bool controllable; // @synthesize controllable=_controllable;
@property(readonly, nonatomic, getter=isAdditionalSetupRequired) _Bool additionalSetupRequired;
@property(nonatomic, getter=isFirmwareUpdateAvailable) _Bool firmwareUpdateAvailable; // @synthesize firmwareUpdateAvailable=_firmwareUpdateAvailable;
@property(copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy) NSString *storeID; // @synthesize storeID=_storeID;
- (id)_valueForCharacteristic:(id)arg1 ofService:(id)arg2;	// IMP=0x000000000017e75d
- (id)_accessoryInformationService;	// IMP=0x000000000017e5af
@property(readonly) __weak NSUUID *containerUUID;
@property(readonly) __weak HMHome *containerHome;
- (void)setSoftwareUpdateController:(id)arg1;	// IMP=0x000000000017e4c7
- (id)softwareUpdateController;	// IMP=0x000000000017e3a2
@property(copy) HMFSoftwareVersion *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
- (void)setDevice:(id)arg1;	// IMP=0x000000000017e0f5
- (id)device;	// IMP=0x000000000017dfd0
- (void)pairingIdentityWithPrivateKey:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000017db35
- (void)_handlePairingIdentityUpdate:(id)arg1;	// IMP=0x000000000017d793
@property(readonly, copy) HMFPairingIdentity *pairingIdentity; // @synthesize pairingIdentity=_pairingIdentity;
- (void)removeManagedConfigurationProfileWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000017d1bf
- (void)fetchManagedConfigurationProfilesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000017cd46
- (void)updatePreferredMediaUserSelectionType:(unsigned long long)arg1 user:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000017c7b4
- (void)updatePreferredMediaUser:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000017c64d
- (void)_notifyDelegateOfUpdatedSettings:(id)arg1;	// IMP=0x000000000017c572
- (void)_handleRootSettingsUpdated:(id)arg1;	// IMP=0x000000000017c06e
@property(copy) NSUUID *preferredMediaUserUUID; // @synthesize preferredMediaUserUUID=_preferredMediaUserUUID;
@property(nonatomic) long long productColor; // @synthesize productColor=_productColor;
@property unsigned long long preferredUserSelectionType; // @synthesize preferredUserSelectionType=_preferredUserSelectionType;
- (id)preferredMediaUser;	// IMP=0x000000000017bd27
@property(retain) HMAccessorySettings *settings; // @synthesize settings=_settings;
@property(copy) NSString *pendingConfigurationIdentifier; // @synthesize pendingConfigurationIdentifier=_pendingConfigurationIdentifier;
- (void)recomputeAssistantIdentifier;	// IMP=0x000000000017b7d1
- (void)_recomputeAssistantIdentifier;	// IMP=0x000000000017b70d
@property unsigned long long homePodVariant; // @synthesize homePodVariant=_homePodVariant;
@property unsigned long long supportedStereoPairVersions; // @synthesize supportedStereoPairVersions=_supportedStereoPairVersions;
@property(retain, nonatomic) HMFWiFiNetworkInfo *wifiNetworkInfo; // @synthesize wifiNetworkInfo=_wifiNetworkInfo;
- (id)targetControllers;	// IMP=0x000000000017b0cb
- (id)controlTargets;	// IMP=0x000000000017ad8f
- (void)resetControlTargetUUIDs;	// IMP=0x000000000017acf4
- (void)removeControlTargetUUIDs:(id)arg1;	// IMP=0x000000000017ac30
- (void)addControlTargetUUIDs:(id)arg1;	// IMP=0x000000000017ab6c
@property(copy, nonatomic) NSArray *controlTargetUUIDs; // @synthesize controlTargetUUIDs=_controlTargetUUIDs;
@property _Bool supportsMessagedHomePodSettings; // @synthesize supportsMessagedHomePodSettings=_supportsMessagedHomePodSettings;
@property _Bool supportsManagedConfigurationProfile; // @synthesize supportsManagedConfigurationProfile=_supportsManagedConfigurationProfile;
@property _Bool supportsPreferredMediaUser; // @synthesize supportsPreferredMediaUser=_supportsPreferredMediaUser;
@property _Bool supportsThirdPartyMusic; // @synthesize supportsThirdPartyMusic=_supportsThirdPartyMusic;
@property _Bool supportsCoordinationDoorbellChime; // @synthesize supportsCoordinationDoorbellChime=_supportsCoordinationDoorbellChime;
@property(nonatomic) _Bool supportsWalletKey; // @synthesize supportsWalletKey=_supportsWalletKey;
@property _Bool supportsAccessCodes; // @synthesize supportsAccessCodes=_supportsAccessCodes;
@property _Bool supportsDoorbellChime; // @synthesize supportsDoorbellChime=_supportsDoorbellChime;
@property(nonatomic) _Bool supportsAnnounce; // @synthesize supportsAnnounce=_supportsAnnounce;
@property(nonatomic) _Bool supportsMusicAlarm; // @synthesize supportsMusicAlarm=_supportsMusicAlarm;
@property(nonatomic) _Bool supportsCompanionInitiatedRestart; // @synthesize supportsCompanionInitiatedRestart=_supportsCompanionInitiatedRestart;
@property(nonatomic) _Bool supportsMultiUser; // @synthesize supportsMultiUser=_supportsMultiUser;
@property(nonatomic) _Bool targetControllerHardwareSupport; // @synthesize targetControllerHardwareSupport=_targetControllerHardwareSupport;
@property(nonatomic) _Bool supportsTargetController; // @synthesize supportsTargetController=_supportsTargetController;
@property(nonatomic) _Bool supportsTargetControl; // @synthesize supportsTargetControl=_supportsTargetControl;
@property _Bool supportsCHIP; // @synthesize supportsCHIP=_supportsCHIP;
@property(nonatomic) _Bool supportsMediaAccessControl; // @synthesize supportsMediaAccessControl=_supportsMediaAccessControl;
@property(copy) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *firmwareVersion; // @synthesize firmwareVersion=_firmwareVersion;
@property(copy, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy) NSUUID *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) __weak HMHome *home; // @synthesize home=_home;
@property(nonatomic) __weak HMRoom *room; // @synthesize room=_room;
@property(retain, nonatomic) HMAccessoryCategory *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSArray *bridgedAccessories;
@property(readonly, copy, nonatomic) NSArray *identifiersForBridgedAccessories;
@property(copy, nonatomic) NSArray *uniqueIdentifiersForBridgedAccessories; // @synthesize uniqueIdentifiersForBridgedAccessories=_uniqueIdentifiersForBridgedAccessories;
@property(nonatomic) _Bool bridgedAccessory; // @synthesize bridgedAccessory=_bridgedAccessory;
@property(readonly, nonatomic, getter=isBridged) _Bool bridged;
@property(nonatomic, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
@property(getter=isCurrentAccessory) _Bool currentAccessory; // @synthesize currentAccessory=_currentAccessory;
@property(nonatomic) __weak id <HMAccessoryDelegate> delegate; // @synthesize delegate=_delegate;
- (id)endpointIdentifier;	// IMP=0x0000000000177763
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, copy, nonatomic) NSUUID *identifier;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(copy, nonatomic) NSString *configuredName; // @synthesize configuredName=_configuredName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void)updateShouldProcessTransactionRemovalWithValue:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000176cda
- (void)_unconfigure;	// IMP=0x00000000001768fc
- (void)_unconfigureContext;	// IMP=0x000000000017685d
- (void)__configureWithContext:(id)arg1 home:(id)arg2;	// IMP=0x0000000000175fb2
- (id)initWithUUID:(id)arg1;	// IMP=0x0000000000175e43
- (id)init;	// IMP=0x0000000000175de9
- (id)siriEndpointIdentifier;	// IMP=0x0000000000039859
- (id)siriEndpointProfile;	// IMP=0x0000000000039683
@property(readonly, copy, nonatomic) NSArray *televisionProfiles;
- (void)wakeSuspendedAccessoryWithWakeType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000842ea
- (id)networkRouterProfile;	// IMP=0x00000000000b4dd2
- (void)updatePendingConfigurationIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001a0cb3
@property(readonly, copy) NSDictionary *serializedDictionaryRepresentation;
@property(readonly, copy, nonatomic) NSArray *cameraProfiles;
- (void)activateCHIPPairingModeAndCreateSetupPayloadStringWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000020ebd8
- (void)setCHIPPairingModeActive:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000020ea38
- (void)activateCHIPPairingModeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000020e71e
- (void)removeCHIPPairings:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000020e363
- (void)fetchCHIPPairingsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000020df56
@property(readonly, nonatomic) HMNetworkConfigurationProfile *networkConfigurationProfile;
- (void)setHasOnboardedForNaturalLightingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000022a25b
@property(readonly) NSSet *lightProfiles;
- (id)mediaProfile;	// IMP=0x0000000000260e97

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

