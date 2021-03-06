//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/CLKVideoPlayerViewDelegate-Protocol.h>

@class CLKVideoPlayerView, NSString, NTKTaskScheduler, NTKVideoPlayerDataSource, UIImageView;
@protocol NTKVideoPlayerFaceViewDelegate;

@interface NTKVideoPlayerView : UIView <CLKVideoPlayerViewDelegate>
{
    NTKTaskScheduler *_taskScheduler;	// 8 = 0x8
    UIView *_curtainView;	// 16 = 0x10
    UIView *_posterContainerView;	// 24 = 0x18
    UIImageView *_posterImageView;	// 32 = 0x20
    CLKVideoPlayerView *_videoPlayerView;	// 40 = 0x28
    struct UIEdgeInsets _videoPlayerEdgeInsets;	// 48 = 0x30
    long long _currentDataMode;	// 80 = 0x50
    unsigned long long _prerollState;	// 88 = 0x58
    _Bool _videoPlayerInViewHierarchy;	// 96 = 0x60
    _Bool _isHandlingTapGesture;	// 97 = 0x61
    _Bool _paused;	// 98 = 0x62
    _Bool _frozen;	// 99 = 0x63
    _Bool _slow;	// 100 = 0x64
    _Bool _orbing;	// 101 = 0x65
    _Bool _pausedViewEnabled;	// 102 = 0x66
    _Bool _shouldApplyVideoInsetToPosterImage;	// 103 = 0x67
    id <NTKVideoPlayerFaceViewDelegate> _delegate;	// 104 = 0x68
    NTKVideoPlayerDataSource *_dataSource;	// 112 = 0x70
    unsigned long long _playerBehavior;	// 120 = 0x78
    double _fadeAnimationDuration;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000027b90f
@property(nonatomic) _Bool shouldApplyVideoInsetToPosterImage; // @synthesize shouldApplyVideoInsetToPosterImage=_shouldApplyVideoInsetToPosterImage;
@property(nonatomic, getter=isPausedViewEnabled) _Bool pausedViewEnabled; // @synthesize pausedViewEnabled=_pausedViewEnabled;
@property(nonatomic) double fadeAnimationDuration; // @synthesize fadeAnimationDuration=_fadeAnimationDuration;
@property(nonatomic) unsigned long long playerBehavior; // @synthesize playerBehavior=_playerBehavior;
@property(retain, nonatomic) NTKVideoPlayerDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <NTKVideoPlayerFaceViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_mediaServicesWereReset:(id)arg1;	// IMP=0x000000000027b7f6
- (_Bool)_shouldChangeVideoOnWake;	// IMP=0x000000000027b78c
- (_Bool)_shouldChangeVideoOnTap;	// IMP=0x000000000027b778
- (void)_handleScreenWake;	// IMP=0x000000000027b772
- (void)setVideoPlayerResizeGravity:(long long)arg1;	// IMP=0x000000000027b732
- (void)setVideoPlayerInset:(struct UIEdgeInsets)arg1;	// IMP=0x000000000027b6c8
- (void)setVideoPlayerTransform:(struct CGAffineTransform)arg1;	// IMP=0x000000000027b6ab
- (void)_fadeFromPosterImageAndCurtainViewIfVisible;	// IMP=0x000000000027b67b
- (void)_fadeFromCurtainViewIfVisible;	// IMP=0x000000000027b596
- (void)_fadeToCurtainView:(CDUnknownBlockType)arg1;	// IMP=0x000000000027b441
- (void)_hideCurtainView;	// IMP=0x000000000027b41f
- (void)_showCurtainView;	// IMP=0x000000000027b3d2
- (void)_createCurtainView;	// IMP=0x000000000027b2ae
- (void)_fadeFromPosterImageIfVisible:(CDUnknownBlockType)arg1;	// IMP=0x000000000027b0f7
- (void)_fadeToPosterImage;	// IMP=0x000000000027af8f
- (void)_hidePosterImageView;	// IMP=0x000000000027af6d
- (void)_showPosterImageView;	// IMP=0x000000000027af20
- (void)_createPosterImageView;	// IMP=0x000000000027adb3
- (void)setPosterImage:(id)arg1;	// IMP=0x000000000027ad59
- (void)_queueSubsequentListingIfSupported;	// IMP=0x000000000027ac7e
- (void)videoPlayerViewDidBeginPlayingQueuedVideo:(id)arg1;	// IMP=0x000000000027aba6
- (void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1;	// IMP=0x000000000027aa55
- (void)videoPlayerViewDidBeginPlaying:(id)arg1;	// IMP=0x000000000027a97a
- (void)_advanceListingForEvent:(unsigned long long)arg1;	// IMP=0x000000000027a891
- (void)_loadCurrentListing;	// IMP=0x000000000027a7b6
- (void)_playNextVideoForEvent:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x000000000027a5d4
- (void)_rewindLoadedVideoToBeginning;	// IMP=0x000000000027a568
- (void)_pause;	// IMP=0x000000000027a512
- (void)_play;	// IMP=0x000000000027a4bc
- (void)_updatePauseState;	// IMP=0x000000000027a479
- (void)_playIfNotPaused;	// IMP=0x000000000027a442
- (_Bool)_shouldPause;	// IMP=0x000000000027a3f7
- (void)videoPlayerView:(id)arg1 didFinishPrerolling:(_Bool)arg2;	// IMP=0x000000000027a0ec
- (void)_prerollVideo;	// IMP=0x0000000000279f86
- (void)_schedulePreroll;	// IMP=0x0000000000279d47
- (void)_cancelScheduledPreroll;	// IMP=0x0000000000279d2a
- (void)_unloadVideoPlayerView;	// IMP=0x0000000000279c21
- (void)_loadVideoPlayerView;	// IMP=0x0000000000279bbc
- (void)_resetVideoPlayer;	// IMP=0x0000000000279b1e
- (void)_createVideoPlayerViewIfNeeded;	// IMP=0x0000000000279b18
- (id)videoPlayerView;	// IMP=0x0000000000279aec
- (void)applyDataMode:(long long)arg1 comingFromDataMode:(long long)arg2;	// IMP=0x00000000002798a6
- (void)faceLibraryWasDismissed;	// IMP=0x00000000002798a0
- (void)transitionToEditing;	// IMP=0x0000000000279853
- (void)handleStyleDidChange;	// IMP=0x000000000027982a
- (void)videoPlayerViewWasTapped;	// IMP=0x00000000002797d8
- (void)applyOrbing:(_Bool)arg1;	// IMP=0x00000000002797bc
- (void)applySlow:(_Bool)arg1;	// IMP=0x00000000002797a0
- (void)applyFrozen:(_Bool)arg1;	// IMP=0x0000000000279784
- (void)handleScreenOff;	// IMP=0x00000000002796c2
- (void)handleOrdinaryScreenWake;	// IMP=0x00000000002796b0
- (void)handleWristRaiseScreenWake;	// IMP=0x000000000027969e
- (void)didAddSubview:(id)arg1;	// IMP=0x000000000027960d
- (void)layoutSubviews;	// IMP=0x0000000000279466
- (void)dealloc;	// IMP=0x0000000000279391
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002791f8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

