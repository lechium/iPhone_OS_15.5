//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface DMFDevice : NSObject
{
    NSNumber *_availableCapacity;	// 8 = 0x8
    NSNumber *_batteryLevel;	// 16 = 0x10
    NSString *_bluetoothAddress;	// 24 = 0x18
    NSString *_buildVersion;	// 32 = 0x20
    NSNumber *_capacity;	// 40 = 0x28
    NSString *_deviceName;	// 48 = 0x30
    NSNumber *_deviceType;	// 56 = 0x38
    NSNumber *_isAppleInternal;	// 64 = 0x40
    NSNumber *_isAwaitingConfiguration;	// 72 = 0x48
    NSNumber *_isDeviceLocatorServiceEnabled;	// 80 = 0x50
    NSNumber *_isDoNotDisturbInEffect;	// 88 = 0x58
    NSNumber *_isInSingleAppMode;	// 96 = 0x60
    NSNumber *_isLostModeEnabled;	// 104 = 0x68
    NSString *_iTunesStoreAccountHash;	// 112 = 0x70
    NSNumber *_iTunesStoreAccountIsActive;	// 120 = 0x78
    NSString *_marketingName;	// 128 = 0x80
    NSString *_model;	// 136 = 0x88
    NSString *_modelName;	// 144 = 0x90
    NSString *_osVersion;	// 152 = 0x98
    NSString *_productName;	// 160 = 0xa0
    NSString *_serialNumber;	// 168 = 0xa8
    NSString *_wifiAddress;	// 176 = 0xb0
    NSNumber *_isAppAnalyticsEnabled;	// 184 = 0xb8
    NSNumber *_isCloudBackupEnabled;	// 192 = 0xc0
    NSNumber *_isDiagnosticSubmissionEnabled;	// 200 = 0xc8
    NSNumber *_isSupervised;	// 208 = 0xd0
    NSDate *_lastCloudBackupDate;	// 216 = 0xd8
    NSString *_uniqueIdentifier;	// 224 = 0xe0
    NSString *_carrierSettingsVersion;	// 232 = 0xe8
    NSNumber *_cellularTechnology;	// 240 = 0xf0
    NSString *_currentCarrierNetwork;	// 248 = 0xf8
    NSString *_currentMCC;	// 256 = 0x100
    NSString *_currentMNC;	// 264 = 0x108
    NSString *_EASIdentifier;	// 272 = 0x110
    NSNumber *_enforcedSoftwareUpdateDelay;	// 280 = 0x118
    NSString *_ICCID;	// 288 = 0x120
    NSString *_IMEI;	// 296 = 0x128
    NSNumber *_isActivationLockEnabled;	// 304 = 0x130
    NSNumber *_isDataRoamingEnabled;	// 312 = 0x138
    NSNumber *_isEphemeralMultiUser;	// 320 = 0x140
    NSNumber *_isNetworkTethered;	// 328 = 0x148
    NSNumber *_isPersonalHotspotEnabled;	// 336 = 0x150
    NSNumber *_isRoaming;	// 344 = 0x158
    NSNumber *_isVoiceRoamingEnabled;	// 352 = 0x160
    NSNumber *_maximumResidentUsers;	// 360 = 0x168
    NSString *_MEID;	// 368 = 0x170
    NSString *_modemFirmwareVersion;	// 376 = 0x178
    NSString *_phoneNumber;	// 384 = 0x180
    NSDictionary *_serviceSubscriptions;	// 392 = 0x188
    NSArray *_skippedSetupPanes;	// 400 = 0x190
    NSString *_subscriberCarrierNetwork;	// 408 = 0x198
    NSString *_subscriberMCC;	// 416 = 0x1a0
    NSString *_subscriberMNC;	// 424 = 0x1a8
    NSArray *_activeManagedUsers;	// 432 = 0x1b0
    NSArray *_autoSetupAdminAccounts;	// 440 = 0x1b8
    NSString *_hostName;	// 448 = 0x1c0
    NSDictionary *_installedExtensions;	// 456 = 0x1c8
    NSNumber *_isSystemIntegrityProtectionEnabled;	// 464 = 0x1d0
    NSString *_localHostName;	// 472 = 0x1d8
    NSDictionary *_osUpdateSettings;	// 480 = 0x1e0
    NSDictionary *_xsanConfiguration;	// 488 = 0x1e8
    NSString *_destinationIdentifier;	// 496 = 0x1f0
    NSDictionary *_errorsForKeys;	// 504 = 0x1f8
}

+ (id)_sanitizedDeviceKey:(id)arg1;	// IMP=0x000000000001969f
+ (id)propertyNameForKey:(id)arg1;	// IMP=0x00000000000191b0
- (void).cxx_destruct;	// IMP=0x0000000000019ab4
@property(copy, nonatomic) NSDictionary *errorsForKeys; // @synthesize errorsForKeys=_errorsForKeys;
@property(readonly, nonatomic) NSString *destinationIdentifier; // @synthesize destinationIdentifier=_destinationIdentifier;
@property(readonly, nonatomic) NSDictionary *xsanConfiguration; // @synthesize xsanConfiguration=_xsanConfiguration;
@property(readonly, nonatomic) NSDictionary *osUpdateSettings; // @synthesize osUpdateSettings=_osUpdateSettings;
@property(readonly, nonatomic) NSString *localHostName; // @synthesize localHostName=_localHostName;
@property(readonly, nonatomic) NSNumber *isSystemIntegrityProtectionEnabled; // @synthesize isSystemIntegrityProtectionEnabled=_isSystemIntegrityProtectionEnabled;
@property(readonly, nonatomic) NSDictionary *installedExtensions; // @synthesize installedExtensions=_installedExtensions;
@property(readonly, nonatomic) NSString *hostName; // @synthesize hostName=_hostName;
@property(readonly, nonatomic) NSArray *autoSetupAdminAccounts; // @synthesize autoSetupAdminAccounts=_autoSetupAdminAccounts;
@property(readonly, nonatomic) NSArray *activeManagedUsers; // @synthesize activeManagedUsers=_activeManagedUsers;
@property(readonly, nonatomic) NSString *subscriberMNC; // @synthesize subscriberMNC=_subscriberMNC;
@property(readonly, nonatomic) NSString *subscriberMCC; // @synthesize subscriberMCC=_subscriberMCC;
@property(readonly, nonatomic) NSString *subscriberCarrierNetwork; // @synthesize subscriberCarrierNetwork=_subscriberCarrierNetwork;
@property(readonly, nonatomic) NSArray *skippedSetupPanes; // @synthesize skippedSetupPanes=_skippedSetupPanes;
@property(readonly, nonatomic) NSDictionary *serviceSubscriptions; // @synthesize serviceSubscriptions=_serviceSubscriptions;
@property(readonly, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, nonatomic) NSString *modemFirmwareVersion; // @synthesize modemFirmwareVersion=_modemFirmwareVersion;
@property(readonly, nonatomic) NSString *MEID; // @synthesize MEID=_MEID;
@property(readonly, nonatomic) NSNumber *maximumResidentUsers; // @synthesize maximumResidentUsers=_maximumResidentUsers;
@property(readonly, nonatomic) NSNumber *isVoiceRoamingEnabled; // @synthesize isVoiceRoamingEnabled=_isVoiceRoamingEnabled;
@property(readonly, nonatomic) NSNumber *isRoaming; // @synthesize isRoaming=_isRoaming;
@property(readonly, nonatomic) NSNumber *isPersonalHotspotEnabled; // @synthesize isPersonalHotspotEnabled=_isPersonalHotspotEnabled;
@property(readonly, nonatomic) NSNumber *isNetworkTethered; // @synthesize isNetworkTethered=_isNetworkTethered;
@property(readonly, nonatomic) NSNumber *isEphemeralMultiUser; // @synthesize isEphemeralMultiUser=_isEphemeralMultiUser;
@property(readonly, nonatomic) NSNumber *isDataRoamingEnabled; // @synthesize isDataRoamingEnabled=_isDataRoamingEnabled;
@property(readonly, nonatomic) NSNumber *isActivationLockEnabled; // @synthesize isActivationLockEnabled=_isActivationLockEnabled;
@property(readonly, nonatomic) NSString *IMEI; // @synthesize IMEI=_IMEI;
@property(readonly, nonatomic) NSString *ICCID; // @synthesize ICCID=_ICCID;
@property(readonly, nonatomic) NSNumber *enforcedSoftwareUpdateDelay; // @synthesize enforcedSoftwareUpdateDelay=_enforcedSoftwareUpdateDelay;
@property(readonly, nonatomic) NSString *EASIdentifier; // @synthesize EASIdentifier=_EASIdentifier;
@property(readonly, nonatomic) NSString *currentMNC; // @synthesize currentMNC=_currentMNC;
@property(readonly, nonatomic) NSString *currentMCC; // @synthesize currentMCC=_currentMCC;
@property(readonly, nonatomic) NSString *currentCarrierNetwork; // @synthesize currentCarrierNetwork=_currentCarrierNetwork;
@property(readonly, nonatomic) NSNumber *cellularTechnology; // @synthesize cellularTechnology=_cellularTechnology;
@property(readonly, nonatomic) NSString *carrierSettingsVersion; // @synthesize carrierSettingsVersion=_carrierSettingsVersion;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(readonly, nonatomic) NSDate *lastCloudBackupDate; // @synthesize lastCloudBackupDate=_lastCloudBackupDate;
@property(readonly, nonatomic) NSNumber *isSupervised; // @synthesize isSupervised=_isSupervised;
@property(readonly, nonatomic) NSNumber *isDiagnosticSubmissionEnabled; // @synthesize isDiagnosticSubmissionEnabled=_isDiagnosticSubmissionEnabled;
@property(readonly, nonatomic) NSNumber *isCloudBackupEnabled; // @synthesize isCloudBackupEnabled=_isCloudBackupEnabled;
@property(readonly, nonatomic) NSNumber *isAppAnalyticsEnabled; // @synthesize isAppAnalyticsEnabled=_isAppAnalyticsEnabled;
@property(readonly, nonatomic) NSString *wifiAddress; // @synthesize wifiAddress=_wifiAddress;
@property(readonly, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(readonly, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(readonly, nonatomic) NSString *modelName; // @synthesize modelName=_modelName;
@property(readonly, nonatomic) NSString *model; // @synthesize model=_model;
@property(readonly, nonatomic) NSString *marketingName; // @synthesize marketingName=_marketingName;
@property(readonly, nonatomic) NSNumber *iTunesStoreAccountIsActive; // @synthesize iTunesStoreAccountIsActive=_iTunesStoreAccountIsActive;
@property(readonly, nonatomic) NSString *iTunesStoreAccountHash; // @synthesize iTunesStoreAccountHash=_iTunesStoreAccountHash;
@property(readonly, nonatomic) NSNumber *isLostModeEnabled; // @synthesize isLostModeEnabled=_isLostModeEnabled;
@property(readonly, nonatomic) NSNumber *isInSingleAppMode; // @synthesize isInSingleAppMode=_isInSingleAppMode;
@property(readonly, nonatomic) NSNumber *isDoNotDisturbInEffect; // @synthesize isDoNotDisturbInEffect=_isDoNotDisturbInEffect;
@property(readonly, nonatomic) NSNumber *isDeviceLocatorServiceEnabled; // @synthesize isDeviceLocatorServiceEnabled=_isDeviceLocatorServiceEnabled;
@property(readonly, nonatomic) NSNumber *isAwaitingConfiguration; // @synthesize isAwaitingConfiguration=_isAwaitingConfiguration;
@property(readonly, nonatomic) NSNumber *isAppleInternal; // @synthesize isAppleInternal=_isAppleInternal;
@property(readonly, nonatomic) NSNumber *deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(readonly, nonatomic) NSNumber *capacity; // @synthesize capacity=_capacity;
@property(readonly, nonatomic) NSString *buildVersion; // @synthesize buildVersion=_buildVersion;
@property(readonly, nonatomic) NSString *bluetoothAddress; // @synthesize bluetoothAddress=_bluetoothAddress;
@property(readonly, nonatomic) NSNumber *batteryLevel; // @synthesize batteryLevel=_batteryLevel;
@property(readonly, nonatomic) NSNumber *availableCapacity; // @synthesize availableCapacity=_availableCapacity;
- (id)valueForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000194a6
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x0000000000019122
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x0000000000019072
- (id)initPrivate;	// IMP=0x0000000000019043

@end

