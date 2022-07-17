//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSpeech/CSAudioSessionControllerDelegate-Protocol.h>
#import <CoreSpeech/CSEndpointAnalyzerDelegate-Protocol.h>
#import <CoreSpeech/CSLanguageDetectorDelegate-Protocol.h>
#import <CoreSpeech/CSSiriAcousticFingerprinterDelegate-Protocol.h>
#import <CoreSpeech/CSSiriSpeechCapturing-Protocol.h>
#import <CoreSpeech/CSSpeakerIdentificationDelegate-Protocol.h>
#import <CoreSpeech/CSSpeechControllerDelegate-Protocol.h>

@class AFBluetoothWirelessSplitterSessionStateObserver, AFClientConfiguration, AFExperimentContext, AFSpeechSynthesisRecord, AFWatchdogTimer, CSAudioDeviceInfo, CSAudioSessionController, CSEndpointDelayReporter, CSEndpointerMetrics, CSSiriAcousticFingerprinter, CSSiriAudioActivationInfo, CSSiriAudioFileWriter, CSSiriAudioPlaybackService, CSSiriSpeechRecordingContext, CSSpeechController, NSArray, NSFileHandle, NSMutableDictionary, NSString, NSUUID, NSXPCConnection;
@protocol CSEndpointAnalyzer, CSSiriSpeechCapturingDelegate, OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface CSSiriSpeechRecorder : NSObject <CSSiriAcousticFingerprinterDelegate, CSSpeechControllerDelegate, CSEndpointAnalyzerDelegate, CSLanguageDetectorDelegate, CSSpeakerIdentificationDelegate, CSAudioSessionControllerDelegate, CSSiriSpeechCapturing>
{
    id <CSSiriSpeechCapturingDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    _Bool _isSpeechControllerInitialized;	// 24 = 0x18
    CSSpeechController *_speechController;	// 32 = 0x20
    CSAudioSessionController *_audioSessionController;	// 40 = 0x28
    CSSiriAudioPlaybackService *_audioPlaybackService;	// 48 = 0x30
    long long _packetCount;	// 56 = 0x38
    long long _speechCapturingMode;	// 64 = 0x40
    long long _recordingAlertsConfiguration;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_extendedEndpointTimer;	// 80 = 0x50
    id <CSEndpointAnalyzer> _endpointAnalyzer;	// 88 = 0x58
    CSSiriSpeechRecordingContext *_context;	// 96 = 0x60
    CSSiriAudioActivationInfo *_currentActivationInfo;	// 104 = 0x68
    CSSiriAudioActivationInfo *_pendingActivationInfo;	// 112 = 0x70
    CSAudioDeviceInfo *_currentAudioDeviceInfo;	// 120 = 0x78
    _Bool _fingerprintingEnabled;	// 128 = 0x80
    CSSiriAcousticFingerprinter *_fingerprinter;	// 136 = 0x88
    long long _audioFileType;	// 144 = 0x90
    _Bool _needsAVVCLPCMCallbacks;	// 152 = 0x98
    _Bool _hasReceivedEmptyLPCMRecordBuffer;	// 153 = 0x99
    NSFileHandle *_audioFileHandle;	// 160 = 0xa0
    CSSiriAudioFileWriter *_audioFileWriter;	// 168 = 0xa8
    CSSiriAudioFileWriter *_audioLogggingFileWriter;	// 176 = 0xb0
    long long _startEvent;	// 184 = 0xb8
    long long _recordingState;	// 192 = 0xc0
    long long _endpointerOperationMode;	// 200 = 0xc8
    _Bool _didReceiveFirstBuffer;	// 208 = 0xd0
    _Bool _didReceiveLastBuffer;	// 209 = 0xd1
    _Bool _didDetectStartpoint;	// 210 = 0xd2
    _Bool _didDetectEndpoint;	// 211 = 0xd3
    _Bool _didEnterTwoShotMode;	// 212 = 0xd4
    _Bool _didFakeTwoShotWithAlert;	// 213 = 0xd5
    NSUUID *_fakeTwoShotTTSPromptUUID;	// 216 = 0xd8
    _Bool _serverDidRecognizeSpeech;	// 224 = 0xe0
    _Bool _fingerprintWasRecognized;	// 225 = 0xe1
    _Bool _serverDidEndpoint;	// 226 = 0xe2
    _Bool _didTimeout;	// 227 = 0xe3
    _Bool _wasCanceled;	// 228 = 0xe4
    _Bool _suppressRecordingStoppedAlert;	// 229 = 0xe5
    _Bool _isRecordingUsingBTRoute;	// 230 = 0xe6
    double _twoShotStartTime;	// 232 = 0xe8
    _Bool _didPerformTwoShotPrompt;	// 240 = 0xf0
    _Bool _forceSuccessAlertOnStop;	// 241 = 0xf1
    _Bool _isDriving;	// 242 = 0xf2
    _Bool _shouldDisableSpeechPacketGeneration;	// 243 = 0xf3
    double _startRecordingTimestamp;	// 248 = 0xf8
    double _firstBufferTimestamp;	// 256 = 0x100
    unsigned long long _firstBufferHostTime;	// 264 = 0x108
    unsigned long long _estimatedSpeechEndHostTime;	// 272 = 0x110
    double _lastPrepareTimestamp;	// 280 = 0x118
    double _accumulatedBufferDuration;	// 288 = 0x120
    NSObject<OS_dispatch_group> *_recordingWillStartGroup;	// 296 = 0x128
    struct OpaqueAudioConverter *_decoder;	// 304 = 0x130
    double _expectedFirstBufferTimestamp;	// 312 = 0x138
    _Bool _isOpus;	// 320 = 0x140
    NSString *_recordDevice;	// 328 = 0x148
    _Bool _audioDuckingEnabled;	// 336 = 0x150
    NSXPCConnection *_speechRecordingEventListenerConnection;	// 344 = 0x158
    AFWatchdogTimer *_fakeTwoShotTTSPromptWatchdogTimer;	// 352 = 0x160
    unsigned long long _lastAudioRecordBufferStartTime;	// 360 = 0x168
    unsigned long long _lastAudioRecordBufferReceiptTime;	// 368 = 0x170
    CSEndpointerMetrics *_lastEndpointerMetrics;	// 376 = 0x178
    CSEndpointDelayReporter *_endpointDelayReporter;	// 384 = 0x180
    double _lastEndpointHintDuration;	// 392 = 0x188
    NSArray *_lastEndpointHintFeatures;	// 400 = 0x190
    CDUnknownBlockType _lastEndpointHintCompletion;	// 408 = 0x198
    AFSpeechSynthesisRecord *_mostRecentSpeechSynthesisRecord;	// 416 = 0x1a0
    AFClientConfiguration *_currentClientConfiguration;	// 424 = 0x1a8
    NSObject<OS_dispatch_group> *_alertPlaybackGroup;	// 432 = 0x1b0
    NSMutableDictionary *_numberOfAVVCAlertPlaybacksByType;	// 440 = 0x1b8
    AFBluetoothWirelessSplitterSessionStateObserver *_bluetoothWirelessSplitterSessionStateObserver;	// 448 = 0x1c0
    AFExperimentContext *_experimentContext;	// 456 = 0x1c8
    NSUUID *_mhUUID;	// 464 = 0x1d0
    _Bool _suppressInterruptionEndedNotifications;	// 472 = 0x1d8
}

- (void).cxx_destruct;	// IMP=0x00000000000efc25
@property(nonatomic) _Bool suppressInterruptionEndedNotifications; // @synthesize suppressInterruptionEndedNotifications=_suppressInterruptionEndedNotifications;
- (void)_setAudioDuckingEnabled:(_Bool)arg1;	// IMP=0x00000000000efc07
- (void)_setDictationAudioModeEnabled:(_Bool)arg1;	// IMP=0x00000000000efc01
- (unsigned int)_audioDeviceID;	// IMP=0x00000000000efbf9
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerResetNotification:(id)arg2;	// IMP=0x00000000000efb50
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerLostNotification:(id)arg2;	// IMP=0x00000000000efa25
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;	// IMP=0x00000000000ef97c
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;	// IMP=0x00000000000ef851
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2;	// IMP=0x00000000000ef7a8
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2;	// IMP=0x00000000000ef508
- (void)speakerIdentificationDidDetectSpeakerWithScores:(id)arg1;	// IMP=0x00000000000ef162
- (_Bool)_startAudioPlaybackRequest:(id)arg1 options:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000eed3e
- (void)acousticFingerprinter:(id)arg1 hasFingerprint:(id)arg2 duration:(double)arg3;	// IMP=0x00000000000eebf5
- (void)setEARLanguageDetectorSpeechRequestId:(id)arg1;	// IMP=0x00000000000eebdf
- (void)performBlockAfterAlerts:(CDUnknownBlockType)arg1 timeout:(double)arg2;	// IMP=0x00000000000ee6ca
- (void)setSpeechRecognizedContext:(id)arg1;	// IMP=0x00000000000ee65d
- (void)setEndpointerDelayedTrigger:(_Bool)arg1;	// IMP=0x00000000000ee647
- (void)setEndpointerThreshold:(double)arg1;	// IMP=0x00000000000ee62d
- (void)enforcePreviousEndpointHint;	// IMP=0x00000000000ee614
- (void)_enforceEndpointHint;	// IMP=0x00000000000ee524
- (void)_clearEndpointHint;	// IMP=0x00000000000ee4cd
- (void)_checkIfLastEndpointHintShouldBeAccepted;	// IMP=0x00000000000ee232
- (void)updateEndpointHintForDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ee0f2
- (void)_handleFakeTwoShotPromptCallbackWithUUID:(id)arg1 timestamp:(double)arg2 duration:(double)arg3 error:(id)arg4;	// IMP=0x00000000000edf4b
- (void)_handleFakeTwoShotPromptTimeoutWithUUID:(id)arg1;	// IMP=0x00000000000ede72
- (void)_playPhaticWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000edae5
- (void)_performTwoShotPromptForType:(long long)arg1 atTime:(double)arg2;	// IMP=0x00000000000ed069
- (void)_hardEndpointWasDetectedWithMetrics:(id)arg1 atTime:(double)arg2;	// IMP=0x00000000000ecde0
- (void)endpointer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3;	// IMP=0x00000000000ec893
- (void)endpointer:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x00000000000ec652
- (void)speechControllerDidUpdateSmartSiriVolume:(id)arg1 forReason:(unsigned long long)arg2;	// IMP=0x00000000000ec538
- (void)_speechControllerRequestsOperation:(unsigned long long)arg1 forReason:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ec2fc
- (void)speechControllerRequestsOperation:(unsigned long long)arg1 forReason:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ec198
- (void)speechControllerRequestsOperation:(unsigned long long)arg1 forReason:(unsigned long long)arg2;	// IMP=0x00000000000ec078
- (void)suppressUtteranceGradingIfRequired;	// IMP=0x00000000000ebe67
- (void)speechControllerDidDetectVoiceTriggerTwoShot:(id)arg1 atTime:(double)arg2;	// IMP=0x00000000000ebe53
- (void)speechControllerDidDetectVoiceTriggerTwoShot:(id)arg1 atTime:(double)arg2 wantsAudibleFeedback:(_Bool)arg3;	// IMP=0x00000000000eb91e
- (void)languageDetectorDidDetectLanguageWithConfidence:(id)arg1 confidence:(id)arg2 isConfident:(_Bool)arg3;	// IMP=0x00000000000eb789
- (void)_playStopAlertIfNecessaryForReason:(long long)arg1 endpointMode:(long long)arg2 error:(id)arg3;	// IMP=0x00000000000eb217
- (void)_setLanguageDetectorDelegateIfRequired;	// IMP=0x00000000000eb0e3
- (void)speechControllerDidFinishAlertPlayback:(id)arg1 ofType:(long long)arg2 error:(id)arg3;	// IMP=0x00000000000ead2d
- (void)speechController:(id)arg1 didSetAudioSessionActive:(_Bool)arg2;	// IMP=0x00000000000eac2c
- (void)speechController:(id)arg1 willSetAudioSessionActive:(_Bool)arg2;	// IMP=0x00000000000eab2b
- (void)speechControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(long long)arg2;	// IMP=0x00000000000eaa94
- (void)speechControllerEndRecordInterruption:(id)arg1;	// IMP=0x00000000000ea956
- (void)speechControllerBeginRecordInterruption:(id)arg1 withContext:(id)arg2;	// IMP=0x00000000000ea6e1
- (void)_speechControllerDidReceiveLastAudioRecordBuffer:(id)arg1 forReason:(long long)arg2 estimatedSpeechEndHostTime:(unsigned long long)arg3 isRecordingStopped:(_Bool)arg4;	// IMP=0x00000000000ea35c
- (void)speechControllerLPCMRecordBufferAvailable:(id)arg1 buffer:(id)arg2;	// IMP=0x00000000000e9fdb
- (id)getAudioRouteInstrumentationWithRecordingInfo:(id)arg1;	// IMP=0x00000000000e9c2e
- (int)convertSISchemaAudioInputRouteToMHRoute:(int)arg1 withRecordingInfo:(id)arg2;	// IMP=0x00000000000e9bcd
- (void)_speechControllerDidReceiveFirstAudioRecordBufferWithHostTime:(unsigned long long)arg1 atHostTime:(unsigned long long)arg2 mhUUID:(id)arg3;	// IMP=0x00000000000e989b
- (void)speechControllerRecordBufferAvailable:(id)arg1 buffers:(id)arg2 durationInSec:(float)arg3 recordedAt:(unsigned long long)arg4 audioDeviceInfo:(id)arg5;	// IMP=0x00000000000e9199
- (void)_speechControllerDidStopRecording:(id)arg1 audioDeviceInfo:(id)arg2 forReason:(long long)arg3 estimatedSpeechEndHostTime:(unsigned long long)arg4 errorCodeOverride:(long long)arg5 underlyingError:(id)arg6;	// IMP=0x00000000000e7fb1
- (void)speechControllerDidStopRecording:(id)arg1 audioDeviceInfo:(id)arg2 forReason:(long long)arg3 estimatedSpeechEndHostTime:(unsigned long long)arg4;	// IMP=0x00000000000e7c53
- (void)speechControllerDidDeliverLastBuffer:(id)arg1 forReason:(long long)arg2 estimatedSpeechEndHostTime:(unsigned long long)arg3;	// IMP=0x00000000000e7ad5
- (void)_speechControllerDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000000e6f11
- (void)speechControllerDidStartRecording:(id)arg1 audioDeviceInfo:(id)arg2 successfully:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000000e6cec
- (id)_recordingInfoForEvent:(long long)arg1 audioAlertStyle:(long long)arg2 includeBTInfo:(_Bool)arg3 includeRecordDeviceInfo:(_Bool)arg4;	// IMP=0x00000000000e6882
- (id)_currentRecordingInfo;	// IMP=0x00000000000e6824
- (void)_updateAudioDeviceInfo:(id)arg1 forReason:(id)arg2 forcesUpdate:(_Bool)arg3;	// IMP=0x00000000000e6278
- (id)_currentPlaybackRoute;	// IMP=0x00000000000e6219
- (id)_currentRecordDeviceInfo;	// IMP=0x00000000000e61ba
- (id)_currentRecordRoute;	// IMP=0x00000000000e616a
- (void)updateServerEndpointFeatures:(id)arg1;	// IMP=0x00000000000e60f8
- (void)playRecordingStartAlert;	// IMP=0x00000000000e5ee9
- (void)getLastStartpointTimestampAndCurrentTime:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e5e39
- (void)setClientConfiguration:(id)arg1;	// IMP=0x00000000000e5d2f
- (id)_speechRecordingEventListener;	// IMP=0x00000000000e5cc6
- (void)setSpeechRecordingEventListeningEndpoint:(id)arg1;	// IMP=0x00000000000e5be1
- (void)disableSpeechPacketGeneration:(_Bool)arg1;	// IMP=0x00000000000e5bd5
- (void)setIsDriving:(_Bool)arg1;	// IMP=0x00000000000e5bc9
- (void)setAudioFileHandle:(id)arg1;	// IMP=0x00000000000e5bb5
- (void)setAudioFileType:(long long)arg1;	// IMP=0x00000000000e5ba8
- (void)forceSuccessAudioAlertOnStop;	// IMP=0x00000000000e5b14
- (void)setFingerprintingEnabled:(_Bool)arg1;	// IMP=0x00000000000e5a9a
- (void)cancelSpeechCaptureSuppressingAlert:(_Bool)arg1;	// IMP=0x00000000000e59d3
- (void)stopSpeechCaptureForEvent:(long long)arg1 suppressAlert:(_Bool)arg2 hostTime:(unsigned long long)arg3;	// IMP=0x00000000000e588f
- (void)setFingerprintWasRecognized;	// IMP=0x00000000000e57fb
- (void)setSpeechWasRecognizedForElapsedTime:(double)arg1 isFinal:(_Bool)arg2;	// IMP=0x00000000000e567b
- (void)releaseAudioSession;	// IMP=0x00000000000e529d
- (void)setDelegate:(id)arg1;	// IMP=0x00000000000e528c
- (_Bool)_updateAudioContextWithPendingInfoForReason:(id)arg1;	// IMP=0x00000000000e5102
- (_Bool)_updateAudioContextToPostVoiceForReason:(id)arg1;	// IMP=0x00000000000e4fe9
- (_Bool)_setAudioContextWithInfo:(id)arg1 forReason:(id)arg2;	// IMP=0x00000000000e4cad
- (void)_updateAudioContextWithInfo:(id)arg1 reason:(id)arg2;	// IMP=0x00000000000e4b6e
- (void)setSpeechRequestOptions:(id)arg1;	// IMP=0x00000000000e47c2
- (void)_logAudioMetrics:(id)arg1 mhUUID:(id)arg2;	// IMP=0x00000000000e440c
- (void)_logVoiceTriggerInfo:(id)arg1 withMHUUID:(id)arg2;	// IMP=0x00000000000e4406
- (void)_logBluetoothStateWithMHUUID:(id)arg1;	// IMP=0x00000000000e413d
- (id)_getFanInfoArray;	// IMP=0x00000000000e4124
- (void)_logFanState;	// IMP=0x00000000000e411e
- (id)fetchAudioDeviceInfo;	// IMP=0x00000000000e40ad
- (id)fetchRecordingInfo;	// IMP=0x00000000000e4085
- (unsigned int)_audioSessionID;	// IMP=0x00000000000e3f85
- (unsigned int)fetchAudioSessionID;	// IMP=0x00000000000e3f5d
- (void)updateSpeechSynthesisRecord:(id)arg1;	// IMP=0x00000000000e3e2d
- (_Bool)startSpeechCaptureWithContext:(id)arg1 willStartHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x00000000000e28c8
- (void)prepareForMode:(long long)arg1;	// IMP=0x00000000000e2760
- (void)suspendAutomaticEndpointingInRange:(struct AFTimeRange)arg1;	// IMP=0x00000000000e2746
- (id)currentVTSatScore;	// IMP=0x00000000000e260c
- (id)recordingInfoForPreheatWithEvent:(long long)arg1;	// IMP=0x00000000000e2538
- (_Bool)prepareSpeechCaptureWithOptions:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000e24d4
- (void)preheatWithOption:(id)arg1;	// IMP=0x00000000000e1ea2
- (void)preheat;	// IMP=0x00000000000e1e8e
- (void)eagerlyInitializeAudioRecording;	// IMP=0x00000000000e1dea
- (void)_stopRecordingForEndpointReason:(CDUnion_e15ec660)arg1;	// IMP=0x00000000000e1ce5
- (void)_cancelExtendedEndpointTimer;	// IMP=0x00000000000e1cdf
- (void)_scheduleExtendedEndpointTimer;	// IMP=0x00000000000e1cd9
- (void)_setEndpointStyle:(long long)arg1;	// IMP=0x00000000000e1b8d
- (void)_setupAudioFileWritingForSpeechController:(id)arg1 info:(id)arg2 context:(id)arg3;	// IMP=0x00000000000e106d
- (_Bool)_checkAudioLoggingLimits:(id)arg1;	// IMP=0x00000000000e0e8e
- (void)_playAudioAlert:(long long)arg1;	// IMP=0x00000000000e0c24
- (int)_mapInstrumentationEndpointTypeFromStopRecordingReason:(CDUnion_e15ec660)arg1;	// IMP=0x00000000000e0b72
- (_Bool)_shouldEmitInstrumentation;	// IMP=0x00000000000e0b3b
- (void)_disableEndpointer;	// IMP=0x00000000000e0a7d
- (void)_stopRecordingWithReason:(CDUnion_e15ec660)arg1 hostTime:(unsigned long long)arg2;	// IMP=0x00000000000e017b
- (_Bool)_prepareSpeechControllerWithOptions:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000000dfc40
- (id)_fingerprinter;	// IMP=0x00000000000dfb5a
- (void)_resetSpeechController;	// IMP=0x00000000000df9d3
- (id)_speechControllerWithError:(id *)arg1;	// IMP=0x00000000000df46c
- (id)_speechController;	// IMP=0x00000000000df458
- (void)_updateRecordBufferDuration;	// IMP=0x00000000000df367
- (void)_setAlertsIfNeeded;	// IMP=0x00000000000deb8f
- (void)_setEndpointerOperationMode:(long long)arg1 forceUpdate:(_Bool)arg2;	// IMP=0x00000000000de8dc
- (void)_setSpeechCapturingMode:(long long)arg1;	// IMP=0x00000000000de812
- (id)_currentMHUUID:(_Bool)arg1;	// IMP=0x00000000000de6fd
- (void)dealloc;	// IMP=0x00000000000de683
- (id)initWithQueue:(id)arg1 speechController:(id)arg2 audioSessionController:(id)arg3 audioPlaybackService:(id)arg4 experimentContext:(id)arg5;	// IMP=0x00000000000de304

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
