//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFQueue, AFVoiceInfo, NSMutableArray, NSMutableDictionary, NSString, SRPowerLevelListener, VSSpeechSynthesizer;
@protocol OS_dispatch_group, OS_dispatch_queue, SRTTSManagerClientStateManagerDelegate, SRTTSManagerDelegate;

@interface SRTTSManager : NSObject
{
    VSSpeechSynthesizer *_synthesizer;	// 8 = 0x8
    AFVoiceInfo *_outputVoice;	// 16 = 0x10
    NSMutableDictionary *_availableVoicesForLanguage;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_processingTasksQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_pendingTasksQueue;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_pendingTasksGroup;	// 48 = 0x30
    SRPowerLevelListener *_powerLevelListener;	// 56 = 0x38
    unsigned int _audioSessionID;	// 64 = 0x40
    id <SRTTSManagerDelegate> _delegate;	// 72 = 0x48
    id <SRTTSManagerClientStateManagerDelegate> _clientStateManagerDelegate;	// 80 = 0x50
    AFQueue *_taskQueue;	// 88 = 0x58
    NSMutableArray *_activeTasks;	// 96 = 0x60
    NSMutableDictionary *_delayedTasks;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x002000000007e095
@property(readonly, nonatomic, getter=_delayedTasks) NSMutableDictionary *delayedTasks; // @synthesize delayedTasks=_delayedTasks;
@property(readonly, nonatomic, getter=_activeTasks) NSMutableArray *activeTasks; // @synthesize activeTasks=_activeTasks;
@property(readonly, nonatomic, getter=_taskQueue) AFQueue *taskQueue; // @synthesize taskQueue=_taskQueue;
@property(nonatomic) unsigned int audioSessionID; // @synthesize audioSessionID=_audioSessionID;
@property(nonatomic) __weak id <SRTTSManagerClientStateManagerDelegate> clientStateManagerDelegate; // @synthesize clientStateManagerDelegate=_clientStateManagerDelegate;
@property(nonatomic) __weak id <SRTTSManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)powerLevelListener:(id)arg1 powerLevelDidUpdateTo:(float)arg2;	// IMP=0x001000000007dfdc
- (void)_setSynthesizer:(id)arg1;	// IMP=0x001000000007dfcb
- (void)_processProvisionalTasks;	// IMP=0x001000000007ddaf
- (id)_filterVoices:(id)arg1 gender:(id)arg2;	// IMP=0x001000000007db0a
- (long long)_genderForString:(id)arg1;	// IMP=0x001000000007da76
- (void)_findVoiceForLanguage:(id)arg1 gender:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007d675
- (id)_activeTaskWithSpeechRequest:(id)arg1;	// IMP=0x001000000007d4b8
- (id)_activeTaskWithPresynthesizedAudioRequest:(id)arg1;	// IMP=0x001000000007d2d6
- (void)_processTaskQueue;	// IMP=0x001000000007cb3d
- (void)_handleText:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007b2e0
- (void)_handleAudioData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000007ad3e
- (void)processDelayedItem:(id)arg1;	// IMP=0x001000000007ac46
- (void)enqueueText:(id)arg1 identifier:(id)arg2 sessionId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000007abe8
- (void)_enqueueText:(id)arg1 audioData:(id)arg2 identifier:(id)arg3 sessionId:(id)arg4 language:(id)arg5 gender:(id)arg6 isPhonetic:(_Bool)arg7 provisionally:(_Bool)arg8 eligibleAfterDuration:(double)arg9 delayed:(_Bool)arg10 canUseServerTTS:(_Bool)arg11 preparationIdentifier:(id)arg12 shouldCache:(_Bool)arg13 completion:(CDUnknownBlockType)arg14 analyticsContext:(id)arg15 speakableContextInfo:(id)arg16;	// IMP=0x001000000007a536
- (void)enqueuePhaticWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000007a3e9
- (void)enqueueAudioData:(id)arg1 identifier:(id)arg2 sessionId:(id)arg3 provisionally:(_Bool)arg4 eligibleAfterDuration:(double)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000007a386
- (void)enqueueText:(id)arg1 identifier:(id)arg2 sessionId:(id)arg3 language:(id)arg4 gender:(id)arg5 isPhonetic:(_Bool)arg6 provisionally:(_Bool)arg7 eligibleAfterDuration:(double)arg8 delayed:(_Bool)arg9 canUseServerTTS:(_Bool)arg10 preparationIdentifier:(id)arg11 completion:(CDUnknownBlockType)arg12 analyticsContext:(id)arg13 speakableContextInfo:(id)arg14;	// IMP=0x001000000007a2f2
- (void)setOutputVoice:(id)arg1;	// IMP=0x001000000007a1d2
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 withInstrumentMetrics:(id)arg3;	// IMP=0x0010000000079a7b
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(_Bool)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;	// IMP=0x001000000007911b
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;	// IMP=0x0010000000078ec9
- (void)speechSynthesizer:(id)arg1 didFinishPresynthesizedAudioRequest:(id)arg2 withInstrumentMetrics:(id)arg3 error:(id)arg4;	// IMP=0x00100000000788ee
- (void)speechSynthesizer:(id)arg1 didStopPresynthesizedAudioRequest:(id)arg2 atEnd:(_Bool)arg3 error:(id)arg4;	// IMP=0x00100000000787d1
- (void)speechSynthesizer:(id)arg1 didStartPresynthesizedAudioRequest:(id)arg2;	// IMP=0x0010000000078622
- (void)ttsTaskEligibilityDidChange:(id)arg1;	// IMP=0x0010000000078562
- (void)queue:(id)arg1 didEnqueueObjects:(id)arg2;	// IMP=0x0010000000078550
- (void)invalidate;	// IMP=0x001000000007849a
- (void)invalidateOnMainThread;	// IMP=0x0010000000078488
- (void)_cancelByCancellingActiveTasksOnly:(_Bool)arg1;	// IMP=0x001000000007813f
- (void)skipCurrentSynthesis;	// IMP=0x0010000000078128
- (void)cancel;	// IMP=0x0010000000078114
- (_Bool)_isSynthesisQueueEmpty;	// IMP=0x0010000000078084
- (void)isSynthesisQueueEmpty:(CDUnknownBlockType)arg1;	// IMP=0x0010000000077f45
- (_Bool)isSpeaking;	// IMP=0x0010000000077f2f
- (void)prewarmIfNeeded;	// IMP=0x0010000000077e1b
- (id)_synthesizer;	// IMP=0x0010000000077d83
- (id)init;	// IMP=0x0010000000077b87

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

