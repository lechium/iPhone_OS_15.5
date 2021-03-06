//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioSessionPortDescription, NSArray, NSString;

@interface AVAudioSession : NSObject
{
    void *_impl;	// 8 = 0x8
}

+ (_Bool)categoryEnablesInput:(id)arg1;	// IMP=0x0000000000008099
+ (id)auxiliarySession;	// IMP=0x0000000000007da0
+ (id)primarySession;	// IMP=0x0000000000007d87
+ (id)retrieveSessionWithID:(unsigned int)arg1;	// IMP=0x0000000000007d39
+ (id)sharedInstance;	// IMP=0x0000000000007c6f
- (_Bool)isDolbyAtmosAvailable;	// IMP=0x0000000000010604
- (void)privateUpdateOutputChannelCount:(id)arg1;	// IMP=0x000000000001059b
- (void)privateUpdateInputChannelCount:(id)arg1;	// IMP=0x0000000000010532
- (void)privateUpdateAudioFormat:(id)arg1;	// IMP=0x00000000000104c9
- (void)privateUpdateAudioFormats:(id)arg1;	// IMP=0x0000000000010390
- (void)privateUpdateDataSources:(id)arg1 forInput:(_Bool)arg2;	// IMP=0x000000000001032b
- (void)privateUpdateInputGain:(id)arg1;	// IMP=0x00000000000102c3
- (void)privateUpdatePromptStyle:(id)arg1;	// IMP=0x000000000001025a
- (void)privateUpdateOutputVolume:(id)arg1;	// IMP=0x0000000000010119
- (_Bool)privateSetPropertyValue:(unsigned int)arg1 withBool:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000100d0
- (_Bool)prefersMultichannelAudio;	// IMP=0x00000000000100a6
- (_Bool)setPrefersMultichannelAudio:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000ffd3
- (_Bool)enableNotifications:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000fed3
- (void)privateHandleServerConnectionCompletion:(struct ConnectionResult)arg1;	// IMP=0x000000000000fb54
- (void)privateHandleRoutingContextChange;	// IMP=0x000000000000f9a0
- (void)privateUpdatePiPAvailabilityChange:(id)arg1;	// IMP=0x000000000000f860
- (void)privateHandleOtherPrimaryAudioPlayStateChange;	// IMP=0x000000000000f761
- (void)privateHandleSecondaryAudioHintChange:(id)arg1;	// IMP=0x000000000000f5a5
- (void)privateHandlePickableRoutesChange;	// IMP=0x000000000000f4a6
- (void)privateHandleServerDied;	// IMP=0x000000000000f28c
- (void)privateMarkKVOPropertiesDirty:(unsigned long long)arg1;	// IMP=0x000000000000f1e5
- (void)privateInterruptionWithInfo:(id)arg1;	// IMP=0x000000000000e53d
- (void)privateInputIsAvailableChanged:(id)arg1;	// IMP=0x000000000000e4ba
- (float)hapticThermalGain;	// IMP=0x000000000000e492
- (float)speakerThermalGain;	// IMP=0x000000000000e46a
- (_Bool)setHapticThermalGain:(float)arg1 error:(id *)arg2;	// IMP=0x000000000000e41f
- (_Bool)setSpeakerThermalGain:(float)arg1 error:(id *)arg2;	// IMP=0x000000000000e3d4
- (double)outputSampleRate;	// IMP=0x000000000000e3ab
- (double)inputSampleRate;	// IMP=0x000000000000e382
- (double)preferredOutputSampleRate;	// IMP=0x000000000000e359
- (_Bool)setPreferredOutputSampleRate:(double)arg1 error:(id *)arg2;	// IMP=0x000000000000e30e
- (double)preferredInputSampleRate;	// IMP=0x000000000000e2e5
- (_Bool)setPreferredInputSampleRate:(double)arg1 error:(id *)arg2;	// IMP=0x000000000000e29a
- (_Bool)decoupledIO;	// IMP=0x000000000000e270
- (_Bool)setAggregatedIOPreference:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000000e227
- (_Bool)preferDecoupledIO:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000e1de
- (double)preferredHardwareSampleRate;	// IMP=0x000000000000e1cc
- (long long)currentHardwareOutputNumberOfChannels;	// IMP=0x000000000000e1ba
- (long long)currentHardwareInputNumberOfChannels;	// IMP=0x000000000000e1a8
- (double)currentHardwareSampleRate;	// IMP=0x000000000000e196
- (_Bool)inputIsAvailable;	// IMP=0x000000000000e184
- (_Bool)clearInputPreferences:(id *)arg1;	// IMP=0x000000000000e0ba
- (_Bool)setPrefersToVibeWhenVibrationsAreDisabled:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000e071
- (_Bool)prefersToVibeWhenVibrationsAreDisabled;	// IMP=0x000000000000e047
- (_Bool)setParticipatesInVolumePolicy:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000dffe
- (_Bool)participatesInVolumePolicy;	// IMP=0x000000000000dfd4
- (_Bool)setNeedsHighPowerBudgeting:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000df8b
- (_Bool)needsHighPowerBudgeting;	// IMP=0x000000000000df61
- (_Bool)setPrefersNoDucking:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000df18
- (_Bool)prefersNoDucking;	// IMP=0x000000000000deee
- (_Bool)setPrefersNoInterruptionsFromSystemAlerts:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000dea5
@property(readonly, nonatomic) _Bool prefersNoInterruptionsFromSystemAlerts;
- (_Bool)setPrefersNoInterruptionsByRingtonesAndAlerts:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000de32
- (_Bool)prefersNoInterruptionsByRingtonesAndAlerts;	// IMP=0x000000000000de08
- (_Bool)setIAmTheAssistant:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000ddbf
- (_Bool)setDefaultChatMode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000dc5d
- (_Bool)muteSessionInput:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000dbf6
- (_Bool)isSessionInputMuted;	// IMP=0x000000000000db02
- (_Bool)silenceOutput:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000000da69
- (_Bool)setDisallowedPorts:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000da61
- (_Bool)setActivationContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000d57a
- (_Bool)setPreferredHardwareSampleRate:(double)arg1 error:(id *)arg2;	// IMP=0x000000000000d568
- (void)setDelegate:(id)arg1;	// IMP=0x000000000000d554
- (id)delegate;	// IMP=0x000000000000d543
- (long long)privateGetCachedReporterID;	// IMP=0x000000000000d532
- (id)privateRefreshAvailableInputs;	// IMP=0x000000000000d52a
- (id)availableInputs;	// IMP=0x000000000000d47c
- (double)speechDetectionDeviceSampleRate;	// IMP=0x000000000000d453
- (unsigned long long)sessionType;	// IMP=0x000000000000d443
- (unsigned int)opaqueSessionID;	// IMP=0x000000000000d433
- (id)audioClockDevice;	// IMP=0x000000000000d201
- (_Bool)setAudioClockDevice:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000d0f2
- (_Bool)supportsMultichannelContent;	// IMP=0x000000000000d012
- (_Bool)setSupportsMultichannelContent:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000cfc9
- (id)pickedRoute;	// IMP=0x000000000000cdb4
- (id)currentRoute;	// IMP=0x000000000000cd35
@property(readonly) AVAudioSessionPortDescription *preferredInput;
- (_Bool)setPreferredInput:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000cb56
- (_Bool)overrideOutputAudioPort:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000000caec
- (_Bool)selectIndependentRoutingContext:(id *)arg1;	// IMP=0x000000000000cad2
- (_Bool)setHostProcessAttribution:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000c99e
- (id)hostProcessAttribution;	// IMP=0x000000000000c8b0
- (_Bool)setRoutingContextUID:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000c8a8
- (id)routingContextUID;	// IMP=0x000000000000c89b
- (_Bool)setAuditTokensForProcessAssertion:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000c767
- (id)auditTokensForProcessAssertion;	// IMP=0x000000000000c679
- (_Bool)privateNeedsTranslationForNoSpeakerCategory:(id)arg1;	// IMP=0x000000000000c671
- (_Bool)privateSetRouteSharingPolicy:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000000c56b
- (_Bool)setMode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000c478
@property(readonly) NSString *mode;
@property(readonly) NSArray *availableModes;
- (long long)maximumOutputNumberOfChannels;	// IMP=0x000000000000c296
- (long long)maximumInputNumberOfChannels;	// IMP=0x000000000000c270
- (long long)outputNumberOfChannels;	// IMP=0x000000000000c252
- (long long)inputNumberOfChannels;	// IMP=0x000000000000c234
- (long long)preferredOutputNumberOfChannels;	// IMP=0x000000000000c20e
- (long long)preferredInputNumberOfChannels;	// IMP=0x000000000000c1e8
- (unsigned long long)preferredIOBufferFrameSize;	// IMP=0x000000000000c1c2
- (double)preferredIOBufferDuration;	// IMP=0x000000000000c19a
- (double)preferredSampleRate;	// IMP=0x000000000000c171
- (long long)interruptionPriority;	// IMP=0x000000000000c14b
- (unsigned long long)IOBufferFrameSize;	// IMP=0x000000000000c125
- (double)IOBufferDuration;	// IMP=0x000000000000c0fd
- (id)activeSessionDisplayIDs;	// IMP=0x000000000000c00d
- (double)outputSafetyOffset;	// IMP=0x000000000000bfe5
- (double)inputSafetyOffset;	// IMP=0x000000000000bfbd
- (double)outputLatency;	// IMP=0x000000000000bf95
- (double)inputLatency;	// IMP=0x000000000000bf6d
- (double)sampleRate;	// IMP=0x000000000000bd74
- (_Bool)secondaryAudioShouldBeSilencedHint;	// IMP=0x000000000000bd4a
- (_Bool)isOtherAudioPlaying;	// IMP=0x000000000000bd20
- (_Bool)isInputAvailable;	// IMP=0x000000000000bcf6
- (_Bool)isInputGainSettable;	// IMP=0x000000000000bccc
- (id)outputDataSource;	// IMP=0x000000000000bcb8
- (id)outputDataSources;	// IMP=0x000000000000bca4
- (id)inputDataSource;	// IMP=0x000000000000bc8d
- (id)inputDataSources;	// IMP=0x000000000000bc76
- (id)privateGetSelectedDataSource:(_Bool)arg1;	// IMP=0x000000000000bb41
- (id)privateGetDataSources:(_Bool)arg1;	// IMP=0x000000000000b929
- (void *)privateGetImplementation;	// IMP=0x000000000000b91f
- (float)inputGain;	// IMP=0x000000000000b908
- (_Bool)fixHardwareFormatToMultiChannel:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000b8bf
- (_Bool)isHardwareFormatFixedToMultiChannel;	// IMP=0x000000000000b895
- (_Bool)setIsExpanseMediaSession:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000b84c
- (_Bool)isExpanseMediaSession;	// IMP=0x000000000000b822
- (_Bool)setDuckToLevelScalar:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000b77e
- (_Bool)setDuckToLevelDB:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000b6da
- (_Bool)setDuckingFadeOutDuration:(id)arg1 fadeInDuration:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000b3ef
- (_Bool)setInterruptionFadeDuration:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000b34b
- (_Bool)setAudioHardwareControlFlags:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x000000000000b2fc
- (_Bool)setBypassRingerSwitchPolicy:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000b2b3
- (void)setAllowAllBuiltInDataSources:(_Bool)arg1;	// IMP=0x000000000000b2a3
- (_Bool)allowAllBuiltInDataSources;	// IMP=0x000000000000b293
- (_Bool)setRecordingFromRemoteInput:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000b24a
- (_Bool)recordingFromRemoteInput;	// IMP=0x000000000000b220
- (_Bool)setParticipatesInMutePriority:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000b1d7
- (_Bool)participatesInMutePriority;	// IMP=0x000000000000b1ad
- (_Bool)setPrefersNoMicrophoneUsageIndicator:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000b164
- (_Bool)prefersNoMicrophoneUsageIndicator;	// IMP=0x000000000000b13a
- (_Bool)setPrefersToAcquireHWControlFromOtherSessions:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000b0f1
- (_Bool)prefersToAcquireHWControlFromOtherSessions;	// IMP=0x000000000000b0c7
- (_Bool)setEligibleForBTSmartRoutingConsideration:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000b07e
- (_Bool)eligibleForBTSmartRoutingConsideration;	// IMP=0x000000000000b054
- (_Bool)setParticipatesInNowPlayingAppPolicy:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000b00b
- (_Bool)participatesInNowPlayingAppPolicy;	// IMP=0x000000000000afe1
- (_Bool)setAllowMixableAudioWhileRecording:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000af98
- (_Bool)allowMixableAudioWhileRecording;	// IMP=0x000000000000af6e
- (_Bool)setRequiresNoAudioResources:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000af25
- (_Bool)requiresNoAudioResources;	// IMP=0x000000000000aefb
- (_Bool)lastActivationStoppedNowPlayingApp;	// IMP=0x000000000000aed1
- (_Bool)setForceSoundCheck:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000ae88
- (_Bool)forceSoundCheck;	// IMP=0x000000000000ae5e
- (_Bool)isPiPAvailable;	// IMP=0x000000000000ae54
- (_Bool)isEarpieceActiveNoiseCancelationEnabled;	// IMP=0x000000000000ae4c
- (_Bool)isDolbyDigitalEncoderAvailable;	// IMP=0x000000000000ae44
- (long long)audioFormat;	// IMP=0x000000000000ae39
- (id)consolidatedSourceContentInfo;	// IMP=0x000000000000ab7e
- (id)audioFormats;	// IMP=0x000000000000aacb
@property(readonly) _Bool allowHapticsAndSystemSoundsDuringRecording;
- (_Bool)setAllowHapticsAndSystemSoundsDuringRecording:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000000a9a2
- (unsigned long long)promptStyle;	// IMP=0x000000000000a90a
- (float)outputVolume;	// IMP=0x000000000000a877
- (long long)inputOrientation;	// IMP=0x000000000000a827
- (long long)preferredInputOrientation;	// IMP=0x000000000000a7d7
- (_Bool)setPreferredInputOrientation:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000000a6a5
- (_Bool)setOutputDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a508
- (_Bool)setInputDataSource:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000a36b
- (_Bool)setInputGain:(float)arg1 error:(id *)arg2;	// IMP=0x000000000000a0d6
- (_Bool)setPreferredOutputNumberOfChannels:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000000a08d
- (_Bool)setPreferredInputNumberOfChannels:(long long)arg1 error:(id *)arg2;	// IMP=0x000000000000a044
- (_Bool)setInterruptionPriority:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000009ffb
- (_Bool)setPreferredIOBufferFrameSize:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0000000000009fb2
- (_Bool)setPreferredIOBufferDuration:(double)arg1 error:(id *)arg2;	// IMP=0x0000000000009f63
- (_Bool)setPreferredSampleRate:(double)arg1 error:(id *)arg2;	// IMP=0x0000000000009f18
- (void)requestRecordPermission:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009e42
@property(readonly) unsigned long long recordPermission;
- (_Bool)setActive:(_Bool)arg1 withFlags:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000009b30
- (_Bool)deactivateAndSetInterruptionPriority:(long long)arg1 error:(id *)arg2;	// IMP=0x0000000000009ad5
- (void)activateWithOptions:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009900
- (_Bool)setActive:(_Bool)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000009799
- (_Bool)setActive:(_Bool)arg1 error:(id *)arg2;	// IMP=0x0000000000009782
- (_Bool)setCategory:(id)arg1 mode:(id)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x000000000000935d
- (_Bool)setCategory:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00000000000092ba
- (_Bool)setCategory:(id)arg1 withOptions:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000009247
- (_Bool)setCategory:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000091d2
- (int)privateSetCategoryWithOptions:(id)arg1 modes:(id)arg2 routeSharingPolicy:(unsigned long long)arg3 options:(unsigned long long)arg4;	// IMP=0x00000000000087d6
@property(readonly, nonatomic) NSArray *availableCategories;
@property(readonly) unsigned long long routeSharingPolicy;
@property(readonly) unsigned long long categoryOptions;
@property(readonly) NSString *category;
- (void)dealloc;	// IMP=0x0000000000007fb1
- (id)initWithSiriEndpointIdentifier:(id)arg1;	// IMP=0x0000000000007e05
- (id)initAuxiliarySession;	// IMP=0x0000000000007ded
- (id)initWithSessionID:(unsigned int)arg1;	// IMP=0x0000000000007af5
- (id)initWithSessionType:(unsigned int)arg1 identifier:(id)arg2;	// IMP=0x00000000000076ed
- (id)initWithSessionType:(unsigned int)arg1;	// IMP=0x00000000000076d8
- (id)init;	// IMP=0x0000000000007674
- (id)autorelease;	// IMP=0x00000000000151dc
- (oneway void)release;	// IMP=0x0000000000015182
- (unsigned long long)retainCount;	// IMP=0x000000000001511d
- (id)retain;	// IMP=0x00000000000150bd
@property(readonly) _Bool isPrimary;

@end

