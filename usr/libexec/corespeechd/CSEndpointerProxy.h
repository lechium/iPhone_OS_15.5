//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAudioRecordContext, NSString;
@protocol CSEndpointAnalyzerDelegate, CSEndpointAnalyzerImpl, CSEndpointAnalyzerImplDelegate;

@interface CSEndpointerProxy : NSObject
{
    _Bool _recordingDidStop;	// 8 = 0x8
    id <CSEndpointAnalyzerDelegate> _endpointerDelegate;	// 16 = 0x10
    id <CSEndpointAnalyzerImplDelegate> _endpointerImplDelegate;	// 24 = 0x18
    id <CSEndpointAnalyzerImpl> _hybridEndpointer;	// 32 = 0x20
    id <CSEndpointAnalyzerImpl> _nnvadEndpointer;	// 40 = 0x28
    id <CSEndpointAnalyzerImpl> _activeEndpointer;	// 48 = 0x30
    CSAudioRecordContext *_recordContext;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000007abd7
@property(nonatomic) _Bool recordingDidStop; // @synthesize recordingDidStop=_recordingDidStop;
@property(retain, nonatomic) CSAudioRecordContext *recordContext; // @synthesize recordContext=_recordContext;
@property(nonatomic) __weak id <CSEndpointAnalyzerImpl> activeEndpointer; // @synthesize activeEndpointer=_activeEndpointer;
@property(retain, nonatomic) id <CSEndpointAnalyzerImpl> nnvadEndpointer; // @synthesize nnvadEndpointer=_nnvadEndpointer;
@property(retain, nonatomic) id <CSEndpointAnalyzerImpl> hybridEndpointer; // @synthesize hybridEndpointer=_hybridEndpointer;
@property(nonatomic) __weak id <CSEndpointAnalyzerImplDelegate> endpointerImplDelegate; // @synthesize endpointerImplDelegate=_endpointerImplDelegate;
@property(nonatomic) __weak id <CSEndpointAnalyzerDelegate> endpointerDelegate; // @synthesize endpointerDelegate=_endpointerDelegate;
- (void)reset;	// IMP=0x001000000007aaf9
@property(nonatomic) double automaticEndpointingSuspensionEndTime;
@property(nonatomic) double endWaitTime;
@property(nonatomic) double startWaitTime;
@property(readonly, nonatomic) double lastEndOfVoiceActivityTime;
@property(nonatomic) _Bool saveSamplesSeenInReset;
@property(nonatomic) double minimumDurationForEndpointer;
@property(nonatomic) double delay;
@property(nonatomic) double interspeechWaitTime;
@property(nonatomic) long long endpointMode;
@property(nonatomic) long long endpointStyle;
- (long long)fetchCurrentEndpointerOperationMode;	// IMP=0x001000000007aa68
- (void)setEndpointerOperationMode:(long long)arg1;	// IMP=0x001000000007aa52
- (void)processFirstAudioPacketTimestamp:(id)arg1 firstAudioSampleSensorTimestamp:(unsigned long long)arg2;	// IMP=0x001000000007aa3c
- (void)processOSDFeatures:(id)arg1 withFrameDurationMs:(double)arg2;	// IMP=0x001000000007aa26
- (void)logHybridEndpointFeaturesWithEvent:(id)arg1 locale:(id)arg2;	// IMP=0x001000000007a90b
- (void)logAnchorMachAbsTime:(unsigned long long)arg1 numSamplesProcessedBeforeAnchorTime:(unsigned long long)arg2 isAnchorTimeBuffered:(_Bool)arg3;	// IMP=0x001000000007a8f5
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007a8df
- (void)updateEndpointerDelayedTrigger:(_Bool)arg1;	// IMP=0x001000000007a8c9
- (void)updateEndpointerThreshold:(float)arg1;	// IMP=0x001000000007a8b3
- (id)endpointerModelVersion;	// IMP=0x001000000007a76c
- (void)processTaskString:(id)arg1;	// IMP=0x001000000007a756
- (void)processASRFeatures:(id)arg1 fromServer:(_Bool)arg2;	// IMP=0x001000000007a740
- (void)processServerEndpointFeatures:(id)arg1;	// IMP=0x001000000007a72a
- (unsigned long long)endPointAnalyzerType;	// IMP=0x001000000007a6fd
- (double)elapsedTimeWithNoSpeech;	// IMP=0x001000000007a6dd
- (void)endpointer:(id)arg1 reportEndpointBufferHostTime:(unsigned long long)arg2 firstBufferHostTime:(unsigned long long)arg3;	// IMP=0x001000000007a638
- (void)endpointer:(id)arg1 detectedTwoShotAtTime:(double)arg2;	// IMP=0x001000000007a51b
- (void)endpointer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3;	// IMP=0x001000000007a2e5
- (void)endpointer:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x001000000007a190
- (void)setRequestMHUUID:(id)arg1;	// IMP=0x001000000007a136
- (double)trailingSilenceDurationAtEndpoint;	// IMP=0x001000000007a0fa
@property(readonly, nonatomic) double lastStartOfVoiceActivityTime;
- (void)recordingStoppedForReason:(long long)arg1;	// IMP=0x001000000007a084
- (void)processAudioSamplesAsynchronously:(id)arg1;	// IMP=0x0010000000079fa9
- (void)preheat;	// IMP=0x0010000000079eff
- (void)setActiveChannel:(unsigned long long)arg1;	// IMP=0x0010000000079ebf
- (void)resetForVoiceTriggerTwoShotWithSampleRate:(unsigned long long)arg1;	// IMP=0x0010000000079d8b
- (_Bool)isWatchRTSTriggered;	// IMP=0x0010000000079d59
- (void)stopEndpointer;	// IMP=0x0010000000079d0e
- (void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(id)arg2 recordOption:(id)arg3 voiceTriggerInfo:(id)arg4;	// IMP=0x001000000007991a
- (void)_setupNNVADEndpointer;	// IMP=0x00100000000798c7
- (id)initForSidekick;	// IMP=0x0010000000079801
- (id)init;	// IMP=0x001000000007971a

// Remaining properties
@property(nonatomic) double bypassSamples;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSString *mhId;
@property(readonly) Class superclass;

@end
