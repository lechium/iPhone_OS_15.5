//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings, CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo, NSArray, NSDate, NSNumber, NSString;

@interface CEMDeviceInformationCommand_StatusQueryResponses
{
    NSString *_statusUDID;	// 16 = 0x10
    CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo *_statusOrganizationInfo;	// 24 = 0x18
    NSString *_statusMDMOptions;	// 32 = 0x20
    NSDate *_statusLastCloudBackupDate;	// 40 = 0x28
    NSNumber *_statusAwaitingConfiguration;	// 48 = 0x30
    NSNumber *_statusITunesStoreAccountIsActive;	// 56 = 0x38
    NSString *_statusITunesStoreAccountHash;	// 64 = 0x40
    NSString *_statusDeviceName;	// 72 = 0x48
    NSString *_statusOSVersion;	// 80 = 0x50
    NSString *_statusBuildVersion;	// 88 = 0x58
    NSString *_statusModelName;	// 96 = 0x60
    NSString *_statusModel;	// 104 = 0x68
    NSString *_statusProductName;	// 112 = 0x70
    NSString *_statusMarketingName;	// 120 = 0x78
    NSString *_statusSerialNumber;	// 128 = 0x80
    NSNumber *_statusDeviceCapacity;	// 136 = 0x88
    NSNumber *_statusAvailableDeviceCapacity;	// 144 = 0x90
    NSString *_statusIMEI;	// 152 = 0x98
    NSString *_statusMEID;	// 160 = 0xa0
    NSString *_statusModemFirmwareVersion;	// 168 = 0xa8
    NSNumber *_statusCellularTechnology;	// 176 = 0xb0
    NSNumber *_statusBatteryLevel;	// 184 = 0xb8
    NSNumber *_statusIsSupervised;	// 192 = 0xc0
    NSNumber *_statusIsMultiUser;	// 200 = 0xc8
    NSNumber *_statusIsDeviceLocatorServiceEnabled;	// 208 = 0xd0
    NSNumber *_statusIsActivationLockEnabled;	// 216 = 0xd8
    NSNumber *_statusIsDoNotDisturbInEffect;	// 224 = 0xe0
    NSString *_statusDeviceID;	// 232 = 0xe8
    NSString *_statusEASDeviceIdentifier;	// 240 = 0xf0
    NSNumber *_statusIsCloudBackupEnabled;	// 248 = 0xf8
    NSArray *_statusActiveManagedUsers;	// 256 = 0x100
    CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings *_statusOSUpdateSettings;	// 264 = 0x108
    NSArray *_statusAutoSetupAdminAccounts;	// 272 = 0x110
    NSNumber *_statusSystemIntegrityProtectionEnabled;	// 280 = 0x118
    NSNumber *_statusIsMDMLostModeEnabled;	// 288 = 0x120
    NSNumber *_statusMaximumResidentUsers;	// 296 = 0x128
    NSString *_statusPushToken;	// 304 = 0x130
    NSNumber *_statusDiagnosticSubmissionEnabled;	// 312 = 0x138
    NSNumber *_statusAppAnalyticsEnabled;	// 320 = 0x140
    NSString *_statusICCID;	// 328 = 0x148
    NSString *_statusBluetoothMAC;	// 336 = 0x150
    NSString *_statusWiFiMAC;	// 344 = 0x158
    NSArray *_statusEthernetMACs;	// 352 = 0x160
    NSString *_statusCurrentCarrierNetwork;	// 360 = 0x168
    NSString *_statusSIMCarrierNetwork;	// 368 = 0x170
    NSString *_statusSubscriberCarrierNetwork;	// 376 = 0x178
    NSString *_statusCarrierSettingsVersion;	// 384 = 0x180
    NSString *_statusPhoneNumber;	// 392 = 0x188
    NSNumber *_statusDataRoamingEnabled;	// 400 = 0x190
    NSNumber *_statusVoiceRoamingEnabled;	// 408 = 0x198
    NSNumber *_statusPersonalHotspotEnabled;	// 416 = 0x1a0
    NSNumber *_statusIsNetworkTethered;	// 424 = 0x1a8
    NSNumber *_statusIsRoaming;	// 432 = 0x1b0
    NSString *_statusSIMMCC;	// 440 = 0x1b8
    NSString *_statusSIMMNC;	// 448 = 0x1c0
    NSString *_statusSubscriberMCC;	// 456 = 0x1c8
    NSString *_statusSubscriberMNC;	// 464 = 0x1d0
    NSString *_statusCurrentMCC;	// 472 = 0x1d8
    NSString *_statusCurrentMNC;	// 480 = 0x1e0
}

+ (id)buildRequiredOnly;	// IMP=0x000000000003dfbc
+ (id)buildWithUDID:(id)arg1 withOrganizationInfo:(id)arg2 withMDMOptions:(id)arg3 withLastCloudBackupDate:(id)arg4 withAwaitingConfiguration:(id)arg5 withITunesStoreAccountIsActive:(id)arg6 withITunesStoreAccountHash:(id)arg7 withDeviceName:(id)arg8 withOSVersion:(id)arg9 withBuildVersion:(id)arg10 withModelName:(id)arg11 withModel:(id)arg12 withProductName:(id)arg13 withMarketingName:(id)arg14 withSerialNumber:(id)arg15 withDeviceCapacity:(id)arg16 withAvailableDeviceCapacity:(id)arg17 withIMEI:(id)arg18 withMEID:(id)arg19 withModemFirmwareVersion:(id)arg20 withCellularTechnology:(id)arg21 withBatteryLevel:(id)arg22 withIsSupervised:(id)arg23 withIsMultiUser:(id)arg24 withIsDeviceLocatorServiceEnabled:(id)arg25 withIsActivationLockEnabled:(id)arg26 withIsDoNotDisturbInEffect:(id)arg27 withDeviceID:(id)arg28 withEASDeviceIdentifier:(id)arg29 withIsCloudBackupEnabled:(id)arg30 withActiveManagedUsers:(id)arg31 withOSUpdateSettings:(id)arg32 withAutoSetupAdminAccounts:(id)arg33 withSystemIntegrityProtectionEnabled:(id)arg34 withIsMDMLostModeEnabled:(id)arg35 withMaximumResidentUsers:(id)arg36 withPushToken:(id)arg37 withDiagnosticSubmissionEnabled:(id)arg38 withAppAnalyticsEnabled:(id)arg39 withICCID:(id)arg40 withBluetoothMAC:(id)arg41 withWiFiMAC:(id)arg42 withEthernetMACs:(id)arg43 withCurrentCarrierNetwork:(id)arg44 withSIMCarrierNetwork:(id)arg45 withSubscriberCarrierNetwork:(id)arg46 withCarrierSettingsVersion:(id)arg47 withPhoneNumber:(id)arg48 withDataRoamingEnabled:(id)arg49 withVoiceRoamingEnabled:(id)arg50 withPersonalHotspotEnabled:(id)arg51 withIsNetworkTethered:(id)arg52 withIsRoaming:(id)arg53 withSIMMCC:(id)arg54 withSIMMNC:(id)arg55 withSubscriberMCC:(id)arg56 withSubscriberMNC:(id)arg57 withCurrentMCC:(id)arg58 withCurrentMNC:(id)arg59;	// IMP=0x000000000003d2c7
+ (id)allowedStatusKeys;	// IMP=0x000000000003cf1c
- (void).cxx_destruct;	// IMP=0x00000000000417ac
@property(copy, nonatomic) NSString *statusCurrentMNC; // @synthesize statusCurrentMNC=_statusCurrentMNC;
@property(copy, nonatomic) NSString *statusCurrentMCC; // @synthesize statusCurrentMCC=_statusCurrentMCC;
@property(copy, nonatomic) NSString *statusSubscriberMNC; // @synthesize statusSubscriberMNC=_statusSubscriberMNC;
@property(copy, nonatomic) NSString *statusSubscriberMCC; // @synthesize statusSubscriberMCC=_statusSubscriberMCC;
@property(copy, nonatomic) NSString *statusSIMMNC; // @synthesize statusSIMMNC=_statusSIMMNC;
@property(copy, nonatomic) NSString *statusSIMMCC; // @synthesize statusSIMMCC=_statusSIMMCC;
@property(copy, nonatomic) NSNumber *statusIsRoaming; // @synthesize statusIsRoaming=_statusIsRoaming;
@property(copy, nonatomic) NSNumber *statusIsNetworkTethered; // @synthesize statusIsNetworkTethered=_statusIsNetworkTethered;
@property(copy, nonatomic) NSNumber *statusPersonalHotspotEnabled; // @synthesize statusPersonalHotspotEnabled=_statusPersonalHotspotEnabled;
@property(copy, nonatomic) NSNumber *statusVoiceRoamingEnabled; // @synthesize statusVoiceRoamingEnabled=_statusVoiceRoamingEnabled;
@property(copy, nonatomic) NSNumber *statusDataRoamingEnabled; // @synthesize statusDataRoamingEnabled=_statusDataRoamingEnabled;
@property(copy, nonatomic) NSString *statusPhoneNumber; // @synthesize statusPhoneNumber=_statusPhoneNumber;
@property(copy, nonatomic) NSString *statusCarrierSettingsVersion; // @synthesize statusCarrierSettingsVersion=_statusCarrierSettingsVersion;
@property(copy, nonatomic) NSString *statusSubscriberCarrierNetwork; // @synthesize statusSubscriberCarrierNetwork=_statusSubscriberCarrierNetwork;
@property(copy, nonatomic) NSString *statusSIMCarrierNetwork; // @synthesize statusSIMCarrierNetwork=_statusSIMCarrierNetwork;
@property(copy, nonatomic) NSString *statusCurrentCarrierNetwork; // @synthesize statusCurrentCarrierNetwork=_statusCurrentCarrierNetwork;
@property(copy, nonatomic) NSArray *statusEthernetMACs; // @synthesize statusEthernetMACs=_statusEthernetMACs;
@property(copy, nonatomic) NSString *statusWiFiMAC; // @synthesize statusWiFiMAC=_statusWiFiMAC;
@property(copy, nonatomic) NSString *statusBluetoothMAC; // @synthesize statusBluetoothMAC=_statusBluetoothMAC;
@property(copy, nonatomic) NSString *statusICCID; // @synthesize statusICCID=_statusICCID;
@property(copy, nonatomic) NSNumber *statusAppAnalyticsEnabled; // @synthesize statusAppAnalyticsEnabled=_statusAppAnalyticsEnabled;
@property(copy, nonatomic) NSNumber *statusDiagnosticSubmissionEnabled; // @synthesize statusDiagnosticSubmissionEnabled=_statusDiagnosticSubmissionEnabled;
@property(copy, nonatomic) NSString *statusPushToken; // @synthesize statusPushToken=_statusPushToken;
@property(copy, nonatomic) NSNumber *statusMaximumResidentUsers; // @synthesize statusMaximumResidentUsers=_statusMaximumResidentUsers;
@property(copy, nonatomic) NSNumber *statusIsMDMLostModeEnabled; // @synthesize statusIsMDMLostModeEnabled=_statusIsMDMLostModeEnabled;
@property(copy, nonatomic) NSNumber *statusSystemIntegrityProtectionEnabled; // @synthesize statusSystemIntegrityProtectionEnabled=_statusSystemIntegrityProtectionEnabled;
@property(copy, nonatomic) NSArray *statusAutoSetupAdminAccounts; // @synthesize statusAutoSetupAdminAccounts=_statusAutoSetupAdminAccounts;
@property(copy, nonatomic) CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings *statusOSUpdateSettings; // @synthesize statusOSUpdateSettings=_statusOSUpdateSettings;
@property(copy, nonatomic) NSArray *statusActiveManagedUsers; // @synthesize statusActiveManagedUsers=_statusActiveManagedUsers;
@property(copy, nonatomic) NSNumber *statusIsCloudBackupEnabled; // @synthesize statusIsCloudBackupEnabled=_statusIsCloudBackupEnabled;
@property(copy, nonatomic) NSString *statusEASDeviceIdentifier; // @synthesize statusEASDeviceIdentifier=_statusEASDeviceIdentifier;
@property(copy, nonatomic) NSString *statusDeviceID; // @synthesize statusDeviceID=_statusDeviceID;
@property(copy, nonatomic) NSNumber *statusIsDoNotDisturbInEffect; // @synthesize statusIsDoNotDisturbInEffect=_statusIsDoNotDisturbInEffect;
@property(copy, nonatomic) NSNumber *statusIsActivationLockEnabled; // @synthesize statusIsActivationLockEnabled=_statusIsActivationLockEnabled;
@property(copy, nonatomic) NSNumber *statusIsDeviceLocatorServiceEnabled; // @synthesize statusIsDeviceLocatorServiceEnabled=_statusIsDeviceLocatorServiceEnabled;
@property(copy, nonatomic) NSNumber *statusIsMultiUser; // @synthesize statusIsMultiUser=_statusIsMultiUser;
@property(copy, nonatomic) NSNumber *statusIsSupervised; // @synthesize statusIsSupervised=_statusIsSupervised;
@property(copy, nonatomic) NSNumber *statusBatteryLevel; // @synthesize statusBatteryLevel=_statusBatteryLevel;
@property(copy, nonatomic) NSNumber *statusCellularTechnology; // @synthesize statusCellularTechnology=_statusCellularTechnology;
@property(copy, nonatomic) NSString *statusModemFirmwareVersion; // @synthesize statusModemFirmwareVersion=_statusModemFirmwareVersion;
@property(copy, nonatomic) NSString *statusMEID; // @synthesize statusMEID=_statusMEID;
@property(copy, nonatomic) NSString *statusIMEI; // @synthesize statusIMEI=_statusIMEI;
@property(copy, nonatomic) NSNumber *statusAvailableDeviceCapacity; // @synthesize statusAvailableDeviceCapacity=_statusAvailableDeviceCapacity;
@property(copy, nonatomic) NSNumber *statusDeviceCapacity; // @synthesize statusDeviceCapacity=_statusDeviceCapacity;
@property(copy, nonatomic) NSString *statusSerialNumber; // @synthesize statusSerialNumber=_statusSerialNumber;
@property(copy, nonatomic) NSString *statusMarketingName; // @synthesize statusMarketingName=_statusMarketingName;
@property(copy, nonatomic) NSString *statusProductName; // @synthesize statusProductName=_statusProductName;
@property(copy, nonatomic) NSString *statusModel; // @synthesize statusModel=_statusModel;
@property(copy, nonatomic) NSString *statusModelName; // @synthesize statusModelName=_statusModelName;
@property(copy, nonatomic) NSString *statusBuildVersion; // @synthesize statusBuildVersion=_statusBuildVersion;
@property(copy, nonatomic) NSString *statusOSVersion; // @synthesize statusOSVersion=_statusOSVersion;
@property(copy, nonatomic) NSString *statusDeviceName; // @synthesize statusDeviceName=_statusDeviceName;
@property(copy, nonatomic) NSString *statusITunesStoreAccountHash; // @synthesize statusITunesStoreAccountHash=_statusITunesStoreAccountHash;
@property(copy, nonatomic) NSNumber *statusITunesStoreAccountIsActive; // @synthesize statusITunesStoreAccountIsActive=_statusITunesStoreAccountIsActive;
@property(copy, nonatomic) NSNumber *statusAwaitingConfiguration; // @synthesize statusAwaitingConfiguration=_statusAwaitingConfiguration;
@property(copy, nonatomic) NSDate *statusLastCloudBackupDate; // @synthesize statusLastCloudBackupDate=_statusLastCloudBackupDate;
@property(copy, nonatomic) NSString *statusMDMOptions; // @synthesize statusMDMOptions=_statusMDMOptions;
@property(copy, nonatomic) CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo *statusOrganizationInfo; // @synthesize statusOrganizationInfo=_statusOrganizationInfo;
@property(copy, nonatomic) NSString *statusUDID; // @synthesize statusUDID=_statusUDID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000040817
- (id)serializePayload;	// IMP=0x000000000003fe13
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003dfd5

@end

