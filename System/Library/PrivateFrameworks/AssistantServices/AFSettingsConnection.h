//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFInstanceContext, AFVoiceInfo, NSArray, NSXPCConnection;
@protocol AFSettingsDelegate, OS_dispatch_queue;

@interface AFSettingsConnection : NSObject
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_voicesQueue;	// 16 = 0x10
    NSArray *_voices;	// 24 = 0x18
    AFVoiceInfo *_selectedVoice;	// 32 = 0x20
    id <AFSettingsDelegate> _delegate;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_serialQueue;	// 48 = 0x30
    AFInstanceContext *_instanceContext;	// 56 = 0x38
}

+ (void)initialize;	// IMP=0x00000000000c0590
- (void).cxx_destruct;	// IMP=0x00000000000cb0ec
- (void)getActiveASRLanguagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cafd1
- (oneway void)getAssistantIsEnabledForDeviceWithSiriInfo:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000caea0
- (void)triggerABCForType:(id)arg1 subType:(id)arg2 context:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000cad3b
- (void)getSpeakerCapabilityForAccessoryWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cac0a
- (void)pushMyriadAdvertisementContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000caad9
- (void)getCurrentRequestIsWatchAuthenticatedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ca9c1
- (oneway void)getAssetStatusForLanguage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ca893
- (oneway void)areSiriUODAssetsAvailable:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ca778
- (void)hasEverSetLanguageCodeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ca65d
- (void)getRecordedAudioDirectoryPathsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ca542
- (void)trimRecordedAudioWithIdentifier:(id)arg1 offset:(double)arg2 duration:(double)arg3 outputFileType:(long long)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000ca3f6
- (void)accessRecordedAudioWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ca2c5
- (void)resetExperimentForConfigurationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ca196
- (void)synchronizeExperimentConfigurationsIfApplicableWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ca07d
- (void)getExperimentForConfigurationIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c9f4c
- (void)getProximityTuplesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c9e34
- (void)getCapabilitiesDataFromReachableDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c9d1c
- (void)getManagedLocalAndRemotePeerInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c9c02
- (void)setHardcodedBluetoothProximity:(id)arg1;	// IMP=0x00000000000c9b40
- (void)getContextCollectorsInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c9a26
- (void)getOriginDeviceInfoForContextIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c98f8
- (void)getCurrentContextSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c97e0
- (void)getCrossDeviceContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c96b8
- (void)siriDesignModeIsEnabled:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c953b
- (void)setSiriDesignModeEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c93c0
- (void)deleteSiriHistoryWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c9306
- (void)deleteSiriHistoryWithContext:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c9039
- (void)shouldSuppressSiriDataSharingOptInAlert:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c8e28
- (void)setOnDeviceDictationAvailableAlertPresented:(_Bool)arg1;	// IMP=0x00000000000c8cfa
- (void)setSiriDataSharingHomePodSetupDeviceIsValid:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c8aea
- (void)setSiriDataSharingOptInAlertPresented:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c88da
- (void)setSiriDataSharingOptInStatus:(long long)arg1 propagateToHomeAccessories:(_Bool)arg2 source:(long long)arg3 reason:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000c8568
- (void)getSiriDataSharingOptInStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c82a5
- (void)setSiriDataSharingOptInStatus:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c7f4b
- (void)siriGradingIsEnabled:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c7e9c
- (void)setSiriGradingEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c7e80
- (oneway void)showMultiUserSharedUserIDsCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c7d64
- (void)showPrimaryUserSharedUserIDWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c7c4a
- (void)showMultiUsers:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c7b30
- (void)removeMultiUserWithSharedUserID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c7a4f
- (void)removeMultiUserUser:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c796e
- (void)addMultiUserUser:(id)arg1 sharedId:(id)arg2 loggableSharedId:(id)arg3 enrollmentName:(id)arg4 isPrimary:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x00000000000c7824
- (void)getSharedUserIdForHomeUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c773e
- (void)getHomeUserIdForSharedUserId:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c7658
- (void)stopObservingWirelessSplitterSession;	// IMP=0x00000000000c75cb
- (void)startObservingWirelessSplitterSession;	// IMP=0x00000000000c753e
- (void)getBluetoothWirelessSplitterSessionInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c7413
- (void)getPairedBluetoothDeviceInfoArrayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c72e8
- (void)getConnectedBluetoothDeviceInfoArrayWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c71bd
- (void)getBluetoothDeviceInfoWithUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c7072
- (void)getBluetoothDeviceInfoWithAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c6f27
- (void)setSiriOutputVolume:(float)arg1 forAudioRoute:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c6e8f
- (void)setSiriOutputVolume:(float)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c6e78
- (void)getSiriOutputVolumeForAudioRoute:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c6d94
- (void)getSiriOutputVolumeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c6d7d
- (void)fetchExperimentContextWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c6cad
- (void)fetchExperimentConfigurationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c6bdd
- (void)sendMetricsToServerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c6b71
- (void)resetAnalyticsStoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c6b05
- (void)purgeAnalyticsStoreWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c6a99
- (void)fetchEventRecordsFromAnalyticsStoreAtPath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c69b3
- (void)setNanoSiriDataSharingOptInStatus:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c68f8
- (void)setNanoCrownActivationEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c6839
- (void)setNanoLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c6767
- (void)setNanoOutputVoice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c6695
- (void)setNanoTTSSpeakerVolume:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c65c3
- (void)setNanoUseDeviceSpeakerForTTS:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c64f1
- (void)setNanoRaiseToSpeakEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c6432
- (void)setNanoPhraseSpotterEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c6373
- (void)setNanoDictationEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c62b4
- (void)setNanoAssistantEnabled:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c61f5
- (void)getStereoPairState:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c611c
- (void)getStereoPartnerLastMyriadWinDate:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c6043
- (void)getMeCard:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c5e9b
- (void)setHorsemanSupplementalLanguageDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c5e7c
- (void)getHorsemanSupplementalLanguageDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c5e56
- (void)getSupplementalLanguagesForProduct:(id)arg1 forBuildVersion:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c5d41
- (void)getSupplementalLanguageDictionaryForProduct:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c5c4b
- (void)getSupplementalLanguagesModificationDate:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c5b72
- (void)getSupplementalLanguagesDictionary:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c5a99
- (void)setSupplementalLanguages:(id)arg1 forProduct:(id)arg2 forBuildVersion:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c5971
- (void)setSupplementalLanguageDictionary:(id)arg1 forProduct:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c5866
- (void)postTestResultSelectedWithRcId:(id)arg1;	// IMP=0x00000000000c57a4
- (void)postTestResultCandidateWithRcId:(id)arg1 recognitionSausage:(id)arg2;	// IMP=0x00000000000c56ce
- (void)stopAllAudioPlaybackRequests:(_Bool)arg1;	// IMP=0x00000000000c5632
- (void)stopAudioPlaybackRequest:(id)arg1 immediately:(_Bool)arg2;	// IMP=0x00000000000c556a
- (void)startAudioPlaybackRequest:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c5471
- (void)getPeerIdentifiers:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c538e
- (void)startRemoteRequest:(id)arg1 onPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c5283
- (void)dismissUI;	// IMP=0x00000000000c51f6
- (void)startMultiUserUIRequestWithText:(id)arg1 expectedSpeakerSharedUserID:(id)arg2 expectedSpeakerConfidenceScore:(unsigned long long)arg3 nonspeakerConfidenceScores:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000c50d0
- (void)startUIRequestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c4ffa
- (void)startUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c4f24
- (void)startUIMockServerRequestWithReplayFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c4e4e
- (void)startUIRequestWithSpeechAudioFileURL:(id)arg1;	// IMP=0x00000000000c4d8c
- (void)startUIRequestWithInfo:(id)arg1;	// IMP=0x00000000000c4cbd
- (void)startUIRequestWithText:(id)arg1;	// IMP=0x00000000000c4bee
- (void)startUIRequest:(id)arg1;	// IMP=0x00000000000c4ad3
- (void)setRecognizeMyVoiceEnabled:(_Bool)arg1;	// IMP=0x00000000000c4a37
- (void)getCurrentAccessoryInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c491e
- (void)setLanguage:(id)arg1 outputVoice:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c46d9
- (void)setLanguage:(id)arg1 outputVoice:(id)arg2;	// IMP=0x00000000000c46c4
- (void)setLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c44df
- (void)setLanguage:(id)arg1;	// IMP=0x00000000000c44cb
- (void)setOutputVoice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c4351
- (void)setOutputVoice:(id)arg1;	// IMP=0x00000000000c433d
- (void)getAvailableVoicesForLanguage:(id)arg1 includeAssetInfo:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c4150
- (void)setOfflineDictationProfileOverridePath:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c40c2
- (void)createOfflineSpeechProfileWithLanguage:(id)arg1 modelOverridePath:(id)arg2 JSONData:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c3fa6
- (void)getOfflineDictationStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c3edd
- (void)getOfflineAssistantStatusWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c3e14
- (void)updateOfflineSpeechProfileWithLanguage:(id)arg1 modelOverridePath:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c3d19
- (void)getAvailableVoicesForSynthesisLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c3d02
- (void)getAvailableVoicesForRecognitionLanguage:(id)arg1 includeAssetInfo:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c3c8f
- (void)getAvailableVoicesForRecognitionLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c3c78
- (void)_updateVoicesIncludingAssetInfo:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c3b39
- (id)_filterVoices:(id)arg1 forLanguage:(id)arg2;	// IMP=0x00000000000c3904
- (id)_voices;	// IMP=0x00000000000c382d
- (void)_setVoices:(id)arg1;	// IMP=0x00000000000c3787
- (void)getAudioSessionCoordinationSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c365c
- (void)currectNWActivityId:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c34ed
- (void)homeOnboardingFlowInvoked:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c33c9
- (void)fetchMultiUserVoiceIdentificationSetting:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c32b1
- (void)clearOpportuneSpeakingEdgeDetectorSignalOverride;	// IMP=0x00000000000c3224
- (void)setOpportuneSpeakingEdgeDetectorSignalOverride:(long long)arg1;	// IMP=0x00000000000c3188
- (oneway void)clearAnnounceNotificationsInCarPlayType;	// IMP=0x00000000000c30fb
- (oneway void)setAnnounceNotificationsInCarPlayType:(long long)arg1;	// IMP=0x00000000000c305f
- (oneway void)getAnnounceNotificationsInCarPlayTypeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c2f47
- (oneway void)clearAnnounceNotificationsInCarPlayTemporarilyDisabled;	// IMP=0x00000000000c2eba
- (oneway void)getAnnounceNotificationsInCarPlayTemporarilyDisabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c2d9f
- (oneway void)setAnnounceNotificationsInCarPlayTemporarilyDisabled:(_Bool)arg1;	// IMP=0x00000000000c2d03
- (oneway void)setAnnounceNotificationsTemporarilyDisabledUntil:(id)arg1 forApp:(id)arg2 platform:(long long)arg3;	// IMP=0x00000000000c2c25
- (oneway void)getAnnounceNotificationsTemporarilyDisabledEndDateForApp:(id)arg1 platform:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c2af0
- (oneway void)setAnnounceNotificationsTemporarilyDisabledUntil:(id)arg1 platform:(long long)arg2;	// IMP=0x00000000000c2a28
- (oneway void)getAnnounceNotificationsTemporarilyDisabledEndDateForPlatform:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c2903
- (void)setSpokenNotificationProxCardSeen:(_Bool)arg1;	// IMP=0x00000000000c2867
- (void)setSpokenNotificationShouldSkipTriggerlessReplies:(_Bool)arg1;	// IMP=0x00000000000c27cb
- (void)getSpokenNotificationShouldSkipTriggerlessRepliesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c2709
- (void)setSpokenNotificationShouldAnnounceAllNotifications:(_Bool)arg1;	// IMP=0x00000000000c266d
- (void)getSpokenNotificationShouldAnnounceAllNotificationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c25ab
- (void)setSpokenNotificationIsAlwaysOpportune:(_Bool)arg1;	// IMP=0x00000000000c250f
- (void)getSpokenNotificationIsAlwaysOpportuneWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c244d
- (void)clearSpokenNotificationTemporarilyDisabledStatus;	// IMP=0x00000000000c23c0
- (void)forceMultiUserSync:(_Bool)arg1 download:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c2232
- (void)configOverrides:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c2119
- (void)setConfigOverrides:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c1fed
- (void)getDevicesWithAvailablePHSAssetsOnDeviceCheck:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c1ec2
- (void)getDevicesWithAvailablePHSAssetsForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c1d7d
- (void)disableAndDeleteCloudSyncWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c1c4e
- (void)barrier;	// IMP=0x00000000000c1bb4
- (void)shutdownSessionIfIdle;	// IMP=0x00000000000c1b27
- (void)killDaemon;	// IMP=0x00000000000c1a9a
- (void)setAssistantLoggingEnabled:(_Bool)arg1;	// IMP=0x00000000000c19fe
- (void)setDictationEnabled:(_Bool)arg1;	// IMP=0x00000000000c1962
- (void)setAssistantEnabled:(_Bool)arg1;	// IMP=0x00000000000c18c6
- (void)setActiveAccountIdentifier:(id)arg1;	// IMP=0x00000000000c17a3
- (void)deleteAccountWithIdentifier:(id)arg1;	// IMP=0x00000000000c1680
- (void)saveAccount:(id)arg1 setActive:(_Bool)arg2;	// IMP=0x00000000000c1534
- (id)accounts;	// IMP=0x00000000000c1421
- (void)fetchActiveAccount:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c1231
- (void)fetchAccountsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c121a
- (void)fetchAccountsSynchronously:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c0e26
- (void)fetchSupportedMultiUserLanguageCodes:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c0dce
- (void)fetchSupportedLanguageCodes:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c0d76
- (id)_synchronousSettingsServiceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c0cf3
- (id)_settingsServiceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c0c70
- (id)_connection;	// IMP=0x00000000000c08b4
- (void)_clearConnection;	// IMP=0x00000000000c085a
- (void)dealloc;	// IMP=0x00000000000c0795
- (void)setXPCConnectionManagementQueue:(id)arg1;	// IMP=0x00000000000c0784
- (id)init;	// IMP=0x00000000000c0770
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x00000000000c0620
- (id)description;	// IMP=0x00000000000c059a
- (void)_tellDelegateServerVerificationReport:(id)arg1;	// IMP=0x00000000000cc473
- (void)_tellDelegatePartialVerificationResult:(id)arg1;	// IMP=0x00000000000cc401
@property(nonatomic, setter=_setDelegate:) __weak id <AFSettingsDelegate> _delegate;
- (void)_readSyncTokenForAceHost:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cc26f
- (void)_setSyncToken:(id)arg1 forAceHost:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cc0ba
- (void)_handleCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cbd82
- (void)_getSharedUserID:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cbcb0
- (void)_updateMultiUserInfoForUser:(id)arg1 score:(id)arg2 companionId:(id)arg3 companionSpeechId:(id)arg4 idsIdentifier:(id)arg5 aceHost:(id)arg6 reset:(_Bool)arg7 completion:(CDUnknownBlockType)arg8;	// IMP=0x00000000000cb6f3
- (void)_getSharedCompanionInfo:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cb613
- (void)_runServiceMaintenance;	// IMP=0x00000000000cb56b
- (void)_setSyncVerificationNeededAndFullReportNeeded:(_Bool)arg1 shouldPostNotification:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cb493
- (void)_fetchPeerData:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cb3d1
- (void)_syncDataWithAnchorKeys:(id)arg1 forceReset:(_Bool)arg2 reason:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000cb2cf
- (void)_clearSyncNeededForKey:(id)arg1;	// IMP=0x00000000000cb20d
- (void)_setSyncNeededForReason:(id)arg1;	// IMP=0x00000000000cb14b

@end
