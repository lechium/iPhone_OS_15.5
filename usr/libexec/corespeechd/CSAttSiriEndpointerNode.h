//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriCachedEndpointInfo, CSAttSiriController, CSConnectionListener, CSEndpointLatencyInfo, CSEndpointerProxy, MISSING_TYPE, NSArray, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface CSAttSiriEndpointerNode : NSObject
{
    _Bool _isReady;	// 8 = 0x8
    _Bool _isNNVAD;	// 9 = 0x9
    unsigned long long _type;	// 16 = 0x10
    NSArray *_requiredNodes;	// 24 = 0x18
    CSAttSiriController *_attSiriController;	// 32 = 0x20
    NSString *_mhId;	// 40 = 0x28
    CSConnectionListener *_endpointerListener;	// 48 = 0x30
    NSHashTable *_receivers;	// 56 = 0x38
    CSEndpointerProxy *_proxy;	// 64 = 0x40
    MISSING_TYPE *_queue;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_endpointLatencyQueue;	// 80 = 0x50
    CSEndpointLatencyInfo *_endpointLatencyInfo;	// 88 = 0x58
    CSAttSiriCachedEndpointInfo *_cachedEndpointerInfo;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00200000000181fa
@property(retain, nonatomic) CSAttSiriCachedEndpointInfo *cachedEndpointerInfo; // @synthesize cachedEndpointerInfo=_cachedEndpointerInfo;
@property(retain, nonatomic) CSEndpointLatencyInfo *endpointLatencyInfo; // @synthesize endpointLatencyInfo=_endpointLatencyInfo;
@property(nonatomic) _Bool isNNVAD; // @synthesize isNNVAD=_isNNVAD;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *endpointLatencyQueue; // @synthesize endpointLatencyQueue=_endpointLatencyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSEndpointerProxy *proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) NSHashTable *receivers; // @synthesize receivers=_receivers;
@property(retain, nonatomic) CSConnectionListener *endpointerListener; // @synthesize endpointerListener=_endpointerListener;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) __weak CSAttSiriController *attSiriController; // @synthesize attSiriController=_attSiriController;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(readonly, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)_reportHardEndpointToXPCClientWithTime:(double)arg1 endpointerMetrics:(id)arg2;	// IMP=0x0010000000017eab
- (void)endpointer:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x0010000000017c19
- (void)endpointer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3;	// IMP=0x00100000000179e2
- (void)attSiriAudioSrcNodeDidStop:(id)arg1;	// IMP=0x0010000000017959
- (void)attSiriAudioSrcNodeLPCMRecordBufferAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x001000000001782c
- (void)attSiriAudioSrcNodeDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x0010000000017826
- (void)attSiriNode:(id)arg1 didUpdateAnchorMachAbsTime:(unsigned long long)arg2 numSamplesProcessedBeforeAnchorTime:(unsigned long long)arg3 isAnchorTimeBuffered:(_Bool)arg4;	// IMP=0x0010000000017807
- (void)attSiriNode:(id)arg1 didUpdateFirstAudioPacketTimestamp:(id)arg2 firstAudioSampleSensorTimestamp:(unsigned long long)arg3 firstAudioStartSampleCount:(unsigned long long)arg4;	// IMP=0x00100000000177e3
- (void)attSiriNode:(id)arg1 didUpdateOSDFeatures:(id)arg2 withFrameDurationMs:(double)arg3;	// IMP=0x00100000000177c2
- (void)processTaskString:(id)arg1;	// IMP=0x00100000000177ac
- (void)processASRFeaturesWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 eosLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 taskName:(id)arg6 processedAudioDurationInMilliseconds:(long long)arg7 fromServer:(_Bool)arg8;	// IMP=0x00100000000176db
- (void)processServerFeaturesWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 eosLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 taskName:(id)arg6 processedAudioDurationInMilliseconds:(long long)arg7;	// IMP=0x0010000000017614
- (void)getEndPointAnalyzerTypeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000175c5
- (void)getTrailingSilenceDurationAtEndpointWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0010000000017579
- (void)getElapsedTimeNoSpeechWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000001752d
- (void)getEndpointerModelVersionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00100000000174be
- (unsigned long long)endPointAnalyzerType;	// IMP=0x00100000000174a8
- (double)trailingSilenceDurationAtEndpoint;	// IMP=0x0010000000017492
- (double)elapsedTimeWithNoSpeech;	// IMP=0x001000000001747c
- (_Bool)getUsesAutomaticEndpointing;	// IMP=0x001000000001745a
- (void)setEndpointerOperationMode:(long long)arg1;	// IMP=0x0010000000017444
- (void)setAutomaticEndpointingSuspensionEndTime:(double)arg1;	// IMP=0x001000000001742e
- (void)setEndWaitTime:(double)arg1;	// IMP=0x0010000000017418
- (void)setStartWaitTime:(double)arg1;	// IMP=0x0010000000017402
- (void)logHybridEndpointFeaturesWithEvent:(id)arg1 locale:(id)arg2;	// IMP=0x00100000000173ec
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000173d6
- (void)updateEndpointerDelayedTrigger:(_Bool)arg1;	// IMP=0x00100000000173c0
- (void)updateEndpointerThreshold:(float)arg1;	// IMP=0x00100000000173aa
- (void)processServerEndpointFeatures:(id)arg1;	// IMP=0x0010000000017394
- (void)processASRFeatures:(id)arg1 fromServer:(_Bool)arg2;	// IMP=0x001000000001737e
- (id)endpointerModelVersion;	// IMP=0x0010000000017368
- (void)processAudioSamplesAsynchronously:(id)arg1;	// IMP=0x0010000000017352
- (void)recordingStoppedForReason:(long long)arg1;	// IMP=0x001000000001733c
- (void)stopEndpointer;	// IMP=0x0010000000017326
- (void)setActiveChannel:(unsigned long long)arg1;	// IMP=0x0010000000017310
- (void)resetForVoiceTriggerTwoShotWithSampleRate:(unsigned long long)arg1;	// IMP=0x00100000000172fa
- (void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(id)arg2 recordOption:(id)arg3 voiceTriggerInfo:(id)arg4;	// IMP=0x0010000000017059
- (void)stop;	// IMP=0x0010000000017043
- (void)pause;	// IMP=0x001000000001703d
- (void)start;	// IMP=0x0010000000017037
- (void)removeReceiver:(id)arg1;	// IMP=0x0010000000016f5b
- (void)addReceiver:(id)arg1;	// IMP=0x0010000000016de3
- (id)initWithAttSiriController:(id)arg1;	// IMP=0x0010000000016c08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) CSAsset *prefetchedAsset;
@property(readonly) Class superclass;

@end
