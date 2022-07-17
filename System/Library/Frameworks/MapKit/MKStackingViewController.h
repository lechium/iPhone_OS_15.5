//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <MapKit/MKScrollableStacking-Protocol.h>
#import <MapKit/UIScrollViewDelegate-Protocol.h>
#import <MapKit/_MKAnimationStackViewDelegate-Protocol.h>
#import <MapKit/_MKStackViewDelegate-Protocol.h>

@class NSArray, NSHashTable, NSLayoutConstraint, NSMapTable, NSString, UIScrollView, UIView, _MKStackView, _MKStackingContentView;
@protocol MKStackingViewControllerDelegate;

@interface MKStackingViewController : UIViewController <_MKStackViewDelegate, _MKAnimationStackViewDelegate, MKScrollableStacking, UIScrollViewDelegate>
{
    _MKStackView *_stackView;	// 8 = 0x8
    _MKStackingContentView *_contentView;	// 16 = 0x10
    NSLayoutConstraint *_widthConstraint;	// 24 = 0x18
    NSLayoutConstraint *_stackViewWidthConstraint;	// 32 = 0x20
    _Bool _isScrollDisabled;	// 40 = 0x28
    unsigned long long _countOfCurrentLayoutInvocations;	// 48 = 0x30
    UIScrollView *_scrollView;	// 56 = 0x38
    NSMapTable *_viewControllersToPreferredHeightConstraints;	// 64 = 0x40
    NSMapTable *_viewsToViewControllers;	// 72 = 0x48
    NSArray *_titleViewConstraints;	// 80 = 0x50
    _Bool _willRelayoutForPreferredContentSizeChange;	// 88 = 0x58
    _Bool _isSettingStackedViews;	// 89 = 0x59
    _Bool _contentViewConstraintsAdded;	// 90 = 0x5a
    NSHashTable *_minimallyVisibleViews;	// 96 = 0x60
    _Bool _needsToPerformLayout;	// 104 = 0x68
    UIView *_overlayView;	// 112 = 0x70
    double _overlayViewOriginY;	// 120 = 0x78
    _Bool _mayWantSpearators;	// 128 = 0x80
    _Bool _needToCallViewControllerLayoutDelegate;	// 129 = 0x81
    NSArray *_viewControllers;	// 136 = 0x88
    id <MKStackingViewControllerDelegate> _stackingDelegate;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000118370
@property(nonatomic) __weak id <MKStackingViewControllerDelegate> stackingDelegate; // @synthesize stackingDelegate=_stackingDelegate;
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (_Bool)isViewVisbile:(id)arg1 percentageTreshold:(double)arg2;	// IMP=0x0000000000118180
- (void)_updateViewControllerVisibilityAfterPositionChange;	// IMP=0x0000000000117da5
- (void)_didScroll;	// IMP=0x0000000000117d93
- (void)_sendScrollnotification;	// IMP=0x0000000000117d31
- (void)scrollToTopAnimated:(_Bool)arg1;	// IMP=0x0000000000117c41
- (void)scrollViewDidEndDecelerating:(id)arg1;	// IMP=0x0000000000117ba4
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;	// IMP=0x0000000000117af7
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0000000000117a4f
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000117a21
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000117996
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000117818
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000001177e9
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0000000000117715
- (void)updateViewConstraints;	// IMP=0x00000000001173c1
- (void)_removePreferredHeightConstraintFromViewController:(id)arg1;	// IMP=0x0000000000117316
- (void)_addPreferredHeightConstraintForViewControllerIfNeeded:(id)arg1;	// IMP=0x0000000000117192
- (void)_setPreferredHeight:(double)arg1 forViewController:(id)arg2;	// IMP=0x000000000011700f
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;	// IMP=0x0000000000116f05
- (void)_setOverlayViewFrame;	// IMP=0x0000000000116e08
- (void)removeOverlayViewAnimated:(_Bool)arg1;	// IMP=0x0000000000116a20
- (void)setOverlayView:(id)arg1 withOriginY:(double)arg2;	// IMP=0x000000000011693e
- (void)_tearDownExitingViewController:(id)arg1;	// IMP=0x000000000011692c
- (void)_setUpEnteringViewController:(id)arg1;	// IMP=0x0000000000116866
- (double)stackView:(id)arg1 distanceBetweenUpperView:(id)arg2 andLowerView:(id)arg3;	// IMP=0x0000000000116746
- (void)_callViewControllersLayoutDelegateIfNeeded;	// IMP=0x0000000000116694
- (void)_updateStackViewSubviewsAndChildVCsEntering:(id)arg1 exiting:(id)arg2;	// IMP=0x0000000000115cbb
- (void)stackViewNeedsLayout:(id)arg1;	// IMP=0x0000000000115c51
- (void)_updateFixedHeightAwareControllers;	// IMP=0x000000000011570a
- (void)setWidthConstraintConstant:(double)arg1;	// IMP=0x000000000011551e
- (double)currentHeight;	// IMP=0x00000000001154d6
- (double)_fittingHeightForView:(id)arg1;	// IMP=0x000000000011546c
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled;
- (void)_setScrollEnabled:(_Bool)arg1 forcedUpdate:(_Bool)arg2;	// IMP=0x00000000001150f4
- (double)_titleHeight;	// IMP=0x00000000001150d7
- (_Bool)_isSafeToPerformLayout;	// IMP=0x0000000000115036
- (void)viewDidLoad;	// IMP=0x0000000000114e2e
- (void)loadView;	// IMP=0x0000000000114d38
- (void)dealloc;	// IMP=0x0000000000114cac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
