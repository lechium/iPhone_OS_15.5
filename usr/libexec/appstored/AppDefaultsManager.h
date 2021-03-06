//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AppDefaultsManager : NSObject
{
}

+ (void)_setNullableValue:(void *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x0020000000266081
+ (id)_copyNumberForKey:(struct __CFString *)arg1 applicationId:(struct __CFString *)arg2;	// IMP=0x0010000000266033
+ (void)_setDouble:(double)arg1 forKey:(struct __CFString *)arg2 applicationId:(struct __CFString *)arg3;	// IMP=0x0010000000266000
+ (double)_doubleForKey:(struct __CFString *)arg1 applicationId:(struct __CFString *)arg2 ifMissing:(double)arg3;	// IMP=0x0010000000265fb6
+ (void)_setBool:(_Bool)arg1 forKey:(struct __CFString *)arg2 applicationId:(struct __CFString *)arg3;	// IMP=0x0010000000265f83
+ (_Bool)_boolForKey:(struct __CFString *)arg1 applicationId:(struct __CFString *)arg2 ifMissing:(_Bool)arg3;	// IMP=0x0010000000265f47
+ (_Bool)useModernFreeSpaceCheck;	// IMP=0x0010000000265f24
+ (_Bool)useLaunchCountsForAppUsage;	// IMP=0x0010000000265f01
+ (id)updateMigratorConfiguraton;	// IMP=0x0010000000265ee1
+ (id)transporterConfiguration;	// IMP=0x0010000000265ec1
+ (_Bool)thermalEnabled;	// IMP=0x0010000000265e8a
+ (id)testFlightVisualFeedbackOverrides;	// IMP=0x0010000000265e6a
+ (_Bool)skipManagedAppCheck;	// IMP=0x0010000000265e21
+ (void)setUpdateMigratorConfiguration:(id)arg1;	// IMP=0x0010000000265df4
+ (void)setTransporterConfiguration:(id)arg1;	// IMP=0x0010000000265dc7
+ (void)setLastOSBuildVersion:(id)arg1;	// IMP=0x0010000000265d80
+ (void)setInvalidBuildToolVersions:(id)arg1;	// IMP=0x0010000000265d53
+ (void)setClaimHistory:(id)arg1;	// IMP=0x0010000000265d26
+ (void)setBulletins:(id)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x0010000000265cfd
+ (void)recordOSMigrationDate;	// IMP=0x0010000000265cbc
+ (void)recordLastJobCleanupDate;	// IMP=0x0010000000265c7b
+ (void)recordLastGarbageCollectDownloads;	// IMP=0x0010000000265c3a
+ (void)recordJobApprovalDate;	// IMP=0x0010000000265bf9
+ (id)maxConcurrentThermalLimitedJobCount;	// IMP=0x0010000000265bce
+ (id)maxConcurrentJobCount;	// IMP=0x0010000000265ba3
+ (id)lastOSBuildVersion;	// IMP=0x0010000000265b83
+ (id)lastOSMigrationDate;	// IMP=0x0010000000265b63
+ (id)lastJobCleanupDate;	// IMP=0x0010000000265b43
+ (id)lastGarbageCollectionDate;	// IMP=0x0010000000265b23
+ (id)jobApprovalDate;	// IMP=0x0010000000265b03
+ (id)invalidBuildToolVersions;	// IMP=0x0010000000265ae3
+ (_Bool)externalManifestSkipHTTPSCheck;	// IMP=0x0010000000265ac3
+ (_Bool)externalManifestSkipLocalCheck;	// IMP=0x0010000000265aa3
+ (_Bool)externalDownloadSkipATSCheck;	// IMP=0x0010000000265a83
+ (void)enableDeamonCommsSemaphore;	// IMP=0x0010000000265a4f
+ (_Bool)disablePowerOnStartup;	// IMP=0x0010000000265a2f
+ (_Bool)deamonCommsSemaphoreSet;	// IMP=0x0010000000265a0f
+ (void)clearJobApprovalDate;	// IMP=0x00100000002659e3
+ (void)clearDaemonCommsSemaphore;	// IMP=0x00100000002659b7
+ (void)clearUpdateMigrations;	// IMP=0x001000000026598b
+ (id)claimHistory;	// IMP=0x001000000026596b
+ (id)cellularSizeLimitOverride;	// IMP=0x001000000026593c
+ (id)bulletinForKey:(struct __CFString *)arg1;	// IMP=0x0010000000265920
+ (_Bool)batterySaverEnabledOnStartup;	// IMP=0x0010000000265900
+ (_Bool)automationRunning;	// IMP=0x00100000002658e0
+ (_Bool)autoDownloadsEnabled;	// IMP=0x001000000026583f
+ (_Bool)allowDownloadOnCellular;	// IMP=0x001000000026581f
+ (void)setRevokedApps:(id)arg1;	// IMP=0x00100000002657f2
+ (id)revokedApps;	// IMP=0x00100000002657d2
+ (void)setExpiredApps:(id)arg1;	// IMP=0x00100000002657a5
+ (id)expiredApps;	// IMP=0x0010000000265785
+ (id)forceDrmMode;	// IMP=0x0010000000265765
+ (_Bool)useFollowUpsForRestoreFailures;	// IMP=0x0010000000265742
+ (void)setPreviouslyInstalledProvisionedApps:(id)arg1;	// IMP=0x0010000000265715
+ (void)setLastUpdateCheckDate:(id)arg1;	// IMP=0x00100000002656e8
+ (void)setLastAutoUpdatePerformDate:(id)arg1;	// IMP=0x00100000002656bb
+ (void)setLastAutoUpdateCompletionDate:(id)arg1;	// IMP=0x001000000026568e
+ (void)setAutomaticUpdatesEnabled:(_Bool)arg1;	// IMP=0x001000000026564d
+ (void)recordLastUpdateCleanupDate;	// IMP=0x001000000026560c
+ (id)previouslyInstalledProvisionedApps;	// IMP=0x00100000002655ec
+ (id)lastAutoUpdateCompletionDate;	// IMP=0x00100000002655cc
+ (id)lastUpdateCheckDate;	// IMP=0x00100000002655ac
+ (id)lastUpdateCleanupDate;	// IMP=0x001000000026558c
+ (_Bool)automaticUpdatesEnabled;	// IMP=0x0010000000265545
+ (void)setExternalPurchasesSpringBoardAppDeleteAlertIsEnabled:(_Bool)arg1;	// IMP=0x0010000000265504
+ (_Bool)externalPurchasesSpringBoardAppDeleteAlertIsEnabled;	// IMP=0x00100000002654de
+ (id)installAttributionDeveloperPingbackOverride;	// IMP=0x00100000002654be
+ (id)installAttributionShouldSendDevPingback;	// IMP=0x001000000026549e
+ (id)installAttributionShouldUseProxy;	// IMP=0x001000000026547e
+ (_Bool)installAttributionSkipSourceIDCheck;	// IMP=0x001000000026545b
+ (id)installAttributionPingbackDelay;	// IMP=0x001000000026543b
+ (_Bool)alwaysUseLegacyAPIForStoreKitProductsRequest;	// IMP=0x0010000000265418
+ (_Bool)allowPurchaseRequestData;	// IMP=0x00100000002653d7
+ (void)setBundleIDsToSkipManageSubsOnDelete:(id)arg1;	// IMP=0x00100000002653aa
+ (id)bundleIDsToSkipManageSubsOnDelete;	// IMP=0x001000000026538a
+ (void)markInstallsAsFailedWithCodeSigErrorForBundleIDs:(id)arg1 evid:(id)arg2;	// IMP=0x00100000002650c3
+ (void)markInstallAsFailedWithCodeSigErrorForBundleID:(id)arg1 evid:(id)arg2;	// IMP=0x0010000000264ffd
+ (void)_setRestoreInstallsFailedWithCodeSigError:(id)arg1;	// IMP=0x0010000000264fd0
+ (id)_restoreInstallsFailedWithCodeSigError;	// IMP=0x0010000000264fb0
+ (id)restoreInstallsFailedWithCodeSigError;	// IMP=0x0010000000264e73
+ (_Bool)shouldSuppressTermsAndConditionsDialogs;	// IMP=0x0010000000264e53
+ (void)setShouldSuppressTermsAndConditionsDialogs:(_Bool)arg1;	// IMP=0x0010000000264e12
+ (void)setRestoreItemValue:(id)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x0010000000264de9
+ (void)setRestoreItemKinds:(id)arg1;	// IMP=0x0010000000264dbc
+ (void)setRestoreSoftFailureRetryDate:(id)arg1;	// IMP=0x0010000000264d82
+ (void)setPerformedPostRestoreSoftwareUpdate:(_Bool)arg1;	// IMP=0x0010000000264d41
+ (void)setFollowUpAccounts:(id)arg1;	// IMP=0x0010000000264d07
+ (void)setAttemptedPreflightAccountIDs:(id)arg1;	// IMP=0x0010000000264ccd
+ (id)restoreSoftFailureRetryDate;	// IMP=0x0010000000264cad
+ (id)restoreItemsForKey:(struct __CFString *)arg1;	// IMP=0x0010000000264c91
+ (id)restoreItemKinds;	// IMP=0x0010000000264c71
+ (_Bool)performedPostRestoreSoftwareUpdate;	// IMP=0x0010000000264c51
+ (id)followUpAccounts;	// IMP=0x0010000000264c31
+ (void)clearShouldSuppressTermsAndConditionsDialogs;	// IMP=0x0010000000264c05
+ (void)clearRestoreDefaults;	// IMP=0x0010000000264b73
+ (id)attemptedPreflightAccountIDs;	// IMP=0x0010000000264b53
+ (_Bool)forceSbsyncForArcadeRepairs;	// IMP=0x0010000000264b29
+ (id)userAgentSuffix;	// IMP=0x0010000000264b09
+ (id)powerPluggedInOverride;	// IMP=0x0010000000264ada
+ (void)setOncePerBootItems:(id)arg1;	// IMP=0x0010000000264aa0
+ (id)oncePerBootItems;	// IMP=0x0010000000264a74
+ (_Bool)useArcadeSwitchUser;	// IMP=0x0010000000264a54
+ (void)setOcelotSubscriptionState:(id)arg1;	// IMP=0x0010000000264a1a
+ (void)setOcelotShouldRetrySlotOptOut:(_Bool)arg1;	// IMP=0x00100000002649d9
+ (void)setOcelotPayoutDeviceID:(id)arg1;	// IMP=0x001000000026499f
+ (void)setOcelotPayoutResetDate:(id)arg1;	// IMP=0x0010000000264972
+ (void)setOcelotDeviceIDCreationDate:(id)arg1;	// IMP=0x0010000000264959
+ (void)setOcelotDeviceID:(id)arg1;	// IMP=0x0010000000264940
+ (void)setOcelotDeviceGUID:(id)arg1;	// IMP=0x0010000000264927
+ (void)setOcelotApps:(id)arg1;	// IMP=0x00100000002648fa
+ (void)setOcelotAppAnalyticsClientID:(id)arg1;	// IMP=0x00100000002648a2
+ (void)setArcadeRepairTimeout:(id)arg1;	// IMP=0x0010000000264889
+ (id)ocelotSubscriptionState;	// IMP=0x0010000000264869
+ (_Bool)ocelotShouldRetrySlotOptOut;	// IMP=0x0010000000264846
+ (id)ocelotPayoutResetDate;	// IMP=0x0010000000264826
+ (id);	// IMP=0x0010000000264806
+ (id)ocelotDeviceIDCreationDate;	// IMP=0x00100000002647e6
+ (id)ocelotDeviceID;	// IMP=0x00100000002647c6
+ (id)ocelotDeviceGUID;	// IMP=0x00100000002647a6
+ (id)ocelotDefaultApp;	// IMP=0x0010000000264786
+ (id)arcadeRepairTimeout;	// IMP=0x0010000000264757
+ (id)ocelotAppAnalyticsClientID;	// IMP=0x0010000000264737
+ (id)ocelotApps;	// IMP=0x0010000000264717
+ (void)setBadgeCount:(unsigned long long)arg1;	// IMP=0x00100000002646d6
+ (_Bool)marketingDemoMode;	// IMP=0x00100000002646b6
+ (_Bool)keepTemporaryFiles;	// IMP=0x0010000000264696
+ (unsigned long long)badgeCount;	// IMP=0x0010000000264602
+ (void)setAppUsageResetActorIDTargetDate:(id)arg1;	// IMP=0x00100000002645d5
+ (void)setAppUsageNextPostTargetDate:(id)arg1;	// IMP=0x00100000002645a8
+ (void)setAppUsageFlushDnuTargetDate:(id)arg1;	// IMP=0x001000000026457b
+ (void)setAppUsageEnableMetricsForActorIDSession:(_Bool)arg1;	// IMP=0x001000000026453a
+ (void)setAppUsageDBMigrated;	// IMP=0x0010000000264506
+ (void)setAppUsageActorID:(id)arg1;	// IMP=0x00100000002644d9
+ (void)clearAppUsageRecordMetricsForActorIDSession;	// IMP=0x00100000002644ad
+ (_Bool)appUsageUseTestTopic;	// IMP=0x001000000026448d
+ (id)appUsageTaskSpreadPeriodOverride;	// IMP=0x001000000026446d
+ (id)appUsageTaskGracePeriodOverride;	// IMP=0x001000000026444d
+ (id)appUsageResetActorIDTargetDate;	// IMP=0x001000000026442d
+ (id)appUsageResetActorIDOverride;	// IMP=0x001000000026440d
+ (id)appUsagePostMetricsSamplingPercentageOverride;	// IMP=0x00100000002643ed
+ (id)appUsageNextPostTargetDate;	// IMP=0x00100000002643cd
+ (id)appUsageFlushDnuTargetDate;	// IMP=0x00100000002643b4
+ (id)appUsageFlushDnuIntervalOverride;	// IMP=0x0010000000264394
+ (_Bool)appUsageEnableMetricsForActorIDSession;	// IMP=0x0010000000264374
+ (_Bool)appUsageDBMigrated;	// IMP=0x0010000000264354
+ (id)appUsageDailyPostCountOverride;	// IMP=0x0010000000264334
+ (_Bool)appTasteProfileEnabled;	// IMP=0x0010000000264314
+ (id)appUsageActorID;	// IMP=0x00100000002642f4
+ (void)setDiagnosticClockOffset:(double)arg1;	// IMP=0x00100000002642d4
+ (double)diagnosticClockOffset;	// IMP=0x00100000002642b1
+ (void)setDiagnosticClockEnabled:(_Bool)arg1;	// IMP=0x0010000000264291
+ (_Bool)diagnosticClockEnabled;	// IMP=0x001000000026426e
+ (id)crossfirePostMetricsSamplingPercentageOverride;	// IMP=0x001000000026424e
+ (void)recordMigratedAppUsageDB;	// IMP=0x0010000000264208
+ (void)setNextPostTargetDate:(id)arg1 forActivity:(id)arg2;	// IMP=0x0010000000264173
+ (id)postIntervalSecondsOverrideForActivity:(id)arg1;	// IMP=0x0010000000264113
+ (id)nextPostDateForActivity:(id)arg1;	// IMP=0x00100000002640b3
+ (void)setLastArcadeStatusConditionSetDate:(id)arg1;	// IMP=0x0010000000264086
+ (id)lastArcadeStatusConditionSetDate;	// IMP=0x0010000000264066
+ (id)stringForKey:(struct __CFString *)arg1;	// IMP=0x001000000026404a
+ (void)setBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x0010000000264031
+ (void)setString:(id)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x0010000000263ff8
+ (void)setDictionaryForKey:(id)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x0010000000263fbf
+ (void)setDate:(id)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x0010000000263f86
+ (void)setArrayForKey:(id)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x0010000000263f4d
+ (id)numberForKey:(struct __CFString *)arg1;	// IMP=0x0010000000263f2c
+ (double)doubleForKey:(struct __CFString *)arg1;	// IMP=0x0010000000263f10
+ (id)dictionaryForKey:(struct __CFString *)arg1;	// IMP=0x0010000000263ef4
+ (id)dateForKey:(struct __CFString *)arg1;	// IMP=0x0010000000263e9a
+ (void)clearDefaultForKey:(struct __CFString *)arg1;	// IMP=0x0010000000263e84
+ (_Bool)boolForKey:(id)arg1 ifMissing:(_Bool)arg2;	// IMP=0x0010000000263e29
+ (id)arrayForKey:(struct __CFString *)arg1;	// IMP=0x0010000000263e0d

@end

