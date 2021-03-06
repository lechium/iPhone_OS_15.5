//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CSSiriSpeechCapturingDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ADSpeechPlaybackSimulator : NSObject
{
    id <CSSiriSpeechCapturingDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_playbackSource;	// 24 = 0x18
}

+ (id)_speechLogDecodingError;	// IMP=0x00200000002249f5
- (void).cxx_destruct;	// IMP=0x0020000000225839
- (void)startPlaybackWithURL:(id)arg1 narrowBand:(_Bool)arg2 dictation:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000224b84
- (void)enforcePreviousEndpointHint;	// IMP=0x0010000000224b7e
- (void)updateEndpointHintForDuration:(double)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000224b66
- (void)updateServerEndpointFeatures:(id)arg1;	// IMP=0x0010000000224b60
- (void)playRecordingStartAlert;	// IMP=0x0010000000224b5a
- (void)getLastStartpointTimestampAndCurrentTime:(CDUnknownBlockType)arg1;	// IMP=0x0010000000224b40
- (void)setIsDriving:(_Bool)arg1;	// IMP=0x0010000000224b3a
- (void)setFingerprintWasRecognized;	// IMP=0x0010000000224b34
- (void)setSpeechWasRecognizedForElapsedTime:(double)arg1 isFinal:(_Bool)arg2;	// IMP=0x0010000000224b2e
- (void)forceSuccessAudioAlertOnStop;	// IMP=0x0010000000224b28
- (void)setFingerprintingEnabled:(_Bool)arg1;	// IMP=0x0010000000224b22
- (void)stopFingerprinting;	// IMP=0x0010000000224b1c
- (void)cancelSpeechCaptureSuppressingAlert:(_Bool)arg1;	// IMP=0x0010000000224b07
- (void)stopSpeechCaptureForEvent:(long long)arg1 suppressAlert:(_Bool)arg2 hostTime:(unsigned long long)arg3;	// IMP=0x0010000000224af2
- (void)setSpeechWasRecognized;	// IMP=0x0010000000224aec
- (void)suspendAutomaticEndpointingInRange:(struct AFTimeRange)arg1;	// IMP=0x0010000000224ae6
- (void)setSpeechRequestOptions:(id)arg1;	// IMP=0x0010000000224ae0
- (void)releaseAudioSession;	// IMP=0x0010000000224ada
- (id)delegate;	// IMP=0x0010000000224ac4
- (void)setDelegate:(id)arg1;	// IMP=0x0010000000224a20
- (id)initWithQueue:(id)arg1 speechController:(id)arg2 audioSessionController:(id)arg3 audioPlaybackService:(id)arg4 experimentContext:(id)arg5;	// IMP=0x001000000022498a

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

