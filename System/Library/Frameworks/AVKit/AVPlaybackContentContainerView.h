//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <AVKit/AVPlaybackContentContainer-Protocol.h>

@class AVStatusBarBackgroundGradientView, NSString, __AVPlayerLayerView;

__attribute__((visibility("hidden")))
@interface AVPlaybackContentContainerView : UIView <AVPlaybackContentContainer>
{
    _Bool _playingOnSecondScreen;	// 8 = 0x8
    _Bool _canShowStatusBarBackgroundGradientWhenStatusBarVisible;	// 9 = 0x9
    _Bool _observingStatusBarHidden;	// 10 = 0xa
    __AVPlayerLayerView *_playerLayerView;	// 16 = 0x10
    UIView *_contentOverlayView;	// 24 = 0x18
    UIView *_contentOverlayViewSubview;	// 32 = 0x20
    AVStatusBarBackgroundGradientView *_statusBarBackgroundGradientView;	// 40 = 0x28
    struct CGRect _videoContentFrame;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000009cf59
@property(nonatomic, getter=isObservingStatusBarHidden) _Bool observingStatusBarHidden; // @synthesize observingStatusBarHidden=_observingStatusBarHidden;
@property(readonly, nonatomic) AVStatusBarBackgroundGradientView *statusBarBackgroundGradientView; // @synthesize statusBarBackgroundGradientView=_statusBarBackgroundGradientView;
@property(nonatomic) _Bool canShowStatusBarBackgroundGradientWhenStatusBarVisible; // @synthesize canShowStatusBarBackgroundGradientWhenStatusBarVisible=_canShowStatusBarBackgroundGradientWhenStatusBarVisible;
@property(retain, nonatomic) UIView *contentOverlayViewSubview; // @synthesize contentOverlayViewSubview=_contentOverlayViewSubview;
@property(readonly, nonatomic) UIView *contentOverlayView; // @synthesize contentOverlayView=_contentOverlayView;
@property(retain, nonatomic) __AVPlayerLayerView *playerLayerView; // @synthesize playerLayerView=_playerLayerView;
@property(nonatomic) struct CGRect videoContentFrame; // @synthesize videoContentFrame=_videoContentFrame;
@property(nonatomic, getter=isPlayingOnSecondScreen) _Bool playingOnSecondScreen; // @synthesize playingOnSecondScreen=_playingOnSecondScreen;
- (struct CGRect)_resolvedContentFrame;	// IMP=0x000000000009ce5e
- (struct CGRect)_frameForStatusBarBackgroundGradientView;	// IMP=0x000000000009cc6a
- (void)_updateStatusBarBackgroundGradientViewAlpha;	// IMP=0x000000000009c4ca
- (void)didMoveToSuperview;	// IMP=0x000000000009c489
- (void)didMoveToWindow;	// IMP=0x000000000009c448
- (void)layoutSubviews;	// IMP=0x000000000009be6d
- (void)removeAllSublayerTransformAnimations;	// IMP=0x000000000009be03
- (void)setVideoGravity:(long long)arg1 removingAllSubayerTransformAnimations:(_Bool)arg2;	// IMP=0x000000000009bd43
@property(readonly, nonatomic) AVPlaybackContentContainerView *activeContentView;
- (void)dealloc;	// IMP=0x000000000009b8b1
- (id)initWithFrame:(struct CGRect)arg1 playerLayerView:(id)arg2 contentOverlayView:(id)arg3;	// IMP=0x000000000009b71b
- (id)initWithFrame:(struct CGRect)arg1 activeContentView:(id)arg2;	// IMP=0x000000000009b66d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
