//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <AVKit/AVContentOverlayViewDelegate-Protocol.h>
#import <AVKit/AVFullScreenViewControllerDelegate-Protocol.h>
#import <AVKit/AVPictureInPictureContentSource-Protocol.h>
#import <AVKit/AVPictureInPictureControllerDelegate-Protocol.h>
#import <AVKit/AVPlaybackControlsViewVisibilityDelegate-Protocol.h>
#import <AVKit/AVPlaybackRateCollectionDelegate-Protocol.h>
#import <AVKit/AVPlayerControllerDelegate-Protocol.h>
#import <AVKit/AVTransitionControllerDelegate-Protocol.h>
#import <AVKit/UIGestureRecognizerDelegate-Protocol.h>
#import <AVKit/UIPopoverPresentationControllerDelegate-Protocol.h>

@class AVBehaviorStorage, AVContentOverlayView, AVFullScreenViewController, AVObservationController, AVPictureInPictureController, AVPlaybackControlsController, AVPlaybackRateCollection, AVPlayer, AVPlayerController, AVPlayerControllerVolumeAnimator, AVPlayerView, AVPlayerViewControllerContentView, AVPlayerViewControllerCustomControlsView, AVPresentationContext, AVSecondScreenConnection, AVTransitionController, NSArray, NSDictionary, NSMutableDictionary, NSString, NSTimer, NSValue, UIHoverGestureRecognizer, UIPanGestureRecognizer, UIPopoverPresentationController, UIView, UIWindow, __AVPlayerLayerView;
@protocol AVPlayerViewControllerContentTransitioning_NewsOnly, AVPlayerViewControllerDelegate;

@interface AVPlayerViewController : UIViewController <AVPictureInPictureControllerDelegate, UIGestureRecognizerDelegate, UIPopoverPresentationControllerDelegate, AVFullScreenViewControllerDelegate, AVTransitionControllerDelegate, AVPictureInPictureContentSource, AVContentOverlayViewDelegate, AVPlaybackRateCollectionDelegate, AVPlayerControllerDelegate, AVPlaybackControlsViewVisibilityDelegate>
{
    _Bool _playerShouldAutoplay;	// 8 = 0x8
    _Bool _showsPlaybackControls;	// 9 = 0x9
    _Bool _requiresLinearPlayback;	// 10 = 0xa
    long long _videoGravity;	// 16 = 0x10
    _Bool _allowsPictureInPicturePlayback;	// 24 = 0x18
    _Bool _hasClientSetVideoGravity;	// 25 = 0x19
    _Bool _canShowPictureInPictureButton;	// 26 = 0x1a
    NSDictionary *_pixelBufferAttributes;	// 32 = 0x20
    _Bool _canHidePlaybackControls;	// 40 = 0x28
    _Bool _hoveringOverPlaybackControl;	// 41 = 0x29
    _Bool _canDisplayContentInDetachedWindow;	// 42 = 0x2a
    _Bool _canPausePlaybackWhenExitingPictureInPicture;	// 43 = 0x2b
    _Bool _disallowsAutomaticPictureInPictureStart;	// 44 = 0x2c
    _Bool _canStartPictureInPictureAutomaticallyWhenEnteringBackground;	// 45 = 0x2d
    AVSecondScreenConnection *_secondScreenConnection;	// 48 = 0x30
    AVPictureInPictureController *_pictureInPictureController;	// 56 = 0x38
    UIPopoverPresentationController *_mediaSelectionPopoverPresentationController;	// 64 = 0x40
    AVTransitionController *_transitionController;	// 72 = 0x48
    AVPlaybackControlsController *_playbackControlsController;	// 80 = 0x50
    AVPlayerView *_playerViewControllerView;	// 88 = 0x58
    AVPlayerViewControllerContentView *_playerViewControllerContentView;	// 96 = 0x60
    NSValue *_overrideLayoutMarginsWhenEmbeddedInline;	// 104 = 0x68
    struct CGAffineTransform _overrideTransformForProminentPlayButton;	// 112 = 0x70
    _Bool _canToggleVideoGravityWhenEmbeddedInline;	// 160 = 0xa0
    _Bool _playbackControlsShouldControlSystemVolume;	// 161 = 0xa1
    AVPlayerViewControllerCustomControlsView *_customControlsView;	// 168 = 0xa8
    NSTimer *_scrubGestureMomentumTimer;	// 176 = 0xb0
    _Bool _scrubGestureIsActive;	// 184 = 0xb8
    float _defaultLinearPlaybackRate;	// 188 = 0xbc
    _Bool _updatesNowPlayingInfoCenter;	// 192 = 0xc0
    _Bool _showsTimecodes;	// 193 = 0xc1
    _Bool _readyForDisplay;	// 194 = 0xc2
    _Bool _canStartPictureInPictureAutomaticallyFromInline;	// 195 = 0xc3
    _Bool _entersFullScreenWhenPlaybackBegins;	// 196 = 0xc4
    _Bool _exitsFullScreenWhenPlaybackEnds;	// 197 = 0xc5
    _Bool _shouldUseNetworkingResourcesForLiveStreamingWhilePaused;	// 198 = 0xc6
    _Bool __hasBegunObservation;	// 199 = 0xc7
    _Bool _hasPerformedInitialSetup;	// 200 = 0xc8
    _Bool _wasInitializedUsingWebKitSPI;	// 201 = 0xc9
    _Bool _requiresImmediateAssetInspection;	// 202 = 0xca
    _Bool _canPausePlaybackWhenExitingFullScreen;	// 203 = 0xcb
    _Bool _playbackControlsIncludeVolumeControls;	// 204 = 0xcc
    _Bool _canIncludePlaybackControlsWhenInline;	// 205 = 0xcd
    _Bool _pictureInPictureActive;	// 206 = 0xce
    _Bool _wantsDetachedFullscreenPresentation;	// 207 = 0xcf
    AVPlayer *_player;	// 208 = 0xd0
    NSMutableDictionary *__targetVideoGravitiesForLayoutClass;	// 216 = 0xd8
    AVPlayerController *_playerController;	// 224 = 0xe0
    id <AVPlayerViewControllerDelegate> _delegate;	// 232 = 0xe8
    AVContentOverlayView *__actualContentOverlayView;	// 240 = 0xf0
    CDUnknownBlockType _finishPreparingForInteractiveDismissalHandler;	// 248 = 0xf8
    CDUnknownBlockType _dismissForPIPStartAfterPresentationHandler;	// 256 = 0x100
    CDUnknownBlockType _pendingRestoreUserInterfaceForPictureInPictureStopHandler;	// 264 = 0x108
    CDUnknownBlockType _interactiveDismissalCompletionHandler;	// 272 = 0x110
    AVObservationController *__observationController;	// 280 = 0x118
    AVObservationController *__pipActivitySessionObservationController;	// 288 = 0x120
    AVBehaviorStorage *__behaviorStorage;	// 296 = 0x128
    long long __numberOfTrackedUserInteractions;	// 304 = 0x130
    UIHoverGestureRecognizer *_hoverGestureRecognizer;	// 312 = 0x138
    UIPanGestureRecognizer *_scrubGestureRecognizer;	// 320 = 0x140
    NSMutableDictionary *__localizedDiscoverabilityTitleForKeyCommandLocalizationKey;	// 328 = 0x148
    unsigned long long _overrideRouteSharingPolicy;	// 336 = 0x150
    AVPlayerControllerVolumeAnimator *_volumeAnimator;	// 344 = 0x158
    __AVPlayerLayerView *_playerLayerView;	// 352 = 0x160
    NSString *_overrideRoutingContextUID;	// 360 = 0x168
    NSArray *_customControlItems;	// 368 = 0x170
    NSString *_overrideParentApplicationDisplayIdentifier;	// 376 = 0x178
    double _defaultPlaybackRate;	// 384 = 0x180
    AVPlaybackRateCollection *_playbackRateCollection;	// 392 = 0x188
    NSString *_pictureInPictureActivitySessionIdentifier;	// 400 = 0x190
    struct CGSize _secondScreenConnectionDisplaySize;	// 408 = 0x198
    struct CGRect _videoBounds;	// 424 = 0x1a8
}

+ (id)keyPathsForValuesAffectingTransportBarCustomMenuItems;	// IMP=0x000000000004bab4
+ (id)keyPathsForValuesAffectingPixelBufferAttributes;	// IMP=0x000000000004ba94
+ (id)keyPathsForValuesAffectingVideoDisplaySize;	// IMP=0x000000000004ba74
+ (id)keyPathsForValuesAffectingVideoGravity;	// IMP=0x000000000004ba54
+ (id)keyPathsForValuesAffectingPictureInPictureWasStartedWhenEnteringBackground;	// IMP=0x000000000004ded4
+ (id)keyPathsForValuesAffectingPictureInPictureSuspended;	// IMP=0x000000000004deb4
+ (id)keyPathsForValuesAffectingPictureInPictureActive;	// IMP=0x000000000004de94
+ (id)keyPathsForValuesAffectingPictureInPicturePossible;	// IMP=0x000000000004de74
- (void).cxx_destruct;	// IMP=0x00000000000498c4
@property(nonatomic) _Bool wantsDetachedFullscreenPresentation; // @synthesize wantsDetachedFullscreenPresentation=_wantsDetachedFullscreenPresentation;
@property(copy, nonatomic) NSString *pictureInPictureActivitySessionIdentifier; // @synthesize pictureInPictureActivitySessionIdentifier=_pictureInPictureActivitySessionIdentifier;
@property(readonly, nonatomic, getter=isPictureInPictureActive) _Bool pictureInPictureActive; // @synthesize pictureInPictureActive=_pictureInPictureActive;
@property(nonatomic) _Bool canIncludePlaybackControlsWhenInline; // @synthesize canIncludePlaybackControlsWhenInline=_canIncludePlaybackControlsWhenInline;
@property(retain, nonatomic) AVPlaybackRateCollection *playbackRateCollection; // @synthesize playbackRateCollection=_playbackRateCollection;
@property(nonatomic) double defaultPlaybackRate; // @synthesize defaultPlaybackRate=_defaultPlaybackRate;
@property(copy, nonatomic) NSString *overrideParentApplicationDisplayIdentifier; // @synthesize overrideParentApplicationDisplayIdentifier=_overrideParentApplicationDisplayIdentifier;
@property(copy, nonatomic) NSArray *customControlItems; // @synthesize customControlItems=_customControlItems;
@property(nonatomic) _Bool playbackControlsIncludeVolumeControls; // @synthesize playbackControlsIncludeVolumeControls=_playbackControlsIncludeVolumeControls;
@property(nonatomic) _Bool canPausePlaybackWhenExitingFullScreen; // @synthesize canPausePlaybackWhenExitingFullScreen=_canPausePlaybackWhenExitingFullScreen;
@property(nonatomic) _Bool requiresImmediateAssetInspection; // @synthesize requiresImmediateAssetInspection=_requiresImmediateAssetInspection;
@property(copy, nonatomic) NSString *overrideRoutingContextUID; // @synthesize overrideRoutingContextUID=_overrideRoutingContextUID;
@property(nonatomic) _Bool wasInitializedUsingWebKitSPI; // @synthesize wasInitializedUsingWebKitSPI=_wasInitializedUsingWebKitSPI;
@property(nonatomic) _Bool hasPerformedInitialSetup; // @synthesize hasPerformedInitialSetup=_hasPerformedInitialSetup;
@property(retain, nonatomic) __AVPlayerLayerView *playerLayerView; // @synthesize playerLayerView=_playerLayerView;
@property(retain, nonatomic) AVPlayerControllerVolumeAnimator *volumeAnimator; // @synthesize volumeAnimator=_volumeAnimator;
@property(nonatomic) struct CGSize secondScreenConnectionDisplaySize; // @synthesize secondScreenConnectionDisplaySize=_secondScreenConnectionDisplaySize;
@property(nonatomic) unsigned long long overrideRouteSharingPolicy; // @synthesize overrideRouteSharingPolicy=_overrideRouteSharingPolicy;
@property(readonly, nonatomic) NSMutableDictionary *_localizedDiscoverabilityTitleForKeyCommandLocalizationKey; // @synthesize _localizedDiscoverabilityTitleForKeyCommandLocalizationKey=__localizedDiscoverabilityTitleForKeyCommandLocalizationKey;
@property(retain, nonatomic) UIPanGestureRecognizer *scrubGestureRecognizer; // @synthesize scrubGestureRecognizer=_scrubGestureRecognizer;
@property(retain, nonatomic) UIHoverGestureRecognizer *hoverGestureRecognizer; // @synthesize hoverGestureRecognizer=_hoverGestureRecognizer;
@property(nonatomic, setter=_setNumberOfTrackedUserInteractions:) long long _numberOfTrackedUserInteractions; // @synthesize _numberOfTrackedUserInteractions=__numberOfTrackedUserInteractions;
@property(nonatomic) _Bool _hasBegunObservation; // @synthesize _hasBegunObservation=__hasBegunObservation;
@property(readonly, nonatomic) AVBehaviorStorage *_behaviorStorage; // @synthesize _behaviorStorage=__behaviorStorage;
@property(readonly, nonatomic) AVObservationController *_pipActivitySessionObservationController; // @synthesize _pipActivitySessionObservationController=__pipActivitySessionObservationController;
@property(readonly, nonatomic) AVObservationController *_observationController; // @synthesize _observationController=__observationController;
@property(copy, nonatomic) CDUnknownBlockType interactiveDismissalCompletionHandler; // @synthesize interactiveDismissalCompletionHandler=_interactiveDismissalCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType pendingRestoreUserInterfaceForPictureInPictureStopHandler; // @synthesize pendingRestoreUserInterfaceForPictureInPictureStopHandler=_pendingRestoreUserInterfaceForPictureInPictureStopHandler;
@property(copy, nonatomic) CDUnknownBlockType dismissForPIPStartAfterPresentationHandler; // @synthesize dismissForPIPStartAfterPresentationHandler=_dismissForPIPStartAfterPresentationHandler;
@property(copy, nonatomic) CDUnknownBlockType finishPreparingForInteractiveDismissalHandler; // @synthesize finishPreparingForInteractiveDismissalHandler=_finishPreparingForInteractiveDismissalHandler;
@property(nonatomic) _Bool shouldUseNetworkingResourcesForLiveStreamingWhilePaused; // @synthesize shouldUseNetworkingResourcesForLiveStreamingWhilePaused=_shouldUseNetworkingResourcesForLiveStreamingWhilePaused;
@property(readonly, nonatomic) AVContentOverlayView *_actualContentOverlayView; // @synthesize _actualContentOverlayView=__actualContentOverlayView;
@property(nonatomic) __weak id <AVPlayerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool exitsFullScreenWhenPlaybackEnds; // @synthesize exitsFullScreenWhenPlaybackEnds=_exitsFullScreenWhenPlaybackEnds;
@property(nonatomic) _Bool entersFullScreenWhenPlaybackBegins; // @synthesize entersFullScreenWhenPlaybackBegins=_entersFullScreenWhenPlaybackBegins;
@property(nonatomic) _Bool canStartPictureInPictureAutomaticallyFromInline; // @synthesize canStartPictureInPictureAutomaticallyFromInline=_canStartPictureInPictureAutomaticallyFromInline;
@property(nonatomic) struct CGRect videoBounds; // @synthesize videoBounds=_videoBounds;
@property(nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay; // @synthesize readyForDisplay=_readyForDisplay;
@property(nonatomic) _Bool showsTimecodes; // @synthesize showsTimecodes=_showsTimecodes;
@property(nonatomic, getter=isHoveringOverPlaybackControl) _Bool hoveringOverPlaybackControl; // @synthesize hoveringOverPlaybackControl=_hoveringOverPlaybackControl;
@property(nonatomic) _Bool canHidePlaybackControls; // @synthesize canHidePlaybackControls=_canHidePlaybackControls;
@property(nonatomic) _Bool updatesNowPlayingInfoCenter; // @synthesize updatesNowPlayingInfoCenter=_updatesNowPlayingInfoCenter;
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void)_updateSelectedPlaybackRateIfPlayerControllerRateChanges;	// IMP=0x000000000004924e
- (void)_updateSelectedPlaybackRateIfNeeded;	// IMP=0x0000000000049023
- (void)_updateDefaultLinearPlaybackRateIfNeeded;	// IMP=0x0000000000048f1b
- (void)_updateDefaultPlaybackRateIfNeeded;	// IMP=0x0000000000048dbb
- (void)playbackRateCollection:(id)arg1 selectedPlaybackRateDidChangeTo:(id)arg2;	// IMP=0x0000000000048cc9
- (_Bool)playerControllerCanRestorePlaybackRateAfterAudioSessionDeactivation:(id)arg1;	// IMP=0x0000000000048bd7
- (void)contentOverlayViewDidAddOrRemoveSubview:(id)arg1;	// IMP=0x0000000000048bc5
- (id)keyCommandResponderForFullScreenViewController:(id)arg1;	// IMP=0x0000000000048bbc
- (long long)preferredStatusStyleForFullScreenViewController:(id)arg1;	// IMP=0x0000000000048baa
- (_Bool)prefersStatusBarHiddenForFullScreenViewController:(id)arg1;	// IMP=0x0000000000048b98
- (void)fullScreenViewController:(id)arg1 viewWillTransitionToSize:(struct CGSize)arg2 coordinator:(id)arg3;	// IMP=0x0000000000048ab5
- (id)playbackContainerViewForFullScreenViewController:(id)arg1;	// IMP=0x0000000000048a65
- (id)viewForFullScreenViewController:(id)arg1;	// IMP=0x0000000000048a53
- (void)fullScreenViewControllerWillEndFullScreenPresentation:(id)arg1;	// IMP=0x0000000000048a28
- (void)fullScreenViewControllerWillBeginFullScreenPresentation:(id)arg1;	// IMP=0x00000000000489e8
- (void)playbackControlsView:(id)arg1 animateAlongsideVisibilityAnimationsWithAnimationCoordinator:(id)arg2 appearingViews:(id)arg3 disappearingViews:(id)arg4;	// IMP=0x0000000000048797
- (void)playbackControlsViewNeedsUpdateStatusBarAppearance:(id)arg1;	// IMP=0x0000000000048657
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;	// IMP=0x0000000000048618
- (void)prepareForPopoverPresentation:(id)arg1;	// IMP=0x00000000000485d6
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;	// IMP=0x00000000000485cb
- (void)pictureInPictureController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000482d7
- (void)pictureInPictureControllerDidStopPictureInPicture:(id)arg1;	// IMP=0x00000000000481a6
- (void)pictureInPictureControllerWillStopPictureInPicture:(id)arg1;	// IMP=0x0000000000048138
- (void)pictureInPictureController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;	// IMP=0x0000000000048029
- (void)pictureInPictureControllerDidStartPictureInPicture:(id)arg1;	// IMP=0x0000000000047d3f
- (void)pictureInPictureControllerWillStartPictureInPicture:(id)arg1;	// IMP=0x0000000000047aeb
- (_Bool)avkit_wantsManagedSecondScreenPlayback;	// IMP=0x0000000000047ae3
- (long long)avkit_contentSourceType;	// IMP=0x0000000000047adb
- (void)avkit_willBeginStoppingPictureInPictureForPictureInPictureViewController:(id)arg1;	// IMP=0x0000000000047993
- (void)avkit_endReducingResourcesForPictureInPictureViewController:(id)arg1 playerController:(id)arg2;	// IMP=0x000000000004783a
- (void)avkit_beginReducingResourcesForPictureInPictureViewController:(id)arg1 playerController:(id)arg2;	// IMP=0x00000000000476e1
- (void)avkit_stopRoutingVideoToPictureInPictureViewController:(id)arg1;	// IMP=0x00000000000476c4
- (void)avkit_startRoutingVideoToPictureInPictureViewController:(id)arg1;	// IMP=0x000000000004760b
- (id)avkit_makePlayerControllerIfNeeded:(id)arg1;	// IMP=0x00000000000475f9
- (id)avkit_pictureInPictureViewController;	// IMP=0x0000000000047588
@property(readonly, nonatomic) _Bool avkit_isVisible;
@property(readonly, nonatomic) struct CGRect avkit_videoRectInWindow;
@property(readonly, nonatomic) UIWindow *avkit_window;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x00000000000471e9
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000000470ad
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x0000000000046ede
- (_Bool)_modalPresentationStyleIsFullScreen;	// IMP=0x0000000000046ea3
- (_Bool)_isTransitioningToOrFromFullScreen;	// IMP=0x0000000000046d69
- (void)transitionController:(id)arg1 animationProgressDidChange:(float)arg2;	// IMP=0x0000000000046cfa
- (void)transitionController:(id)arg1 transitionWillComplete:(_Bool)arg2 continueBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000004698b
- (id)transitionControllerBackgroundViewBackgroundColor:(id)arg1;	// IMP=0x0000000000046886
- (id)transitionControllerPresentedViewBackgroundColor:(id)arg1;	// IMP=0x0000000000046615
- (_Bool)transitionControllerCanBeginInteractivePresentationTransition:(id)arg1;	// IMP=0x00000000000465a0
- (_Bool)transitionControllerCanBeginInteractiveDismissalTransition:(id)arg1;	// IMP=0x0000000000046359
- (void)transitionControllerBeginInteractiveDismissalTransition:(id)arg1;	// IMP=0x0000000000046336
- (void)transitionControllerBeginInteractivePresentationTransition:(id)arg1;	// IMP=0x00000000000462ac
- (void)transitionController:(id)arg1 prepareForFinishingInteractiveTransition:(CDUnknownBlockType)arg2;	// IMP=0x000000000004617d
- (id)transitionController:(id)arg1 targetViewForDismissingViewController:(id)arg2;	// IMP=0x0000000000046001
- (void)transitionController:(id)arg1 willBeginDismissingViewController:(id)arg2;	// IMP=0x0000000000045c07
- (void)transitionController:(id)arg1 willBeginPresentingViewController:(id)arg2;	// IMP=0x000000000004590d
- (_Bool)transitionController:(id)arg1 gestureRecognizer:(id)arg2 shouldReceiveTouch:(id)arg3;	// IMP=0x0000000000045556
- (id)transitionController:(id)arg1 configurationForPresentedViewController:(id)arg2 presentingViewController:(id)arg3;	// IMP=0x0000000000045486
- (void)_transitionFromInlineToDetachedFullScreenPresentationAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000045422
- (void)_transitionFromInlineToFullScreenPresentationAnimated:(_Bool)arg1 interactive:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000452d3
- (void)_transitionFromFullScreenAnimated:(_Bool)arg1 interactive:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044f86
- (void)_transitionFromFullScreenAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000044f6f
- (void)_transitionToDetachedFullScreenCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000044f0b
- (void)_transitionToAttachedFullScreenAnimated:(_Bool)arg1 interactive:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044ce6
- (void)_transitionToFullScreenAnimated:(_Bool)arg1 interactive:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000449d9
- (_Bool)_canEnterFullScreen;	// IMP=0x0000000000044930
- (void)_transitionFromFullScreenWithReason:(long long)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044865
- (_Bool)_isDescendantOfRootViewController;	// IMP=0x000000000004471e
@property(readonly, nonatomic) AVTransitionController *_transitionController;
- (id)_avkitPreferredTransitioningDelegate;	// IMP=0x00000000000446b7
- (id)_transitionControllerIfLoaded;	// IMP=0x00000000000446a2
@property(readonly, nonatomic) AVFullScreenViewController *fullScreenViewController;
- (void)exitFullScreenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000444f2
- (void)enterFullScreenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000004445f
- (void)showFullScreenPresentationFromView:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004424f
- (void)_avkitDidCompletePresentationTransition;	// IMP=0x000000000004423d
- (void)_avkitWillCompletePresentationTransition;	// IMP=0x0000000000044237
- (void)_updatePiPControllerCanStartAutomaticallyWhenEnteringBackground;	// IMP=0x00000000000441ee
- (void)_updatePlaybackControlsCanHideStateIfNeeded;	// IMP=0x0000000000044142
- (void)_updateContentOverlayViewSuperview;	// IMP=0x0000000000043f02
- (void)_loadObservationControllerIfNeeded;	// IMP=0x0000000000043d86
- (_Bool)_hoverGestureRecognizer:(id)arg1 hasCursorOverView:(id)arg2;	// IMP=0x0000000000043cf2
- (void)_endScrubGestureIfActive;	// IMP=0x0000000000043be7
- (_Bool)_shouldPausePlaybackWhenExitingFullscreen;	// IMP=0x0000000000043b0b
- (void)_seekForScrubGestureWithVelocity:(double)arg1;	// IMP=0x0000000000043a1f
- (double)_seekDistanceForScrubGestureWithVelocity:(double)arg1;	// IMP=0x00000000000439a8
- (double)_applyNonlinearScaleToScrubGestureVelocity:(double)arg1;	// IMP=0x0000000000043952
- (void)_handleScrubbingGestureRecognizer:(id)arg1;	// IMP=0x00000000000435fb
- (void)_handleScrubInteruptionGestureRecognizer:(id)arg1;	// IMP=0x00000000000435e9
- (void)_handleHoverGestureRecognizer:(id)arg1;	// IMP=0x00000000000433c2
- (void)_contentViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000004324d
- (_Bool)_delegateRespondsTo:(SEL)arg1;	// IMP=0x0000000000042fb0
- (void)_notifyOfMetricsCollectionEvent:(long long)arg1;	// IMP=0x0000000000042ed1
- (void)_mediaSelectionDoneButtonTapped:(id)arg1;	// IMP=0x0000000000042d33
- (void)_togglePictureInPicture;	// IMP=0x0000000000042cc4
- (_Bool)_isTrackingUserInteractionWithInteractiveView;	// IMP=0x0000000000042c4a
- (_Bool)_isTrackingUserInteraction;	// IMP=0x0000000000042c31
- (void)_endTrackingUserInteraction;	// IMP=0x0000000000042bd3
- (void)_beginTrackingUserInteraction;	// IMP=0x0000000000042b75
- (void)_handleUserInteractionObservationRecognizer:(id)arg1;	// IMP=0x0000000000042b02
- (void)_handleDoubleDoubleTapGesture:(id)arg1;	// IMP=0x0000000000042a43
- (void)_handleSingleTapGesture:(id)arg1;	// IMP=0x00000000000428b8
- (void)_handleDoubleTapGesture:(id)arg1;	// IMP=0x0000000000042385
- (_Bool)_shouldShowPictureInPictureButton;	// IMP=0x000000000004231d
- (void)_updatePlaybackControlsController;	// IMP=0x00000000000420c7
- (void)_updateExternalPlaybackIndicatorView;	// IMP=0x0000000000041e14
- (void)_updateAudioOnlyIndicatorView;	// IMP=0x0000000000041dbb
@property(readonly, nonatomic, getter=isAudioOnlyContent) _Bool audioOnlyContent;
- (void)_updateUnsupportedContentIndicatorView;	// IMP=0x0000000000041c05
- (_Bool)_isUnsupportedContent;	// IMP=0x0000000000041bbc
- (void)_createPictureInPictureControllerIfNeeded;	// IMP=0x000000000004184a
- (void)_addObservers;	// IMP=0x0000000000041061
- (void)_handleFastForwardKeyReleasedCommand:(id)arg1;	// IMP=0x0000000000040fef
- (void)_handleFastForwardKeyPressedCommand:(id)arg1;	// IMP=0x0000000000040f77
- (void)_handleRewindKeyReleasedCommand:(id)arg1;	// IMP=0x0000000000040f05
- (void)_handleRewindKeyPressedCommand:(id)arg1;	// IMP=0x0000000000040e8d
- (void)_handleVolumeDownKeyReleasedCommand:(id)arg1;	// IMP=0x0000000000040e23
- (void)_handleVolumeDownKeyPressedCommand:(id)arg1;	// IMP=0x0000000000040d88
- (void)_handleVolumeUpKeyReleasedCommand:(id)arg1;	// IMP=0x0000000000040d1e
- (void)_handleVolumeUpKeyPressedCommand:(id)arg1;	// IMP=0x0000000000040c7c
- (void)_handleShowPreviousFrameKeyCommand:(id)arg1;	// IMP=0x0000000000040c04
- (void)_handleGoToBeginningKeyCommand:(id)arg1;	// IMP=0x0000000000040b8c
- (void)_handleShowNextFrameKeyCommand:(id)arg1;	// IMP=0x0000000000040b14
- (void)_handleSkipAhead15SecondsKeyCommand:(id)arg1;	// IMP=0x0000000000040a11
- (void)_handleSkipBack15SecondsKeyCommand:(id)arg1;	// IMP=0x000000000004090e
- (void)_handlePlayPauseKeyCommand:(id)arg1;	// IMP=0x00000000000408f9
- (void)_handleExitFullScreenKeyCommand:(id)arg1;	// IMP=0x00000000000408e7
- (id)keyCommands;	// IMP=0x00000000000404af
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000000404a7
@property(copy, nonatomic) NSArray *transportBarCustomMenuItems;
- (id)_presentationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;	// IMP=0x000000000003ffe0
- (_Bool)_requiresCustomPresentationController;	// IMP=0x000000000003ffd8
- (long long)_preferredModalPresentationStyle;	// IMP=0x000000000003ff58
- (id)transitioningDelegate;	// IMP=0x000000000003fedd
- (_Bool)avkit_isEffectivelyFullScreen;	// IMP=0x000000000003fe6a
- (_Bool)prefersHomeIndicatorAutoHidden;	// IMP=0x000000000003fe58
- (long long)preferredStatusBarStyle;	// IMP=0x000000000003fc6c
- (_Bool)prefersStatusBarHidden;	// IMP=0x000000000003f99d
- (long long)preferredInterfaceOrientationForPresentation;	// IMP=0x000000000003f8b9
- (_Bool)modalPresentationCapturesStatusBarAppearance;	// IMP=0x000000000003f85a
- (long long)preferredWhitePointAdaptivityStyle;	// IMP=0x000000000003f84f
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000003f75e
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x000000000003f71d
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x000000000003f6ee
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000003f6ab
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000003f53a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000003f432
- (void)performInitialSetup;	// IMP=0x000000000003edbd
- (void)performInitialSetupIfNeededAndPossible;	// IMP=0x000000000003ed0f
- (void)viewDidLoad;	// IMP=0x000000000003ec35
- (void)loadView;	// IMP=0x000000000003e693
- (void)setView:(id)arg1;	// IMP=0x000000000003e647
@property(nonatomic) _Bool canPausePlaybackWhenExitingPictureInPicture;
- (void)_ensureBehaviorStorage;	// IMP=0x000000000003e546
@property(readonly, nonatomic) UIViewController *viewControllerForFullScreenPresentation;
- (id)_activeViewControllerForContentView;	// IMP=0x000000000003e44d
@property(retain, nonatomic) NSValue *overrideLayoutMarginsWhenEmbeddedInline;
@property(copy, nonatomic) CDUnknownBlockType playButtonHandlerForLazyPlayerLoading;
- (void)flashPlaybackControlsWithDuration:(double)arg1;	// IMP=0x000000000003df87
@property(nonatomic) _Bool volumeControlsCanShowSlider;
- (_Bool)playbackControlsIncludeVolumeControlsControls;	// IMP=0x000000000003db83
@property(nonatomic) _Bool playbackControlsIncludeDisplayModeControls;
@property(nonatomic) _Bool playbackControlsIncludeTransportControls;
@property(nonatomic) _Bool requiresLinearPlayback;
@property(nonatomic, setter=_setInlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused:) _Bool _inlinePlaybackControlsAlwaysShowLargePlayButtonWhenPaused;
@property(nonatomic) _Bool showsMinimalPlaybackControlsWhenEmbeddedInline;
@property(nonatomic) _Bool allowsEnteringFullScreen;
@property(readonly, nonatomic) _Bool canControlPlayback;
@property(readonly, nonatomic) _Bool hasCustomPlaybackControls;
- (void)_updateCustomControlsViewSuperViewIfNeeded;	// IMP=0x000000000003d03c
@property(readonly, nonatomic) AVPlayerViewControllerCustomControlsView *customControlsView;
- (id)interactiveContentOverlayView;	// IMP=0x000000000003cf1e
@property(copy, nonatomic) NSDictionary *pixelBufferAttributes;
@property(nonatomic) _Bool allowsPictureInPicturePlayback;
@property(readonly, nonatomic) UIView *contentOverlayView;
@property(readonly, nonatomic) double videoDisplayScale;
@property(readonly, nonatomic) struct CGSize videoDisplaySize;
- (void)updateVideoBounds;	// IMP=0x000000000003ba97
- (void)setVideoGravity:(id)arg1 forLayoutClass:(unsigned long long)arg2;	// IMP=0x000000000003b85e
@property(readonly, nonatomic) NSMutableDictionary *_targetVideoGravitiesForLayoutClass; // @synthesize _targetVideoGravitiesForLayoutClass=__targetVideoGravitiesForLayoutClass;
@property(copy, nonatomic) NSString *videoGravity;
@property(nonatomic) _Bool showsPlaybackControls;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003adc7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003a822
- (void)dealloc;	// IMP=0x000000000003a410
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000003a13e
@property(readonly, nonatomic) UIView *iAdPrerollView;
- (void)setWebKitOverrideRouteSharingPolicy:(unsigned long long)arg1 routingContextUID:(id)arg2;	// IMP=0x000000000004c8d6
@property(readonly, nonatomic) _Bool pictureInPictureWasStartedWhenEnteringBackground;
@property(readonly, nonatomic, getter=isPictureInPictureSuspended) _Bool pictureInPictureSuspended;
@property(readonly, nonatomic, getter=isPictureInPicturePossible) _Bool pictureInPicturePossible;
- (void)stopPictureInPicture;	// IMP=0x000000000004c821
- (void)startPictureInPicture;	// IMP=0x000000000004c804
- (void)exitFullScreenAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004c393
- (void)enterFullScreenAnimated:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004bfa4
@property(nonatomic) _Bool playbackControlsShouldControlSystemVolume;
@property(nonatomic) _Bool showsExitFullScreenButton;
- (id)initWithPlayerLayerView:(id)arg1;	// IMP=0x000000000004bd3d
@property(nonatomic) _Bool canToggleVideoGravityWhenEmbeddedInline;
@property(nonatomic) struct CGAffineTransform overrideTransformForProminentPlayButton;
@property(nonatomic) _Bool canStartPictureInPictureAutomaticallyWhenEnteringBackground;
- (void)activeContentViewDidChange;	// IMP=0x000000000004ce76
@property(nonatomic) _Bool canShowPictureInPictureButton;
@property(readonly, nonatomic) AVPlaybackControlsController *playbackControlsController;
- (void)exitFullscreen:(id)arg1;	// IMP=0x000000000004da4c
- (void)toggleMuted:(id)arg1;	// IMP=0x000000000004d9bf
- (void)pictureInPictureButtonTapped:(id)arg1;	// IMP=0x000000000004d900
- (void)fullScreenButtonTapped:(id)arg1;	// IMP=0x000000000004d837
- (void)mediaSelectionButtonTapped:(id)arg1;	// IMP=0x000000000004d451
- (void)togglePlayback:(id)arg1;	// IMP=0x000000000004d33e
- (void)videoGravityButtonTapped:(id)arg1;	// IMP=0x000000000004d16b
- (void)doneButtonTapped:(id)arg1;	// IMP=0x000000000004d156
@property(readonly, nonatomic) AVPresentationContext *presentationContext;
@property(readonly, nonatomic, getter=isPresentingFullWindow) _Bool presentingFullWindow;
@property(readonly, nonatomic, getter=isPresentedFullScreen) _Bool presentedFullScreen;
@property(readonly, nonatomic, getter=isPresentingDetachedFullScreen) _Bool presentingDetachedFullScreen;
@property(readonly, nonatomic, getter=isPresentingFullScreenFromInline) _Bool presentingFullScreenFromInline;
@property(nonatomic) _Bool canDisplayContentInDetachedWindow;
@property(readonly, nonatomic) AVPlayerViewControllerContentView *contentView;
@property(readonly, nonatomic) _Bool hasActiveTransition;
@property(nonatomic) _Bool entersFullScreenWhenTapped;
- (void)flashAutoplayControls;	// IMP=0x000000000004bc43
- (void)exitAutoplayPhase;	// IMP=0x000000000004bc3d
- (void)enterAutoplayPhase;	// IMP=0x000000000004bc37
@property(nonatomic) long long preferredUnobscuredArea;
- (id)_newsWidgetPlayerLegacyBehavior;	// IMP=0x0000000000088725
- (id)_newsWidgetPlayerBehaviorContext;	// IMP=0x00000000000886c6
- (void)setVideoGravityForTransitioningContent:(id)arg1;	// IMP=0x0000000000088654
- (void)startContentTransition:(long long)arg1;	// IMP=0x0000000000088517
@property(nonatomic) __weak id <AVPlayerViewControllerContentTransitioning_NewsOnly> contentTransitioningDelegate;
@property(readonly, nonatomic) AVPlayer *contentTransitioningPlayer;
@property(readonly, nonatomic, getter=isContentTransitionInteractive) _Bool contentTransitionInteractive;
@property(readonly, nonatomic) UIView *contentTransitioningOverlayView;
@property(nonatomic, getter=isStartNextContentTransitionButtonEnabled) _Bool startNextContentTransitionButtonEnabled;
@property(nonatomic, getter=isStartPreviousContentTransitionButtonEnabled) _Bool startPreviousContentTransitionButtonEnabled;
@property(retain, nonatomic) UIView *customContentTransitioningInfoPanel;
@property(readonly, nonatomic) long long activeContentTransitionType;
@property(readonly, nonatomic) NSArray *behaviors;
- (void)removeBehavior:(id)arg1;	// IMP=0x00000000000a50fe
- (void)addBehavior:(id)arg1;	// IMP=0x00000000000a5088

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
