//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFNetworkAvailabilityObserver-Protocol.h>

@class AFAnalyticsEvent, AFAnalyticsTurnBasedInstrumentationContext, AFAudioPowerUpdater, AFCallSiteInfo, AFInstanceContext, AFSpeechRequestOptions, NSArray, NSMutableData, NSSet, NSString, NSXPCConnection;
@protocol AFDictationDelegate, OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface AFDictationConnection : NSObject <AFNetworkAvailabilityObserver>
{
    NSXPCConnection *_connection;	// 8 = 0x8
    NSString *_lastUsedLanguage;	// 16 = 0x10
    NSSet *_knownOfflineInstalledLanguages;	// 24 = 0x18
    _Bool _isWaitingForKnownOfflineInstalledLanguages;	// 32 = 0x20
    id <AFDictationDelegate> _delegate;	// 40 = 0x28
    AFCallSiteInfo *_initiationCallSiteInfo;	// 48 = 0x30
    AFAudioPowerUpdater *_inputAudioPowerUpdater;	// 56 = 0x38
    _Bool _isCapturingSpeech;	// 64 = 0x40
    _Bool _hasActiveRequest;	// 65 = 0x41
    _Bool _isWaitingForAudioFile;	// 66 = 0x42
    _Bool _recognizingIncrementally;	// 67 = 0x43
    NSObject<OS_dispatch_group> *_speechCallbackGroup;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_internalQueue;	// 80 = 0x50
    NSObject<OS_dispatch_source> *_timeoutTimer;	// 88 = 0x58
    NSObject<OS_dispatch_source> *_bufferTimer;	// 96 = 0x60
    _Bool _forceOfflineRecognition;	// 104 = 0x68
    AFSpeechRequestOptions *_stopOptions;	// 112 = 0x70
    NSMutableData *_buffer;	// 120 = 0x78
    double _audioStartTime;	// 128 = 0x80
    double _amountDataSent;	// 136 = 0x88
    _Bool _narrowband;	// 144 = 0x90
    NSString *_requestIdString;	// 152 = 0x98
    NSArray *_previouslyRecognizedPhrases;	// 160 = 0xa0
    NSString *_onDeviceDictationUIInteractionIdentifier;	// 168 = 0xa8
    AFInstanceContext *_instanceContext;	// 176 = 0xb0
    AFAnalyticsEvent *_preheatEvent;	// 184 = 0xb8
    AFAnalyticsTurnBasedInstrumentationContext *_intstrumentationContext;	// 192 = 0xc0
    _Bool _isDetectingUtterances;	// 200 = 0xc8
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 208 = 0xd0
}

+ (void)fetchSupportedLanguageCodes:(CDUnknownBlockType)arg1;	// IMP=0x000000000008bc7f
+ (_Bool)dictationIsSupportedForLanguageCode:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008bb04
+ (_Bool)dictationIsEnabled;	// IMP=0x000000000008ba65
+ (_Bool)languageDetectorIsEnabled;	// IMP=0x000000000008a448
+ (void)getForcedOfflineDictationSupportedLanguagesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000008a1b0
- (void).cxx_destruct;	// IMP=0x000000000008ec82
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <AFDictationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportIssueForError:(id)arg1 eventType:(long long)arg2 subtype:(id)arg3 context:(id)arg4;	// IMP=0x000000000008eb88
- (void)reportIssueForError:(id)arg1 eventType:(long long)arg2 context:(id)arg3;	// IMP=0x000000000008eaf1
- (void)_cancelTimerClearBuffer;	// IMP=0x000000000008ea9f
- (void)_cancelBufferFlushTimer;	// IMP=0x000000000008ea60
- (void)_updateBufferFlushTimerWithDelay:(double)arg1;	// IMP=0x000000000008e858
- (id)_dequeueAudioWithLength:(unsigned long long)arg1;	// IMP=0x000000000008e7f0
- (void)_sendDataIfNeeded;	// IMP=0x000000000008e45d
- (void)requestOfflineDictationSupportForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008e350
- (void)requestOfflineAssistantSupportForLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008e243
- (void)endSession;	// IMP=0x000000000008e111
- (float)peakPower;	// IMP=0x000000000008e0fb
- (float)averagePower;	// IMP=0x000000000008e0e5
- (void)sendUserSelectedAlternativeDictationLanguageCode:(id)arg1;	// IMP=0x000000000008df94
- (void)sendSpeechCorrection:(id)arg1 interactionIdentifier:(id)arg2;	// IMP=0x000000000008de87
- (void)sendSpeechCorrection:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x000000000008dd7a
- (void)updateSpeechOptions:(id)arg1;	// IMP=0x000000000008dba3
- (void)stopSpeech;	// IMP=0x000000000008db8f
- (void)_delayedStopSpeechWithOptions:(id)arg1;	// IMP=0x000000000008da20
- (void)stopSpeechWithOptions:(id)arg1;	// IMP=0x000000000008d7d1
- (void)cancelSpeech;	// IMP=0x000000000008d64c
- (void)addRecordedSpeechSampleData:(id)arg1;	// IMP=0x000000000008d537
- (void)startRecordedAudioDictationWithOptions:(id)arg1 forLanguage:(id)arg2 narrowband:(_Bool)arg3 forceSampling:(_Bool)arg4;	// IMP=0x000000000008d189
- (void)startRecordedAudioDictationWithOptions:(id)arg1 forLanguage:(id)arg2 narrowband:(_Bool)arg3;	// IMP=0x000000000008d174
- (void)startRecordedAudioDictationWithOptions:(id)arg1 forLanguage:(id)arg2;	// IMP=0x000000000008d15c
- (void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2;	// IMP=0x000000000008d147
- (void)startDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3;	// IMP=0x000000000008cc3e
- (CDUnknownBlockType)startRecordingForPendingDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3;	// IMP=0x000000000008c052
- (void)_setActivationTimeOnOptionsIfNecessary:(id)arg1;	// IMP=0x000000000008bf04
- (void)preheatWithRecordDeviceIdentifier:(id)arg1;	// IMP=0x000000000008bd8d
- (void)preheat;	// IMP=0x000000000008bd17
- (void)preheatForLanguageCode:(id)arg1;	// IMP=0x000000000008bd11
- (void)_sendPendingAnalyticsEvents;	// IMP=0x000000000008b96e
- (void)_addPreheatAnalyticsEvent;	// IMP=0x000000000008b937
- (void)_willCompleteDictation;	// IMP=0x000000000008b746
- (void)_willFailDictationWithError:(id)arg1;	// IMP=0x000000000008b341
- (void)_willCancelDictation;	// IMP=0x000000000008b1ab
- (void)_LogUEIRequestCategorization:(int)arg1;	// IMP=0x000000000008b14f
- (void)_logRequestCompetionStatusWithEventType:(long long)arg1 error:(id)arg2;	// IMP=0x000000000008af81
- (void)_willStartDictationWithLanguageCode:(id)arg1 options:(id)arg2 speechOptions:(id)arg3 machAbsoluteTime:(unsigned long long)arg4;	// IMP=0x000000000008a5c5
- (void)cancelAvailabilityMonitoring;	// IMP=0x000000000008a572
- (void)beginAvailabilityMonitoring;	// IMP=0x000000000008a51f
- (void)networkAvailability:(id)arg1 isAvailable:(_Bool)arg2;	// IMP=0x000000000008a4be
- (void)_availabilityChanged;	// IMP=0x000000000008a4ac
- (_Bool)forcedOfflineDictationIsAvailableForLanguage:(id)arg1 synchronous:(_Bool)arg2;	// IMP=0x0000000000089a32
- (_Bool)forcedOfflineDictationIsAvailableForLanguage:(id)arg1;	// IMP=0x0000000000089a1b
- (_Bool)dictationIsAvailableForLanguage:(id)arg1 synchronous:(_Bool)arg2;	// IMP=0x000000000008985f
- (_Bool)dictationIsAvailableForLanguage:(id)arg1;	// IMP=0x000000000008984b
- (void)_stopInputAudioPowerUpdates;	// IMP=0x000000000008976d
- (void)_startInputAudioPowerUpdatesWithXPCWrapper:(id)arg1;	// IMP=0x0000000000089626
- (void)_extendRequestTimeout;	// IMP=0x00000000000895e1
- (void)_invokeRequestTimeout;	// IMP=0x000000000008951a
- (void)_cancelRequestTimeout;	// IMP=0x00000000000894f1
- (void)_scheduleRequestTimeout;	// IMP=0x0000000000089407
- (id)_dictationServiceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000089384
- (id)_dictationService;	// IMP=0x0000000000089334
- (id)_connection;	// IMP=0x0000000000089067
- (void)_registerInvalidationHandlerForXPCConnection:(id)arg1;	// IMP=0x0000000000088f13
- (void)_clearConnection;	// IMP=0x0000000000088eb9
- (void)_connectionClearedForInterruption:(_Bool)arg1;	// IMP=0x0000000000088ca7
- (void)_tellSpeechDelegateDidBeginLocalRecognitionWithModelInfo:(id)arg1;	// IMP=0x0000000000088b32
- (void)_tellSpeechDelegateLanguageDetectorDidFail:(id)arg1;	// IMP=0x00000000000889d3
- (void)_tellSpeechDelegateMultilingualSpeechRecognized:(id)arg1;	// IMP=0x0000000000088874
- (void)_tellSpeechDelegateLanguageDetected:(id)arg1 confidenceScores:(id)arg2 isConfident:(_Bool)arg3;	// IMP=0x0000000000088699
- (void)_tellSpeechDelegateSearchResultsReceived:(id)arg1 recognitionText:(id)arg2 stable:(_Bool)arg3 final:(_Bool)arg4;	// IMP=0x00000000000884e8
- (void)_tellSpeechDelegateAvailabilityChanged;	// IMP=0x000000000008844a
- (void)_tellSpeechDelegateAudioFileFinished:(id)arg1 error:(id)arg2;	// IMP=0x0000000000088319
- (void)_tellSpeechDelegateSpeechRecognitionDidSucceed;	// IMP=0x00000000000881eb
- (void)_tellSpeechDelegateRecognitionDidFail:(id)arg1;	// IMP=0x0000000000088074
- (void)_tellSpeechDelegateDidRecognizeTranscriptionObjects:(id)arg1 languageModel:(id)arg2;	// IMP=0x0000000000087ed2
- (void)_tellSpeechDelegateDidProcessAudioDuration:(double)arg1;	// IMP=0x0000000000087e29
- (void)_tellSpeechDelegateDidRecognizeSpeechTokens:(id)arg1 languageModel:(id)arg2;	// IMP=0x0000000000087cd2
- (void)_tellSpeechDelegateDidRecognizePartialResult:(id)arg1;	// IMP=0x000000000008795b
- (void)_delegateDidRecognizeSpeechTokens:(id)arg1 languageModel:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000000874db
- (void)_tellSpeechDelegateDidRecognizeSpeechPhrases:(id)arg1 utterances:(id)arg2 languageModel:(id)arg3 correctionIdentifier:(id)arg4 audioAnalytics:(id)arg5;	// IMP=0x000000000008712d
- (void)_tellSpeechDelegateDidRecognizePackage:(id)arg1;	// IMP=0x0000000000086c73
- (void)_tellSpeechDelegateRecordingDidFail:(id)arg1;	// IMP=0x0000000000086b71
- (void)_tellSpeechDelegateRecordingDidCancel;	// IMP=0x0000000000086ad3
- (void)_tellSpeechDelegateRecordingDidEnd;	// IMP=0x0000000000086a35
- (void)_tellSpeechDelegateRecordingDidBeginWithOptions:(id)arg1;	// IMP=0x0000000000086892
- (void)_tellSpeechDelegateRecordingWillBegin;	// IMP=0x00000000000867f4
- (void)_dispatchCallbackGroupBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000008664b
- (void)_dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000000008663a
- (void)_checkAndSetIsCapturingSpeech:(_Bool)arg1;	// IMP=0x00000000000864bd
- (void)dealloc;	// IMP=0x00000000000863f7
- (id)init;	// IMP=0x000000000008639d
- (id)initWithInstanceContext:(id)arg1;	// IMP=0x0000000000086041
- (void)sendEngagementFeedback:(long long)arg1 voiceQueryIdentifier:(id)arg2;	// IMP=0x000000000008f0fa
- (void)startDictationWithSpeechFileAtURL:(id)arg1 isNarrowBand:(_Bool)arg2 options:(id)arg3 forLanguage:(id)arg4;	// IMP=0x000000000008ef65
- (void)startDictationWithSpeechFileAtURL:(id)arg1 options:(id)arg2 forLanguage:(id)arg3;	// IMP=0x000000000008ef4b
- (void)preheatTestWithLanguage:(id)arg1 options:(id)arg2;	// IMP=0x000000000008ed78

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

