//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/_UIRemoteViewController.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/SBButtonEventsHandler-Protocol.h>
#import <SpringBoard/SBFIdleTimerBehaviorProviding-Protocol.h>
#import <SpringBoard/SBIdleTimerProviding-Protocol.h>
#import <SpringBoard/SBUIRemoteAlertHostInterface_Internal-Protocol.h>

@class NSMutableSet, NSNumber, NSString, _UILegibilitySettings;
@protocol SBIdleTimerCoordinating, SBRemoteTransientOverlayHostViewControllerDelegate;

@interface SBRemoteTransientOverlayHostViewController : _UIRemoteViewController <SBUIRemoteAlertHostInterface_Internal, BSDescriptionProviding, SBButtonEventsHandler, SBFIdleTimerBehaviorProviding, SBIdleTimerProviding>
{
    _Bool _allowsHomeButtonDismissal;	// 8 = 0x8
    double _customIdleExpirationTimeout;	// 16 = 0x10
    long long _dismissalAnimationStyle;	// 24 = 0x18
    NSMutableSet *_idleTimerDisabledReasons;	// 32 = 0x20
    NSNumber *_launchingInterfaceOrientationValue;	// 40 = 0x28
    unsigned long long _preferredHardwareButtonEvents;	// 48 = 0x30
    int _preferredStatusBarVisibility;	// 56 = 0x38
    NSNumber *_preferredStatusBarStyleValue;	// 64 = 0x40
    NSNumber *_preferredWhitePointAdaptivityStyleValue;	// 72 = 0x48
    long long _requestedBackgroundStyle;	// 80 = 0x50
    _Bool _prefersWallpaperTunnelActive;	// 88 = 0x58
    _Bool _shouldDisableIdleWarn;	// 89 = 0x59
    _Bool _shouldUseLockedIdleTimerDuration;	// 90 = 0x5a
    long long _swipeDismissalStyle;	// 96 = 0x60
    NSNumber *_hasTranslucentContentValue;	// 104 = 0x68
    _Bool _activatingForSiri;	// 112 = 0x70
    _Bool _allowsStackingOverlayContentAbove;	// 113 = 0x71
    _Bool _contentOpaque;	// 114 = 0x72
    _Bool _shouldEnableFadeInAnimation;	// 115 = 0x73
    _Bool _shouldEnableFadeOutAnimation;	// 116 = 0x74
    _Bool _shouldDisableOrientationUpdates;	// 117 = 0x75
    _Bool _allowsCustomPresentationDismissalAnimations;	// 118 = 0x76
    _Bool _shouldIgnoreContentOverlayInsetUpdates;	// 119 = 0x77
    _Bool _shouldInvalidateWhenDeactivated;	// 120 = 0x78
    _Bool _isScreenshotMarkup;	// 121 = 0x79
    _Bool _switcherEligible;	// 122 = 0x7a
    _Bool _shouldDisableBanners;	// 123 = 0x7b
    _Bool _shouldDisableControlCenter;	// 124 = 0x7c
    _Bool _shouldDisableReachability;	// 125 = 0x7d
    _Bool _shouldDisableInteractiveScreenshotGesture;	// 126 = 0x7e
    _Bool _shouldDisableSiri;	// 127 = 0x7f
    _Bool _shouldPendAlertItems;	// 128 = 0x80
    _Bool _attachedToWindowedAccessory;	// 129 = 0x81
    id <SBRemoteTransientOverlayHostViewControllerDelegate> _delegate;	// 136 = 0x88
    id <SBIdleTimerCoordinating> _idleTimerCoordinator;	// 144 = 0x90
    long long _preferredLockedGestureDismissalStyle;	// 152 = 0x98
    long long _preferredUnlockedGestureDismissalStyle;	// 160 = 0xa0
    long long _preferredBackgroundStyle;	// 168 = 0xa8
    NSNumber *_preferredSceneDeactivationReasonValue;	// 176 = 0xb0
    unsigned long long _preferredStatusBarStyleOverridesToCancel;	// 184 = 0xb8
    _UILegibilitySettings *_preferredStatusBarLegibilitySettings;	// 192 = 0xc0
    struct CGRect _windowedAccessoryCutoutFrameInScreen;	// 200 = 0xc8
}

+ (id)serviceViewControllerInterface;	// IMP=0x00000000004aa90e
+ (id)exportedInterface;	// IMP=0x00000000004aa8ee
- (void).cxx_destruct;	// IMP=0x00000000004abe1d
@property(readonly, nonatomic) struct CGRect windowedAccessoryCutoutFrameInScreen; // @synthesize windowedAccessoryCutoutFrameInScreen=_windowedAccessoryCutoutFrameInScreen;
@property(readonly, nonatomic, getter=isAttachedToWindowedAccessory) _Bool attachedToWindowedAccessory; // @synthesize attachedToWindowedAccessory=_attachedToWindowedAccessory;
@property(readonly, nonatomic) _Bool shouldPendAlertItems; // @synthesize shouldPendAlertItems=_shouldPendAlertItems;
@property(readonly, nonatomic) _Bool shouldDisableSiri; // @synthesize shouldDisableSiri=_shouldDisableSiri;
@property(readonly, nonatomic) _Bool shouldDisableInteractiveScreenshotGesture; // @synthesize shouldDisableInteractiveScreenshotGesture=_shouldDisableInteractiveScreenshotGesture;
@property(readonly, nonatomic) _Bool shouldDisableReachability; // @synthesize shouldDisableReachability=_shouldDisableReachability;
@property(readonly, nonatomic) _Bool shouldDisableControlCenter; // @synthesize shouldDisableControlCenter=_shouldDisableControlCenter;
@property(readonly, nonatomic) _Bool shouldDisableBanners; // @synthesize shouldDisableBanners=_shouldDisableBanners;
@property(nonatomic, getter=isSwitcherEligible) _Bool switcherEligible; // @synthesize switcherEligible=_switcherEligible;
@property(nonatomic) _Bool isScreenshotMarkup; // @synthesize isScreenshotMarkup=_isScreenshotMarkup;
@property(readonly, nonatomic) _Bool shouldInvalidateWhenDeactivated; // @synthesize shouldInvalidateWhenDeactivated=_shouldInvalidateWhenDeactivated;
@property(nonatomic) _Bool shouldIgnoreContentOverlayInsetUpdates; // @synthesize shouldIgnoreContentOverlayInsetUpdates=_shouldIgnoreContentOverlayInsetUpdates;
@property(nonatomic) _Bool allowsCustomPresentationDismissalAnimations; // @synthesize allowsCustomPresentationDismissalAnimations=_allowsCustomPresentationDismissalAnimations;
@property(readonly, nonatomic) _Bool shouldDisableOrientationUpdates; // @synthesize shouldDisableOrientationUpdates=_shouldDisableOrientationUpdates;
@property(readonly, copy, nonatomic) _UILegibilitySettings *preferredStatusBarLegibilitySettings; // @synthesize preferredStatusBarLegibilitySettings=_preferredStatusBarLegibilitySettings;
@property(readonly, nonatomic) unsigned long long preferredStatusBarStyleOverridesToCancel; // @synthesize preferredStatusBarStyleOverridesToCancel=_preferredStatusBarStyleOverridesToCancel;
@property(readonly, copy, nonatomic) NSNumber *preferredSceneDeactivationReasonValue; // @synthesize preferredSceneDeactivationReasonValue=_preferredSceneDeactivationReasonValue;
@property(readonly, nonatomic) long long preferredBackgroundStyle; // @synthesize preferredBackgroundStyle=_preferredBackgroundStyle;
@property(readonly, nonatomic) long long preferredUnlockedGestureDismissalStyle; // @synthesize preferredUnlockedGestureDismissalStyle=_preferredUnlockedGestureDismissalStyle;
@property(readonly, nonatomic) long long preferredLockedGestureDismissalStyle; // @synthesize preferredLockedGestureDismissalStyle=_preferredLockedGestureDismissalStyle;
@property(nonatomic) _Bool shouldEnableFadeOutAnimation; // @synthesize shouldEnableFadeOutAnimation=_shouldEnableFadeOutAnimation;
@property(nonatomic) _Bool shouldEnableFadeInAnimation; // @synthesize shouldEnableFadeInAnimation=_shouldEnableFadeInAnimation;
@property(nonatomic) __weak id <SBIdleTimerCoordinating> idleTimerCoordinator; // @synthesize idleTimerCoordinator=_idleTimerCoordinator;
@property(readonly, nonatomic, getter=isContentOpaque) _Bool contentOpaque; // @synthesize contentOpaque=_contentOpaque;
@property(readonly, nonatomic) _Bool allowsStackingOverlayContentAbove; // @synthesize allowsStackingOverlayContentAbove=_allowsStackingOverlayContentAbove;
@property(nonatomic, getter=isActivatingForSiri) _Bool activatingForSiri; // @synthesize activatingForSiri=_activatingForSiri;
@property(nonatomic) __weak id <SBRemoteTransientOverlayHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didTransitionToAttachedToWindowedAccessory:(_Bool)arg1 windowedAccessoryCutoutFrameInScreen:(struct CGRect)arg2;	// IMP=0x00000000004abb4a
- (void)_updatePreferredGestureDismissalStyles;	// IMP=0x00000000004aba77
- (void)_updatePreferredBackgroundStyleWithAnimationSettings:(id)arg1;	// IMP=0x00000000004ab9dd
- (void)_updateContentOpaqueProperty;	// IMP=0x00000000004ab954
- (_Bool)_performButtonEvents:(unsigned long long)arg1;	// IMP=0x00000000004ab887
- (void)dismissForTransientOverlayAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004ab6b3
- (void)presentForTransientOverlayAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004ab4df
- (void)restoreInputViewsAnimated:(_Bool)arg1;	// IMP=0x00000000004ab493
- (void)preserveInputViewsAnimated:(_Bool)arg1;	// IMP=0x00000000004ab447
- (void)prepareForActivationWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004ab047
- (void)handlePictureInPictureDidBegin;	// IMP=0x00000000004aaf7b
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004aaa15
- (int)_preferredStatusBarVisibility;	// IMP=0x00000000004aa96a
- (void)_updateContentOverlayInsetsFromParentIfNecessary;	// IMP=0x00000000004aa92e
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x00000000004aa861
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000004aa859
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000004aa769
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000004aa679
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000004aa589
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000004aa499
- (long long)preferredWhitePointAdaptivityStyle;	// IMP=0x00000000004aa445
- (long long)preferredInterfaceOrientationForPresentation;	// IMP=0x00000000004aa3c8
- (long long)preferredStatusBarStyle;	// IMP=0x00000000004aa374
- (_Bool)resignFirstResponder;	// IMP=0x00000000004aa309
- (_Bool)canResignFirstResponder;	// IMP=0x00000000004aa301
- (_Bool)becomeFirstResponder;	// IMP=0x00000000004aa296
- (_Bool)canBecomeFirstResponder;	// IMP=0x00000000004aa28e
- (void)_participateInSystemAnimationFence:(id)arg1;	// IMP=0x00000000004aa262
- (void)setSceneDeactivationReason:(id)arg1;	// IMP=0x00000000004aa1b5
- (void)setReachabilityDisabled:(_Bool)arg1;	// IMP=0x00000000004aa144
- (void)setDesiredIdleTimerSettings:(id)arg1;	// IMP=0x00000000004aa051
- (void)setWhitePointAdaptivityStyle:(long long)arg1;	// IMP=0x00000000004a9f83
- (void)setOrientationChangedEventsEnabled:(_Bool)arg1;	// IMP=0x00000000004a9f0f
- (void)setLaunchingInterfaceOrientation:(long long)arg1;	// IMP=0x00000000004a9e9e
- (void)setInteractiveScreenshotGestureDisabled:(_Bool)arg1;	// IMP=0x00000000004a9e2d
- (void)setSupportedInterfaceOrientationOverride:(unsigned long long)arg1;	// IMP=0x00000000004a9e27
- (void)setShouldDisableFadeInAnimation:(_Bool)arg1;	// IMP=0x00000000004a9e14
- (void)setShouldDismissOnUILock:(_Bool)arg1;	// IMP=0x00000000004a9e0e
- (void)setStatusBarHidden:(_Bool)arg1 withDuration:(double)arg2;	// IMP=0x00000000004a9d91
- (void)setDesiredAutoLockDuration:(double)arg1;	// IMP=0x00000000004a9d05
- (void)setIdleTimerDisabled:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x00000000004a9be2
- (void)setStyleOverridesToCancel:(unsigned long long)arg1 animationSettings:(id)arg2;	// IMP=0x00000000004a9a72
- (void)setDesiredStatusBarStyleOverrides:(unsigned long long)arg1;	// IMP=0x00000000004a99ac
- (void)setSwipeDismissalStyle:(long long)arg1;	// IMP=0x00000000004a9821
- (void)setDismissalAnimationStyle:(long long)arg1;	// IMP=0x00000000004a97fc
- (void)setAllowsAlertStacking:(_Bool)arg1;	// IMP=0x00000000004a97ec
- (void)setAllowsMenuButtonDismissal:(_Bool)arg1;	// IMP=0x00000000004a97c9
- (void)setWallpaperStyle:(long long)arg1 withDuration:(double)arg2;	// IMP=0x00000000004a9739
- (void)setBackgroundStyle:(long long)arg1 withDuration:(double)arg2;	// IMP=0x00000000004a9727
- (void)setWallpaperTunnelActive:(_Bool)arg1;	// IMP=0x00000000004a9709
- (void)setDesiredHardwareButtonEvents:(unsigned long long)arg1;	// IMP=0x00000000004a96e4
- (void)invalidate;	// IMP=0x00000000004a96a8
- (void)deactivate;	// IMP=0x00000000004a966c
- (void)dismiss;	// IMP=0x00000000004a965a
- (void)setAllowsSiri:(_Bool)arg1;	// IMP=0x00000000004a95e6
- (void)setAllowsControlCenter:(_Bool)arg1;	// IMP=0x00000000004a9572
- (void)setAllowsAlertItems:(_Bool)arg1;	// IMP=0x00000000004a94fe
- (void)setAllowsBanners:(_Bool)arg1;	// IMP=0x00000000004a948a
- (id)coordinatorRequestedIdleTimerBehavior:(id)arg1;	// IMP=0x00000000004a946e
@property(readonly, nonatomic) double customIdleExpirationTimeout;
@property(readonly, nonatomic) long long idleWarnMode;
@property(readonly, nonatomic) long long idleTimerMode;
@property(readonly, nonatomic) long long idleTimerDuration;
- (void)didInvalidateForRemoteAlert;	// IMP=0x00000000004a939e
- (_Bool)handleDoubleHeightStatusBarTap;	// IMP=0x00000000004a935e
- (_Bool)handleVolumeDownButtonPress;	// IMP=0x00000000004a9336
- (_Bool)handleVolumeUpButtonPress;	// IMP=0x00000000004a930e
- (_Bool)handleHomeButtonPress;	// IMP=0x00000000004a9296
- (_Bool)handleHomeButtonLongPress;	// IMP=0x00000000004a928e
- (_Bool)handleHomeButtonDoublePress;	// IMP=0x00000000004a9286
- (_Bool)handleHeadsetButtonPress:(_Bool)arg1;	// IMP=0x00000000004a924f
- (_Bool)handleVoiceCommandButtonPress;	// IMP=0x00000000004a9247
- (_Bool)handleLockButtonPress;	// IMP=0x00000000004a921f
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000004a920d
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000004a91bd
- (id)succinctDescriptionBuilder;	// IMP=0x00000000004a910d
- (id)succinctDescription;	// IMP=0x00000000004a90bd
@property(readonly, copy) NSString *description;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000004a9033

// Remaining properties
@property(readonly, nonatomic) double customIdleWarningTimeout;
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

