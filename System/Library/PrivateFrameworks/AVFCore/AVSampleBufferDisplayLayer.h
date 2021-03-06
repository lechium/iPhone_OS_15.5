//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

#import <AVFCore/AVMediaDataRequesterConsumer-Protocol.h>
#import <AVFCore/AVQueuedSampleBufferRendering-Protocol.h>
#import <AVFCore/AVQueuedSampleBufferRenderingInternal-Protocol.h>

@class AVSampleBufferVideoOutput, AVSampleBufferVideoRenderer, NSError, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface AVSampleBufferDisplayLayer : CALayer <AVQueuedSampleBufferRendering, AVMediaDataRequesterConsumer, AVQueuedSampleBufferRenderingInternal>
{
    CALayer *_contentLayer;	// 8 = 0x8
    NSString *_videoGravity;	// 16 = 0x10
    struct CGSize _presentationSize;	// 24 = 0x18
    struct CGRect _bounds;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_serialQueue;	// 72 = 0x48
    AVSampleBufferVideoRenderer *_sampleBufferVideoRenderer;	// 80 = 0x50
    AVSampleBufferVideoOutput *_videoOutput;	// 88 = 0x58
    NSString *_STSLabel;	// 96 = 0x60
    CALayer *_STSLayer;	// 104 = 0x68
}

+ (id)keyPathsForValuesAffectingOutputObscuredDueToInsufficientExternalProtection;	// IMP=0x000000000011845b
+ (id)keyPathsForValuesAffectingError;	// IMP=0x000000000011843b
+ (id)keyPathsForValuesAffectingStatus;	// IMP=0x000000000011841b
@property(readonly, nonatomic, getter=_sampleBufferVideoRenderer) AVSampleBufferVideoRenderer *sampleBufferVideoRenderer; // @synthesize sampleBufferVideoRenderer=_sampleBufferVideoRenderer;
- (id)_contentLayer;	// IMP=0x00000000001184fc
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
@property(readonly, getter=isReadyForMoreMediaData) _Bool readyForMoreMediaData;
- (void)setToneMapToStandardDynamicRange:(_Bool)arg1;	// IMP=0x00000000001183b8
- (void)setSTSLabel:(id)arg1;	// IMP=0x00000000001181e7
- (void)copyFigSampleBufferAudioRenderer:(struct OpaqueFigSampleBufferAudioRenderer **)arg1;	// IMP=0x00000000001181d5
- (_Bool)setRenderSynchronizer:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000118195
- (void)postVideoRectDidChangeNotification;	// IMP=0x0000000000118156
- (struct CGRect)videoRect;	// IMP=0x0000000000117f66
- (void)layerDidBecomeVisible:(_Bool)arg1;	// IMP=0x0000000000117f06
- (void)layoutSublayers;	// IMP=0x0000000000117d45
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000117cf3
@property(copy) NSString *videoGravity;
@property(retain) struct OpaqueCMTimebase *controlTimebase;
- (void)dealloc;	// IMP=0x0000000000117908
- (id)init;	// IMP=0x00000000001177b3
- (struct CGRect)_destRectForAspectRatio:(struct CGSize)arg1;	// IMP=0x0000000000117734
- (void)_updatePresentationSize:(struct CGSize)arg1;	// IMP=0x000000000011753f
- (void)_updateLayerTreeGeometryWithVideoGravity:(id)arg1 presentationSize:(struct CGSize)arg2 videoGravityShouldTriggerAnimation:(_Bool)arg3;	// IMP=0x0000000000116d3b
@property(readonly, nonatomic) _Bool requiresFlushToResumeDecoding;
@property(readonly, nonatomic) _Bool hasSufficientMediaDataForReliablePlaybackStart;
- (void)stopRequestingMediaData;	// IMP=0x0000000000118738
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001186f8
- (void)prerollDecodeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001186c7
- (void)flushWithRemovalOfDisplayedImage:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000118689
- (void)flushAndRemoveImage;	// IMP=0x000000000011865e
- (void)flush;	// IMP=0x0000000000118633
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x0000000000118549
@property(readonly, retain) struct OpaqueCMTimebase *timebase;
- (id)videoPerformanceMetrics;	// IMP=0x00000000001187b9
@property(readonly, nonatomic) _Bool outputObscuredDueToInsufficientExternalProtection;
@property(nonatomic) _Bool preventsCapture;
@property(nonatomic) _Bool preventsDisplaySleepDuringVideoPlayback;
- (void)resetUpcomingSampleBufferPresentationTimeExpectations;	// IMP=0x0000000000118919
- (void)expectMonotonicallyIncreasingUpcomingSampleBufferPresentationTimes;	// IMP=0x00000000001188ee
- (void)expectMinimumUpcomingSampleBufferPresentationTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000001188c3
@property(nonatomic) AVSampleBufferVideoOutput *output;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

