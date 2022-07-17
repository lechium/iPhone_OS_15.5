//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <CarPlayUI/CPUIPlayModeControlViewDelegate-Protocol.h>

@class CPUINowPlayingView, CPUIPlayModeControlView, CPUITransportControlView, NSArray, NSOperationQueue, NSString, UIActivityIndicatorView, UIBarButtonItem, UIImage, UIImageView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer, UIVisualEffectView;
@protocol CPUINowPlayingViewControllerDataSource, CPUINowPlayingViewControllerDelegate;

@interface CPUINowPlayingViewController : UIViewController <CPUIPlayModeControlViewDelegate>
{
    long long _heldAction;	// 8 = 0x8
    id <CPUINowPlayingViewControllerDataSource> _dataSource;	// 16 = 0x10
    id <CPUINowPlayingViewControllerDelegate> _delegate;	// 24 = 0x18
    NSString *_bundleIdentifier;	// 32 = 0x20
    CPUINowPlayingView *_nowPlayingView;	// 40 = 0x28
    NSOperationQueue *_artworkOperationQueue;	// 48 = 0x30
    UIVisualEffectView *_artworkVisualEffectView;	// 56 = 0x38
    UIImage *_artworkImage;	// 64 = 0x40
    UIImageView *_artworkView;	// 72 = 0x48
    UILabel *_rightTitleLabel;	// 80 = 0x50
    UIBarButtonItem *_rightTitleLabelBarButtonItem;	// 88 = 0x58
    UIBarButtonItem *_playbackQueueBarButtonItem;	// 96 = 0x60
    UIBarButtonItem *_backButton;	// 104 = 0x68
    UIActivityIndicatorView *_activityIndicator;	// 112 = 0x70
    UIBarButtonItem *_activityIndicatorBarButtonItem;	// 120 = 0x78
    UITapGestureRecognizer *_knobPressRecognizer;	// 128 = 0x80
    UITapGestureRecognizer *_backPressRecognizer;	// 136 = 0x88
    UITapGestureRecognizer *_leftNudgePressRecognizer;	// 144 = 0x90
    UITapGestureRecognizer *_rightNudgePressRecognizer;	// 152 = 0x98
    UILongPressGestureRecognizer *_leftNudgeLongPressRecognizer;	// 160 = 0xa0
    UILongPressGestureRecognizer *_rightNudgeLongPressRecognizer;	// 168 = 0xa8
    UILongPressGestureRecognizer *_leftButtonLongPressRecognizer;	// 176 = 0xb0
    UILongPressGestureRecognizer *_fastForwardButtonLongPressRecognizer;	// 184 = 0xb8
    NSString *_previousTransportButtonImageIdentifier;	// 192 = 0xc0
    NSString *_forwardTransportButtonImageIdentifier;	// 200 = 0xc8
    NSString *_playPauseTransportButtonImageIdentifier;	// 208 = 0xd0
    NSArray *_nowPlayingSizeConstraints;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x0000000000020736
@property(retain, nonatomic) NSArray *nowPlayingSizeConstraints; // @synthesize nowPlayingSizeConstraints=_nowPlayingSizeConstraints;
@property(retain, nonatomic) NSString *playPauseTransportButtonImageIdentifier; // @synthesize playPauseTransportButtonImageIdentifier=_playPauseTransportButtonImageIdentifier;
@property(retain, nonatomic) NSString *forwardTransportButtonImageIdentifier; // @synthesize forwardTransportButtonImageIdentifier=_forwardTransportButtonImageIdentifier;
@property(retain, nonatomic) NSString *previousTransportButtonImageIdentifier; // @synthesize previousTransportButtonImageIdentifier=_previousTransportButtonImageIdentifier;
@property(retain, nonatomic) UILongPressGestureRecognizer *fastForwardButtonLongPressRecognizer; // @synthesize fastForwardButtonLongPressRecognizer=_fastForwardButtonLongPressRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *leftButtonLongPressRecognizer; // @synthesize leftButtonLongPressRecognizer=_leftButtonLongPressRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *rightNudgeLongPressRecognizer; // @synthesize rightNudgeLongPressRecognizer=_rightNudgeLongPressRecognizer;
@property(retain, nonatomic) UILongPressGestureRecognizer *leftNudgeLongPressRecognizer; // @synthesize leftNudgeLongPressRecognizer=_leftNudgeLongPressRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *rightNudgePressRecognizer; // @synthesize rightNudgePressRecognizer=_rightNudgePressRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *leftNudgePressRecognizer; // @synthesize leftNudgePressRecognizer=_leftNudgePressRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *backPressRecognizer; // @synthesize backPressRecognizer=_backPressRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *knobPressRecognizer; // @synthesize knobPressRecognizer=_knobPressRecognizer;
@property(retain, nonatomic) UIBarButtonItem *activityIndicatorBarButtonItem; // @synthesize activityIndicatorBarButtonItem=_activityIndicatorBarButtonItem;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIBarButtonItem *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIBarButtonItem *playbackQueueBarButtonItem; // @synthesize playbackQueueBarButtonItem=_playbackQueueBarButtonItem;
@property(retain, nonatomic) UIBarButtonItem *rightTitleLabelBarButtonItem; // @synthesize rightTitleLabelBarButtonItem=_rightTitleLabelBarButtonItem;
@property(retain, nonatomic) UILabel *rightTitleLabel; // @synthesize rightTitleLabel=_rightTitleLabel;
@property(retain, nonatomic) UIImageView *artworkView; // @synthesize artworkView=_artworkView;
@property(retain, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
@property(retain, nonatomic) UIVisualEffectView *artworkVisualEffectView; // @synthesize artworkVisualEffectView=_artworkVisualEffectView;
@property(retain, nonatomic) NSOperationQueue *artworkOperationQueue; // @synthesize artworkOperationQueue=_artworkOperationQueue;
@property(retain, nonatomic) CPUINowPlayingView *nowPlayingView; // @synthesize nowPlayingView=_nowPlayingView;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(nonatomic) __weak id <CPUINowPlayingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CPUINowPlayingViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_reloadDataForcingLayout:(_Bool)arg1;	// IMP=0x000000000001fb2d
- (id)_upNextBarButtonItem;	// IMP=0x000000000001f892
- (void)_updateArtworkIfNeeded:(id)arg1 placeholder:(id)arg2;	// IMP=0x000000000001f0ae
- (id)_installedFullBackgroundArtworkViewBelowView:(id)arg1;	// IMP=0x000000000001ecf8
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000001ec5b
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000001ebbe
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000001eb21
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000001ea84
- (void)_updateTransportControl:(id)arg1 withDefaultImage:(id)arg2 actionType:(long long)arg3;	// IMP=0x000000000001e77a
- (void)_initializeTransportControls;	// IMP=0x000000000001e429
- (void)upNextButtonTapped:(id)arg1;	// IMP=0x000000000001e38c
- (void)_albumArtistButtonTapped:(id)arg1;	// IMP=0x000000000001e302
- (void)_fastForwardButtonLongPress:(id)arg1;	// IMP=0x000000000001e282
- (void)_rightNudgePress:(id)arg1;	// IMP=0x000000000001e266
- (void)_fastForwardButtonTouchUp:(id)arg1;	// IMP=0x000000000001e20d
- (void)_fastForwardButtonTouchDown:(id)arg1;	// IMP=0x000000000001e191
- (void)_leftNudgePress:(id)arg1;	// IMP=0x000000000001e178
- (void)_leftButtonLongPress:(id)arg1;	// IMP=0x000000000001e0fe
- (void)_leftButtonTouchUp:(id)arg1;	// IMP=0x000000000001e0a5
- (void)_leftButtonTouchDown:(id)arg1;	// IMP=0x000000000001e029
- (void)_sendHeldAction;	// IMP=0x000000000001dfc7
- (void)_respondToHeldAction;	// IMP=0x000000000001df79
- (void)_playPauseButtonTouchUp:(id)arg1;	// IMP=0x000000000001df16
- (void)_playPauseButtonTouchDown:(id)arg1;	// IMP=0x000000000001deca
- (void)_sendAction:(long long)arg1 withState:(long long)arg2;	// IMP=0x000000000001de59
- (void)_updatePlaybackRate;	// IMP=0x000000000001dd2c
- (void)_updateShuffleStateWithType:(long long)arg1;	// IMP=0x000000000001dc8e
- (void)_updateRepeatStateWithType:(long long)arg1;	// IMP=0x000000000001dbe0
- (void)_updatePlayModesState;	// IMP=0x000000000001d656
- (void)updatePlayControls;	// IMP=0x000000000001d400
- (_Bool)_showsButtonSelectionsForTouch;	// IMP=0x000000000001d364
- (void)_recalculateLayout:(_Bool)arg1;	// IMP=0x000000000001c99e
- (void)viewDidLayoutSubviews;	// IMP=0x000000000001c95b
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000001c915
- (id)preferredFocusEnvironments;	// IMP=0x000000000001c854
@property(readonly, nonatomic) CPUIPlayModeControlView *playModeControlView;
@property(readonly, nonatomic) CPUITransportControlView *transportControlView;
- (void)_adjustRightTitleLabelToFit;	// IMP=0x000000000001c58c
- (void)setRightTitle:(id)arg1;	// IMP=0x000000000001c50d
- (void)viewDidLoad;	// IMP=0x000000000001ba3b
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000001b9a9
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000001b89f
- (void)playModeControlView:(id)arg1 didSelectButton:(id)arg2;	// IMP=0x000000000001b515
- (void)reloadData;	// IMP=0x000000000001b501
- (id)initWithBundleIdentifier:(id)arg1 dataSource:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000001b200

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
