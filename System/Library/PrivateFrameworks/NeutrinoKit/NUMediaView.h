//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NeutrinoKit/NUAVPlayerControllerDelegate-Protocol.h>
#import <NeutrinoKit/NUAVPlayerViewDelegate-Protocol.h>

@class NSArray, NSString, NUAVPlayerController, NUAVPlayerView, NUCoalescer, NUComposition, NUMediaViewRenderer, NURenderView, NUScrollView;
@protocol NUMediaPlayer, NUMediaViewDelegate;

@interface NUMediaView : UIView <NUAVPlayerControllerDelegate, NUAVPlayerViewDelegate>
{
    NURenderView *_renderView;	// 8 = 0x8
    NUScrollView *_scrollView;	// 16 = 0x10
    NUMediaViewRenderer *_renderer;	// 24 = 0x18
    struct UIEdgeInsets _edgeInsets;	// 32 = 0x20
    NUAVPlayerController *_nuAVPlayerController;	// 64 = 0x40
    NUAVPlayerView *_playerView;	// 72 = 0x48
    UIView *_livePhotoView;	// 80 = 0x50
    struct {
        _Bool hasDidFinishRendering;
        _Bool hasDidUpdateLivePhoto;
        _Bool hasDidFinishRenderingWithStatistics;
        _Bool hasDidZoom;
        _Bool hasDidScroll;
        _Bool hasWillBeginZooming;
        _Bool hasDidEndZooming;
        _Bool hasIsReadyForVideoPlayback;
        _Bool hasDidStartPreparingVideo;
        _Bool hasDidFinishPreparingVideo;
        _Bool hasFailedToPlayToEnd;
        _Bool hasWillBeginLivePhotoPlayback;
        _Bool hasDidEndLivePhotoPlayback;
    } _delegateFlags;	// 88 = 0x58
    NUCoalescer *_renderCoalescer;	// 104 = 0x68
    _Bool _loopsVideo;	// 112 = 0x70
    long long _transitionCount;	// 120 = 0x78
    struct CGSize _transitionTargetSize;	// 128 = 0x80
    CDUnknownBlockType _renderingCompletionBlock;	// 144 = 0x90
    _Bool _lastVideoPlayerVisibilityChangeWasAnimated;	// 152 = 0x98
    _Bool _centerContent;	// 153 = 0x99
    _Bool _debugEnabled;	// 154 = 0x9a
    _Bool _scrollUpdatesSuppressed;	// 155 = 0x9b
    _Bool _videoPlayerVisible;	// 156 = 0x9c
    id <NUMediaViewDelegate> _delegate;	// 160 = 0xa0
    double _angle;	// 168 = 0xa8
    struct CGSize __masterSizeWithoutGeometry;	// 176 = 0xb0
    struct CGRect _cropRect;	// 192 = 0xc0
}

+ (struct UIEdgeInsets)_proposedInsetsForInsets:(struct UIEdgeInsets)arg1 contentSize:(struct CGSize)arg2 inFrame:(struct CGRect)arg3 centerContent:(_Bool)arg4;	// IMP=0x000000000000bc3d
- (void).cxx_destruct;	// IMP=0x000000000000b90f
@property(readonly, nonatomic, getter=isVideoPlayerVisible) _Bool videoPlayerVisible; // @synthesize videoPlayerVisible=_videoPlayerVisible;
@property(nonatomic) _Bool scrollUpdatesSuppressed; // @synthesize scrollUpdatesSuppressed=_scrollUpdatesSuppressed;
@property(nonatomic, getter=isDebugEnabled) _Bool debugEnabled; // @synthesize debugEnabled=_debugEnabled;
@property(nonatomic) _Bool centerContent; // @synthesize centerContent=_centerContent;
@property(nonatomic) double angle; // @synthesize angle=_angle;
@property(nonatomic) struct CGRect cropRect; // @synthesize cropRect=_cropRect;
@property(nonatomic) struct CGSize _masterSizeWithoutGeometry; // @synthesize _masterSizeWithoutGeometry=__masterSizeWithoutGeometry;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) __weak id <NUMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)playerControllerIsReadyForPlayback:(id)arg1;	// IMP=0x000000000000b6e7
- (void)playerControllerFailedToPlayToEnd:(id)arg1 error:(id)arg2;	// IMP=0x000000000000b5aa
- (void)playerController:(id)arg1 didUpdateElapsedTime:(double)arg2 duration:(double)arg3;	// IMP=0x000000000000b4ba
- (void)playerControllerDidFinishPlaying:(id)arg1 duration:(double)arg2;	// IMP=0x000000000000b3e1
- (void)playerViewReadyForDisplayDidChange:(id)arg1;	// IMP=0x000000000000b3c4
- (_Bool)_didReleaseAVObjects;	// IMP=0x000000000000b3a7
- (void)_releaseAVObjects;	// IMP=0x000000000000b38a
- (id)snapshotImage;	// IMP=0x000000000000b32f
- (id)_viewRecursiveDescription;	// IMP=0x000000000000b31d
- (id)_layerRecursiveDescription;	// IMP=0x000000000000b2cd
- (void)_updateVideoPlayerAlpha:(_Bool)arg1;	// IMP=0x000000000000b1a2
@property(readonly, nonatomic, getter=isVideoEnabled) _Bool videoEnabled;
- (void)setVideoEnabled:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000b168
- (void)_withComposition:(id)arg1 visitRenderClient:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b14b
- (void)_setPipelineFilters:(id)arg1 shouldUpdateContent:(_Bool)arg2;	// IMP=0x000000000000b108
@property(nonatomic) NSArray *pipelineFilters;
- (void)_setLayerFilters:(id)arg1;	// IMP=0x000000000000b021
- (id)_renderer;	// IMP=0x000000000000b00c
- (id)_geometry;	// IMP=0x000000000000afef
- (id)_renderView;	// IMP=0x000000000000afda
- (id)_scrollView;	// IMP=0x000000000000afc5
- (void)setVideoPlayerVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000af95
- (void)_stopVideoPlayback;	// IMP=0x000000000000af58
- (void)_startVideoPlayback;	// IMP=0x000000000000af1b
@property(nonatomic, getter=isMuted) _Bool muted;
@property(nonatomic) _Bool loopsVideoPlayback;
- (void)_livephotoPlaybackDidEnd;	// IMP=0x000000000000ad92
- (void)_livephotoPlaybackWillBegin;	// IMP=0x000000000000ad2d
- (void)_rendererDidFinishPreparingVideo;	// IMP=0x000000000000acc8
- (void)_rendererDidStartPreparingVideo;	// IMP=0x000000000000ac63
- (void)_rendererDidUpdateLivePhoto;	// IMP=0x000000000000abfe
- (void)_rendererDidFinishWithStatistics:(id)arg1;	// IMP=0x000000000000a84c
- (void)_rendererDidCreateAVPlayerController:(id)arg1;	// IMP=0x000000000000a6e0
- (id)_livePhotoView;	// IMP=0x000000000000a588
- (id)_videoPlayerController;	// IMP=0x000000000000a538
- (id)_videoPlayerViewWithoutControls;	// IMP=0x000000000000a526
- (id)_videoPlayerView;	// IMP=0x000000000000a3e7
- (void)_transitionToInsets:(struct UIEdgeInsets)arg1;	// IMP=0x0000000000009d63
- (void)_endTransition;	// IMP=0x0000000000009d52
- (void)_beginTransition;	// IMP=0x0000000000009d41
- (void)waitForRender;	// IMP=0x0000000000009d24
- (void)_updateRenderContent;	// IMP=0x0000000000009c53
- (void)_updateRenderContentCoalesced:(_Bool)arg1;	// IMP=0x0000000000009b7f
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000000009b0f
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000000009a45
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000000999b
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000000991b
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;	// IMP=0x00000000000098ab
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;	// IMP=0x0000000000009858
- (void)scrollViewDidZoom:(id)arg1;	// IMP=0x00000000000097ca
- (id)viewForZoomingInScrollView:(id)arg1;	// IMP=0x00000000000097b5
- (void)_updateContentInsets;	// IMP=0x000000000000947f
- (struct UIEdgeInsets)_edgeInsetsForContentSize:(struct CGSize)arg1 inFrame:(struct CGRect)arg2 alwaysCenterContent:(_Bool)arg3;	// IMP=0x000000000000922c
- (struct UIEdgeInsets)_edgeInsetsForContentSize:(struct CGSize)arg1 inFrame:(struct CGRect)arg2;	// IMP=0x00000000000091f7
- (void)_setupViews;	// IMP=0x0000000000008e48
- (void)installRenderingCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008e14
@property(readonly, nonatomic) struct CGRect imageFrame;
- (struct CGRect)convertViewRect:(struct CGRect)arg1 fromSpace:(id)arg2;	// IMP=0x00000000000085a1
- (struct CGRect)convertNormalizedViewRect:(struct CGRect)arg1 fromSpace:(id)arg2;	// IMP=0x00000000000084d0
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toNormalizedYDownSourceSpaceFromView:(id)arg2;	// IMP=0x00000000000080e8
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromSpace:(id)arg2 toView:(id)arg3;	// IMP=0x0000000000007bda
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2 toSpace:(id)arg3;	// IMP=0x00000000000076b1
- (struct CGRect)convertRectFromImage:(struct CGRect)arg1;	// IMP=0x0000000000007659
- (struct CGRect)convertRectToImage:(struct CGRect)arg1;	// IMP=0x0000000000007601
- (struct CGPoint)convertPointFromImage:(struct CGPoint)arg1;	// IMP=0x00000000000075e1
- (struct CGPoint)convertPointToImage:(struct CGPoint)arg1;	// IMP=0x00000000000075c1
- (struct CGSize)_imageSize;	// IMP=0x000000000000744c
- (void)layoutSubviews;	// IMP=0x00000000000072f5
- (id)_imageLayer;	// IMP=0x00000000000072d8
- (_Bool)isReady;	// IMP=0x00000000000072bb
- (void)zoomToRect:(struct CGRect)arg1 animated:(_Bool)arg2;	// IMP=0x000000000000729e
- (void)setZoomScale:(double)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000007281
@property(nonatomic) double minimumZoomScale;
@property(nonatomic) double maximumZoomScale;
@property(nonatomic) double zoomScale;
- (void)setZoomScaleToFit;	// IMP=0x0000000000007140
- (void)didMoveToWindow;	// IMP=0x0000000000006ef9
@property(readonly) id <NUMediaPlayer> player;
@property(copy, nonatomic) NUComposition *composition;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006c95
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000006c38

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
