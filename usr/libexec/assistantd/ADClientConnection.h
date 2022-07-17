//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFClientConfiguration, AFInstanceContext, AFRequestInfo, AFSpeechRequestOptions, AFWatchdogTimer, NSMutableOrderedSet, NSString, NSUUID, NSXPCConnection;
@protocol AFBluetoothDevice, OS_dispatch_group, OS_dispatch_queue, OS_os_transaction;

@interface ADClientConnection : NSObject
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    AFRequestInfo *_requestInfo;	// 24 = 0x18
    AFSpeechRequestOptions *_requestOptions;	// 32 = 0x20
    CDUnknownBlockType _requestCompletion;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_requestGroup;	// 48 = 0x30
    NSUUID *_requestUUID;	// 56 = 0x38
    AFClientConfiguration *_clientConfiguration;	// 64 = 0x40
    unsigned long long _pendingRequestId;	// 72 = 0x48
    double _pendingRequestTimestamp;	// 80 = 0x50
    CDUnknownBlockType _pendingSpeechRequestContinue;	// 88 = 0x58
    long long _numberOfPresentedUIs;	// 96 = 0x60
    CDUnknownBlockType _presentedUIReply;	// 104 = 0x68
    NSObject<OS_os_transaction> *_presentedUITransaction;	// 112 = 0x70
    int _ringerStateToken;	// 120 = 0x78
    _Bool _hasCachedADShouldSpeak;	// 124 = 0x7c
    _Bool _cachedADShouldSpeak;	// 125 = 0x7d
    _Bool _requestOptionsRequireTTS;	// 126 = 0x7e
    _Bool _serverIsForcingTTS;	// 127 = 0x7f
    _Bool _combinedShouldSpeakState;	// 128 = 0x80
    _Bool _isConnected;	// 129 = 0x81
    id <AFBluetoothDevice> _bluetoothDevice;	// 136 = 0x88
    NSMutableOrderedSet *_audioSessionAssertions;	// 144 = 0x90
    NSMutableOrderedSet *_speechCapturingContexts;	// 152 = 0x98
    AFWatchdogTimer *_longLivedConnectionABCTimer;	// 160 = 0xa0
    AFInstanceContext *_instanceContext;	// 168 = 0xa8
    _Bool adSpeechSessionEnded;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00200000002659be
@property(nonatomic) _Bool adSpeechSessionEnded; // @synthesize adSpeechSessionEnded;
- (void)_continuePendingSpeechRequestFromTimestamp:(double)arg1;	// IMP=0x00100000002658d5
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000002657d8
- (oneway void)recordUIMetrics:(id)arg1;	// IMP=0x00100000002657d2
- (oneway void)_refreshAssistantValidation;	// IMP=0x001000000026578e
- (oneway void)_startSpeechWithURL:(id)arg1 isNarrowBand:(_Bool)arg2;	// IMP=0x001000000026570d
- (oneway void)_requestBarrierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000265697
- (oneway void)_barrierWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000026568c
- (oneway void)_clearAssistantInfoForAccountIdentifier:(id)arg1;	// IMP=0x001000000026561d
- (oneway void)_fetchAppContextForApplicationInfo:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000026548f
- (oneway void)_broadcastCommandDictionary:(id)arg1;	// IMP=0x00100000002653a5
- (oneway void)_performTaskCommandDictionary:(id)arg1 forBundleIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000264f29
- (oneway void)_performCommandDictionary:(id)arg1 forBundleIdentifier:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000264a3d
- (oneway void)_sendLargeData:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000264a28
- (oneway void)_pingServiceForIdentifier:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x0010000000264835
- (oneway void)_listInstalledServicesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000002647bf
- (oneway void)adviseSessionArbiterToContinueWithPreviousWinner:(_Bool)arg1;	// IMP=0x001000000026476c
- (oneway void)reportIssueForType:(id)arg1 subtype:(id)arg2 context:(id)arg3;	// IMP=0x001000000026461d
- (oneway void)reportIssueForError:(id)arg1 type:(long long)arg2 subtype:(id)arg3 context:(id)arg4;	// IMP=0x0010000000264517
- (oneway void)reportIssueForError:(id)arg1 type:(long long)arg2 context:(id)arg3;	// IMP=0x0010000000264439
- (oneway void)updateSpeechSynthesisRecord:(id)arg1;	// IMP=0x00100000002643c3
- (oneway void)stopAllAudioPlaybackRequests:(_Bool)arg1;	// IMP=0x001000000026434b
- (oneway void)stopAudioPlaybackRequest:(id)arg1 immediately:(_Bool)arg2;	// IMP=0x00100000002642b1
- (oneway void)startAudioPlaybackRequest:(id)arg1 options:(unsigned long long)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x00100000002641ff
- (oneway void)getRemoteClockTimerSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000263ec1
- (oneway void)getSerializedCachedObjectsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000263a31
- (oneway void)getDeferredObjectsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002639a7
- (oneway void)recordAWDSuccessMetrics;	// IMP=0x0010000000263963
- (oneway void)recordCancellationMetrics;	// IMP=0x001000000026391f
- (oneway void)recordFailureMetricsForError:(id)arg1;	// IMP=0x00100000002638a9
- (oneway void)telephonyRequestCompleted;	// IMP=0x0010000000263865
- (oneway void)prepareForPhoneCall;	// IMP=0x0010000000263821
- (oneway void)setAlertContextDirty;	// IMP=0x00100000002637dd
- (oneway void)setOverriddenApplicationContext:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000263753
- (oneway void)setApplicationContextForApplicationInfos:(id)arg1 withRefId:(id)arg2;	// IMP=0x001000000026373c
- (oneway void)fetchAppicationContextForApplicationInfo:(id)arg1 supplementalContext:(id)arg2 refID:(id)arg3;	// IMP=0x001000000026369b
- (oneway void)setApplicationContext:(id)arg1;	// IMP=0x0010000000263625
- (oneway void)willSetApplicationContextWithRefId:(id)arg1;	// IMP=0x00100000002635af
- (oneway void)rollbackClearContext;	// IMP=0x00100000002634df
- (oneway void)clearContext;	// IMP=0x00100000002633fc
- (oneway void)performGenericAceCommand:(id)arg1 interruptOutstandingRequest:(_Bool)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x0010000000263359
- (oneway void)requestStateUpdateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000263253
- (oneway void)requestShouldSpeakStateWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000002631fb
- (oneway void)stopSpeechWithOptions:(id)arg1;	// IMP=0x00100000002630e9
- (oneway void)cancelSpeech;	// IMP=0x0010000000263002
- (oneway void)rollbackRequest;	// IMP=0x0010000000262f2b
- (oneway void)cancelRequestForReason:(long long)arg1 withError:(id)arg2;	// IMP=0x0010000000262db4
- (oneway void)updateSpeechOptions:(id)arg1;	// IMP=0x0010000000262ca5
- (oneway void)startAcousticIDRequestWithOptions:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000262bf1
- (oneway void)startSpeechPronunciationRequestWithOptions:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000262b3d
- (oneway void)continuePendingSpeechRequestWithId:(unsigned long long)arg1 fromTimestamp:(double)arg2;	// IMP=0x0010000000262ada
- (oneway void)startRecordingForPendingSpeechRequestWithOptions:(id)arg1 requestId:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000262767
- (oneway void)startRequestWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000026255f
- (void)_setRequestCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002623b7
- (oneway void)willPresentUsefulUserResultAtDate:(id)arg1;	// IMP=0x0010000000262285
- (oneway void)endSession;	// IMP=0x00100000002620d3
- (oneway void)setConfiguration:(id)arg1;	// IMP=0x0010000000261fb8
- (oneway void)didDismissUI;	// IMP=0x0010000000261e4e
- (oneway void)willPresentUIWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000261c16
- (oneway void)setModesConfiguration:(id)arg1;	// IMP=0x0010000000261ba0
- (oneway void)setCarDNDActive:(_Bool)arg1;	// IMP=0x0010000000261b4d
- (oneway void)setLockState:(_Bool)arg1 showingLockScreen:(_Bool)arg2;	// IMP=0x0010000000261af5
- (oneway void)resumeInterruptedAudioPlaybackIfNeeded;	// IMP=0x0010000000261ab1
- (oneway void)forceAudioSessionInactiveWithOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002619e6
- (oneway void)forceAudioSessionActiveWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002617e5
- (oneway void)boostedPreheatWithStyle:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000261767
- (oneway void)preheatWithStyle:(long long)arg1 forOptions:(id)arg2;	// IMP=0x00100000002616e8
- (void)bluetoothDeviceDidInvalidate:(id)arg1;	// IMP=0x001000000026162d
- (void)bluetoothDevice:(id)arg1 headphoneListeningModeDidChangeFrom:(long long)arg2 to:(long long)arg3;	// IMP=0x0010000000261550
- (void)bluetoothDevice:(id)arg1 headphoneInEarDetectionStateDidChangeFrom:(id)arg2 to:(id)arg3;	// IMP=0x0010000000260c47
- (void)bluetoothDevice:(id)arg1 deviceInfoDidChangeFrom:(id)arg2 to:(id)arg3;	// IMP=0x0010000000260b42
- (void)audioPlaybackService:(id)arg1 didStopRequest:(id)arg2 error:(id)arg3;	// IMP=0x0010000000260a35
- (void)audioPlaybackService:(id)arg1 didStartRequest:(id)arg2;	// IMP=0x0010000000260959
- (void)audioPlaybackService:(id)arg1 willStartRequest:(id)arg2;	// IMP=0x001000000026087d
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerResetNotification:(id)arg2;	// IMP=0x00100000002606e0
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionOwnerLostNotification:(id)arg2;	// IMP=0x00100000002605b3
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereResetNotificationWithUserInfo:(id)arg2;	// IMP=0x0010000000260416
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionMediaServicesWereLostNotificationWithUserInfo:(id)arg2;	// IMP=0x00100000002602e9
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionRouteChangeNotificationWithUserInfo:(id)arg2;	// IMP=0x0010000000260240
- (void)audioSessionController:(id)arg1 didReceiveAudioSessionInterruptionNotificationWithUserInfo:(id)arg2;	// IMP=0x001000000025fff7
- (void)adShouldSpeakStateDidChange:(_Bool)arg1;	// IMP=0x001000000025ff6e
- (void)_logShouldSpeakState:(_Bool)arg1;	// IMP=0x001000000025ff11
- (_Bool)adWaitingForAudioFile;	// IMP=0x000000000025ff09
- (void)adSpeechRecordingPerformTwoShotPromptWithType:(long long)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000025fb9b
- (void)adSpeechRecordingDidDetectStartPointWithContext:(id)arg1;	// IMP=0x001000000025f8dd
- (void)adSpeechLocalRecognitionDidSucceedWithSessionUUID:(id)arg1;	// IMP=0x001000000025f8d7
- (void)adSpeechRecognitionDidFail:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x001000000025f7d2
- (void)adSpeechRecognitionWillBeginRecognitionUpdateForTask:(id)arg1;	// IMP=0x001000000025f6f6
- (void)adSpeechRecordingDidRecognizePhrases:(id)arg1 utterances:(id)arg2 sessionUUID:(id)arg3 refId:(id)arg4;	// IMP=0x001000000025f6f0
- (void)adSpeechRecordingDidRecognizeTokens:(id)arg1 sessionUUID:(id)arg2;	// IMP=0x001000000025f6ea
- (void)adSpeechRecognizedPartialResult:(id)arg1;	// IMP=0x001000000025f577
- (void)adSpeechRecognized:(id)arg1 usingSpeechModel:(id)arg2 sessionUUID:(id)arg3;	// IMP=0x001000000025f404
- (void)adSpeechRecordingWillStopWithSignpostID:(unsigned long long)arg1;	// IMP=0x001000000025f1ae
- (void)adSpeechRecordingDidFail:(id)arg1 context:(id)arg2;	// IMP=0x001000000025ede4
- (void)adSpeechRecordingDidCancelWithContext:(id)arg1;	// IMP=0x001000000025ea74
- (void)adSpeechRecordingDidEndWithContext:(id)arg1;	// IMP=0x001000000025e704
- (void)adSpeechRecordingDidChangeAVRecordRoute:(id)arg1 bluetoothDevice:(id)arg2 isDucking:(_Bool)arg3 isTwoShot:(_Bool)arg4 speechEndHostTime:(unsigned long long)arg5 context:(id)arg6;	// IMP=0x001000000025e33e
- (void)adSpeechRecordingDidBeginOnAVRecordRoute:(id)arg1 audioSessionID:(unsigned int)arg2 bluetoothDevice:(id)arg3 sessionRequestUUID:(id)arg4 dictationOptions:(id)arg5 context:(id)arg6;	// IMP=0x001000000025dee9
- (void)adSpeechRecordingWillBeginWithInputAudioPowerXPCWrapper:(id)arg1 context:(id)arg2;	// IMP=0x001000000025dba1
- (void)_updateShouldSpeak;	// IMP=0x001000000025da82
- (_Bool)_shouldSpeak;	// IMP=0x001000000025da5f
- (void)_computeShouldSpeak;	// IMP=0x001000000025d893
- (void)_unregisterForRingerStateNotification;	// IMP=0x001000000025d86f
- (void)_registerForRingerStateNotification;	// IMP=0x001000000025d7b6
- (void)_setServerForcedTTS:(_Bool)arg1;	// IMP=0x001000000025d773
- (void)_setRequestOptionsRequireTTS:(_Bool)arg1;	// IMP=0x001000000025d75e
- (void)_setADShouldSpeak:(_Bool)arg1;	// IMP=0x001000000025d745
- (void)adFailedToLaunchAppWithBundleIdentifier:(id)arg1;	// IMP=0x001000000025d669
- (void)adWillProcessAppLaunchWithBundleIdentifier:(id)arg1;	// IMP=0x001000000025d58d
- (void)adAudioSessionDidBecomeActive:(_Bool)arg1;	// IMP=0x001000000025d4ed
- (void)adAudioSessionWillBecomeActive:(_Bool)arg1;	// IMP=0x001000000025d44d
- (void)adRequestWillProcessStartPlayback:(long long)arg1 intent:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000025d24c
- (void)adRequestDidHandleFailedStartPlayback:(long long)arg1;	// IMP=0x001000000025d1ac
- (void)adServerRequestsTTSStateUnmuted:(_Bool)arg1;	// IMP=0x001000000025d141
- (void)adAceConnectionWillRetryOnError:(id)arg1;	// IMP=0x001000000025d065
- (void)adInvalidateCurrentUserActivity;	// IMP=0x001000000025cfd9
- (void)adSetUserActivityInfo:(id)arg1 webpageURL:(id)arg2;	// IMP=0x001000000025cecc
- (void)adAcousticIDRequestDidFinishSuccessfully:(_Bool)arg1;	// IMP=0x001000000025ce2c
- (void)adMusicWasDetected;	// IMP=0x001000000025cda0
- (void)adAcousticIDRequestWillStart;	// IMP=0x001000000025cd14
- (void)adQuickStopWasHandledWithActions:(unsigned long long)arg1;	// IMP=0x001000000025cc74
- (void)adRequestRequestedDismissAssistantWithReason:(long long)arg1;	// IMP=0x001000000025cbd4
- (void)adRequestRequestedDismissAssistant;	// IMP=0x001000000025cb48
- (void)adExtensionRequestFinishedForApplication:(id)arg1 error:(id)arg2;	// IMP=0x001000000025ca3b
- (void)adExtensionRequestWillStartForApplication:(id)arg1;	// IMP=0x001000000025c95f
- (void)adWantsToCacheImage:(id)arg1;	// IMP=0x001000000025c833
- (_Bool)adTextToSpeechIsMuted;	// IMP=0x001000000025c734
- (void)adGetBulletinContext:(CDUnknownBlockType)arg1;	// IMP=0x001000000025c59c
- (void)adRequestRequestedOpenURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000025c3bf
- (void)adRequestRequestedOpenApplicationWithBundleID:(id)arg1 URL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000025c1ca
- (void)adStartUIRequestWithText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000025bf9d
- (void)adRequestEncounteredIntermediateError:(id)arg1;	// IMP=0x001000000025be97
- (void)adRequestDidCompleteWithSuccess:(_Bool)arg1 error:(id)arg2;	// IMP=0x001000000025bae9
- (void)_handleRequestCompletedWithUUID:(id)arg1 error:(id)arg2;	// IMP=0x001000000025b8c6
- (void)adRequestDidReceiveCommand:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x001000000025b453
- (void)adRequestWillReceiveCommand:(id)arg1;	// IMP=0x001000000025b37c
- (void)_removeAllAudioSessionAssertionsForReason:(id)arg1;	// IMP=0x001000000025ae66
- (void)_addAudioSessionAssertion:(id)arg1;	// IMP=0x001000000025ad63
- (void)_removeAllSpeechCapturingContextsForReason:(id)arg1;	// IMP=0x001000000025a9b9
- (void)_addSpeechCapturingContext:(id)arg1;	// IMP=0x001000000025a8b6
- (void)_setBluetoothDevice:(id)arg1;	// IMP=0x001000000025a7aa
- (void)_speechRecordingDidFinish;	// IMP=0x001000000025a718
- (void)_updateSpeechRequestOptions:(id)arg1;	// IMP=0x001000000025a4c0
- (id)_serviceDelegateWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000025a428
- (id)_serviceDelegate;	// IMP=0x001000000025a412
- (void)connectionDisconnected;	// IMP=0x001000000025a0e0
- (void)dealloc;	// IMP=0x0010000000259f9e
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x0010000000259b69

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
