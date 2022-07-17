//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/UILayoutContainerViewDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSString, UIDimmingView, UILayoutContainerView, UINavigationBar, UISlidingBarConfiguration, UISlidingBarState, UISlidingBarStateRequest, UIView, UIViewController, _UIFloatableBarButtonItem, _UIPanelInternalState, _UIVerticalEdgeShadowView;
@protocol UIPanelControllerDelegate, UIViewControllerTransitionCoordinator;

__attribute__((visibility("hidden")))
@interface UIPanelController : NSObject <UILayoutContainerViewDelegate>
{
    struct {
        unsigned int isUpdatingState:1;
        unsigned int needsDeferredUpdateWhileUpdatingState:1;
        unsigned int isPerformingDeferredUpdate:1;
        unsigned int nextLayoutIsForInitializingAnimation:1;
        unsigned int isPresentationGestureActive:1;
        unsigned int areClippingViewsUnnecessary:1;
        unsigned int inWillTransitionToTraitCollection:1;
        unsigned int inViewWillTransitionToSize:1;
        unsigned int inViewWillTransitionToSizeRecursingToChildren:1;
        unsigned int viewsLocked:1;
        unsigned int takingDestinationSnapshot:1;
        unsigned int registeredForKeyboardNotifications:1;
        unsigned int borderViewsObservingViewBackgroundColor:1;
        unsigned int updateLayoutRequested:1;
        unsigned int leadingTrailingWrapsNavigationController:1;
        unsigned int shouldDelegateNavigationBarForViewController:1;
        unsigned int isRunExpandScheduled:1;
    } _panelControllerFlags;	// 8 = 0x8
    NSMutableArray *_wrapperBlocksForNextUpdate;	// 16 = 0x10
    _Bool _animationRequestShouldCoordinate;	// 24 = 0x18
    _Bool __hasUpdatedForTraitCollection;	// 25 = 0x19
    _Bool __needsFirstTimeUpdateForTraitCollection;	// 26 = 0x1a
    _Bool __changingViewControllerParentage;	// 27 = 0x1b
    UIViewController *_owningViewController;	// 32 = 0x20
    long long _style;	// 40 = 0x28
    UIView *_dimmingView;	// 48 = 0x30
    UIView *_leadingBarContentClippingView;	// 56 = 0x38
    UIView *_trailingBarContentClippingView;	// 64 = 0x40
    UIView *_supplementaryBarContentClippingView;	// 72 = 0x48
    UINavigationBar *_navigationBarForContentLayoutGuideAnimation;	// 80 = 0x50
    _UIFloatableBarButtonItem *_floatingBarButtonItem;	// 88 = 0x58
    UILayoutContainerView *_view;	// 96 = 0x60
    _UIPanelInternalState *__internalState;	// 104 = 0x68
    _UIPanelInternalState *__previousInternalState;	// 112 = 0x70
    UISlidingBarState *__lastComputedPublicState;	// 120 = 0x78
    NSArray *__lastPossiblePublicStates;	// 128 = 0x80
    UIView *__contentView;	// 136 = 0x88
    UIView *__leadingBorderView;	// 144 = 0x90
    UIView *__trailingBorderView;	// 152 = 0x98
    UIView *__supplementaryBorderView;	// 160 = 0xa0
    _UIVerticalEdgeShadowView *__overlayEdgeShadowView;	// 168 = 0xa8
    _UIVerticalEdgeShadowView *__supplementaryParallaxShadowView;	// 176 = 0xb0
    UIDimmingView *__primaryParallaxDimmingView;	// 184 = 0xb8
    UIView *__sourceTransitionView;	// 192 = 0xc0
    UIView *__destTransitionView;	// 200 = 0xc8
    struct CGSize __lastViewSize;	// 208 = 0xd0
}

+ (id)_withDisabledAppearanceTransitions:(_Bool)arg1 forVisibleDescendantsOf:(id)arg2 perform:(CDUnknownBlockType)arg3;	// IMP=0x00000000004a7ac5
- (void).cxx_destruct;	// IMP=0x00000000004b6051
@property(nonatomic, setter=_setChangingViewControllerParentage:) _Bool _changingViewControllerParentage; // @synthesize _changingViewControllerParentage=__changingViewControllerParentage;
@property(nonatomic, setter=_setNeedsFirstTimeUpdateForTraitCollection:) _Bool _needsFirstTimeUpdateForTraitCollection; // @synthesize _needsFirstTimeUpdateForTraitCollection=__needsFirstTimeUpdateForTraitCollection;
@property(nonatomic, setter=_setHasUpdatedForTraitCollection:) _Bool _hasUpdatedForTraitCollection; // @synthesize _hasUpdatedForTraitCollection=__hasUpdatedForTraitCollection;
@property(retain, nonatomic, setter=_setDestinationTransitionView:) UIView *_destTransitionView; // @synthesize _destTransitionView=__destTransitionView;
@property(retain, nonatomic, setter=_setSourceTransitionView:) UIView *_sourceTransitionView; // @synthesize _sourceTransitionView=__sourceTransitionView;
@property(retain, nonatomic, setter=_setPrimaryParallaxDimmingView:) UIDimmingView *_primaryParallaxDimmingView; // @synthesize _primaryParallaxDimmingView=__primaryParallaxDimmingView;
@property(retain, nonatomic, setter=_setSupplementaryParallaxShadowView:) _UIVerticalEdgeShadowView *_supplementaryParallaxShadowView; // @synthesize _supplementaryParallaxShadowView=__supplementaryParallaxShadowView;
@property(retain, nonatomic, setter=_setOverlayEdgeShadowView:) _UIVerticalEdgeShadowView *_overlayEdgeShadowView; // @synthesize _overlayEdgeShadowView=__overlayEdgeShadowView;
@property(retain, nonatomic, setter=_setSupplementaryBorderView:) UIView *_supplementaryBorderView; // @synthesize _supplementaryBorderView=__supplementaryBorderView;
@property(retain, nonatomic, setter=_setTrailingBorderView:) UIView *_trailingBorderView; // @synthesize _trailingBorderView=__trailingBorderView;
@property(retain, nonatomic, setter=_setLeadingBorderView:) UIView *_leadingBorderView; // @synthesize _leadingBorderView=__leadingBorderView;
@property(retain, nonatomic, setter=_setContentView:) UIView *_contentView; // @synthesize _contentView=__contentView;
@property(nonatomic, setter=_setLastViewSize:) struct CGSize _lastViewSize; // @synthesize _lastViewSize=__lastViewSize;
@property(copy, nonatomic, setter=_setLastPossiblePublicStates:) NSArray *_lastPossiblePublicStates; // @synthesize _lastPossiblePublicStates=__lastPossiblePublicStates;
@property(copy, nonatomic, setter=_setLastComputedPublicState:) UISlidingBarState *_lastComputedPublicState; // @synthesize _lastComputedPublicState=__lastComputedPublicState;
@property(retain, nonatomic, setter=_setPreviousInternalState:) _UIPanelInternalState *_previousInternalState; // @synthesize _previousInternalState=__previousInternalState;
@property(retain, nonatomic, setter=_setInternalState:) _UIPanelInternalState *_internalState; // @synthesize _internalState=__internalState;
@property(retain, nonatomic) UILayoutContainerView *view; // @synthesize view=_view;
@property(retain, nonatomic) _UIFloatableBarButtonItem *floatingBarButtonItem; // @synthesize floatingBarButtonItem=_floatingBarButtonItem;
@property(retain, nonatomic) UINavigationBar *navigationBarForContentLayoutGuideAnimation; // @synthesize navigationBarForContentLayoutGuideAnimation=_navigationBarForContentLayoutGuideAnimation;
@property(retain, nonatomic) UIView *supplementaryBarContentClippingView; // @synthesize supplementaryBarContentClippingView=_supplementaryBarContentClippingView;
@property(retain, nonatomic) UIView *trailingBarContentClippingView; // @synthesize trailingBarContentClippingView=_trailingBarContentClippingView;
@property(retain, nonatomic) UIView *leadingBarContentClippingView; // @synthesize leadingBarContentClippingView=_leadingBarContentClippingView;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(nonatomic) _Bool animationRequestShouldCoordinate; // @synthesize animationRequestShouldCoordinate=_animationRequestShouldCoordinate;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak UIViewController *owningViewController; // @synthesize owningViewController=_owningViewController;
@property(readonly, copy) NSString *description;
- (void)_adjustNonOverlayLeadingScrollViewsForKeyboardInfo:(id)arg1;	// IMP=0x00000000004b5b09
- (void)_adjustForKeyboardInfo:(id)arg1;	// IMP=0x00000000004b54d9
- (void)_stopObservingKeyboardNotifications;	// IMP=0x00000000004b5432
- (void)_observeKeyboardNotificationsOnScreen:(id)arg1;	// IMP=0x00000000004b534a
@property(readonly, nonatomic) NSArray *uncachedPossibleStates;
@property(copy, nonatomic) UISlidingBarStateRequest *interactiveStateRequest;
- (void)animateToRequest:(id)arg1 forceOverlay:(_Bool)arg2 withVelocity:(double)arg3;	// IMP=0x00000000004b4f36
- (void)animateToRequest:(id)arg1 forceOverlay:(_Bool)arg2;	// IMP=0x00000000004b4f21
- (void)animateToRequest:(id)arg1;	// IMP=0x00000000004b4f0d
- (_Bool)isSupplementaryViewControllerVisibleAfterAnimation;	// IMP=0x00000000004b4e6f
- (_Bool)isTrailingViewControllerVisibleAfterAnimation;	// IMP=0x00000000004b4dd1
- (_Bool)isLeadingViewControllerVisibleAfterAnimation;	// IMP=0x00000000004b4d33
@property(readonly, nonatomic) id <UIViewControllerTransitionCoordinator> transitionCoordinator;
- (void)_animateFromRequest:(id)arg1 toRequest:(id)arg2 withAffectedSides:(long long)arg3 forceOverlay:(_Bool)arg4 velocity:(double)arg5;	// IMP=0x00000000004b3c90
- (struct CGSize)_expectedSecondaryColumnSizeAfterAnimatingToState:(id)arg1 getLeadingColumnSize:(struct CGSize *)arg2 trailingColumnSize:(struct CGSize *)arg3 supplementaryColumnSize:(struct CGSize *)arg4;	// IMP=0x00000000004b359a
- (void)stopAnimations;	// IMP=0x00000000004b3583
- (void)_stopAnimationsBeginningInteraction:(_Bool)arg1;	// IMP=0x00000000004b2f5e
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000004b2edf
- (void)_updateBorderViewsBackgroundColor:(id)arg1;	// IMP=0x00000000004b2d8b
- (void)_setBorderViewsObserveViewBackgroundColor:(_Bool)arg1;	// IMP=0x00000000004b2d1b
- (id)_createOverlayEdgeShadowViewForEdge:(unsigned long long)arg1;	// IMP=0x00000000004b2cdd
- (id)_createBorderView;	// IMP=0x00000000004b2c95
- (double)interpolatedMarginForPrimaryNavigationBar:(id)arg1 supplementaryOrSecondaryNavbar:(id)arg2 getInterpolatedAlpha:(double *)arg3;	// IMP=0x00000000004b29e1
- (void)_updateToNewPublicState:(id)arg1 withSize:(struct CGSize)arg2;	// IMP=0x00000000004ab94a
- (void)_unspecifiedUpdateToNewPublicState:(id)arg1 withSize:(struct CGSize)arg2;	// IMP=0x00000000004a97f2
- (void)_performWrappedUpdate:(CDUnknownBlockType)arg1;	// IMP=0x00000000004a9584
- (void)_performSingleDeferredUpdatePass;	// IMP=0x00000000004a87b6
- (void)_performDeferredUpdate;	// IMP=0x00000000004a875d
- (void)_setNeedsDeferredUpdate;	// IMP=0x00000000004a85c1
- (void)_setNeedsLayoutAndPerformImmediately:(_Bool)arg1;	// IMP=0x00000000004a8580
- (void)__viewWillLayoutSubviews;	// IMP=0x00000000004a8390
- (void)_layoutContainerViewDidMoveToWindow:(id)arg1;	// IMP=0x00000000004a828d
- (void)_layoutContainerViewWillMoveToWindow:(id)arg1;	// IMP=0x00000000004a814f
- (void)_withDisabledAppearanceTransitionsPerform:(CDUnknownBlockType)arg1;	// IMP=0x00000000004a73d4
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2 superBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000004a5463
- (void)traitCollectionDidChange:(id)arg1 toNewTraits:(id)arg2;	// IMP=0x00000000004a53a8
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 superBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000004a51a7
- (void)_expandWithTransitionCoordinator:(id)arg1;	// IMP=0x00000000004a46b8
- (void)_collapseWithTransitionCoordinator:(id)arg1;	// IMP=0x00000000004a35f7
- (void)_updateForTraitCollection:(id)arg1 oldTraitCollection:(id)arg2 withTransitionCoordinator:(id)arg3;	// IMP=0x00000000004a3284
- (_Bool)_willExpandWithNewTraitCollection:(id)arg1 oldTraitCollection:(id)arg2;	// IMP=0x00000000004a31a9
- (_Bool)_willCollapseWithNewTraitCollection:(id)arg1 oldTraitCollection:(id)arg2;	// IMP=0x00000000004a3119
- (id)gatherMultitaskingDragExclusionRectsFromVisibleColumns;	// IMP=0x00000000004a2b14
- (void)addWrapperBlockForNextUpdate:(CDUnknownBlockType)arg1;	// IMP=0x00000000004a2a88
@property(readonly, nonatomic, getter=isCollapsed) _Bool collapsed;
@property(readonly, nonatomic) long long collapsedState;
- (_Bool)isAnimating;	// IMP=0x00000000004a2871
- (void)setNeedsUpdate;	// IMP=0x00000000004a285f
- (id)allViewControllers;	// IMP=0x00000000004a2691
- (void)navigationControllerDidChangeNavigationBarHidden:(id)arg1;	// IMP=0x00000000004a268b
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x00000000004a2679
- (void)removeChildViewController:(id)arg1;	// IMP=0x00000000004a2380
- (void)_removeIdentifiedChildViewController:(id)arg1;	// IMP=0x00000000004a2272
- (void)_addIdentifiedChildViewController:(id)arg1;	// IMP=0x00000000004a1f5e
- (void)loadView;	// IMP=0x00000000004a1d12
@property(copy, nonatomic) UISlidingBarStateRequest *stateRequest;
@property(readonly, nonatomic) NSArray *possibleStates;
@property(readonly, nonatomic) UISlidingBarState *currentState;
@property(copy, nonatomic) UISlidingBarConfiguration *configuration;
@property(nonatomic) __weak id <UIPanelControllerDelegate> delegate;
@property(retain, nonatomic) UIViewController *collapsedViewController;
@property(retain, nonatomic) UIViewController *preservedDetailController;
- (void)setSupplementaryViewController:(id)arg1 changingParentage:(_Bool)arg2;	// IMP=0x00000000004a166a
@property(retain, nonatomic) UIViewController *supplementaryViewController;
- (void)setTrailingViewController:(id)arg1 changingParentage:(_Bool)arg2;	// IMP=0x00000000004a1511
@property(retain, nonatomic) UIViewController *trailingViewController;
- (void)setLeadingViewController:(id)arg1 changingParentage:(_Bool)arg2;	// IMP=0x00000000004a13b8
@property(retain, nonatomic) UIViewController *leadingViewController;
- (void)setMainViewController:(id)arg1 changingParentage:(_Bool)arg2;	// IMP=0x00000000004a125f
@property(retain, nonatomic) UIViewController *mainViewController;
@property(nonatomic) _Bool leadingTrailingWrapsNavigationController;
- (void)dealloc;	// IMP=0x00000000004a117f
@property(readonly, nonatomic) _Bool supportsColumnStyle;
- (id)initWithOwningViewController:(id)arg1;	// IMP=0x00000000004a1073
@property(nonatomic, getter=isRunExpandScheduled, setter=setRunExpandScheduled:) _Bool runExpandScheduled;
@property(nonatomic, getter=areClippingViewsUnnecessary) _Bool clippingViewsUnnecessary;
@property(nonatomic, getter=isPresentationGestureActive) _Bool presentationGestureActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
