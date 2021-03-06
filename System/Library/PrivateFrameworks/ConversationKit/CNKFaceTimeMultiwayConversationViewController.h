//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class CNKBannerPresentationManager, MISSING_TYPE, NSTimer, TUCall;
@protocol CNKFaceTimeMultiwayConversationViewControllerDelegate, CNKFaceTimeMultiwayViewControllerIOSDelegate;

@interface CNKFaceTimeMultiwayConversationViewController : UIViewController
{
    MISSING_TYPE *conversationController;	// 8 = 0x8
    MISSING_TYPE *bannerPresentationManager;	// 16 = 0x10
    MISSING_TYPE *mostActiveParticipantsController;	// 24 = 0x18
    MISSING_TYPE *layoutStyle;	// 32 = 0x20
    MISSING_TYPE *effectsCaptureInfo;	// 40 = 0x28
    MISSING_TYPE *linkShareCoordinator;	// 112 = 0x70
    MISSING_TYPE *didAnswerFromBanner;	// 152 = 0x98
    MISSING_TYPE *viewContent;	// 160 = 0xa0
    MISSING_TYPE *inCallControlsDismissTimer;	// 336 = 0x150
    MISSING_TYPE *effectsLayoutController;	// 344 = 0x158
    MISSING_TYPE *pipZoomControl;	// 352 = 0x160
    MISSING_TYPE *shouldShowZoomControls;	// 360 = 0x168
    MISSING_TYPE *hideOneToOneLivePhotoAlertViewTimer;	// 368 = 0x170
    MISSING_TYPE *didNotifyMutedCaller;	// 376 = 0x178
    MISSING_TYPE *cachedPresentationSize;	// 384 = 0x180
    MISSING_TYPE *cachedGridViewSize;	// 400 = 0x190
    MISSING_TYPE *needsConnectionAnimation;	// 416 = 0x1a0
    MISSING_TYPE *defaults;	// 424 = 0x1a8
    MISSING_TYPE *deviceOrientation;	// 464 = 0x1d0
    MISSING_TYPE *frontBoardInterfaceOrientation;	// 472 = 0x1d8
    MISSING_TYPE *supportedDeviceOrientations;	// 480 = 0x1e0
    MISSING_TYPE *isOnScreen;	// 488 = 0x1e8
    MISSING_TYPE *stoppedSendingVideoDueToOffscreen;	// 489 = 0x1e9
    MISSING_TYPE *hasParticipantVideo;	// 490 = 0x1ea
    MISSING_TYPE *isDisplayedInBanner;	// 491 = 0x1eb
    MISSING_TYPE *pipState;	// 496 = 0x1f0
    MISSING_TYPE *delegate;	// 504 = 0x1f8
    MISSING_TYPE *iOSDelegate;	// 512 = 0x200
    MISSING_TYPE *effectsEnabled;	// 520 = 0x208
    MISSING_TYPE *needsUpdatePresentationContexts;	// 521 = 0x209
    MISSING_TYPE *lastUpdatedMostActiveParticipantViewForPiP;	// 528 = 0x210
    MISSING_TYPE *cachedMediaPipSafeAreaFrame;	// 536 = 0x218
    MISSING_TYPE *mediaPipFrameInWindowScene;	// 568 = 0x238
    MISSING_TYPE *mediaPipInfo;	// 600 = 0x258
    MISSING_TYPE *tonePlayer;	// 624 = 0x270
}

- (void).cxx_destruct;	// IMP=0x00000000001d9600
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000001ea4bb
- (id)accessibilityConstraintController;	// IMP=0x00000000001ea23f
- (void)updateVideoState;	// IMP=0x00000000001e8da2
- (void)hideEffectsBrowser;	// IMP=0x00000000001e8d9c
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000001e8768
- (void)openMessagesConversation;	// IMP=0x00000000001e8330
- (void)muteVideo;	// IMP=0x00000000001e824f
- (void)toggleVideoMuteWithShouldPauseIfStopped:(_Bool)arg1;	// IMP=0x00000000001e8011
- (void)toggleAudioMute;	// IMP=0x00000000001e7f11
- (_Bool)axShouldDisableAutoHidingControls;	// IMP=0x00000000001e6ea0
- (void)updateViewConstraints;	// IMP=0x00000000001de825
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000001de81d
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x00000000001de7ca
- (void)viewDidLayoutSubviews;	// IMP=0x00000000001de720
- (void)viewSafeAreaInsetsDidChange;	// IMP=0x00000000001dd63f
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000001dd5d9
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000001dd4fd
- (void)viewDidLoad;	// IMP=0x00000000001dd09b
- (void)dealloc;	// IMP=0x00000000001d95e3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d944b
- (id)initWithActiveCall:(id)arg1 bannerPresentationManager:(id)arg2;	// IMP=0x00000000001d0123
- (id)initWithActiveCall:(id)arg1 stagingAreaViewController:(id)arg2 bannerPresentationManager:(id)arg3;	// IMP=0x00000000001cfeee
@property(nonatomic) struct CGRect mediaPipFrameInWindowScene; // @synthesize mediaPipFrameInWindowScene;
@property(nonatomic, readonly) _Bool shouldDisconnectOnDismissal;
@property(nonatomic, readonly) _Bool isOneToOneModeEnabled;
@property(nonatomic, readonly) long long fullScreenFocusedParticipantOrientation;
@property(nonatomic, readonly) struct CGSize preferredPIPContentAspectRatio;
@property(nonatomic, readonly) UIViewController *pipViewController;
@property(nonatomic) _Bool effectsEnabled; // @synthesize effectsEnabled;
@property(nonatomic) __weak id <CNKFaceTimeMultiwayViewControllerIOSDelegate> iOSDelegate; // @synthesize iOSDelegate;
@property(nonatomic) __weak id <CNKFaceTimeMultiwayConversationViewControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic, readonly) _Bool isPipped;
@property(nonatomic) long long pipState; // @synthesize pipState;
@property(nonatomic, readonly) _Bool isShownAboveCoverSheet;
@property(nonatomic) _Bool isDisplayedInBanner; // @synthesize isDisplayedInBanner;
@property(nonatomic) _Bool hasParticipantVideo; // @synthesize hasParticipantVideo;
@property(nonatomic) _Bool isOnScreen; // @synthesize isOnScreen;
@property(nonatomic) long long supportedDeviceOrientations; // @synthesize supportedDeviceOrientations;
@property(nonatomic, readonly) _Bool wantsPIPRotationForLocalPreview;
@property(nonatomic) long long frontBoardInterfaceOrientation; // @synthesize frontBoardInterfaceOrientation;
@property(nonatomic) long long deviceOrientation; // @synthesize deviceOrientation;
@property(nonatomic, readonly) _Bool wantsApplicationDismissalStyle;
@property(nonatomic, readonly) TUCall *call;
@property(nonatomic, retain) NSTimer *inCallControlsDismissTimer; // @synthesize inCallControlsDismissTimer;
@property(nonatomic) _Bool didAnswerFromBanner; // @synthesize didAnswerFromBanner;
@property(nonatomic) __weak CNKBannerPresentationManager *bannerPresentationManager; // @synthesize bannerPresentationManager;

@end

