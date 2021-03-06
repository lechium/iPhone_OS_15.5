//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/SBHomeGestureDockSwitcherModifierDelegate-Protocol.h>
#import <SpringBoard/SBHomeGestureFinalDestinationSwitcherModifierDelegate-Protocol.h>

@class CADisplayLink, NSString, SBAppLayout, SBCoplanarSwitcherModifier, SBDismissSiriSwitcherModifier, SBHomeGestureDockSwitcherModifier, SBHomeGestureFinalDestinationSwitcherModifier, SBSwitcherModifier, UIViewFloatAnimatableProperty;

@interface SBHomeGestureSwitcherModifier <SBHomeGestureDockSwitcherModifierDelegate, SBHomeGestureFinalDestinationSwitcherModifierDelegate>
{
    _Bool _inMultitasking;	// 24 = 0x18
    UIViewFloatAnimatableProperty *_inMultitaskingChangedProperty;	// 32 = 0x20
    struct CGPoint _touchOffset;	// 40 = 0x28
    double _lastFrameOffsetX;	// 56 = 0x38
    double _lastTranslationXForRubberbanding;	// 64 = 0x40
    double _translationXLostToRubberbanding;	// 72 = 0x48
    _Bool _hasTriggeredCardFlyIn;	// 80 = 0x50
    double _translationYWhenTriggeredCardFlyIn;	// 88 = 0x58
    _Bool _hasBecomeCoplanarSinceGestureFromSwitcherBegan;	// 96 = 0x60
    struct CGPoint _gestureLiftOffVelocity;	// 104 = 0x68
    struct CGPoint _gestureLiftOffTranslation;	// 120 = 0x78
    struct CGPoint _translationAdjustmentForStartingFromSwitcher;	// 136 = 0x88
    struct CGPoint _translationAdjustmentForStartingFromHomeScreen;	// 152 = 0x98
    double _progressToInSwitcherCardScale;	// 168 = 0xa8
    double _progressToMaxTranslation;	// 176 = 0xb0
    struct CGPoint _translation;	// 184 = 0xb8
    struct CGPoint _velocity;	// 200 = 0xc8
    double _stackedProgress;	// 216 = 0xd8
    struct CGPoint _initialCentroid;	// 224 = 0xe0
    struct CGPoint _centroid;	// 240 = 0xf0
    struct CGPoint _centroidAdjustment;	// 256 = 0x100
    double _absoluteScale;	// 272 = 0x110
    struct CGPoint _translationWithoutScale;	// 280 = 0x118
    CADisplayLink *_displayLink;	// 296 = 0x128
    double _lastTouchTimestamp;	// 304 = 0x130
    long long _gestureHoldTimer;	// 312 = 0x138
    struct CGPoint _initialTouchLocation;	// 320 = 0x140
    struct CGPoint _lastTouchLocation;	// 336 = 0x150
    _Bool _everTranslatedUpwards;	// 352 = 0x160
    _Bool _cancelledGestureForEmptySwitcher;	// 353 = 0x161
    double _toHomeScreenAlpha;	// 360 = 0x168
    double _toHomeScreenBlurProgress;	// 368 = 0x170
    double _toHomeScreenDimmingAlpha;	// 376 = 0x178
    _Bool _didWarmupFlyInHaptic;	// 384 = 0x180
    _Bool _didPlayFlyInHaptic;	// 385 = 0x181
    _Bool _gestureHasBegun;	// 386 = 0x182
    _Bool _gestureHasEnded;	// 387 = 0x183
    SBSwitcherModifier *_multitaskingModifier;	// 392 = 0x188
    SBCoplanarSwitcherModifier *_coplanarLayoutModifier;	// 400 = 0x190
    SBHomeGestureDockSwitcherModifier *_dockModifier;	// 408 = 0x198
    SBHomeGestureFinalDestinationSwitcherModifier *_finalDestinationModifier;	// 416 = 0x1a0
    SBDismissSiriSwitcherModifier *_dismissSiriModifier;	// 424 = 0x1a8
    SBAppLayout *_selectedAppLayout;	// 432 = 0x1b0
    long long _startingEnvironmentMode;	// 440 = 0x1b8
    _Bool _scrunchInitiated;	// 448 = 0x1c0
    _Bool _continuingGesture;	// 449 = 0x1c1
    _Bool _lastGestureWasAnArcSwipe;	// 450 = 0x1c2
    _Bool _shouldResignActive;	// 451 = 0x1c3
}

- (void).cxx_destruct;	// IMP=0x00000000002650bb
- (void)_applyPrototypeSettings;	// IMP=0x0000000000264fcc
- (double)_coplanarSpacing;	// IMP=0x0000000000264f5b
- (_Bool)_isSelectedAppLayoutAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000264ed2
- (unsigned long long)_selectedAppLayoutIndex;	// IMP=0x0000000000264e64
- (double)_switcherCardScale;	// IMP=0x0000000000264e14
- (double)_centerYOffsetDuringGesture;	// IMP=0x0000000000264d54
- (double)_inSwitcherCenterYOffsetWhenPresented;	// IMP=0x0000000000264cca
- (double)_distanceYToMaxTranslation;	// IMP=0x0000000000264c68
- (double)_distanceYToInSwitcherCardScale;	// IMP=0x0000000000264bf3
- (double)_gestureProgressToMaxTranslationForTranslation:(double)arg1;	// IMP=0x0000000000264b6b
- (_Bool)_isTranslationPastDistanceThresholdToUnconditionallyGoHome:(double)arg1;	// IMP=0x0000000000264b37
- (_Bool)_inMultitaskingForLocation:(struct CGPoint)arg1 translation:(struct CGPoint)arg2;	// IMP=0x0000000000264907
- (void)_beginAnimatingMultitaskingPropertyWithMode:(long long)arg1 settings:(id)arg2;	// IMP=0x0000000000264696
- (_Bool)_shouldPositionAdjacentCardsOffscreenForFlyIn;	// IMP=0x0000000000264655
- (void)_displayLinkFired:(id)arg1;	// IMP=0x000000000026454f
- (_Bool)_hasTraveledSufficientDistanceForHomeOrAppSwitcher;	// IMP=0x00000000002644f8
- (_Bool)_hasPausedEnoughForFlyIn;	// IMP=0x0000000000264484
- (_Bool)_preventPositioningCardsOffscreenForFlatBottomEdgeSwipe;	// IMP=0x00000000002643f6
- (id)_updateInMultitaskingIfNeededWithLocation:(struct CGPoint)arg1;	// IMP=0x00000000002640c1
- (id)_responseForActivatingReachabilityIfNeededWithFinalDestination:(long long)arg1;	// IMP=0x0000000000263fc3
- (id)_responseForSBEventGestureEndWithEvent:(id)arg1 finalDestination:(long long)arg2;	// IMP=0x0000000000263c69
- (id)_responseForSBEventGestureBeganWithTimeDelta:(double)arg1;	// IMP=0x0000000000263a9c
- (id)_responseForStudyLogDidEndGestureWithEvent:(id)arg1 finalDestination:(long long)arg2 destinationReason:(id)arg3;	// IMP=0x00000000002635c3
- (id)_responseForStudyLogDidBeginGesture;	// IMP=0x0000000000263294
- (id)_responseForActivatingFinalDestination:(long long)arg1;	// IMP=0x0000000000262ff8
- (id)_responseForUpdatingIconViewVisibility:(_Bool)arg1;	// IMP=0x0000000000262eb4
- (id)_responseForUpdatingLayoutForGestureBegan;	// IMP=0x0000000000262d17
- (_Bool)_shouldResignActiveBasedOnCardScale;	// IMP=0x0000000000262cad
- (void)_updateShouldResignActiveWithEvent:(id)arg1;	// IMP=0x0000000000262bea
@property(readonly, copy) NSString *debugDescription;
- (id)selectedAppLayout;	// IMP=0x00000000002623b9
- (_Bool)isShowingOrAnimatingCardsForFlyIn;	// IMP=0x0000000000262395
- (struct CGPoint)liftOffTranslationForGestureEnd;	// IMP=0x000000000026237d
- (struct CGPoint)liftOffVelocityForGestureEnd;	// IMP=0x0000000000262365
- (struct SBSwitcherAsyncRenderingAttributes)asyncRenderingAttributesForAppLayout:(id)arg1;	// IMP=0x0000000000262318
- (id)keyboardSuppressionMode;	// IMP=0x00000000002622af
- (id)appLayoutsToResignActive;	// IMP=0x000000000026200b
- (id)appLayoutsToCacheFullsizeSnapshots;	// IMP=0x0000000000261f18
- (id)appLayoutsToCacheSnapshots;	// IMP=0x0000000000261d89
- (_Bool)isSwitcherWindowUserInteractionEnabled;	// IMP=0x0000000000261d77
- (_Bool)isSwitcherWindowVisible;	// IMP=0x0000000000261d6f
- (_Bool)isHomeScreenContentRequired;	// IMP=0x0000000000261d67
- (long long)wallpaperStyle;	// IMP=0x0000000000261d5c
- (_Bool)isWallpaperRequiredForSwitcher;	// IMP=0x0000000000261d54
- (_Bool)isContentStatusBarVisibleForIndex:(unsigned long long)arg1;	// IMP=0x0000000000261d3f
- (_Bool)isContainerStatusBarVisible;	// IMP=0x0000000000261caf
- (double)homeScreenBackdropBlurProgress;	// IMP=0x0000000000261b77
- (long long)homeScreenBackdropBlurType;	// IMP=0x0000000000261b35
- (double)homeScreenDimmingAlpha;	// IMP=0x0000000000261a49
- (double)wallpaperScale;	// IMP=0x0000000000261994
- (double)homeScreenScale;	// IMP=0x00000000002618a2
- (double)homeScreenAlpha;	// IMP=0x000000000026179c
- (struct UIRectCornerRadii)cornerRadiiForIndex:(unsigned long long)arg1;	// IMP=0x00000000002614c3
- (double)shadowOpacityForLayoutRole:(long long)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000026147d
- (double)titleOpacityForIndex:(unsigned long long)arg1;	// IMP=0x0000000000261474
- (double)titleAndIconOpacityForIndex:(unsigned long long)arg1;	// IMP=0x000000000026146b
- (long long)headerStyleForIndex:(unsigned long long)arg1;	// IMP=0x0000000000261463
- (double)lighteningAlphaForIndex:(unsigned long long)arg1;	// IMP=0x0000000000261416
- (double)wallpaperOverlayAlphaForIndex:(unsigned long long)arg1;	// IMP=0x00000000002613c9
- (double)dimmingAlphaForLayoutRole:(long long)arg1 inAppLayout:(id)arg2;	// IMP=0x000000000026136a
- (double)opacityForLayoutRole:(long long)arg1 inAppLayout:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000026135c
- (struct CGPoint)_rubberbandedTranslationForAdjacentCards;	// IMP=0x0000000000261237
- (double)_scaleForOffscreenAdjacentCardsForFlyIn;	// IMP=0x00000000002611b7
- (double)_scaleForAdjacentCards;	// IMP=0x0000000000261161
- (double)_scaleForTranslation:(struct CGPoint)arg1;	// IMP=0x0000000000260e1a
- (struct CGPoint)_frameOffsetForTranslation:(struct CGPoint)arg1;	// IMP=0x00000000002609bf
- (id)_layoutSettingsForAppLayout:(id)arg1 layoutSettings:(id)arg2;	// IMP=0x000000000026063b
- (id)_cornerRadiusSettings;	// IMP=0x00000000002605c1
- (id)animationAttributesForLayoutElement:(id)arg1;	// IMP=0x000000000026047c
- (id)visibleAppLayouts;	// IMP=0x000000000025ff7a
- (double)scaleForIndex:(unsigned long long)arg1;	// IMP=0x000000000025fe9e
- (struct CGRect)frameForIndex:(unsigned long long)arg1;	// IMP=0x000000000025fbfb
- (double)unconditionalDistanceThresholdForHome;	// IMP=0x000000000025fb0c
- (long long)currentFinalDestination;	// IMP=0x000000000025faef
- (void)_updateStackedProgress;	// IMP=0x000000000025f9ab
- (void)_updateGestureTranslationVelocityAndProgressWithEvent:(id)arg1;	// IMP=0x000000000025f735
- (struct CGPoint)_unadjustedGestureTranslation;	// IMP=0x000000000025f700
- (void)_updateTranslationAdjustmentForGestureFromHomeScreenIfNeededWithEvent:(id)arg1;	// IMP=0x000000000025f5c9
- (void)_updateFrameOffsetForXRubberbandingForTranslation:(struct CGPoint)arg1;	// IMP=0x000000000025f50a
- (id)_updateForGestureDidEndWithEvent:(id)arg1;	// IMP=0x000000000025e7d8
- (id)_updateForGestureDidChangeWithEvent:(id)arg1;	// IMP=0x000000000025e4c2
- (id)_updateForGestureDidBeginWithEvent:(id)arg1;	// IMP=0x000000000025dff4
- (id)handleGestureEvent:(id)arg1;	// IMP=0x000000000025de7d
- (id)handleRemovalEvent:(id)arg1;	// IMP=0x000000000025dd65
- (id)handleTransitionEvent:(id)arg1;	// IMP=0x000000000025dcc8
- (id)handleSwitcherSettingsChangedEvent:(id)arg1;	// IMP=0x000000000025dc52
- (id)handleHomeGestureSettingsChangedEvent:(id)arg1;	// IMP=0x000000000025dbdc
- (id)_newDockModifierRequiringVerticalSwipeToTrackDock:(_Bool)arg1 startingEnvironmentMode:(long long)arg2;	// IMP=0x000000000025db9a
- (void)didMoveToParentModifier:(id)arg1;	// IMP=0x000000000025d7dc
- (void)dealloc;	// IMP=0x000000000025d793
- (id)initWithGestureID:(id)arg1 selectedAppLayout:(id)arg2 startingEnvironmentMode:(long long)arg3 multitaskingModifier:(id)arg4 scrunchInitiated:(_Bool)arg5 continuingGesture:(_Bool)arg6 lastGestureWasAnArcSwipe:(_Bool)arg7;	// IMP=0x000000000025d618

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

