//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFInstanceContext, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ADPreferences : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _needToPostLanguageNotification;	// 16 = 0x10
    _Bool _needToPostOutputLanguageNotification;	// 17 = 0x11
    NSMutableDictionary *_redirects;	// 24 = 0x18
    NSMutableDictionary *_keychainCache;	// 32 = 0x20
    AFInstanceContext *_instanceContext;	// 40 = 0x28
}

+ (id)sharedPreferences;	// IMP=0x00400000001d1c49
- (void).cxx_destruct;	// IMP=0x00200000001d4b82
- (id)syncMetadata;	// IMP=0x00100000001d4b63
- (void)setSyncMetadata:(id)arg1;	// IMP=0x00100000001d4b3e
- (id)lastDeviceExperimentCheckDate;	// IMP=0x00100000001d4b1f
- (void)setLastDeviceExperimentCheckDate:(id)arg1;	// IMP=0x00100000001d4afa
- (id)lastServerExperimentCheckDate;	// IMP=0x00100000001d4adb
- (void)setLastServerExperimentCheckDate:(id)arg1;	// IMP=0x00100000001d4ab6
- (void)setInternalAuthSessionToken:(id)arg1;	// IMP=0x00100000001d4a9a
- (id)internalAuthSessionToken;	// IMP=0x00100000001d499c
- (void);	// IMP=0x00100000001d4980
- (id)internalAuthAppleConnectServiceTicket;	// IMP=0x00100000001d4882
- (id)useDeviceAuthenticationVersion;	// IMP=0x00100000001d4863
- (double)myriadDeviceVTEndTimeDistanceThreshold;	// IMP=0x00100000001d480c
- (void)setMyriadDeviceVTEndTimeDistanceThreshold:(double)arg1;	// IMP=0x00100000001d47b6
- (void)setMultiUserSetUpCompleteTimes:(id)arg1;	// IMP=0x00100000001d4791
- (id)multiUserSetupCompleteTimes;	// IMP=0x00100000001d4772
- (void)setMultiUserSetUpStartTimes:(id)arg1;	// IMP=0x00100000001d474d
- (id)multiUserSetupStartTimes;	// IMP=0x00100000001d472e
- (id)singleUserCompanionACEHost;	// IMP=0x00100000001d470f
- (void)setSingleUserCompanionACEHost:(id)arg1;	// IMP=0x00100000001d46e4
- (id)singleUserMeCard;	// IMP=0x00100000001d46c5
- (void)setSingleUserMeCard:(id)arg1;	// IMP=0x00100000001d469a
- (id)_keychainCache;	// IMP=0x00100000001d4656
- (void)_cacheAndSetKeychainString:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001d43de
- (id)_keychainStringForKey:(id)arg1;	// IMP=0x00100000001d4346
- (id)_cachedKeychainStringForKey:(id)arg1;	// IMP=0x00100000001d41d2
- (_Bool)dictationLanguageDetectorEnabled;	// IMP=0x00100000001d41c8
- (void)setAllowExplicitContent:(_Bool)arg1;	// IMP=0x00100000001d4175
- (_Bool)allowExplicitContent;	// IMP=0x00100000001d4154
- (void)setServerAudioSessionActivationDelayAboveMediaPlaybackVolumeThreshold:(id)arg1;	// IMP=0x00100000001d412f
- (id)serverAudioSessionActivationDelayAboveMediaPlaybackVolumeThreshold;	// IMP=0x00100000001d40cb
- (void)setServerMediaPlaybackVolumeThresholdForAudioSessionActivationDelay:(id)arg1;	// IMP=0x00100000001d40a6
- (id)serverMediaPlaybackVolumeThresholdForAudioSessionActivationDelay;	// IMP=0x00100000001d4042
- (void)setServerAudioSessionActivationDelay:(id)arg1;	// IMP=0x00100000001d401d
- (id)serverAudioSessionActivationDelay;	// IMP=0x00100000001d3fb9
- (id)overrideAudioSessionActiveDelay;	// IMP=0x00100000001d3f63
- (_Bool)getAudioSessionActiveDelay:(double *)arg1;	// IMP=0x00100000001d3ed6
- (_Bool)getMinimumOutputVolume:(float *)arg1;	// IMP=0x00100000001d3e4a
- (_Bool)getMaximumOutputVolume:(float *)arg1;	// IMP=0x00100000001d3dbe
- (void)setLastKnownAnalyticsStoreState:(unsigned long long)arg1;	// IMP=0x00100000001d3d6b
- (unsigned long long)lastKnownAnalyticsStoreState;	// IMP=0x00100000001d3cfb
- (_Bool)proxyConnectionDisabled;	// IMP=0x00100000001d3cab
- (_Bool)metricsSenderDisabled;	// IMP=0x00100000001d3c51
- (void)setExperimentState:(id)arg1 forConfigurationIdentifier:(id)arg2;	// IMP=0x00100000001d3bea
- (id)getExperimentStateForConfigurationIdentifier:(id)arg1;	// IMP=0x00100000001d3b9c
- (void)setExperimentIdentifier:(id)arg1 forConfigurationIdentifier:(id)arg2;	// IMP=0x00100000001d3b35
- (id)experimentIdentifierForConfigurationIdentifier:(id)arg1;	// IMP=0x00100000001d3ae7
- (void)setSiriDataSharingHomePodSetupDeviceIsValid:(_Bool)arg1;	// IMP=0x00100000001d3ad7
- (_Bool)siriDataSharingHomePodSetupDeviceIsValid;	// IMP=0x00100000001d3ac9
- (void)setSiriDataSharingOptInStatus:(long long)arg1 propagateToHomeAccessories:(_Bool)arg2 source:(long long)arg3 reason:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001d3944
- (void)setSiriDataSharingOptInStatus:(long long)arg1;	// IMP=0x00100000001d3915
- (long long)siriDataSharingOptInStatus;	// IMP=0x00100000001d3907
- (void)setLastCompanionRemoteDataFetchDate:(id)arg1;	// IMP=0x00100000001d38e2
- (id)lastCompanionRemoteDataFetchDate;	// IMP=0x00100000001d387e
- (void)setCompanionIdentifier:(id)arg1;	// IMP=0x00100000001d3742
- (id)companionIdentifier;	// IMP=0x00100000001d3644
- (void)setSharedUserIdentifier:(id)arg1 loggingSharedUserIdentifier:(id)arg2;	// IMP=0x00100000001d34cd
- (id)loggingSharedUserIdentifier;	// IMP=0x00100000001d33cf
- (id)sharedUserIdentifier;	// IMP=0x00100000001d32ac
- (id)multiUserHomeUUIDsForDeletion;	// IMP=0x00100000001d3248
- (void)removeMultiUserHomeUUID:(id)arg1;	// IMP=0x00100000001d3149
- (void)setMultiUserHomeUUIDsForDeletion:(id)arg1;	// IMP=0x00100000001d2fe1
- (void)setIsMultiUserSyncerMeDevice:(_Bool)arg1;	// IMP=0x00100000001d2f8e
- (_Bool)isMultiUserSyncerMeDevice;	// IMP=0x00100000001d2f6d
- (void)setMultiUserSyncerBackupIdentifiersAnchor:(id)arg1;	// IMP=0x00100000001d2f48
- (id)multiUserSyncerBackupIdentifiersAnchor;	// IMP=0x00100000001d2f29
- (void)setMultiUserSyncerIdentifiersAnchor:(id)arg1;	// IMP=0x00100000001d2f04
- (id)multiUserSyncerIdentifiersAnchor;	// IMP=0x00100000001d2ee5
- (void)setMultiUserSyncerSADAnchor:(id)arg1;	// IMP=0x00100000001d2ec0
- (id)multiUserSyncerSADAnchor;	// IMP=0x00100000001d2ea1
- (void)setMultiUserIsOnboardingDevice:(_Bool)arg1;	// IMP=0x00100000001d2dbb
- (_Bool)multiUserIsOnboardingDevice;	// IMP=0x00100000001d2d9a
- (void)setMultiUserSharedUsers:(id)arg1;	// IMP=0x00100000001d2d75
- (id)multiUserSharedUsers;	// IMP=0x00100000001d2d11
- (void)setMultiUserPrimaryUser:(id)arg1;	// IMP=0x00100000001d2cec
- (id)multiUserPrimaryUser;	// IMP=0x00100000001d2c88
- (void)setDeviceWasRedirectedToProduction:(_Bool)arg1;	// IMP=0x00100000001d2bc7
- (_Bool)deviceWasRedirectedToProduction;	// IMP=0x00100000001d2b77
- (void)setMultiUserVoiceIdentification:(_Bool)arg1;	// IMP=0x00100000001d2a13
- (_Bool)multiUserVoiceIdentification;	// IMP=0x00100000001d29c7
- (void)setLastMetricsUploadFailureReportedOnDate:(id)arg1;	// IMP=0x00100000001d29a2
- (id)lastMetricsUploadFailureReportedOnDate;	// IMP=0x00100000001d2983
- (void)setLastMetricsUploadDate:(id)arg1;	// IMP=0x00100000001d295e
- (id)lastMetricsUploadDate;	// IMP=0x00100000001d293f
- (void)setLastSyncVerificationDate:(id)arg1;	// IMP=0x00100000001d291a
- (id)lastSyncVerificationDate;	// IMP=0x00100000001d28fb
- (void)setLastKnownProxyStreamId:(id)arg1;	// IMP=0x00100000001d28d6
- (id)lastKnownProxyStreamId;	// IMP=0x00100000001d2872
- (void)setRedirect:(id)arg1 forServerURLString:(id)arg2;	// IMP=0x00100000001d273f
- (id)redirectForServerURLString:(id)arg1;	// IMP=0x00100000001d263b
- (id)productTypePrefix;	// IMP=0x00100000001d25d7
- (id)serverOverride;	// IMP=0x00100000001d2573
- (_Bool)ignoreLocationWiFiStatus;	// IMP=0x00100000001d2519
- (void)setCountryCode:(id)arg1;	// IMP=0x00100000001d250c
- (id)countryCode;	// IMP=0x00100000001d2502
- (void)setIsUsingDefaultLanguageSettings:(_Bool)arg1;	// IMP=0x00100000001d2486
- (_Bool)isUsingDefaultLanguageSettings;	// IMP=0x00100000001d2465
- (void)setOutputVoice:(id)arg1;	// IMP=0x00100000001d2393
- (id)outputVoiceWithFallback:(_Bool)arg1;	// IMP=0x00100000001d232d
- (id)outputVoice;	// IMP=0x00100000001d2316
- (void)setLanguageCode:(id)arg1;	// IMP=0x00100000001d2237
- (id)languageCodeWithFallback:(_Bool)arg1;	// IMP=0x00100000001d21d1
- (id)languageCode;	// IMP=0x00100000001d21ba
- (double)serverTimeoutInterval;	// IMP=0x00100000001d2156
- (_Bool)statisticsRecordingEnabled;	// IMP=0x00100000001d2135
- (void)setActiveAccountIdentifier:(id)arg1;	// IMP=0x00100000001d2110
- (id)accountIdentifiers;	// IMP=0x00100000001d20b4
- (id)activeAccountIdentifier;	// IMP=0x00100000001d2095
- (void)setAccountInfo:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00100000001d1f6b
- (id)accountInfoForIdentifier:(id)arg1;	// IMP=0x00100000001d1ee8
- (void)synchronize;	// IMP=0x00100000001d1dea
- (id)init;	// IMP=0x00100000001d1dd6
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x00100000001d1cef

@end
