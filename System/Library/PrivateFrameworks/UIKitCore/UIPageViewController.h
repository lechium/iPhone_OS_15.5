//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/_UIQueuingScrollViewDataSource-Protocol.h>
#import <UIKitCore/_UIQueuingScrollViewDelegate-Protocol.h>

@class NSArray, NSDictionary, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, UIPanGestureRecognizer, UITapGestureRecognizer, _UIPageCurl, _UIPageViewControllerContentView, _UIQueuingScrollView;
@protocol UIPageViewControllerDataSource, UIPageViewControllerDelegate;

@interface UIPageViewController <UIGestureRecognizerDelegate, _UIQueuingScrollViewDelegate, _UIQueuingScrollViewDataSource>
{
    id <UIPageViewControllerDelegate> _delegate;	// 400 = 0x190
    id <UIPageViewControllerDataSource> _dataSource;	// 408 = 0x198
    long long _transitionStyle;	// 416 = 0x1a0
    long long _navigationOrientation;	// 424 = 0x1a8
    long long _spineLocation;	// 432 = 0x1b0
    _Bool _doubleSided;	// 440 = 0x1b8
    _Bool _pageControlRequiresValidation;	// 441 = 0x1b9
    NSArray *_viewControllers;	// 448 = 0x1c0
    _UIPageCurl *_pageCurl;	// 456 = 0x1c8
    UIPanGestureRecognizer *_panGestureRecognizer;	// 464 = 0x1d0
    UITapGestureRecognizer *_tapGestureRecognizer;	// 472 = 0x1d8
    _Bool _stashingViewControllersForRotation;	// 480 = 0x1e0
    NSArray *_viewControllersStashedForRotation;	// 488 = 0x1e8
    _Bool _interfaceRotating;	// 496 = 0x1f0
    NSMutableArray *_rotationSnapshotViews;	// 504 = 0x1f8
    long long _spineLocationPriorToInterfaceRotation;	// 512 = 0x200
    struct UIEdgeInsets _tapRegionInsets;	// 520 = 0x208
    struct CGSize _tapRegionBreadths;	// 552 = 0x228
    struct UIEdgeInsets _effectiveTapRegionInsets;	// 568 = 0x238
    struct CGSize _effectiveTapRegionBreadths;	// 600 = 0x258
    struct CGRect *_tapRegions;	// 616 = 0x268
    double _pageSpacing;	// 624 = 0x270
    NSMutableDictionary *_cachedViewControllersForCurl;	// 632 = 0x278
    NSHashTable *_cachedViewControllersForScroll;	// 640 = 0x280
    NSDictionary *_incomingAndOutgoingViewControllersForManualTransition;	// 648 = 0x288
    long long _lastKnownNavigationDirection;	// 656 = 0x290
    long long _disableAutorotationCount;	// 664 = 0x298
    struct {
        unsigned int delegateWantsTransitionWillBegin:1;
        unsigned int delegateWantsTransitionCompleted:1;
        unsigned int delegateWantsTransitionsFinished:1;
        unsigned int delegateCustomizesSpineLocationForInterfaceOrientation:1;
        unsigned int delegateSupportedInterfaceOrientations:1;
        unsigned int delegatePreferredInterfaceOrientationForPresentation:1;
        unsigned int dataSourceSuppliesBeforeViewController:1;
        unsigned int dataSourceSuppliesAfterViewController:1;
        unsigned int dataSourceSuppliesPageCount:1;
        unsigned int dataSourceSuppliesPageNumber:1;
    } _delegateFlags;	// 672 = 0x2a0
    id <UIPageViewControllerDataSource> _unsafeUnretainedDataSource;	// 680 = 0x2a8
    id <UIPageViewControllerDelegate> _unsafeUnretainedDelegate;	// 688 = 0x2b0
}

+ (id)_incomingViewControllerKeys;	// IMP=0x000000000045f1c5
+ (id)_outgoingViewControllerKeys;	// IMP=0x000000000045f165
+ (id)stringForSpineLocation:(long long)arg1;	// IMP=0x000000000045bd80
+ (_Bool)doesOverridePreferredInterfaceOrientationForPresentation;	// IMP=0x0000000000458e4a
+ (_Bool)_isSpineLocation:(long long)arg1 supportedForTransitionStyle:(long long)arg2;	// IMP=0x0000000000458e24
+ (_Bool)_isNavigationOrientation:(long long)arg1 supportedForTransitionStyle:(long long)arg2;	// IMP=0x0000000000458e17
+ (_Bool)_isSupportedTransitionStyle:(long long)arg1;	// IMP=0x0000000000458e0a
- (void).cxx_destruct;	// IMP=0x0000000000465290
@property(readonly, nonatomic, getter=_isInterfaceRotating) _Bool _interfaceRotating; // @synthesize _interfaceRotating;
@property(retain, nonatomic, setter=_setViewControllersStashedForRotation:) NSArray *_viewControllersStashedForRotation; // @synthesize _viewControllersStashedForRotation;
@property(retain, nonatomic, setter=_setViewControllers:) NSArray *_viewControllers; // @synthesize _viewControllers;
- (void)_pageControlValueChanged:(id)arg1;	// IMP=0x00000000004650c6
- (_Bool)queuingScrollViewShouldLayoutSubviews:(id)arg1;	// IMP=0x00000000004650b2
- (void)queuingScrollView:(id)arg1 attemptToPageInDirection:(long long)arg2;	// IMP=0x0000000000465033
- (void)queuingScrollView:(id)arg1 didFlushView:(id)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000464f80
- (void)_flushViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000464dbc
- (id)queuingScrollView:(id)arg1 viewAfterView:(id)arg2;	// IMP=0x0000000000464da5
- (id)queuingScrollView:(id)arg1 viewBeforeView:(id)arg2;	// IMP=0x0000000000464d8b
- (id)_queuingScrollView:(id)arg1 viewBefore:(_Bool)arg2 view:(id)arg3;	// IMP=0x0000000000464c25
- (void)queuingScrollViewDidFinishScrolling:(id)arg1;	// IMP=0x0000000000464bd7
- (void)queuingScrollView:(id)arg1 didBailoutOfScrollAndRevealedView:(id)arg2;	// IMP=0x0000000000464a6f
- (void)queuingScrollView:(id)arg1 didEndManualScroll:(_Bool)arg2 toRevealView:(id)arg3 direction:(long long)arg4 animated:(_Bool)arg5 didFinish:(_Bool)arg6 didComplete:(_Bool)arg7;	// IMP=0x000000000046461c
- (void)queuingScrollView:(id)arg1 didCommitManualScroll:(_Bool)arg2 toRevealView:(id)arg3 concealView:(id)arg4 direction:(long long)arg5 animated:(_Bool)arg6 canComplete:(_Bool)arg7;	// IMP=0x00000000004640aa
- (void)queuingScrollView:(id)arg1 willManuallyScroll:(_Bool)arg2 toRevealView:(id)arg3 concealView:(id)arg4 animated:(_Bool)arg5;	// IMP=0x0000000000463b9b
- (void)_updatePageControlViaDataSourceIfNecessary;	// IMP=0x0000000000463a23
- (void)_handlePagingInDirection:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000463681
- (void)_handleTapGesture:(id)arg1;	// IMP=0x00000000004635af
- (void)_handlePanGesture:(id)arg1;	// IMP=0x0000000000462c00
- (_Bool)_shouldCompleteManualCurlWithSuggestedVelocity:(double *)arg1;	// IMP=0x0000000000462b6e
- (long long)_navigationEndDirectionInResponseToPanGestureRecognizer:(id)arg1 suggestedVelocity:(double *)arg2;	// IMP=0x0000000000462904
- (_Bool)_gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000004627ce
- (_Bool)_shouldBeginNavigationInDirection:(long long *)arg1 inResponseToPanGestureRecognizer:(id)arg2;	// IMP=0x000000000046257e
- (_Bool)_shouldNavigateInDirection:(long long *)arg1 inResponseToVelocity:(double *)arg2 ofGestureRecognizedByPanGestureRecognizer:(id)arg3;	// IMP=0x0000000000462400
- (_Bool)_shouldFlipInRightToLeft;	// IMP=0x0000000000462390
- (_Bool)_shouldNavigateInDirection:(long long *)arg1 inResponseToTapGestureRecognizer:(id)arg2;	// IMP=0x0000000000462257
- (struct CGRect *)_tapRegions;	// IMP=0x0000000000461c30
- (id)_incomingViewControllersForGestureDrivenCurlInDirection:(long long)arg1;	// IMP=0x0000000000461843
- (id)_deepestActionResponder;	// IMP=0x00000000004615f0
- (void)setViewControllers:(id)arg1 direction:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000461498
- (void)_setViewControllers:(id)arg1 withScrollInDirection:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000046117f
- (void)_cacheViewControllerForScroll:(id)arg1;	// IMP=0x00000000004610fd
- (void)_setViewControllers:(id)arg1 withCurlOfType:(long long)arg2 fromLocation:(struct CGPoint)arg3 direction:(long long)arg4 animated:(_Bool)arg5 notifyDelegate:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000000045f2fd
- (void)_endDisablingInterfaceAutorotation;	// IMP=0x000000000045f27d
- (void)_beginDisablingInterfaceAutorotation;	// IMP=0x000000000045f225
- (void)_invalidateViewControllersStashedForCurlFromDataSource;	// IMP=0x000000000045f148
- (void)_populateIncomingViewControllersInMap:(id)arg1 withViewControllers:(id)arg2 forCurlInDirection:(long long)arg3;	// IMP=0x000000000045efdd
- (void)_populateOutgoingViewControllersInMap:(id)arg1;	// IMP=0x000000000045eedc
- (id)_viewControllersForCurlWithViewControllers:(id)arg1 direction:(long long)arg2;	// IMP=0x000000000045ec4f
- (id)_viewControllerAfterViewController:(id)arg1;	// IMP=0x000000000045ec38
- (id)_viewControllerBeforeViewController:(id)arg1;	// IMP=0x000000000045ec1e
- (id)_viewControllerBefore:(_Bool)arg1 viewController:(id)arg2;	// IMP=0x000000000045eb83
- (_Bool)_canHandleGestures;	// IMP=0x000000000045eb3d
- (id)_validatedViewControllersForTransitionWithViewControllers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000045e8f7
- (_Bool)_isCurrentViewControllerStateValid;	// IMP=0x000000000045e8a2
- (void)_contentViewFrameOrBoundsDidChange;	// IMP=0x000000000045e674
- (void)didRotateFromInterfaceOrientation:(long long)arg1;	// IMP=0x000000000045e2a0
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x000000000045cdbc
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;	// IMP=0x000000000045c1de
- (long long)_requestSpineLocationForInterfaceOrientationAndUpdateStashedViewControllers:(long long)arg1;	// IMP=0x000000000045c08d
- (void)_invalidatePageCurl;	// IMP=0x000000000045c050
- (id)_viewControllersForPendingSpineLocation:(long long)arg1;	// IMP=0x000000000045be9d
- (id)_validatedViewControllersForPresentationOfViewControllers:(id)arg1 validRange:(struct _NSRange)arg2;	// IMP=0x000000000045be2b
- (struct _NSRange)_validRangeForPresentationOfViewControllersWithSpineLocation:(long long)arg1;	// IMP=0x000000000045be14
- (long long)preferredInterfaceOrientationForPresentation;	// IMP=0x000000000045bd08
- (_Bool)_hasPreferredInterfaceOrientationForPresentation;	// IMP=0x000000000045bca9
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000045bc31
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;	// IMP=0x000000000045bb3c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000045baed
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000045ba9b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000045ba49
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000045b7b9
- (void)_sendChildViewWill:(_Bool)arg1 appear:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x000000000045b5bc
- (void)_child:(id)arg1 didRotateFromInterfaceOrientation:(long long)arg2;	// IMP=0x000000000045b566
- (void)_child:(id)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;	// IMP=0x000000000045b506
- (void)_child:(id)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;	// IMP=0x000000000045b4a6
- (void)_child:(id)arg1 endAppearanceTransitionIfPossible:(_Bool)arg2;	// IMP=0x000000000045b40d
- (_Bool)_childCanEndAppearanceTransition:(id)arg1;	// IMP=0x000000000045b395
- (void)_childEndAppearanceTransition:(id)arg1;	// IMP=0x000000000045b34e
- (void)_child:(id)arg1 beginAppearanceTransitionIfPossible:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x000000000045b2e8
- (_Bool)_child:(id)arg1 canBeginAppearanceTransition:(_Bool)arg2;	// IMP=0x000000000045b257
- (void)_child:(id)arg1 beginAppearanceTransition:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x000000000045b1e3
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double *)arg2 rightMargin:(double *)arg3;	// IMP=0x000000000045b141
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;	// IMP=0x000000000045b11e
- (_Bool)shouldAutomaticallyForwardRotationMethods;	// IMP=0x000000000045b116
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;	// IMP=0x000000000045b10e
- (void)viewWillUnload;	// IMP=0x000000000045b0a4
- (void)loadView;	// IMP=0x000000000045addf
@property(nonatomic, setter=_setPageSpacing:) double _pageSpacing;
- (struct CGSize)_contentSizeForSize:(struct CGSize)arg1;	// IMP=0x000000000045acf1
- (id)_pageControl;	// IMP=0x000000000045aca1
@property(readonly, nonatomic, getter=_isPageControlVisible) _Bool _pageControlVisible;
@property(readonly, nonatomic) _UIQueuingScrollView *_scrollView;
@property(readonly, nonatomic) _UIPageViewControllerContentView *_contentView;
- (void)_setDisabledScrollingRegion:(struct CGRect)arg1;	// IMP=0x000000000045ab54
- (struct CGRect)_disabledScrollingRegion;	// IMP=0x000000000045aab1
- (void)_setTapRegionBreadths:(struct CGSize)arg1;	// IMP=0x000000000045aa70
- (struct CGSize)_tapRegionBreadths;	// IMP=0x000000000045aa5e
- (struct CGSize)_effectiveTapRegionBreadths;	// IMP=0x000000000045a824
- (void)_setTapRegionInsets:(struct UIEdgeInsets)arg1;	// IMP=0x000000000045a7ba
- (struct UIEdgeInsets)_tapRegionInsets;	// IMP=0x000000000045a79b
- (struct UIEdgeInsets)_effectiveTapRegionInsets;	// IMP=0x000000000045a5af
- (void)_invalidateEffectiveTapRegions;	// IMP=0x000000000045a55b
@property(readonly, nonatomic) NSArray *viewControllers;
@property(readonly, nonatomic) NSArray *gestureRecognizers;
@property(nonatomic, getter=isDoubleSided) _Bool doubleSided;
@property(readonly, nonatomic) long long spineLocation;
- (void)_setSpineLocation:(long long)arg1;	// IMP=0x000000000045a35e
@property(readonly, nonatomic) long long navigationOrientation;
@property(readonly, nonatomic) long long _navigationOrientation;
@property(readonly, nonatomic) long long transitionStyle;
@property(readonly, nonatomic) long long _transitionStyle;
@property(nonatomic) __weak id <UIPageViewControllerDataSource> dataSource;
@property(nonatomic) __weak id <UIPageViewControllerDelegate> delegate;
- (void)dealloc;	// IMP=0x0000000000459746
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000459453
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000459236
- (id)preferredFocusedView;	// IMP=0x0000000000459224
- (_Bool)_shouldPersistViewWhenCoding;	// IMP=0x000000000045921c
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000459203
- (id)initWithTransitionStyle:(long long)arg1 navigationOrientation:(long long)arg2 options:(id)arg3;	// IMP=0x0000000000458e81

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
