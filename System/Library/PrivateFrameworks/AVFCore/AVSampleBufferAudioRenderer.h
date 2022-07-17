//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/AVMediaDataRequesterConsumer-Protocol.h>
#import <AVFCore/AVQueuedSampleBufferRendering-Protocol.h>
#import <AVFCore/AVQueuedSampleBufferRenderingInternal-Protocol.h>

@class AVSampleBufferAudioRendererInternal, NSError, NSString;

@interface AVSampleBufferAudioRenderer : NSObject <AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal, AVQueuedSampleBufferRendering>
{
    AVSampleBufferAudioRendererInternal *_audioRendererInternal;	// 8 = 0x8
}

+ (id)sampleBufferAudioRenderer;	// IMP=0x000000000004ee19
+ (void)setFigAudioRendererFactory:(id)arg1 forQueue:(id)arg2;	// IMP=0x000000000004ff4f
+ (id)currentFigAudioRendererFactory;	// IMP=0x000000000004ff15
@property(readonly, nonatomic) _Bool hasSufficientMediaDataForReliablePlaybackStart;
- (void)stopRequestingMediaData;	// IMP=0x000000000004fe41
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004fcec
@property(readonly, getter=isReadyForMoreMediaData) _Bool readyForMoreMediaData;
- (void)flushFromSourceTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004fb63
- (void)flush;	// IMP=0x000000000004fb13
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x000000000004f98b
- (void)setSTSLabel:(id)arg1;	// IMP=0x000000000004f949
- (_Bool)setRenderSynchronizer:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004f800
- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer **)arg1;	// IMP=0x000000000004f7d2
@property(readonly, retain) struct OpaqueCMTimebase *timebase;
- (_Bool)isMuted;	// IMP=0x000000000004f7a2
- (void)setMuted:(_Bool)arg1;	// IMP=0x000000000004f729
- (float)volume;	// IMP=0x000000000004f71a
- (void)setVolume:(float)arg1;	// IMP=0x000000000004f684
@property(nonatomic) unsigned long long allowedAudioSpatializationFormats;
- (struct opaqueMTAudioProcessingTap *)audioTapProcessor;	// IMP=0x000000000004f5d5
- (void)setAudioTapProcessor:(struct opaqueMTAudioProcessingTap *)arg1;	// IMP=0x000000000004f557
- (_Bool)willTrimShortDurationSamples;	// IMP=0x000000000004f4d1
@property(copy, nonatomic) NSString *audioTimePitchAlgorithm;
@property(copy, nonatomic) NSString *audioOutputDeviceUniqueID;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
- (void)_transitionToFailedStatusWithOSStatus:(int)arg1;	// IMP=0x000000000004f1fe
- (void)_transitionToStatus:(long long)arg1 error:(id)arg2;	// IMP=0x000000000004f151
- (id)audioSession;	// IMP=0x000000000004f08a
- (void)setAudioSession:(id)arg1;	// IMP=0x000000000004ef8d
- (void)dealloc;	// IMP=0x000000000004ee32
- (id)init;	// IMP=0x000000000004ec8d
- (void)setOutputContext:(id)arg1;	// IMP=0x000000000004eb7f
- (id)outputContext;	// IMP=0x000000000004eaf5
- (void)_uninstallNotificationHandlers;	// IMP=0x000000000004ea26
- (int)_installNotificationHandlers;	// IMP=0x000000000004e85d
- (void)_wasFlushedAutomaticallyAtTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000004e799
- (void)_triggerMediaRequestCallback;	// IMP=0x000000000004e747
- (int)_initializeTimebase;	// IMP=0x000000000004e6e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
