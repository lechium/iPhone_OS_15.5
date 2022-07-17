//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AVButton, AVControlOverflowButton, AVLayoutView, AVObservationController, AVPlaybackControlsRoutePickerView, AVPlayerViewControllerCustomControlsView, AVScrubber, AVStyleSheet, AVTouchIgnoringView, AVTransportControlsView, AVView, AVVolumeButtonControl, AVVolumeSlider, NSArray, NSUUID, NSValue, UIViewPropertyAnimator;
@protocol AVPlaybackControlsViewVisibilityDelegate;

__attribute__((visibility("hidden")))
@interface AVPlaybackControlsView : UIView
{
    NSArray *_customControlsViewLayoutGuideConstraints;	// 8 = 0x8
    _Bool _fullScreen;	// 16 = 0x10
    _Bool _prefersVolumeSliderExpandedAutomatically;	// 17 = 0x11
    _Bool _showsPlaybackControls;	// 18 = 0x12
    _Bool _showsAudioControls;	// 19 = 0x13
    _Bool _doubleRowLayoutEnabled;	// 20 = 0x14
    _Bool _needsIntialLayout;	// 21 = 0x15
    _Bool _topAreaLayoutGuideExpanded;	// 22 = 0x16
    _Bool _prefersDoneButtonIncluded;	// 23 = 0x17
    _Bool _prefersVideoGravityButtonIncluded;	// 24 = 0x18
    _Bool _prefersFullScreenButtonIncluded;	// 25 = 0x19
    _Bool _prefersPiPButtonIncluded;	// 26 = 0x1a
    AVPlayerViewControllerCustomControlsView *_customControlsView;	// 32 = 0x20
    AVStyleSheet *_styleSheet;	// 40 = 0x28
    long long _preferredUnobscuredArea;	// 48 = 0x30
    long long _includedContainers;	// 56 = 0x38
    AVTouchIgnoringView *_volumeControlsContainer;	// 64 = 0x40
    AVTouchIgnoringView *_playbackControlsContainer;	// 72 = 0x48
    AVLayoutView *_screenModeControls;	// 80 = 0x50
    AVLayoutView *_volumeControls;	// 88 = 0x58
    AVLayoutView *_prominentPlayButtonContainerView;	// 96 = 0x60
    AVView *_transportControlsContainerView;	// 104 = 0x68
    AVButton *_doneButton;	// 112 = 0x70
    AVButton *_fullScreenButton;	// 120 = 0x78
    AVButton *_videoGravityButton;	// 128 = 0x80
    AVButton *_pictureInPictureButton;	// 136 = 0x88
    NSArray *_customDisplayModeItems;	// 144 = 0x90
    AVVolumeButtonControl *_volumeButton;	// 152 = 0x98
    AVVolumeSlider *_volumeSlider;	// 160 = 0xa0
    NSArray *_customAudioItems;	// 168 = 0xa8
    AVButton *_prominentPlayButton;	// 176 = 0xb0
    AVTransportControlsView *_transportControlsView;	// 184 = 0xb8
    AVButton *_standardPlayPauseButton;	// 192 = 0xc0
    AVButton *_skipForwardButton;	// 200 = 0xc8
    AVButton *_skipBackButton;	// 208 = 0xd0
    AVButton *_startLeftwardContentTransitionButton;	// 216 = 0xd8
    AVButton *_startRightwardContentTransitionButton;	// 224 = 0xe0
    AVScrubber *_scrubber;	// 232 = 0xe8
    AVPlaybackControlsRoutePickerView *_routePickerView;	// 240 = 0xf0
    AVButton *_mediaSelectionButton;	// 248 = 0xf8
    AVControlOverflowButton *_controlOverflowButton;	// 256 = 0x100
    AVButton *_playbackSpeedButton;	// 264 = 0x108
    NSArray *_customMediaItems;	// 272 = 0x110
    NSArray *_customControlItems;	// 280 = 0x118
    id <AVPlaybackControlsViewVisibilityDelegate> _visibilityDelegate;	// 288 = 0x120
    NSValue *_overrideLayoutMarginsWhenEmbeddedInline;	// 296 = 0x128
    AVObservationController *_observationController;	// 304 = 0x130
    NSArray *_defaultAudioControls;	// 312 = 0x138
    NSArray *_defaultDisplayModeControls;	// 320 = 0x140
    double _keyboardHeight;	// 328 = 0x148
    UIViewPropertyAnimator *_keyboardUIAvoidanceAnimator;	// 336 = 0x150
    UIViewPropertyAnimator *_playbackControlsVisibilityAnimator;	// 344 = 0x158
    NSUUID *_mostRecentAnimationCompletionsID;	// 352 = 0x160
    struct CGAffineTransform _overrideTransformForProminentPlayButton;	// 360 = 0x168
}

- (void).cxx_destruct;	// IMP=0x00000000000e9066
@property(nonatomic) _Bool prefersPiPButtonIncluded; // @synthesize prefersPiPButtonIncluded=_prefersPiPButtonIncluded;
@property(nonatomic) _Bool prefersFullScreenButtonIncluded; // @synthesize prefersFullScreenButtonIncluded=_prefersFullScreenButtonIncluded;
@property(nonatomic) _Bool prefersVideoGravityButtonIncluded; // @synthesize prefersVideoGravityButtonIncluded=_prefersVideoGravityButtonIncluded;
@property(nonatomic) _Bool prefersDoneButtonIncluded; // @synthesize prefersDoneButtonIncluded=_prefersDoneButtonIncluded;
@property(nonatomic, getter=isTopAreaLayoutGuideExpanded) _Bool topAreaLayoutGuideExpanded; // @synthesize topAreaLayoutGuideExpanded=_topAreaLayoutGuideExpanded;
@property(retain, nonatomic) NSUUID *mostRecentAnimationCompletionsID; // @synthesize mostRecentAnimationCompletionsID=_mostRecentAnimationCompletionsID;
@property(retain, nonatomic) UIViewPropertyAnimator *playbackControlsVisibilityAnimator; // @synthesize playbackControlsVisibilityAnimator=_playbackControlsVisibilityAnimator;
@property(nonatomic) _Bool needsIntialLayout; // @synthesize needsIntialLayout=_needsIntialLayout;
@property(nonatomic, getter=isDoubleRowLayoutEnabled) _Bool doubleRowLayoutEnabled; // @synthesize doubleRowLayoutEnabled=_doubleRowLayoutEnabled;
@property(readonly, nonatomic) UIViewPropertyAnimator *keyboardUIAvoidanceAnimator; // @synthesize keyboardUIAvoidanceAnimator=_keyboardUIAvoidanceAnimator;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(readonly, nonatomic) NSArray *defaultDisplayModeControls; // @synthesize defaultDisplayModeControls=_defaultDisplayModeControls;
@property(readonly, nonatomic) NSArray *defaultAudioControls; // @synthesize defaultAudioControls=_defaultAudioControls;
@property(readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property(retain, nonatomic) NSValue *overrideLayoutMarginsWhenEmbeddedInline; // @synthesize overrideLayoutMarginsWhenEmbeddedInline=_overrideLayoutMarginsWhenEmbeddedInline;
@property(nonatomic) struct CGAffineTransform overrideTransformForProminentPlayButton; // @synthesize overrideTransformForProminentPlayButton=_overrideTransformForProminentPlayButton;
@property(nonatomic) _Bool showsAudioControls; // @synthesize showsAudioControls=_showsAudioControls;
@property(nonatomic) __weak id <AVPlaybackControlsViewVisibilityDelegate> visibilityDelegate; // @synthesize visibilityDelegate=_visibilityDelegate;
@property(nonatomic) _Bool showsPlaybackControls; // @synthesize showsPlaybackControls=_showsPlaybackControls;
@property(nonatomic) _Bool prefersVolumeSliderExpandedAutomatically; // @synthesize prefersVolumeSliderExpandedAutomatically=_prefersVolumeSliderExpandedAutomatically;
@property(readonly, copy, nonatomic) NSArray *customControlItems; // @synthesize customControlItems=_customControlItems;
@property(readonly, copy, nonatomic) NSArray *customMediaItems; // @synthesize customMediaItems=_customMediaItems;
@property(readonly, nonatomic) AVButton *playbackSpeedButton; // @synthesize playbackSpeedButton=_playbackSpeedButton;
@property(readonly, nonatomic) AVControlOverflowButton *controlOverflowButton; // @synthesize controlOverflowButton=_controlOverflowButton;
@property(readonly, nonatomic) AVButton *mediaSelectionButton; // @synthesize mediaSelectionButton=_mediaSelectionButton;
@property(readonly, nonatomic) AVPlaybackControlsRoutePickerView *routePickerView; // @synthesize routePickerView=_routePickerView;
@property(readonly, nonatomic) AVScrubber *scrubber; // @synthesize scrubber=_scrubber;
@property(readonly, nonatomic) AVButton *startRightwardContentTransitionButton; // @synthesize startRightwardContentTransitionButton=_startRightwardContentTransitionButton;
@property(readonly, nonatomic) AVButton *startLeftwardContentTransitionButton; // @synthesize startLeftwardContentTransitionButton=_startLeftwardContentTransitionButton;
@property(readonly, nonatomic) AVButton *skipBackButton; // @synthesize skipBackButton=_skipBackButton;
@property(readonly, nonatomic) AVButton *skipForwardButton; // @synthesize skipForwardButton=_skipForwardButton;
@property(readonly, nonatomic) AVButton *standardPlayPauseButton; // @synthesize standardPlayPauseButton=_standardPlayPauseButton;
@property(readonly, nonatomic) AVTransportControlsView *transportControlsView; // @synthesize transportControlsView=_transportControlsView;
@property(readonly, nonatomic) AVButton *prominentPlayButton; // @synthesize prominentPlayButton=_prominentPlayButton;
@property(readonly, copy, nonatomic) NSArray *customAudioItems; // @synthesize customAudioItems=_customAudioItems;
@property(readonly, nonatomic) AVVolumeSlider *volumeSlider; // @synthesize volumeSlider=_volumeSlider;
@property(readonly, nonatomic) AVVolumeButtonControl *volumeButton; // @synthesize volumeButton=_volumeButton;
@property(readonly, copy, nonatomic) NSArray *customDisplayModeItems; // @synthesize customDisplayModeItems=_customDisplayModeItems;
@property(readonly, nonatomic) AVButton *pictureInPictureButton; // @synthesize pictureInPictureButton=_pictureInPictureButton;
@property(readonly, nonatomic) AVButton *videoGravityButton; // @synthesize videoGravityButton=_videoGravityButton;
@property(readonly, nonatomic) AVButton *fullScreenButton; // @synthesize fullScreenButton=_fullScreenButton;
@property(readonly, nonatomic) AVButton *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, nonatomic) AVView *transportControlsContainerView; // @synthesize transportControlsContainerView=_transportControlsContainerView;
@property(readonly, nonatomic) AVLayoutView *prominentPlayButtonContainerView; // @synthesize prominentPlayButtonContainerView=_prominentPlayButtonContainerView;
@property(readonly, nonatomic) AVLayoutView *volumeControls; // @synthesize volumeControls=_volumeControls;
@property(readonly, nonatomic) AVLayoutView *screenModeControls; // @synthesize screenModeControls=_screenModeControls;
@property(readonly, nonatomic) AVTouchIgnoringView *playbackControlsContainer; // @synthesize playbackControlsContainer=_playbackControlsContainer;
@property(readonly, nonatomic) AVTouchIgnoringView *volumeControlsContainer; // @synthesize volumeControlsContainer=_volumeControlsContainer;
@property(readonly, nonatomic) long long includedContainers; // @synthesize includedContainers=_includedContainers;
@property(nonatomic) long long preferredUnobscuredArea; // @synthesize preferredUnobscuredArea=_preferredUnobscuredArea;
@property(nonatomic, getter=isFullScreen) _Bool fullScreen; // @synthesize fullScreen=_fullScreen;
@property(retain, nonatomic) AVStyleSheet *styleSheet; // @synthesize styleSheet=_styleSheet;
@property(retain, nonatomic) AVPlayerViewControllerCustomControlsView *customControlsView; // @synthesize customControlsView=_customControlsView;
- (id)_customControlsViewIfLoaded;	// IMP=0x00000000000e8bd7
- (id)_playbackControlsViewsForControlItems:(id)arg1 withType:(long long)arg2;	// IMP=0x00000000000e8888
- (id)_playbackControlsViewItems;	// IMP=0x00000000000e8633
- (void)_animateKeyboardAvoidance:(long long)arg1 duration:(double)arg2;	// IMP=0x00000000000e84ac
- (void)_updateLayoutMargins;	// IMP=0x00000000000e81fc
- (void)_setupInitialLayout;	// IMP=0x00000000000e7d7e
- (void)_updateDoubleRowLayoutEnabled;	// IMP=0x00000000000e7a99
- (void)_updateAreVolumeAndTransportControlsVisible;	// IMP=0x00000000000e78ed
- (void)reevaluateHiddenStateForContainersAndSubviews;	// IMP=0x00000000000e775b
- (void)_updatePlaybackControlsContainerVisibilityAnimated:(_Bool)arg1 additionalActions:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e6cfe
- (void)updateDisplayControlsVisibilityIncludedButtons:(id)arg1;	// IMP=0x00000000000e690d
- (void)_collapse:(_Bool)arg1 view:(id)arg2;	// IMP=0x00000000000e68b5
- (void)_collapse:(_Bool)arg1 views:(id)arg2;	// IMP=0x00000000000e6779
- (id)_displayModeViewsToRemoveDuringAnimation;	// IMP=0x00000000000e66cd
- (id)_audioViewsToRemoveDuringAnimation;	// IMP=0x00000000000e6621
- (id)_currentArrangedDisplayModeViews;	// IMP=0x00000000000e6576
- (id)_currentArrangedAudioModeViews;	// IMP=0x00000000000e64cb
- (id)_preferredArrangedDisplayModeViews;	// IMP=0x00000000000e641a
- (id)_preferredArrangedAudioModeViews;	// IMP=0x00000000000e6369
- (void)_updateVolumeControlsWithSize:(struct CGSize)arg1;	// IMP=0x00000000000e5b6c
- (void)_updateTransportControlsFrame;	// IMP=0x00000000000e5638
- (void)_showPlaybackControlsAnimated:(_Bool)arg1;	// IMP=0x00000000000e561f
- (void)layoutSubviews;	// IMP=0x00000000000e3489
- (void)avkit_sizeWasInvalidatedNeedingLayoutIfNeeded:(id)arg1;	// IMP=0x00000000000e3477
- (void)avkit_reevaluateHiddenStateOfItem:(id)arg1;	// IMP=0x00000000000e333c
- (void)safeAreaInsetsDidChange;	// IMP=0x00000000000e32fb
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000e32ba
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000000e3219
- (void)setPrefersVolumeSliderExpanded:(_Bool)arg1 prefersVolumeButtonIncluded:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000e2f9e
- (void)showPlaybackControls:(_Bool)arg1 immediately:(_Bool)arg2;	// IMP=0x00000000000e2e63
- (void)updateLayoutForChangedControlsVisibility;	// IMP=0x00000000000e2e29
@property(readonly, nonatomic) _Bool hasVisibleSubview;
- (void)animateAlongsideVisibilityAnimationsWithAnimationCoordinator:(id)arg1 appearingViews:(id)arg2 disappearingViews:(id)arg3;	// IMP=0x00000000000e2a77
- (void)setCustomControlItems:(id)arg1 animations:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e2810
@property(readonly, nonatomic) _Bool includesCustomDisplayModeControls;
@property(readonly, nonatomic) _Bool includesDisplayModeControlsContainer;
@property(readonly, nonatomic) _Bool includesTransportControls;
@property(readonly, nonatomic) _Bool includesCustomAudioControls;
@property(readonly, nonatomic) _Bool includesAudioControlsContainer;
@property(readonly, nonatomic) _Bool showsProminentPlayButton;
- (void)setIncludedContainers:(long long)arg1 animations:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e2550
- (void)_setUpCustomControlsViewConstraintsIfNeeded;	// IMP=0x00000000000e211c
- (void)setupInitialLayout;	// IMP=0x00000000000e2002
- (void)dealloc;	// IMP=0x00000000000e1eff
- (id)initWithFrame:(struct CGRect)arg1 styleSheet:(id)arg2;	// IMP=0x00000000000e1184

@end
