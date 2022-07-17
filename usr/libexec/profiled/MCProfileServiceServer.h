//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CoreTelephonyClient, LSApplicationWorkspace, MCBackgroundActivityManager, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface MCProfileServiceServer : NSObject
{
    _Bool _memberQueueNeedToRecomputeNagMetadata;	// 8 = 0x8
    _Bool _memberQueueHasMigrated;	// 9 = 0x9
    _Bool _memberQueueHasActivationRecordChangesPending;	// 10 = 0xa
    struct os_unfair_lock_s _checkInLock;	// 12 = 0xc
    int _mobileKeybagLockStateChangeNotificationToken;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workerQueue;	// 24 = 0x18
    NSObject<OS_dispatch_group> *_workerGroup;	// 32 = 0x20
    MCBackgroundActivityManager *_workerQueueBackgroundActivityManager;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_monitorQueue;	// 48 = 0x30
    unsigned long long _workerQueueLastCarrierProfileCheckTime;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_memberQueue;	// 64 = 0x40
    double _memberQueueIdleTimeInterval;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_clientRestrictionQueue;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_mailAccountsQueue;	// 88 = 0x58
    id _powerAssertionAssertedNotificationToken;	// 96 = 0x60
    id _powerAssertionDeassertedNotificationToken;	// 104 = 0x68
    LSApplicationWorkspace *_appWorkspace;	// 112 = 0x70
    CoreTelephonyClient *_coreTelephonyClient;	// 120 = 0x78
}

+ (id)_optionsForCarrierProfileInstallationForCarrierIdentifier:(id)arg1 name:(id)arg2;	// IMP=0x002000000000c2c7
+ (id)_descriptionForServiceSubscriptionContext:(id)arg1;	// IMP=0x001000000000b8cb
+ (id)sharedServer;	// IMP=0x0010000000002a84
- (void).cxx_destruct;	// IMP=0x00200000000118ce
@property(retain, nonatomic) CoreTelephonyClient *coreTelephonyClient; // @synthesize coreTelephonyClient=_coreTelephonyClient;
@property(retain, nonatomic) LSApplicationWorkspace *appWorkspace; // @synthesize appWorkspace=_appWorkspace;
@property(nonatomic) int mobileKeybagLockStateChangeNotificationToken; // @synthesize mobileKeybagLockStateChangeNotificationToken=_mobileKeybagLockStateChangeNotificationToken;
@property(retain, nonatomic) id powerAssertionDeassertedNotificationToken; // @synthesize powerAssertionDeassertedNotificationToken=_powerAssertionDeassertedNotificationToken;
@property(retain, nonatomic) id powerAssertionAssertedNotificationToken; // @synthesize powerAssertionAssertedNotificationToken=_powerAssertionAssertedNotificationToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mailAccountsQueue; // @synthesize mailAccountsQueue=_mailAccountsQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientRestrictionQueue; // @synthesize clientRestrictionQueue=_clientRestrictionQueue;
@property(nonatomic) _Bool memberQueueHasActivationRecordChangesPending; // @synthesize memberQueueHasActivationRecordChangesPending=_memberQueueHasActivationRecordChangesPending;
@property(nonatomic) _Bool memberQueueHasMigrated; // @synthesize memberQueueHasMigrated=_memberQueueHasMigrated;
@property(nonatomic) _Bool memberQueueNeedToRecomputeNagMetadata; // @synthesize memberQueueNeedToRecomputeNagMetadata=_memberQueueNeedToRecomputeNagMetadata;
@property(nonatomic) double memberQueueIdleTimeInterval; // @synthesize memberQueueIdleTimeInterval=_memberQueueIdleTimeInterval;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue; // @synthesize memberQueue=_memberQueue;
@property(nonatomic) unsigned long long workerQueueLastCarrierProfileCheckTime; // @synthesize workerQueueLastCarrierProfileCheckTime=_workerQueueLastCarrierProfileCheckTime;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *monitorQueue; // @synthesize monitorQueue=_monitorQueue;
@property(retain, nonatomic) MCBackgroundActivityManager *workerQueueBackgroundActivityManager; // @synthesize workerQueueBackgroundActivityManager=_workerQueueBackgroundActivityManager;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *workerGroup; // @synthesize workerGroup=_workerGroup;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(nonatomic) struct os_unfair_lock_s checkInLock; // @synthesize checkInLock=_checkInLock;
- (void)debugRescheduleBackgroundActivity:(long long)arg1 startDate:(id)arg2 gracePeriod:(id)arg3 repeatingInterval:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000114ce
- (void)managingOrganizationInformationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010e98
- (void)monitorEnrollmentStateForClient:(id)arg1 personaID:(id)arg2;	// IMP=0x0010000000010dc8
- (void)validateAppBundleIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010c97
- (void)setUserBookmarks:(id)arg1 senderPID:(int)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000010b11
- (id)bookmarkDictsFromBookmarks:(id)arg1;	// IMP=0x001000000001092a
- (id)bookmarksFromBookmarkDicts:(id)arg1;	// IMP=0x001000000001072d
- (void)setURLsFromUserBookmarkDictsAsSettings:(id)arg1 sender:(id)arg2;	// IMP=0x00100000000103d9
- (void)storeActivationRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000ff49
- (void)createActivationLockBypassCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000fe3a
- (void)restoreCloudConfigAndMDMProfileFromSetAsideDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000fa34
- (void)cloudConfigurationStoreDetails:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f8bf
- (_Bool)storeCloudConfigurationDetails:(id)arg1 outError:(id *)arg2;	// IMP=0x001000000000f83e
- (void)cloudConfigurationMachineInfoDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f713
- (void)reducedMachineInfoDataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f616
- (void)fetchConfigurationWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f5f9
- (void)rereadManagedAppAttributesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000f47f
- (void)resetAllSettingsToDefaultsIsUserInitiated:(_Bool)arg1 sender:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000f2ad
- (void)markStoredProfileForPurposeAsInstalled:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f158
- (void)profileDataStoredForPurpose:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000f064
- (void)storeProfileData:(id)arg1 configurationSource:(int)arg2 purpose:(int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000ed71
- (void)removeExpiredProfilesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000ec60
- (void);	// IMP=0x001000000000eb9d
- (void)workerQueueUpdateMISTrust;	// IMP=0x001000000000eb59
- (void)revalidateManagedApps;	// IMP=0x001000000000ea96
- (void)workerQueueRevalidateManagedApps;	// IMP=0x001000000000ea16
- (void)removeExpiredProfiles;	// IMP=0x001000000000e953
- (void)workerQueueRemoveExpiredProfiles;	// IMP=0x001000000000e8e0
- (void)managedAppIDsWithFlags:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e826
- (void)removeProvisioningProfileWithUUID:(id)arg1 managingProfileIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000e594
- (void)installProvisioningProfileData:(id)arg1 managingProfileIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000e340
- (id)_localProvisioningProfileError;	// IMP=0x001000000000e2bf
- (id)_badProvisioningProfileError;	// IMP=0x001000000000e23e
- (void)storeCertificateData:(id)arg1 forIPCUIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000e004
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x001000000000dc64
- (void)workerQueueNotifyUserLoggedIn;	// IMP=0x001000000000dc27
- (void)notifyUserLoggedIn;	// IMP=0x001000000000db64
- (void)_markPostUserLoginWorkCompleted;	// IMP=0x001000000000db5e
- (_Bool)_hasCompletedPostLoginWork;	// IMP=0x001000000000db56
- (void)notifyProvisioningProfilesChanged;	// IMP=0x001000000000d94a
- (void)notifyGracePeriodChanged;	// IMP=0x001000000000d816
- (void)notifyFirstUnlock;	// IMP=0x001000000000d753
- (void)notifyDeviceUnlockedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d66b
- (void)notifyDeviceUnlockedAndPasscodeRequiredWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000d56c
- (void)workerQueueNotifyDeviceUnlockedAndPasscodeRequired;	// IMP=0x001000000000d53e
- (void)workerQueueNotifyDeviceUnlocked;	// IMP=0x001000000000d52c
- (void)workerQueueReadBiometricState;	// IMP=0x001000000000d443
- (void)_workerQueueCheckCarrierProfileOnUnlockSometimes;	// IMP=0x001000000000d0de
- (void)_workerQueueForceCheckOfCarrierProfileOnNextUnlock;	// IMP=0x001000000000d047
- (id)_carrierNameFromContext:(id)arg1;	// IMP=0x001000000000ce5b
- (id)_carrierIdentifierFromContext:(id)arg1;	// IMP=0x001000000000ce46
- (void)checkCarrierProfileAndForceReinstallation:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c3a2
- (void)_workerQueueCheckCarrierProfileForCarrierIdentifier:(id)arg1 name:(id)arg2 atPath:(id)arg3 forceReinstallation:(_Bool)arg4;	// IMP=0x001000000000b98d
- (void)_workerQueueRemoveAllCarrierProfiles;	// IMP=0x001000000000b674
- (void)_workerQueueSignIntoFaceTimeWithUsername:(id)arg1;	// IMP=0x001000000000b66e
- (void)signIntoFaceTimeWithUsername:(id)arg1;	// IMP=0x001000000000b65c
- (void)openSettingsAppForProfileInstallation:(id)arg1 bundleID:(id)arg2;	// IMP=0x001000000000b50f
- (id)URLForInstallingProfileInSettingsApp:(id)arg1 returningToBundleID:(id)arg2;	// IMP=0x001000000000b494
- (void)_handleSettingsJumpWithProfileData:(id)arg1 targetDeviceType:(unsigned long long)arg2 bundleID:(id)arg3;	// IMP=0x001000000000b3aa
- (void)openSensitiveURL:(id)arg1 unlock:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000b0ad
- (void)removeValueSetting:(id)arg1 sender:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000aeea
- (void)removeBoolSetting:(id)arg1 sender:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000acda
- (void)setParametersForSettingsByType:(id)arg1 configurationUUID:(id)arg2 toSystem:(_Bool)arg3 user:(_Bool)arg4 passcode:(id)arg5 credentialSet:(id)arg6 senderPID:(int)arg7 sender:(id)arg8 completion:(CDUnknownBlockType)arg9;	// IMP=0x001000000000aa26
- (void)recomputeProfileRestrictionsWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000a9b0
- (void)migrateCleanupMigratorWithContext:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a866
- (void)migrateWithContext:(int)arg1 passcodeWasSetInBackup:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a70b
- (void)managedWiFiNetworkNamesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000a67e
- (void)managedSystemConfigurationServiceIDsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000a5f1
- (void)resetPasscodeMetadataWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000000a498
- (void)isPasscodeCompliantWithNamedPolicy:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a2dc
- (void)clearPasscodeWithEscrowKeybagData:(id)arg1 secret:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000000a0d7
- (void)createMDMUnlockTokenIfNeededWithPasscode:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009ee1
- (void)changePasscode:(id)arg1 oldPasscode:(id)arg2 senderBundleID:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000009b59
- (void)recomputePerClientUserComplianceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000099f1
- (void)recomputeUserComplianceWarningWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000098b2
- (void)notifyHaveSeenComplianceMessageWithLastLockDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000096c1
- (void)notifyStartComplianceTimer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000009455
- (void)setAllowedURLStrings:(id)arg1 senderPID:(int)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000009307
- (void)setSpellCheckAllowed:(_Bool)arg1 senderPID:(int)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000091ca
- (void)setKeyboardShortcutsAllowed:(_Bool)arg1 senderPID:(int)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000908d
- (void)setContinuousPathKeyboardAllowed:(_Bool)arg1 senderPID:(int)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000008f50
- (void)setPredictiveKeyboardAllowed:(_Bool)arg1 senderPID:(int)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000008e13
- (void)setSmartPunctuationAllowed:(_Bool)arg1 senderPID:(int)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000008cd6
- (void)setAutoCorrectionAllowed:(_Bool)arg1 senderPID:(int)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000008b99
- (void)loadMailAccountsWithAuditToken:(CDStruct_6ad76789)arg1 filteringEnabled:(_Bool)arg2 sourceAccountManagement:(int)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000086a3
- (void)allowedKeyboardBundleIDsAfterApplyingFilterToBundleIDs:(id)arg1 messageSendingAppBundleID:(id)arg2 hostAppBundleID:(id)arg3 accountIsManaged:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000007f5a
- (void)allowedImportFromAppBundleIDs:(id)arg1 importingAppBundleID:(id)arg2 importingIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000795e
- (void)allowedOpenInAppBundleIDs:(id)arg1 originatingAppBundleID:(id)arg2 originatingIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000732b
- (void)defaultAppBundleIDForCommunicationServiceType:(id)arg1 forAccountWithIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000007259
- (void)mayShareToAirDropForOriginatingAppBundleID:(id)arg1 originatingAccountIsManaged:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000007237
- (void)mayShareToMessagesForOriginatingAppBundleID:(id)arg1 originatingAccountIsManaged:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000007215
- (_Bool)shouldApplyFilterForBundleID:(id)arg1 sourceAccountManagement:(int)arg2 outAllowManagedAccounts:(_Bool *)arg3 outAllowUnmanagedAccounts:(_Bool *)arg4;	// IMP=0x00100000000070ae
- (void)mayShareToWhitelistedSourceUnmanagedTargetAppWithServiceName:(id)arg1 originatingAppBundleID:(id)arg2 originatingAccountIsManaged:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000006e40
- (_Bool)mayOpenFromManagedToUnmanaged;	// IMP=0x0010000000006de7
- (_Bool)mayOpenFromUnmanagedToManaged;	// IMP=0x0010000000006d8e
- (_Bool)isOpenInRestrictionInEffect;	// IMP=0x0010000000006d57
- (void)waitForMigrationIncludingPostRestoreMigration:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000068a2
- (void)setUserInfo:(id)arg1 forClientUUID:(id)arg2 sender:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000067aa
- (void)removeOrphanedClientRestrictionsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006651
- (void)applyRestrictionDictionary:(id)arg1 appsAndOptions:(id)arg2 clientType:(id)arg3 clientUUID:(id)arg4 sender:(id)arg5 localizedClientDescription:(id)arg6 localizedWarningMessage:(id)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x0010000000006446
- (void)removeUninstalledProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 targetDeviceType:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000000617d
- (void)removeProfileWithIdentifier:(id)arg1 installationType:(long long)arg2 source:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000005ecd
- (void)updateProfileIdentifier:(id)arg1 interactionClient:(id)arg2 source:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000005c6d
- (void)installProfileData:(id)arg1 interactionClient:(id)arg2 options:(id)arg3 source:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000005784
- (id)_handleProvisioningProfileData:(id)arg1 jumpToSettings:(_Bool)arg2 bundleID:(id)arg3;	// IMP=0x0010000000005530
- (void)queueProfileDataForInstallation:(id)arg1 originalFileName:(id)arg2 originatingBundleID:(id)arg3 transitionToUI:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000004ea1
- (void)popProvisioningProfileFromHeadOfInstallationQueueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004d2c
- (void)peekProfileDataFromPurgatoryForDeviceType:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004bb1
- (void)popProfileDataFromHeadOfInstallationQueueWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004a41
- (void)verifiedMDMProfileIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000048cb
- (void)checkInWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000047bc
- (void)_sendEffectiveSettingsChangedNotification;	// IMP=0x0010000000004733
- (void)_sendRestrictionChangedNotification;	// IMP=0x00100000000046be
- (void)workerQueueCheckForAutoInstallProfiles;	// IMP=0x00100000000046b8
- (void)workerQueueRecomputeNagMessage;	// IMP=0x0010000000004605
- (void)workerQueueDidRecomputeNagMessageWithResult:(_Bool)arg1;	// IMP=0x001000000000444e
- (void)_workerQueuePrepareForService;	// IMP=0x0010000000003c86
- (void)reapplyAppEnforcedRestrictionsWithAssertion:(id)arg1;	// IMP=0x00100000000037f0
- (void)localeChanged;	// IMP=0x0010000000003796
- (void)notifyBatterySaverModeChanged;	// IMP=0x0010000000003514
- (void)start;	// IMP=0x0010000000002c5a
- (id)init;	// IMP=0x0010000000002ad9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
