//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/SBLockScreenEnvironment-Protocol.h>

@class NSString, SBLockScreenViewControllerBase, UIViewController;
@protocol SBApplicationHosting, SBAutoUnlockRule, SBBiometricUnlockBehavior, SBButtonEventsHandler, SBFScreenWakeAnimationTarget, SBIdleTimerProviding, SBLockScreenApplicationLaunching, SBLockScreenBacklightControlling, SBLockScreenBehaviorSuppressing, SBLockScreenBlockedStateObserving, SBLockScreenButtonObserving, SBLockScreenCallHandling, SBLockScreenContentStateProviding, SBLockScreenCustomActionStoring, SBLockScreenIdleTimerControlling, SBLockScreenLockingAndUnlocking, SBLockScreenMediaControlsPresenting, SBLockScreenPasscodeViewPresenting, SBLockScreenPluginPresenting, SBLockScreenProximityBehaviorProviding, SBLockScreenSpotlightPresenting, SBLockScreenStatusBarTransitioning, SBSWidgetMetricsProviding;

@interface SBLegacyLockScreenEnvironment : NSObject <BSDescriptionProviding, SBLockScreenEnvironment>
{
    SBLockScreenViewControllerBase *_lockScreenViewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000050a6ca
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000050a6b8
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000050a668
- (id)succinctDescriptionBuilder;	// IMP=0x000000000050a603
- (id)succinctDescription;	// IMP=0x000000000050a5b3
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) id <SBLockScreenSpotlightPresenting> spotlightPresenter;
@property(readonly, nonatomic) id <SBSWidgetMetricsProviding> widgetMetricsProvider;
@property(readonly, nonatomic) id <SBLockScreenStatusBarTransitioning> statusBarTransitionController;
@property(readonly, nonatomic) id <SBLockScreenProximityBehaviorProviding> proximityBehaviorProvider;
@property(readonly, nonatomic) id <SBLockScreenPluginPresenting> pluginPresenter;
@property(readonly, nonatomic) id <SBLockScreenPasscodeViewPresenting> passcodeViewPresenter;
@property(readonly, nonatomic) id <SBLockScreenMediaControlsPresenting> mediaControlsPresenter;
@property(readonly, nonatomic) id <SBLockScreenLockingAndUnlocking> lockController;
@property(readonly, nonatomic) id <SBLockScreenIdleTimerControlling> idleTimerController;
@property(readonly, nonatomic) id <SBLockScreenCustomActionStoring> customActionStore;
@property(readonly, nonatomic) id <SBLockScreenContentStateProviding> contentStateProvider;
@property(readonly, nonatomic) id <SBLockScreenCallHandling> callController;
@property(readonly, nonatomic) id <SBLockScreenButtonObserving> buttonObserver;
@property(readonly, nonatomic) id <SBLockScreenBlockedStateObserving> blockedStateObserver;
@property(readonly, nonatomic) id <SBLockScreenBehaviorSuppressing> behaviorSuppressor;
@property(readonly, nonatomic) id <SBLockScreenBacklightControlling> backlightController;
@property(readonly, nonatomic) id <SBLockScreenApplicationLaunching> applicationLauncher;
@property(readonly, nonatomic) id <SBFScreenWakeAnimationTarget> screenWakeAnimationTarget;
@property(readonly, nonatomic) id <SBIdleTimerProviding> idleTimerProvider;
@property(readonly, nonatomic) id <SBApplicationHosting> applicationHoster;
@property(readonly, nonatomic) id <SBButtonEventsHandler> buttonEventsHandler;
@property(readonly, nonatomic) id <SBBiometricUnlockBehavior> biometricUnlockBehavior;
@property(readonly, nonatomic) id <SBAutoUnlockRule> autoUnlockRule;
@property(readonly, nonatomic) UIViewController *rootViewController;
- (id)initWithLockScreenViewController:(id)arg1;	// IMP=0x000000000050a3ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

