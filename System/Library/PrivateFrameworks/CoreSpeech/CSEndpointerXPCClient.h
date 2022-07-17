//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/CSEndpointerXPCServiceDelegate-Protocol.h>

@class NSObject, NSXPCConnection;
@protocol CSEndpointAnalyzerDelegate, OS_dispatch_queue;

@interface CSEndpointerXPCClient <CSEndpointerXPCServiceDelegate>
{
    id <CSEndpointAnalyzerDelegate> _endpointerDelegate;	// 8 = 0x8
    NSXPCConnection *_endpointerConnection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_targetQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_xpcClientQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_xpcDelegateQueue;	// 48 = 0x30
    id _remoteObjectProxy;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000398b5
@property(retain, nonatomic) id remoteObjectProxy; // @synthesize remoteObjectProxy=_remoteObjectProxy;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *xpcDelegateQueue; // @synthesize xpcDelegateQueue=_xpcDelegateQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *xpcClientQueue; // @synthesize xpcClientQueue=_xpcClientQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *xpcConnectionQueue; // @synthesize xpcConnectionQueue=_xpcConnectionQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
@property(retain, nonatomic) NSXPCConnection *endpointerConnection; // @synthesize endpointerConnection=_endpointerConnection;
- (void)setEndpointerDelegate:(id)arg1;	// IMP=0x00000000000397c3
- (id)endpointerDelegate;	// IMP=0x00000000000397aa
- (void)didDetectHardEndpointAtTime:(double)arg1 withMetrics:(id)arg2;	// IMP=0x00000000000395ed
- (void)didDetectHardEndpointAtTime:(double)arg1 withTotalAudioRecorded:(double)arg2 endpointBufferHostTime:(unsigned long long)arg3 featuresAtEndpoint:(id)arg4 endpointerType:(long long)arg5 serverFeatureLatencyDistribution:(id)arg6 additionalMetrics:(id)arg7;	// IMP=0x0000000000039351
- (void)didDetectStartpointAtTime:(double)arg1;	// IMP=0x0000000000039246
- (void)_createClientConnection;	// IMP=0x0000000000038c5f
- (id)_getRemoteServiceProxyObject;	// IMP=0x0000000000038a78
- (void)recordingStoppedForReason:(long long)arg1;	// IMP=0x0000000000038a72
- (void)processAudioSamplesAsynchronously:(id)arg1;	// IMP=0x0000000000038a6c
- (void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(id)arg2 recordOption:(id)arg3 voiceTriggerInfo:(id)arg4;	// IMP=0x0000000000038a66
- (void)setEndpointerOperationMode:(long long)arg1;	// IMP=0x00000000000389bf
- (void)resetForVoiceTriggerTwoShotWithSampleRate:(unsigned long long)arg1;	// IMP=0x0000000000038918
- (unsigned long long)endPointAnalyzerType;	// IMP=0x0000000000038507
- (double)trailingSilenceDurationAtEndpoint;	// IMP=0x00000000000380e4
- (double)elapsedTimeWithNoSpeech;	// IMP=0x0000000000037cc1
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000037bca
- (void)updateEndpointerDelayedTrigger:(_Bool)arg1;	// IMP=0x0000000000037b23
- (void)updateEndpointerThreshold:(float)arg1;	// IMP=0x0000000000037a79
- (void)processServerEndpointFeatures:(id)arg1;	// IMP=0x00000000000378d9
- (id)endpointerModelVersion;	// IMP=0x0000000000037469
- (void)setAutomaticEndpointingSuspensionEndTime:(double)arg1;	// IMP=0x00000000000373bf
- (void)setEndWaitTime:(double)arg1;	// IMP=0x0000000000037315
- (void)setStartWaitTime:(double)arg1;	// IMP=0x000000000003726b
- (void)setActiveChannel:(unsigned long long)arg1;	// IMP=0x00000000000371c4
- (void)dealloc;	// IMP=0x0000000000037165
- (id)init;	// IMP=0x000000000003705d

@end
