//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateObserver-Protocol.h>
#import <SpringBoard/UIStatusBarStyleDelegate_SpringBoardOnly-Protocol.h>

@class NSMutableDictionary, NSMutableSet, NSString, SBMedusaSettings, SBOrientationTransformWrapperView, UIColor, UIStatusBar, UITapGestureRecognizer, _UIStatusBar;
@protocol SBMainDisplaySceneLayoutStatusBarViewDataSource, UIStatusBarStyleDelegate_SpringBoardOnly;

@interface SBMainDisplaySceneLayoutStatusBarView : UIView <PTSettingsKeyObserver, UIStatusBarStyleDelegate_SpringBoardOnly, SBDeviceApplicationSceneStatusBarStateObserver>
{
    SBOrientationTransformWrapperView *_statusBarContainerView;	// 8 = 0x8
    UIView *_statusBarWrapperView;	// 16 = 0x10
    UIStatusBar *_statusBar;	// 24 = 0x18
    _UIStatusBar *_statusBarUnderlyingViewAccessor;	// 32 = 0x20
    NSMutableSet *_statusBarRequiringReasons;	// 40 = 0x28
    NSMutableDictionary *_partIdentifiersDefaultStyles;	// 48 = 0x30
    NSMutableDictionary *_partIdentifiersCustomStyles;	// 56 = 0x38
    NSMutableDictionary *_hitTestLayers;	// 64 = 0x40
    NSString *_statusBarBreadcrumbSceneIdentifier;	// 72 = 0x48
    _Bool _statusBarLaidOutForClassic;	// 80 = 0x50
    _Bool _lastHiddenValueForAnimation;	// 81 = 0x51
    UITapGestureRecognizer *_scrollToTopGestureRecognizer;	// 88 = 0x58
    UITapGestureRecognizer *_showDebugGestureRecognizer;	// 96 = 0x60
    SBMedusaSettings *_medusaSettings;	// 104 = 0x68
    _Bool _debugBackgroundColorEnabled;	// 112 = 0x70
    _Bool _debugOffsetEnabled;	// 113 = 0x71
    unsigned long long _debugOffsetIndex;	// 120 = 0x78
    UIColor *_debugBackgroundColor;	// 128 = 0x80
    struct {
        unsigned int styleDelegateWants_statusBar_styleForRequestedStyle_overrides:1;
        unsigned int styleDelegateWants_statusBar_willAnimateFromHeight_toHeight_duration_animation:1;
        unsigned int styleDelegateWants_statusBar_didAnimateFromHeight_toHeight_animation:1;
        unsigned int styleDelegateWants_statusBarSystemNavigationAction:1;
        unsigned int styleDelegateWants_statusBar_didTriggerButtonType_withAction:1;
        unsigned int styleDelegateWants_statusBar_didTriggerButtonType_withAction_context:1;
        unsigned int styleDelegateWants_statusBar_effectiveStyleOverridesForRequestedStyle_overrides:1;
        unsigned int styleDelegateWants_overriddenRequestedStyleFromStyle:1;
        unsigned int dataSourceWants_statusBarPartsForSceneWithIdentifier:1;
        unsigned int dataSourceWants_currentlyValidStatusBarPartIdentifiers:1;
        unsigned int dataSourceWants_statusBarDescriberAtPoint_inView_pointInSceneLayoutSpace:1;
        unsigned int dataSourceWants_frameForSceneIdentifier_inView:1;
        unsigned int dataSourceWants_statusBarAvoidanceFrame:1;
    } _conformanceFlags;	// 136 = 0x88
    id <SBMainDisplaySceneLayoutStatusBarViewDataSource> _dataSource;	// 144 = 0x90
    id <UIStatusBarStyleDelegate_SpringBoardOnly> _realStyleDelegate;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x00000000002e3775
@property(nonatomic) __weak id <UIStatusBarStyleDelegate_SpringBoardOnly> realStyleDelegate; // @synthesize realStyleDelegate=_realStyleDelegate;
@property(nonatomic) __weak id <SBMainDisplaySceneLayoutStatusBarViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (long long)overriddenRequestedStyleFromStyle:(long long)arg1;	// IMP=0x00000000002e36f6
- (unsigned long long)statusBar:(id)arg1 effectiveStyleOverridesForRequestedStyle:(long long)arg2 overrides:(unsigned long long)arg3;	// IMP=0x00000000002e365d
- (void)statusBar:(id)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3 context:(id)arg4;	// IMP=0x00000000002e363c
- (void)statusBar:(id)arg1 didTriggerButtonType:(long long)arg2 withAction:(long long)arg3;	// IMP=0x00000000002e361b
- (id)statusBarSystemNavigationAction:(id)arg1;	// IMP=0x00000000002e359d
- (void)statusBar:(id)arg1 didAnimateFromHeight:(double)arg2 toHeight:(double)arg3 animation:(int)arg4;	// IMP=0x00000000002e350b
- (void)statusBar:(id)arg1 willAnimateFromHeight:(double)arg2 toHeight:(double)arg3 duration:(double)arg4 animation:(int)arg5;	// IMP=0x00000000002e346f
- (long long)statusBar:(id)arg1 styleForRequestedStyle:(long long)arg2 overrides:(unsigned long long)arg3;	// IMP=0x00000000002e33f0
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000002e325b
- (void)_updateDebugOffset;	// IMP=0x00000000002e31e5
- (void)_updateDebugBackgroundColor;	// IMP=0x00000000002e318d
- (void)_setDebugOffsetIndex:(unsigned long long)arg1;	// IMP=0x00000000002e3168
- (void)_setDebugBackgroundColor:(id)arg1;	// IMP=0x00000000002e30fd
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x00000000002e3033
- (void)_setupDebugging;	// IMP=0x00000000002e2fa5
- (double)_hiddenAlphaForAnimation:(long long)arg1;	// IMP=0x00000000002e2f8d
- (struct CGAffineTransform)_hiddenTransformForAnimation:(long long)arg1;	// IMP=0x00000000002e2efa
- (void)_animateHidden:(_Bool)arg1 withAnimation:(long long)arg2 transitionHandler:(CDUnknownBlockType)arg3 applyHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000002e2ae8
- (unsigned long long)_effectiveStatusBarStyleOverridesToSuppress;	// IMP=0x00000000002e297c
- (void)_enumerateValidStatusBarPartIdentifiersForSceneWithIdentifier:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e2834
- (id)_defaultStatusBarStyleRequest;	// IMP=0x00000000002e2820
- (long long)_effectiveStyleForPartIdentifier:(id)arg1;	// IMP=0x00000000002e2737
- (id)_validStatusBarPartIdentifiersForSceneWithIdentifier:(id)arg1;	// IMP=0x00000000002e26a4
- (struct CGRect)_statusBarAvoidanceFrame;	// IMP=0x00000000002e260d
- (id)_currentlyValidStatusBarPartIdentifiers;	// IMP=0x00000000002e25a7
- (void)didInvalidateStatusBarDescriptionForSceneWithIdentifier:(id)arg1;	// IMP=0x00000000002e226a
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarOrientationTo:(long long)arg2;	// IMP=0x00000000002e1fb2
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAvoidanceFrameTo:(struct CGRect)arg2;	// IMP=0x00000000002e1fa0
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleOverridesToSuppressTo:(unsigned long long)arg2;	// IMP=0x00000000002e1f85
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarAlphaTo:(double)arg2;	// IMP=0x00000000002e1f73
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarHiddenTo:(_Bool)arg2 withAnimation:(long long)arg3;	// IMP=0x00000000002e1f56
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2 forPartWithIdentifier:(id)arg3;	// IMP=0x00000000002e1f38
- (void)sceneWithIdentifier:(id)arg1 didChangeStatusBarStyleTo:(long long)arg2;	// IMP=0x00000000002e1f1d
- (void)_applyStatusBarAvoidanceFrame:(struct CGRect)arg1 toSceneWithIdentifier:(id)arg2;	// IMP=0x00000000002e1eba
- (void)_applyStatusBarStyleOverridesToSuppress:(unsigned long long)arg1 toSceneWithIdentifier:(id)arg2;	// IMP=0x00000000002e1c42
- (void)_applyStatusBarAlpha:(double)arg1 toSceneWithIdentifier:(id)arg2;	// IMP=0x00000000002e18e9
- (void)_applyStatusBarHidden:(_Bool)arg1 withAnimation:(long long)arg2 toSceneWithIdentifier:(id)arg3;	// IMP=0x00000000002e0e31
- (void)_applyStatusBarStyle:(long long)arg1 toPartIdentifier:(id)arg2 ofSceneWithIdentifier:(id)arg3;	// IMP=0x00000000002e0b5b
- (void)_applyStatusBarStyle:(long long)arg1 toSceneWithIdentifier:(id)arg2;	// IMP=0x00000000002e077a
- (void)applyStatusBarStylesForDescriber:(id)arg1;	// IMP=0x00000000002e0479
- (id)allValidStatusBarPartIdentifiers;	// IMP=0x00000000002e03f3
- (id)statusBarStyleRequestForStatusBarPart:(id)arg1;	// IMP=0x00000000002e0397
@property(nonatomic) long long containerOrientation;
- (void)_updateHitTestLayers;	// IMP=0x00000000002dfd5b
- (void)updateBreadcrumbActionIfNecessary;	// IMP=0x00000000002dfa20
- (_Bool)_allowChangingIndividualStatusBarParts;	// IMP=0x00000000002df9e6
@property(readonly, nonatomic, getter=isStatusBarEffectivelyHidden) _Bool statusBarEffectivelyHidden;
@property(readonly, nonatomic, getter=isRequiringStatusBar) _Bool requiringStatusBar;
- (void)_tearDownStatusBar;	// IMP=0x00000000002df7eb
- (void)_layoutStatusBarForOrientation:(long long)arg1;	// IMP=0x00000000002df55e
- (struct CGRect)_statusBarFrameForOrientation:(long long)arg1;	// IMP=0x00000000002df321
- (_Bool)_statusBarNeedsSpecialLayoutForClassic;	// IMP=0x00000000002df24c
- (void)updateStatusBarOrientationForLegacyApp;	// IMP=0x00000000002df18b
- (void)layoutStatusBarForSpringBoardRotationToOrientation:(long long)arg1;	// IMP=0x00000000002df123
- (id)_sceneHandleForClassicApplicationIfAny;	// IMP=0x00000000002df0d3
- (id)_statusBarDescriberForPrimaryApplicationIfAny;	// IMP=0x00000000002df083
- (id)_anyAppViewControllerOwningInterfaceOrientation;	// IMP=0x00000000002def0c
- (void)_statusBarTapped:(id)arg1 type:(long long)arg2;	// IMP=0x00000000002ded62
- (void)_statusBarShowDebug:(id)arg1;	// IMP=0x00000000002ded4b
- (void)_statusBarScrollToTop:(id)arg1;	// IMP=0x00000000002ded37
- (void)_addStatusBarIfNeeded;	// IMP=0x00000000002de4da
- (id)createStatusBarWithFrame:(struct CGRect)arg1 interfaceOrientation:(long long)arg2 reason:(id)arg3;	// IMP=0x00000000002de355
- (void)endRequiringStatusBarForReason:(id)arg1;	// IMP=0x00000000002de2aa
- (void)beginRequiringStatusBarForReason:(id)arg1;	// IMP=0x00000000002de1f9
- (void)dealloc;	// IMP=0x00000000002de1bb
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000002de13f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

