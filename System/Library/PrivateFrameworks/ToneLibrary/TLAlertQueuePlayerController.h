//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ToneLibrary/TLAlertPlaybackBackEndController-Protocol.h>

@class AVAsset, AVAudioSession, AVQueuePlayer, NSString, TLAlertQueuePlayerStateDescriptor, TLAttentionAwarenessEffectCoordinator, TLAudioQueue;
@protocol NSCopying;

@interface TLAlertQueuePlayerController : NSObject <TLAlertPlaybackBackEndController>
{
    TLAudioQueue *_audioQueue;	// 8 = 0x8
    struct os_unfair_lock_s _lock;	// 16 = 0x10
    TLAlertQueuePlayerStateDescriptor *_stateDescriptor;	// 24 = 0x18
    NSString *_playingToneIdentifier;	// 32 = 0x20
    AVAsset *_toneAssetForPendingPlayingAlert;	// 40 = 0x28
    _Bool _hasToneAssetForPendingPlayingAlert;	// 48 = 0x30
    _Bool _isStoppingPlayingAlert;	// 49 = 0x31
    _Bool _isWaitingToCompleteReloadPlaybackRequest;	// 50 = 0x32
    _Bool _isObservingQueuePlayer;	// 51 = 0x33
    AVQueuePlayer *_queuePlayer;	// 56 = 0x38
    _Bool _isAudioEnvironmentSetup;	// 64 = 0x40
    _Bool _isUsingAuxiliaryAudioSession;	// 65 = 0x41
    AVAudioSession *_audioSession;	// 72 = 0x48
    NSString *_previousAudioCategory;	// 80 = 0x50
    unsigned long long _previousAudioCategoryOptions;	// 88 = 0x58
    NSString *_previousAudioMode;	// 96 = 0x60
    _Bool _isBypassingRingerSwitchPolicy;	// 104 = 0x68
    _Bool _isIgnoringAccessibilityDisabledVibrationSetting;	// 105 = 0x69
    _Bool _isAudioSessionActive;	// 106 = 0x6a
    unsigned long long _audioSessionDeactivationPreventionRequestsCount;	// 112 = 0x70
    _Bool _isObservingAudioSessionInterruptionNotification;	// 120 = 0x78
    id <NSCopying> _attentionPollingToken;	// 128 = 0x80
    TLAttentionAwarenessEffectCoordinator *_effectCoordinator;	// 136 = 0x88
    _Bool _isAttentionAwarenessSubsystemFullyInitialized;	// 144 = 0x90
    long long _lastAttentionPollingEventType;	// 152 = 0x98
    CDStruct_13aec295 _externalEnvironmentValues;	// 160 = 0xa0
}

+ (CDStruct_13aec295)_externalEnvironmentValuesForAlert:(id)arg1;	// IMP=0x000000000004779c
+ (_Bool)_shouldApplyStandardDelayAndAudioVolumeRampForAlert:(id)arg1 externalEnvironmentValues:(CDStruct_13aec295)arg2;	// IMP=0x00000000000474ce
+ (double)_audioVolumeRampingDurationForAlert:(id)arg1 externalEnvironmentValues:(CDStruct_13aec295)arg2 toneAssetDuration:(double)arg3;	// IMP=0x0000000000047410
+ (double)_audioPlaybackInitiationDelayForAlert:(id)arg1 externalEnvironmentValues:(CDStruct_13aec295)arg2;	// IMP=0x0000000000047367
+ (long long)_audioVolumeApplicationPolicyForAlert:(id)arg1 externalEnvironmentValues:(CDStruct_13aec295)arg2;	// IMP=0x000000000004719e
+ (_Bool)_shouldApplyAttentionAwarenessEffectsForAlert:(id)arg1;	// IMP=0x00000000000470f8
+ (_Bool)_shouldRepeatVibrationForAlert:(id)arg1 externalEnvironmentValues:(CDStruct_13aec295)arg2;	// IMP=0x0000000000047092
+ (_Bool)_shouldVibrateForAlert:(id)arg1;	// IMP=0x0000000000046fd4
+ (_Bool)_shouldHandleAudioSessionActivationForAlert:(id)arg1;	// IMP=0x0000000000045d18
+ (_Bool)_shouldUseAuxiliaryAudioSessionForAlert:(id)arg1;	// IMP=0x0000000000045cfb
+ (_Bool)_shouldBypassRingerSwitchPolicyForAlert:(id)arg1;	// IMP=0x0000000000045c55
+ (id)_celestialAudioCategoryForAudioSessionCategory:(id)arg1;	// IMP=0x0000000000045907
+ (id)_audioModeForAlert:(id)arg1 audioCategory:(id)arg2;	// IMP=0x0000000000045861
+ (unsigned long long)_audioCategoryOptionsForAlert:(id)arg1 externalEnvironmentValues:(CDStruct_13aec295)arg2;	// IMP=0x000000000004577c
+ (id)_audioCategoryForAlert:(id)arg1 externalEnvironmentValues:(CDStruct_13aec295)arg2;	// IMP=0x0000000000045418
+ (_Bool)_shouldEnsureActiveAudioSessionWhenStartingPlaybackForAlert:(id)arg1;	// IMP=0x0000000000045398
+ (long long)_clientPriorityForAlert:(id)arg1;	// IMP=0x0000000000045311
+ (id)_clientNameForAlert:(id)arg1;	// IMP=0x000000000004522f
+ (id)_propertyKeysOfInterestForToneAssets;	// IMP=0x000000000003e3c4
- (void).cxx_destruct;	// IMP=0x0000000000047b76
- (id)_fallbackToneIdentifierForStateDescriptor:(id)arg1;	// IMP=0x0000000000047595
- (void)_endPreventingAudioSessionDeactivationForStateDescriptor:(id)arg1;	// IMP=0x0000000000046c29
- (void)_beginPreventingAudioSessionDeactivation;	// IMP=0x0000000000046b7d
- (_Bool)_isPreventingAudioSessionDeactivation;	// IMP=0x0000000000046b4b
- (void)_handleAudioSessionInterruptionOfType:(unsigned long long)arg1 withOptions:(unsigned long long)arg2;	// IMP=0x00000000000468ef
- (void)_handleAudioSessionInterruptionNotification:(id)arg1;	// IMP=0x000000000004678b
- (void)_stopObservingAudioSessionInterruptionNotificationsForStateDescriptor:(id)arg1;	// IMP=0x000000000004663f
- (void)_startObservingAudioSessionInterruptionNotificationsForStateDescriptor:(id)arg1;	// IMP=0x00000000000464ec
- (void)_deactivateAudioSessionIfNeededForStateDescriptor:(id)arg1;	// IMP=0x00000000000460c9
- (void)_activateAudioSessionIfNeededForStateDescriptor:(id)arg1;	// IMP=0x0000000000045e75
- (float)_audioVolumeForAlert:(id)arg1 audioCategory:(id)arg2;	// IMP=0x0000000000045a15
- (void)_queuePlayer:(id)arg1 currentItemStatusWasUpdatedToValue:(long long)arg2;	// IMP=0x0000000000044f8c
- (void)_queuePlayer:(id)arg1 currentItemWasUpdatedFromValue:(id)arg2;	// IMP=0x0000000000044958
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0000000000044646
- (void)_stopObservingQueuePlayer;	// IMP=0x0000000000044539
- (void)_startObservingQueuePlayer;	// IMP=0x0000000000044415
- (void)_destroyQueuePlayerForStateDescriptor:(id)arg1;	// IMP=0x000000000004429c
- (void)_createQueuePlayerIfNecessaryForStateDescriptor:(id)arg1;	// IMP=0x0000000000043d03
- (void)_didReceiveAttentionPollingEventOfType:(long long)arg1 stateDescriptor:(id)arg2;	// IMP=0x0000000000043958
- (void)_applyAudioVolume:(float)arg1 forAlert:(id)arg2;	// IMP=0x00000000000432c1
- (void)_resetFlagsForSwitchingAuxiliaryAudioSession;	// IMP=0x00000000000431d6
- (void)_resetClientPriorityForStateDescriptor:(id)arg1;	// IMP=0x00000000000430a0
- (void)_restoreAudioEnvironmentForStateDescriptor:(id)arg1;	// IMP=0x00000000000426b9
- (void)_prepareAudioEnvironmentForStateDescriptor:(id)arg1;	// IMP=0x0000000000041443
- (void)_didEndPlayingAlertForStateDescriptor:(id)arg1;	// IMP=0x000000000004128c
- (void)_willBeginPlayingAlertForStateDescriptor:(id)arg1;	// IMP=0x00000000000410d5
- (void)_stopPlaybackForStateDescriptor:(id)arg1 withOptions:(id)arg2 playerWasAlreadyPausedExternally:(_Bool)arg3;	// IMP=0x0000000000040ca2
- (void)_stopPlaybackForStateDescriptor:(id)arg1;	// IMP=0x0000000000040c40
- (void)_performDelayedAudioPlaybackInitiationForStateDescriptor:(id)arg1 audioVolumeRampingDuration:(double)arg2;	// IMP=0x0000000000040a4c
- (void)_initiateAudioPlaybackForStateDescriptor:(id)arg1 audioVolumeRampingDuration:(double)arg2;	// IMP=0x0000000000040794
- (void)_startPlaybackForStateDescriptor:(id)arg1 usingConfirmedPlayableAsset:(id)arg2 hasAlreadyDetectedUserAttention:(_Bool)arg3;	// IMP=0x000000000003f9ed
- (void)_startPlaybackForStateDescriptor:(id)arg1 usingConfirmedPlayableAsset:(id)arg2;	// IMP=0x000000000003f79d
- (void)_startPlaybackForStateDescriptor:(id)arg1 usingAssetWithLoadedProperties:(id)arg2 shouldConfirmAlertStillPlaying:(_Bool)arg3;	// IMP=0x000000000003f52c
- (void)_reloadPlaybackForStateDescriptor:(id)arg1 withToneIdentifier:(id)arg2;	// IMP=0x000000000003e8a5
- (_Bool)_canPlayToneAsset:(id)arg1;	// IMP=0x000000000003e3d1
- (void)_handleActivationAssertionStatusChangeForAlert:(id)arg1 updatedStatus:(_Bool)arg2 previousStateDescriptor:(id)arg3 updatedStateDescriptor:(id)arg4;	// IMP=0x000000000003e046
- (void)_stopPlayingAlertForStateDescriptor:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3;	// IMP=0x000000000003da4f
- (void)_playAlertForStateDescriptor:(id)arg1 previousStateDescriptor:(id)arg2;	// IMP=0x000000000003d7b2
- (void)handleActivationAssertionStatusChangeForAlert:(id)arg1 updatedStatus:(_Bool)arg2;	// IMP=0x000000000003d4c4
- (void)updateAudioVolumeDynamicallyForAlert:(id)arg1 toValue:(float)arg2;	// IMP=0x000000000003d30d
- (_Bool)stopPlayingAlerts:(id)arg1 withOptions:(id)arg2 playbackCompletionType:(long long)arg3;	// IMP=0x000000000003cc0f
- (void)playAlert:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000003c9a9
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000003c75d
- (id)init;	// IMP=0x000000000003c6f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

