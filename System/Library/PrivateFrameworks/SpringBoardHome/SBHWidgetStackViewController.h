//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardHome/BSUIScrollViewDelegate-Protocol.h>
#import <SpringBoardHome/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoardHome/SBHWidgetContainerViewControllerDelegate-Protocol.h>
#import <SpringBoardHome/SBIconViewCustomImageViewControllerObserving-Protocol.h>
#import <SpringBoardHome/SBIconViewCustomImageViewControlling-Protocol.h>
#import <SpringBoardHome/SBLeafIconObserver-Protocol.h>

@class BSUIScrollView, NSArray, NSHashTable, NSMutableDictionary, NSString, NSTimer, SBFFluidBehaviorSettings, SBHWidgetSettings, SBWidgetIcon, UIColor, UIPageControl, UIView, _UILegibilitySettings;
@protocol BSInvalidatable, SBHWidgetStackViewControllerDataSource, SBHWidgetStackViewControllerDelegate, SBLeafIconDataSource;

@interface SBHWidgetStackViewController : UIViewController <BSUIScrollViewDelegate, SBLeafIconObserver, PTSettingsKeyObserver, SBIconViewCustomImageViewControllerObserving, SBHWidgetContainerViewControllerDelegate, SBIconViewCustomImageViewControlling>
{
    NSHashTable *_observers;	// 8 = 0x8
    NSHashTable *_containerViewControllersRequiringLayoutUponActivation;	// 16 = 0x10
    id <BSInvalidatable> _stateCaptureInvalidatable;	// 24 = 0x18
    _Bool _editing;	// 32 = 0x20
    _Bool _showingContextMenu;	// 33 = 0x21
    _Bool _overlapping;	// 34 = 0x22
    _Bool _userInteractionEnabled;	// 35 = 0x23
    _Bool _automaticallyUpdatesVisiblySettled;	// 36 = 0x24
    _Bool _showsSnapshotWhenDeactivated;	// 37 = 0x25
    _Bool _showsSquareCorners;	// 38 = 0x26
    _Bool _alwaysShowsAsStack;	// 39 = 0x27
    _Bool _highlightsAtAnySize;	// 40 = 0x28
    _Bool _forcesEdgeAntialiasing;	// 41 = 0x29
    _Bool _showStackBorderWhenShowingPageControl;	// 42 = 0x2a
    _Bool _flashPageControlOnNextAppearance;	// 43 = 0x2b
    _Bool _flashPageControlOnNextAlphaChange;	// 44 = 0x2c
    CDUnknownBlockType _backgroundViewProvider;	// 48 = 0x30
    CDUnknownBlockType _backgroundViewConfigurator;	// 56 = 0x38
    double _brightness;	// 64 = 0x40
    unsigned long long _userVisibilityStatus;	// 72 = 0x48
    unsigned long long _presentationMode;	// 80 = 0x50
    unsigned long long _imageViewAlignment;	// 88 = 0x58
    unsigned long long _pauseReasons;	// 96 = 0x60
    _UILegibilitySettings *_legibilitySettings;	// 104 = 0x68
    UIPageControl *_pageControl;	// 112 = 0x70
    UIView *_backgroundView;	// 120 = 0x78
    id <SBHWidgetStackViewControllerDataSource> _dataSource;	// 128 = 0x80
    id <SBHWidgetStackViewControllerDelegate> _delegate;	// 136 = 0x88
    SBWidgetIcon *_icon;	// 144 = 0x90
    id <SBLeafIconDataSource> _activeWidget;	// 152 = 0x98
    BSUIScrollView *_scrollView;	// 160 = 0xa0
    UIView *_containerView;	// 168 = 0xa8
    NSTimer *_pageControlHidingTimer;	// 176 = 0xb0
    UIView *_dimmingView;	// 184 = 0xb8
    NSMutableDictionary *_widgetContainerViewControllers;	// 192 = 0xc0
    SBHWidgetSettings *_widgetSettings;	// 200 = 0xc8
    SBFFluidBehaviorSettings *_animationSettings;	// 208 = 0xd0
    unsigned long long _widgetScaleAnimationCount;	// 216 = 0xd8
    unsigned long long _backgroundAnimationCount;	// 224 = 0xe0
    NSHashTable *_imageUpdateDisableAssertions;	// 232 = 0xe8
    id <BSInvalidatable> _scrollingTouchCancellationAssertion;	// 240 = 0xf0
    id <BSInvalidatable> _imageUpdatesDisabledForContextMenuAssertion;	// 248 = 0xf8
    struct SBIconApproximateLayoutPosition _approximateLayoutPosition;	// 256 = 0x100
    struct SBIconImageInfo _iconImageInfo;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x00000000000dd412
@property(retain, nonatomic) id <BSInvalidatable> imageUpdatesDisabledForContextMenuAssertion; // @synthesize imageUpdatesDisabledForContextMenuAssertion=_imageUpdatesDisabledForContextMenuAssertion;
@property(retain, nonatomic) id <BSInvalidatable> scrollingTouchCancellationAssertion; // @synthesize scrollingTouchCancellationAssertion=_scrollingTouchCancellationAssertion;
@property(retain, nonatomic) NSHashTable *imageUpdateDisableAssertions; // @synthesize imageUpdateDisableAssertions=_imageUpdateDisableAssertions;
@property(nonatomic) unsigned long long backgroundAnimationCount; // @synthesize backgroundAnimationCount=_backgroundAnimationCount;
@property(nonatomic) unsigned long long widgetScaleAnimationCount; // @synthesize widgetScaleAnimationCount=_widgetScaleAnimationCount;
@property(retain, nonatomic) SBFFluidBehaviorSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
@property(retain, nonatomic) SBHWidgetSettings *widgetSettings; // @synthesize widgetSettings=_widgetSettings;
@property(retain, nonatomic) NSMutableDictionary *widgetContainerViewControllers; // @synthesize widgetContainerViewControllers=_widgetContainerViewControllers;
@property(nonatomic) _Bool flashPageControlOnNextAlphaChange; // @synthesize flashPageControlOnNextAlphaChange=_flashPageControlOnNextAlphaChange;
@property(nonatomic) _Bool flashPageControlOnNextAppearance; // @synthesize flashPageControlOnNextAppearance=_flashPageControlOnNextAppearance;
@property(nonatomic) _Bool showStackBorderWhenShowingPageControl; // @synthesize showStackBorderWhenShowingPageControl=_showStackBorderWhenShowingPageControl;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) NSTimer *pageControlHidingTimer; // @synthesize pageControlHidingTimer=_pageControlHidingTimer;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) BSUIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) id <SBLeafIconDataSource> activeWidget; // @synthesize activeWidget=_activeWidget;
@property(retain, nonatomic) SBWidgetIcon *icon; // @synthesize icon=_icon;
@property(nonatomic) __weak id <SBHWidgetStackViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SBHWidgetStackViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) _Bool forcesEdgeAntialiasing; // @synthesize forcesEdgeAntialiasing=_forcesEdgeAntialiasing;
@property(nonatomic) _Bool highlightsAtAnySize; // @synthesize highlightsAtAnySize=_highlightsAtAnySize;
@property(nonatomic) _Bool alwaysShowsAsStack; // @synthesize alwaysShowsAsStack=_alwaysShowsAsStack;
@property(nonatomic) _Bool showsSquareCorners; // @synthesize showsSquareCorners=_showsSquareCorners;
@property(nonatomic) struct SBIconApproximateLayoutPosition approximateLayoutPosition; // @synthesize approximateLayoutPosition=_approximateLayoutPosition;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) unsigned long long pauseReasons; // @synthesize pauseReasons=_pauseReasons;
@property(nonatomic) unsigned long long imageViewAlignment; // @synthesize imageViewAlignment=_imageViewAlignment;
@property(nonatomic) _Bool showsSnapshotWhenDeactivated; // @synthesize showsSnapshotWhenDeactivated=_showsSnapshotWhenDeactivated;
@property(nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(nonatomic) _Bool automaticallyUpdatesVisiblySettled; // @synthesize automaticallyUpdatesVisiblySettled=_automaticallyUpdatesVisiblySettled;
@property(nonatomic) unsigned long long userVisibilityStatus; // @synthesize userVisibilityStatus=_userVisibilityStatus;
@property(nonatomic) double brightness; // @synthesize brightness=_brightness;
@property(copy, nonatomic) CDUnknownBlockType backgroundViewConfigurator; // @synthesize backgroundViewConfigurator=_backgroundViewConfigurator;
@property(copy, nonatomic) CDUnknownBlockType backgroundViewProvider; // @synthesize backgroundViewProvider=_backgroundViewProvider;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(nonatomic, getter=isOverlapping) _Bool overlapping; // @synthesize overlapping=_overlapping;
@property(nonatomic, getter=isShowingContextMenu) _Bool showingContextMenu; // @synthesize showingContextMenu=_showingContextMenu;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) struct SBIconImageInfo iconImageInfo; // @synthesize iconImageInfo=_iconImageInfo;
- (void)_teardownStateCapture;	// IMP=0x00000000000dcf3d
- (void)_setupStateCapture;	// IMP=0x00000000000dcc30
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x00000000000dcbe6
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000dcb59
- (void)_handleInstalledAppsChanged:(id)arg1;	// IMP=0x00000000000dc80c
- (void)_updateAccessibilityValue;	// IMP=0x00000000000dc55c
- (void)_flashPageControlAnimated:(_Bool)arg1;	// IMP=0x00000000000dc52a
- (_Bool)_alwaysShowStackPageControl;	// IMP=0x00000000000dc4d0
- (_Bool)_alwaysShowStackBorder;	// IMP=0x00000000000dc3d9
- (_Bool)_insetWidgetsForTrackingAppearance;	// IMP=0x00000000000dc33d
- (_Bool)_isScrollViewTracking;	// IMP=0x00000000000dc30f
- (_Bool)_isContentViewExtendingOutsideBounds;	// IMP=0x00000000000dc1b1
- (_Bool)_showAdjacentWidgets;	// IMP=0x00000000000dc194
- (void)_updateApproximateLayoutPositionForWidgetViewControllers;	// IMP=0x00000000000dc02c
- (void)_updatePauseReasonForWidgetViewControllers;	// IMP=0x00000000000dbeda
- (void)_updateShowsSnapshotWhenDeactivatedForWidgetViewControllers;	// IMP=0x00000000000dbd7d
- (void)_updatePresentationModeForWidgetViewControllers;	// IMP=0x00000000000dbc25
- (void)_updateVisiblySettledForWidgetViewControllers;	// IMP=0x00000000000dba8d
- (void)_updateScrollViewDelaysContentTouches;	// IMP=0x00000000000dba0f
- (void)_updateWidgetViewEdgeAntialiasing;	// IMP=0x00000000000db6c3
- (void)_updateWidgetViewHitTesting;	// IMP=0x00000000000db4ff
- (void)_configureBackgroundViewIfNecessary:(id)arg1;	// IMP=0x00000000000db4b1
- (void)_configureBackgroundViewIfNecessary;	// IMP=0x00000000000db494
- (_Bool)_shouldDrawSystemBackgroundMaterialForWidget:(id)arg1;	// IMP=0x00000000000db2ab
- (void)_updateWidgetViewClippingAndBackgroundView;	// IMP=0x00000000000db16e
- (void)_decrementBackgroundAnimationCount;	// IMP=0x00000000000db11f
- (void)_incrementBackgroundAnimationCount;	// IMP=0x00000000000db0d4
- (void)_decrementWidgetScaleAnimationCount;	// IMP=0x00000000000db078
- (void)_incrementWidgetScaleAnimationCount;	// IMP=0x00000000000db020
- (void)_updateActiveWidgetIndexAndScrollViewContentOffset;	// IMP=0x00000000000dadca
- (long long)_newActiveWidgetIndexForContentOffset:(struct CGPoint)arg1;	// IMP=0x00000000000dace3
- (void)_restartPageControlTimer;	// IMP=0x00000000000dab49
- (void)_setPageControlHidden:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000da9bb
- (_Bool)_pageControlIsHorizontallyConstrained;	// IMP=0x00000000000da999
- (id)_backgroundColorForWidgetWithDistanceFromRestingContentOffset:(double)arg1;	// IMP=0x00000000000da8f8
- (struct CGPoint)_restingContentOffset;	// IMP=0x00000000000da890
- (struct CGSize)_scrollViewContentSize;	// IMP=0x00000000000da875
- (struct CGSize)_pageSize;	// IMP=0x00000000000da846
- (void)_updatePageControlWithAnimationUpdateMode:(long long)arg1;	// IMP=0x00000000000da232
- (void)_updateBackgroundViewWithAnimationUpdateMode:(long long)arg1 allowingOutsetting:(_Bool)arg2;	// IMP=0x00000000000d96a2
- (void)_updateBackgroundViewWithAnimationUpdateMode:(long long)arg1;	// IMP=0x00000000000d968b
- (void)_updateWidgetViewsWithAnimationUpdateMode:(long long)arg1;	// IMP=0x00000000000d84b2
- (void)_layoutWithAnimationUpdateMode:(long long)arg1;	// IMP=0x00000000000d837a
- (_Bool)_containerRequiresClippingToBoundsForWidget:(id)arg1;	// IMP=0x00000000000d832f
- (void)_teardownBackgroundView:(id)arg1 contactDelegate:(_Bool)arg2;	// IMP=0x00000000000d828d
- (id)_createBackgroundView;	// IMP=0x00000000000d8231
- (void)_createBackgroundViewIfNecessary:(_Bool)arg1;	// IMP=0x00000000000d809a
- (_Bool)_createViewControllerForWidgetIfNecessary:(id)arg1 usingSize:(struct CGSize)arg2;	// IMP=0x00000000000d7d86
- (void)_requireLayoutUponActivationForWidgetContainerViewController:(id)arg1;	// IMP=0x00000000000d7cc5
- (void)widgetContainerViewControllerContentViewControllerWillDeactivate:(id)arg1;	// IMP=0x00000000000d7cb3
- (void)widgetContainerViewControllerContentViewControllerDidActivate:(id)arg1;	// IMP=0x00000000000d7b37
- (void)customImageViewControllerWantsLabelHiddenDidChange:(id)arg1;	// IMP=0x00000000000d794c
- (void)scrollViewDidEndScrolling:(id)arg1;	// IMP=0x00000000000d790c
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;	// IMP=0x00000000000d78c7
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x00000000000d778a
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000000d7719
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000000d760b
@property(readonly, nonatomic) double continuousCornerRadius;
@property(readonly, nonatomic) struct CGRect visibleBounds;
- (id)sourceBackgroundView:(id)arg1;	// IMP=0x00000000000d7445
- (id)sourceView;	// IMP=0x00000000000d70c2
- (void)_removeWidget:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000d69c4
- (_Bool)_scrollToActiveWidgetAnimated:(_Bool)arg1;	// IMP=0x00000000000d66da
@property(readonly, nonatomic) UIView *springLoadingEffectTargetView;
@property(readonly, nonatomic) UIView *snapshotView;
- (id)cancelTouchesForCurrentEventInHostedContent;	// IMP=0x00000000000d64c0
- (id)_disableImageUpdatesForReason:(id)arg1 animateChangesUponInvalidation:(_Bool)arg2;	// IMP=0x00000000000d6129
- (id)disableImageUpdatesForReason:(id)arg1;	// IMP=0x00000000000d6115
- (void)updateImageAnimated:(_Bool)arg1;	// IMP=0x00000000000d60bb
- (void)removeCustomImageViewControllerObserver:(id)arg1;	// IMP=0x00000000000d609e
- (void)addCustomImageViewControllerObserver:(id)arg1;	// IMP=0x00000000000d6024
- (id)_widgetContextMenuController;	// IMP=0x00000000000d5f91
- (void)didSelectApplicationShortcutItem:(id)arg1;	// IMP=0x00000000000d5f1f
@property(readonly, copy, nonatomic) NSArray *applicationShortcutItems;
@property(readonly, nonatomic) _Bool wantsCaptureOnlyBackgroundView;
- (void)evaluateBackground;	// IMP=0x00000000000d577f
- (void)willShowContextMenuAtLocation:(struct CGPoint)arg1;	// IMP=0x00000000000d5683
@property(readonly, nonatomic) struct UIEdgeInsets minimumPreferredEdgeInsetsForContextMenu;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000d522a
@property(readonly, nonatomic) id <SBLeafIconDataSource> visiblyActiveDataSource;
- (void)leafIcon:(id)arg1 didChangeActiveDataSource:(id)arg2;	// IMP=0x00000000000d4de4
- (void)leafIcon:(id)arg1 didRemoveIconDataSource:(id)arg2;	// IMP=0x00000000000d4d67
- (void)leafIcon:(id)arg1 didAddIconDataSource:(id)arg2;	// IMP=0x00000000000d4cea
@property(readonly, nonatomic, getter=isWidgetHitTestingDisabled) _Bool widgetHitTestingDisabled;
@property(readonly, copy, nonatomic) UIColor *backgroundTintingColor;
@property(readonly, nonatomic) NSArray *widgetViewControllers;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;	// IMP=0x00000000000d4b8f
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x00000000000d4a61
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000d47cc
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000d458f
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000d433a
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000d40e8
- (void)viewWillLayoutSubviews;	// IMP=0x00000000000d407f
- (void)loadView;	// IMP=0x00000000000d3d54
- (_Bool)_canShowWhileLocked;	// IMP=0x00000000000d3d4c
@property(readonly, nonatomic) SBWidgetIcon *widgetIcon;
- (void)dealloc;	// IMP=0x00000000000d3c44
- (id)initWithIcon:(id)arg1;	// IMP=0x00000000000d396b
- (id)sbh_underlyingAvocadoHostViewControllers;	// IMP=0x000000000005f429
- (_Bool)sbh_isWidgetStackViewController;	// IMP=0x000000000005f421

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isDropping) _Bool dropping;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGPoint snapshotViewCenter;
@property(readonly) Class superclass;
@property(nonatomic) _Bool wantsEditingDisplayStyle;
@property(readonly, nonatomic) _Bool wantsLabelHidden;

@end
