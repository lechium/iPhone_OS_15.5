//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSMutableArray, NSMutableDictionary, NSNumber, NSString;

@interface BFFSettingsManager : NSObject
{
    NSMutableArray *_stashedPaths;	// 8 = 0x8
    NSMutableDictionary *_stashedPreferences;	// 16 = 0x10
    NSMutableDictionary *_stashedManagedConfigurationSettings;	// 24 = 0x18
    NSNumber *_stashedAssistantEnabled;	// 32 = 0x20
    NSNumber *_stashedAssistantVoiceTriggerEnabled;	// 40 = 0x28
    NSNumber *_stashedSiriDataSharingOptInStatus;	// 48 = 0x30
    NSNumber *_stashedLocationServicesEnabled;	// 56 = 0x38
    NSData *_stashedLocationServicesSettings;	// 64 = 0x40
    NSData *_stashedWatchData;	// 72 = 0x48
    NSArray *_stashedFlowSkipIdentifiers;	// 80 = 0x50
    NSNumber *_stashedScreenTimeEnabled;	// 88 = 0x58
    NSNumber *_stashedAutoUpdateEnabled;	// 96 = 0x60
    NSNumber *_stashedAutoDownloadEnabled;	// 104 = 0x68
    NSData *_stashedAccessibilityData;	// 112 = 0x70
    NSNumber *_stashedUserInterfaceStyleMode;	// 120 = 0x78
    NSString *_stashedSeedEnrollmentProgramName;	// 128 = 0x80
    NSString *_stashedSeedEnrollmentAssetAudience;	// 136 = 0x88
    NSMutableArray *_stashedAnalytics;	// 144 = 0x90
    NSData *_stashedSiriOutputVoice;	// 152 = 0x98
    NSString *_stashedSiriLanguage;	// 160 = 0xa0
}

+ (id)sharedManager;	// IMP=0x0000000000013542
- (void).cxx_destruct;	// IMP=0x000000000001a459
- (id)_siriDataSharingKey;	// IMP=0x000000000001a386
- (_Bool)removeSafeHaven;	// IMP=0x0000000000019f86
- (id)_shovePath:(id)arg1 toPath:(id)arg2;	// IMP=0x000000000001895b
- (id)_preferencesForDomain:(id)arg1;	// IMP=0x00000000000188dd
- (void)_restoreAnalyticsData;	// IMP=0x0000000000018742
- (void)_applySeedEnrollmentData;	// IMP=0x00000000000186fe
- (void)_applyUserInterfaceStyleMode;	// IMP=0x0000000000018577
- (void)_restoreAccessibilityData;	// IMP=0x0000000000018508
- (void)_restoreWatchData;	// IMP=0x0000000000018502
- (void)_restoreStashedFiles;	// IMP=0x00000000000182d4
- (void)_applyUpdatePreferences;	// IMP=0x00000000000182ce
- (void)_applyScreenTimePreferences;	// IMP=0x00000000000182c8
- (void)_applyStashedFlowSkipIdentifiers;	// IMP=0x0000000000018015
- (void)_applyLocationServicesSettings;	// IMP=0x0000000000017f87
- (void)_applyLocationServices;	// IMP=0x0000000000017de7
- (void)_applyAssistantPreferences;	// IMP=0x000000000001795f
- (void)_applyStashedManagedConfiguration;	// IMP=0x000000000001755e
- (void)_applyStashedPreferences;	// IMP=0x00000000000171ec
- (unsigned long long)_restoreConfiguration;	// IMP=0x0000000000016e78
- (void)applySafeHavenStash;	// IMP=0x0000000000016522
- (void)_reset:(_Bool)arg1;	// IMP=0x00000000000163ce
- (void)reset;	// IMP=0x0000000000016353
- (void)postDidRestoreSafeHavenNotification;	// IMP=0x00000000000162dc
- (_Bool)_commitStash;	// IMP=0x00000000000160d6
- (_Bool)_stashPaths;	// IMP=0x0000000000015585
- (_Bool)_stashConfiguration:(_Bool)arg1;	// IMP=0x0000000000014d64
- (_Bool)hideStashInSafeHavenAsProvisional:(_Bool)arg1;	// IMP=0x000000000001451b
- (_Bool)hideStashInSafeHaven;	// IMP=0x0000000000014507
- (void)stashAnalyticEvent:(id)arg1 payload:(id)arg2;	// IMP=0x0000000000014419
- (void)setSeedEnrollmentProgramName:(id)arg1 assetAudience:(id)arg2;	// IMP=0x00000000000143a1
- (void)setUserInterfaceStyleMode:(long long)arg1;	// IMP=0x0000000000014368
- (void)stashAccessibilityData:(id)arg1;	// IMP=0x0000000000014357
- (void)setAutoDownloadEnabled:(_Bool)arg1;	// IMP=0x000000000001431e
- (void)setAutoUpdateEnabled:(_Bool)arg1;	// IMP=0x00000000000142e5
- (void)setScreenTimeEnabled:(_Bool)arg1;	// IMP=0x00000000000142ac
- (void)stashFlowSkipIdentifiers:(id)arg1;	// IMP=0x000000000001429b
- (void)setAssistantVoiceTriggerEnabled:(_Bool)arg1;	// IMP=0x0000000000014262
- (void)setAssistantEnabled:(_Bool)arg1;	// IMP=0x0000000000014229
- (id)watchData;	// IMP=0x000000000001421b
- (void)stashWatchData:(id)arg1;	// IMP=0x000000000001420a
- (void)stashLocationServicesSettings:(id)arg1;	// IMP=0x00000000000141f9
- (void)stashLocationServicesChoice:(_Bool)arg1;	// IMP=0x00000000000141c0
- (void)stashPath:(id)arg1;	// IMP=0x00000000000140f0
- (void)populatePathsToStash;	// IMP=0x0000000000013e6d
- (void)setObject:(id)arg1 forDomain:(id)arg2 key:(id)arg3;	// IMP=0x0000000000013dab
- (void)setBool:(_Bool)arg1 forDomain:(id)arg2 key:(id)arg3;	// IMP=0x0000000000013d0f
- (void)removeBoolSettingForManagedConfigurationSetting:(id)arg1;	// IMP=0x0000000000013c85
- (void)setBool:(_Bool)arg1 forManagedConfigurationSetting:(id)arg2;	// IMP=0x0000000000013bc8
- (long long)stashConfigurationType;	// IMP=0x0000000000013b10
- (id)stashProductVersion;	// IMP=0x0000000000013ab9
- (id)stashBuildVersion;	// IMP=0x0000000000013a62
- (unsigned long long)stashVersion;	// IMP=0x00000000000139ed
- (id)loadConfigurationFromDisk;	// IMP=0x00000000000137c3
- (_Bool)hasStashedValuesOnDisk;	// IMP=0x000000000001370a
- (_Bool)hasStashedValues;	// IMP=0x00000000000135e8
- (id)init;	// IMP=0x0000000000013597

@end

