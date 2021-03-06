//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NeutrinoKit/NUMediaPlayer-Protocol.h>

@class NSArray, NSString, NUAVPlayerController, NUCoalescer, NUColorSpace, NUComposition, NULivePhotoRenderClient, NUMediaView, NUObservatory, NUPixelFormat, NUResponse, NUSurfaceRenderClient, NUVideoRenderClient, UIView;
@protocol NURenderStatistics, OS_dispatch_group, OS_dispatch_queue;

@interface NUMediaViewRenderer : NSObject <NUMediaPlayer>
{
    NUSurfaceRenderClient *_zoomClient;	// 8 = 0x8
    NUSurfaceRenderClient *_backfillClient;	// 16 = 0x10
    NULivePhotoRenderClient *_livePhotoClient;	// 24 = 0x18
    NUVideoRenderClient *_videoClient;	// 32 = 0x20
    NSString *_currentVideoSourceAssetIdentifier;	// 40 = 0x28
    UIView *_livePhotoView;	// 48 = 0x30
    NUCoalescer *_livePhotoUpdateCoalescer;	// 56 = 0x38
    NUCoalescer *_videoUpdateCoalescer;	// 64 = 0x40
    NUObservatory *_observatory;	// 72 = 0x48
    _Bool _canRenderLoopingVideoLive;	// 80 = 0x50
    long long _playbackMode;	// 88 = 0x58
    _Bool _muted;	// 96 = 0x60
    _Bool _didReleaseAVObjects;	// 97 = 0x61
    _Atomic int _videoRenderInFlightCount;	// 100 = 0x64
    NSObject<OS_dispatch_group> *_renderGroup;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_renderQueue;	// 112 = 0x70
    NUResponse *_zoomRenderResponse;	// 120 = 0x78
    NUResponse *_backfillRenderResponse;	// 128 = 0x80
    struct CGRect _lastZoomRect;	// 136 = 0x88
    double _lastZoomScale;	// 168 = 0xa8
    double _lastZoomRenderTime;	// 176 = 0xb0
    id <NURenderStatistics> _lastZoomRenderStatistics;	// 184 = 0xb8
    id <NURenderStatistics> _lastBackfillRenderStatictics;	// 192 = 0xc0
    _Bool _isPanning;	// 200 = 0xc8
    _Bool _isZooming;	// 201 = 0xc9
    _Bool __videoEnabled;	// 202 = 0xca
    NUComposition *_composition;	// 208 = 0xd0
    NUColorSpace *_colorSpace;	// 216 = 0xd8
    NUPixelFormat *_pixelFormat;	// 224 = 0xe0
    NUMediaView *_mediaView;	// 232 = 0xe8
    double _backingScale;	// 240 = 0xf0
    NSArray *_pipelineFilters;	// 248 = 0xf8
    double _maximumZoomScale;	// 256 = 0x100
    NUAVPlayerController *_nuAVPlayerController;	// 264 = 0x108
    unsigned long long _displayType;	// 272 = 0x110
    unsigned long long _computedDisplayType;	// 280 = 0x118
    double _overrideZoomScale;	// 288 = 0x120
    NSArray *_previousPipelineFilters;	// 296 = 0x128
    struct CGSize _overrideZoomToFitSize;	// 304 = 0x130
}

+ (_Bool)_forceUpdateForNewVideoComposition:(id)arg1 previousComposition:(id)arg2 newAsset:(id)arg3 previousAsset:(id)arg4 isPlaying:(_Bool)arg5;	// IMP=0x000000000001611b
- (void).cxx_destruct;	// IMP=0x00000000000150c9
@property(readonly, copy, nonatomic) NSArray *previousPipelineFilters; // @synthesize previousPipelineFilters=_previousPipelineFilters;
@property(nonatomic, getter=_isVideoEnabled, setter=_setVideoEnabled:) _Bool _videoEnabled; // @synthesize _videoEnabled=__videoEnabled;
@property(nonatomic) double overrideZoomScale; // @synthesize overrideZoomScale=_overrideZoomScale;
@property(nonatomic) struct CGSize overrideZoomToFitSize; // @synthesize overrideZoomToFitSize=_overrideZoomToFitSize;
@property(readonly, nonatomic) unsigned long long computedDisplayType; // @synthesize computedDisplayType=_computedDisplayType;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(readonly, nonatomic) NUAVPlayerController *nuAVPlayerController; // @synthesize nuAVPlayerController=_nuAVPlayerController;
@property(nonatomic) double maximumZoomScale; // @synthesize maximumZoomScale=_maximumZoomScale;
@property(copy, nonatomic) NSArray *pipelineFilters; // @synthesize pipelineFilters=_pipelineFilters;
@property(nonatomic) double backingScale; // @synthesize backingScale=_backingScale;
@property(readonly, nonatomic) __weak NUMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) NUPixelFormat *pixelFormat; // @synthesize pixelFormat=_pixelFormat;
@property(retain, nonatomic) NUColorSpace *colorSpace; // @synthesize colorSpace=_colorSpace;
@property(copy, nonatomic) NUComposition *composition; // @synthesize composition=_composition;
- (void)livePhotoViewDidEndScrubbing:(id)arg1;	// IMP=0x0000000000014f10
- (void)livePhotoViewDidBeginScrubbing:(id)arg1;	// IMP=0x0000000000014eaa
- (void)livePhotoView:(id)arg1 didEndPlaybackWithStyle:(long long)arg2;	// IMP=0x0000000000014e35
- (void)livePhotoView:(id)arg1 willBeginPlaybackWithStyle:(long long)arg2;	// IMP=0x0000000000014dc3
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000014a3f
- (void)_notifyPlaybackTimeChange:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000149d7
- (id)addPlaybackTimeObserver:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014639
- (void)_notifyExternalPlaybackChange:(_Bool)arg1;	// IMP=0x00000000000145de
- (id)addExternalPlaybackObserver:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014240
- (void)_notifyPlaybackStateChange:(long long)arg1;	// IMP=0x00000000000141e7
- (id)addPlaybackStateObserver:(CDUnknownBlockType)arg1;	// IMP=0x0000000000013e4c
@property(nonatomic, getter=isMuted) _Bool muted;
@property(nonatomic) long long playbackMode;
@property(nonatomic) double playbackRate;
- (void)pause;	// IMP=0x0000000000013b39
- (void)play;	// IMP=0x0000000000013986
- (void)stepByCount:(long long)arg1;	// IMP=0x000000000001393f
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentSeekTime;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 forceSeek:(_Bool)arg4;	// IMP=0x0000000000013850
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;	// IMP=0x000000000001383c
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 exact:(_Bool)arg2 forceSeek:(_Bool)arg3;	// IMP=0x000000000001379b
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 exact:(_Bool)arg2;	// IMP=0x0000000000013787
@property(readonly) NSArray *loadedTimeRanges;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000136cf
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime;
- (long long)_playbackStateFromPlayerStatus:(long long)arg1 rate:(float)arg2;	// IMP=0x0000000000013636
@property(readonly, nonatomic) long long playbackState;
@property(readonly, nonatomic) CDStruct_1b6d18a9 mediaDuration;
@property(readonly, nonatomic, getter=isVideoEnabled) _Bool videoEnabled;
- (void)setVideoEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001343e
- (void)_addFullExtentConstraintsForView:(id)arg1;	// IMP=0x00000000000132c2
- (id)_backfillRenderRequestForComposition:(id)arg1;	// IMP=0x0000000000013218
- (double)_lastRenderDuration;	// IMP=0x00000000000131f0
- (struct CGRect)_zoomTargetRect;	// IMP=0x0000000000012f23
- (double)_targetZoomScale;	// IMP=0x0000000000012e48
- (id)_zoomRenderRequestForComposition:(id)arg1;	// IMP=0x0000000000012d56
- (void)_updateLivePhotoWithResponse:(id)arg1;	// IMP=0x0000000000012a09
- (id)_livePhotoFromResponse:(id)arg1;	// IMP=0x0000000000012901
- (void)_updateLivePhotoComposition:(id)arg1;	// IMP=0x00000000000127c1
- (void)_coalesceUpdateLivePhotoComposition:(id)arg1;	// IMP=0x00000000000126e0
- (void)_coalesceUpdateVideoComposition:(id)arg1;	// IMP=0x00000000000125ff
- (void)_updateVideoViewLayoutWithGeometry:(id)arg1;	// IMP=0x0000000000012376
- (void)_updateVideoComposition:(id)arg1;	// IMP=0x000000000001208d
- (id)_scalePolicyForVideoCompositionRender;	// IMP=0x0000000000011dbf
- (void)_updateVideoWithResult:(id)arg1 sourceChanged:(_Bool)arg2;	// IMP=0x000000000001148b
- (id)cacheVideoRenderFilter;	// IMP=0x000000000001145b
- (void)_tearDownAVPlayerController;	// IMP=0x00000000000113ff
- (void)_playerStatusDidChange:(long long)arg1;	// IMP=0x000000000001135d
- (void)_setupAVPlayerController;	// IMP=0x00000000000110f2
- (void)_setDisplayType:(unsigned long long)arg1;	// IMP=0x0000000000010c52
- (void)_updateDisplayForMediaType:(long long)arg1;	// IMP=0x00000000000108d0
- (id)renderClient;	// IMP=0x00000000000108c2
- (id)_updateImageLayer:(id)arg1 withRenderResponse:(id)arg2;	// IMP=0x000000000001033e
- (void)_updateBackfillLayerWithRenderResponse:(id)arg1;	// IMP=0x000000000001022b
- (void)_updateROILayerWithRenderResponse:(id)arg1;	// IMP=0x0000000000010157
- (void)_updateBackfillLayerWithLatestRenderResponse;	// IMP=0x000000000001007c
- (void)_updateROILayerWithLatestRenderResponse;	// IMP=0x000000000000ffa1
- (CDUnknownBlockType)_videoFrameImageRenderResponseHandler;	// IMP=0x000000000000ff53
- (CDUnknownBlockType)_backfillRenderResponseHandler;	// IMP=0x000000000000ff05
- (CDUnknownBlockType)_zoomRenderResponseHandler;	// IMP=0x000000000000feb7
- (void)_updateImageRenderForComposition:(id)arg1;	// IMP=0x000000000000fe03
- (void)_renderFinishedWithGeometry:(id)arg1 layer:(id)arg2;	// IMP=0x000000000000f3c2
- (id)_regionPolicyForZoomTargetRect:(struct CGRect)arg1;	// IMP=0x000000000000f1a3
- (struct CGRect)_scrollBounds;	// IMP=0x000000000000f129
- (struct CGSize)targetSize;	// IMP=0x000000000000ef35
- (struct CGRect)convertRect:(struct CGRect)arg1 fromImageToView:(id)arg2;	// IMP=0x000000000000ee27
- (struct CGRect)convertRect:(struct CGRect)arg1 toImageFromView:(id)arg2;	// IMP=0x000000000000ed19
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromImageToView:(id)arg2;	// IMP=0x000000000000ec24
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toImageFromView:(id)arg2;	// IMP=0x000000000000eb2f
- (_Bool)canRenderVideoLive;	// IMP=0x000000000000eb02
@property(readonly) _Bool isReady;
@property(readonly, nonatomic, getter=isZoomedToFit) _Bool zoomedToFit;
- (_Bool)pipelineFilersHaveChanged;	// IMP=0x000000000000e9d0
- (void)wait;	// IMP=0x000000000000e835
- (void)_endAnimating;	// IMP=0x000000000000e787
- (void)_beginAnimating;	// IMP=0x000000000000e6d3
- (void)endZooming;	// IMP=0x000000000000e6a4
- (void)beginZooming;	// IMP=0x000000000000e619
- (void)endPanning;	// IMP=0x000000000000e5f5
- (void)beginPanning;	// IMP=0x000000000000e5dc
- (void)updateComposition:(id)arg1;	// IMP=0x000000000000e12b
- (id)newRenderRequestForComposition:(id)arg1 scalePolicy:(id)arg2 regionPolicy:(id)arg3;	// IMP=0x000000000000df0b
- (id)init;	// IMP=0x000000000000db80
- (id)initWithMediaView:(id)arg1;	// IMP=0x000000000000d8ff
- (_Bool)_didReleaseAVObjects;	// IMP=0x000000000001687e
- (void)_releaseAVObjects;	// IMP=0x00000000000163a7
- (void)_withComposition:(id)arg1 visitRenderClient:(CDUnknownBlockType)arg2;	// IMP=0x000000000001625e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

