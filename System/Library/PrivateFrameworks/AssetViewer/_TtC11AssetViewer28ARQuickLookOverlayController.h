//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class ASVControlsView, ASVRoundedButton, ASVTrackingStateStatusLabel, MISSING_TYPE, UIButton;

__attribute__((visibility("hidden")))
@interface _TtC11AssetViewer28ARQuickLookOverlayController : UIViewController
{
    MISSING_TYPE *wantsStatusPillHidden;	// 8 = 0x8
    MISSING_TYPE *arTrackingState;	// 0 = 0x0
    MISSING_TYPE *currentTriggerAffordance;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *sessionIsInterrupted;	// 0 = 0x0
    MISSING_TYPE *isInFullscreen;	// 13344 = 0x3420
    MISSING_TYPE *cancellables;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_longPressGesture;	// 0 = 0x0
    MISSING_TYPE *delegate;	// 421674 = 0x66f2a
    MISSING_TYPE *currentTrackingState;	// 13344 = 0x3420
    MISSING_TYPE *trackingStateStatus;	// 0 = 0x0
    MISSING_TYPE *sharingEnabled;	// 2147484672 = 0x80000400
    MISSING_TYPE *allowOverlayToBeHidden;	// 0 = 0x0
    MISSING_TYPE *touchesOnScreenGestureRecognizer;	// 1953718111 = 0x74735f5f
    MISSING_TYPE *displayCornerRadiusPortraitSidePadding;	// 0 = 0x0
    MISSING_TYPE *displayCornerRadiusDefaultPadding;	// 0 = 0x0
    MISSING_TYPE *displayCornerRadiusPortraitShutterButtonPadding;	// 0 = 0x0
    MISSING_TYPE *defaultPortraitShutterButtonPadding;	// 0 = 0x0
    MISSING_TYPE *defaultControlPadding;	// 0 = 0x0
    MISSING_TYPE *controlsViewToStatusBarVerticalPadding;	// 0 = 0x0
    MISSING_TYPE *topControlsHeight;	// 0 = 0x0
    MISSING_TYPE *topControlsButtonWidth;	// 0 = 0x0
    MISSING_TYPE *topControlsSegmentedControlWidth;	// 0 = 0x0
    MISSING_TYPE *trackingLabelMinimumBottomPadding;	// 0 = 0x0
    MISSING_TYPE *portraitConstraints;	// 0 = 0x0
    MISSING_TYPE *portraitUpsideDownConstraints;	// 0 = 0x0
    MISSING_TYPE *landscapeLeftConstraints;	// 0 = 0x0
    MISSING_TYPE *landscapeRightConstraints;	// 0 = 0x0
    MISSING_TYPE *currentConstraints;	// 0 = 0x0
    MISSING_TYPE *autoHideControlsTimer;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_controlsViewStack;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_shutterButtonContainer;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_dismissButton;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_displayModeControlView;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_shareButton;	// 0 = 0x0
    MISSING_TYPE *checkoutPlatter;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_debugActionsButtonContainer;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_debugActionsButton;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_fileARadarButton;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_shutterButton;	// 0 = 0x0
    MISSING_TYPE *animationView;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *coachingOverlayView;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_statusPill;	// 0 = 0x0
    MISSING_TYPE *$__lazy_storage_$_assetLoadingView;	// 0 = 0x0
    MISSING_TYPE *backgroundDimmingView;	// 435018 = 0x6a34a
    MISSING_TYPE *displayMode;	// 3468 = 0xd8c
    MISSING_TYPE *bottomControlCapabilities;	// 435018 = 0x6a34a
    MISSING_TYPE *operationMode;	// 0 = 0x0
    MISSING_TYPE *currentAppearance;	// 2147484680 = 0x80000408
}

- (void).cxx_destruct;	// IMP=0x000000000004ebe0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000000523e0
- (void)updateStatusPill;	// IMP=0x00000000000523b0
- (void)enableWorldModeControl:(_Bool)arg1;	// IMP=0x0000000000051b20
- (void)autoHide2DControls;	// IMP=0x00000000000514a0
- (void)stopAutoHideControlsTimerWithShouldRestart:(_Bool)arg1;	// IMP=0x00000000000513c0
- (void)startAutoHideControlsTimer;	// IMP=0x0000000000051310
- (void)displayModeChanged;	// IMP=0x0000000000051200
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000004f370
- (void)handleLongPressGesture:(id)arg1;	// IMP=0x000000000004f110
- (void)takePicture;	// IMP=0x000000000004edd0
- (void)dealloc;	// IMP=0x000000000004ebc0
- (void)viewDidLayoutSubviews;	// IMP=0x000000000004e6e0
- (void)viewDidLoad;	// IMP=0x000000000004e490
- (void)loadView;	// IMP=0x000000000004ca50
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000004ca30
@property(nonatomic, retain) ASVTrackingStateStatusLabel *statusPill;
@property(nonatomic, retain) UIButton *fileARadarButton;
@property(nonatomic, retain) UIButton *debugActionsButton;
@property(nonatomic, retain) ASVRoundedButton *shareButton;
@property(nonatomic, retain) ASVRoundedButton *dismissButton;
@property(nonatomic, retain) ASVControlsView *controlsViewStack;
- (void)trackedRaycastStateDidChange:(id)arg1;	// IMP=0x0000000000059ba0

@end
