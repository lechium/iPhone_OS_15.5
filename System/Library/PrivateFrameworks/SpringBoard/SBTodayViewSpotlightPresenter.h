//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SPUIRemoteSearchViewDelegate-Protocol.h>
#import <SpringBoard/SPUISearchBarDelegate-Protocol.h>

@class MTMaterialView, NSArray, NSLayoutConstraint, NSMutableSet, NSString, SBFFeatherBlurView, SBFFluidBehaviorSettings, SBHHomePullToSearchSettings, SPUISearchBarController, UIScrollView, UIView, _SBTodaySpotlightViewController, _UIPortalView;
@protocol SBTodayViewSpotlightPresenterDelegate;

@interface SBTodayViewSpotlightPresenter : NSObject <SPUISearchBarDelegate, SPUIRemoteSearchViewDelegate, PTSettingsKeyObserver>
{
    SBHHomePullToSearchSettings *_pullToSearchSettings;	// 8 = 0x8
    _Bool _scrollViewBeganScrollingFromTop;	// 16 = 0x10
    SPUISearchBarController *_searchBarViewController;	// 24 = 0x18
    _SBTodaySpotlightViewController *_spotlightViewController;	// 32 = 0x20
    UIView *_containerView;	// 40 = 0x28
    UIScrollView *_scrollView;	// 48 = 0x30
    id <SBTodayViewSpotlightPresenterDelegate> _delegate;	// 56 = 0x38
    SBFFluidBehaviorSettings *_searchAnimationSettings;	// 64 = 0x40
    long long _searchState;	// 72 = 0x48
    SBFFeatherBlurView *_featherBlurView;	// 80 = 0x50
    NSLayoutConstraint *_featherBlurHeightConstraint;	// 88 = 0x58
    NSArray *_searchBarGradientMaskLayers;	// 96 = 0x60
    MTMaterialView *_searchBackdropView;	// 104 = 0x68
    _UIPortalView *_searchBarPortalView;	// 112 = 0x70
    NSLayoutConstraint *_searchBarViewTopConstraint;	// 120 = 0x78
    NSMutableSet *_searchBarPortalRequirementReasons;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x00000000004d0316
@property(retain, nonatomic) NSMutableSet *searchBarPortalRequirementReasons; // @synthesize searchBarPortalRequirementReasons=_searchBarPortalRequirementReasons;
@property(retain, nonatomic) NSLayoutConstraint *searchBarViewTopConstraint; // @synthesize searchBarViewTopConstraint=_searchBarViewTopConstraint;
@property(retain, nonatomic) _UIPortalView *searchBarPortalView; // @synthesize searchBarPortalView=_searchBarPortalView;
@property(retain, nonatomic) MTMaterialView *searchBackdropView; // @synthesize searchBackdropView=_searchBackdropView;
@property(retain, nonatomic) NSArray *searchBarGradientMaskLayers; // @synthesize searchBarGradientMaskLayers=_searchBarGradientMaskLayers;
@property(retain, nonatomic) NSLayoutConstraint *featherBlurHeightConstraint; // @synthesize featherBlurHeightConstraint=_featherBlurHeightConstraint;
@property(retain, nonatomic) SBFFeatherBlurView *featherBlurView; // @synthesize featherBlurView=_featherBlurView;
@property(nonatomic) _Bool scrollViewBeganScrollingFromTop; // @synthesize scrollViewBeganScrollingFromTop=_scrollViewBeganScrollingFromTop;
@property(nonatomic) long long searchState; // @synthesize searchState=_searchState;
@property(retain, nonatomic) SBFFluidBehaviorSettings *searchAnimationSettings; // @synthesize searchAnimationSettings=_searchAnimationSettings;
@property(nonatomic) __weak id <SBTodayViewSpotlightPresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) _SBTodaySpotlightViewController *spotlightViewController; // @synthesize spotlightViewController=_spotlightViewController;
@property(readonly, nonatomic) SPUISearchBarController *searchBarViewController; // @synthesize searchBarViewController=_searchBarViewController;
- (void)dismissSearchView;	// IMP=0x00000000004d00c1
- (void)searchBarDidFocus;	// IMP=0x00000000004d006a
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;	// IMP=0x00000000004d0058
- (void)dismissSpotlightAnimated:(_Bool)arg1;	// IMP=0x00000000004cfe6f
- (void)presentSpotlightAnimated:(_Bool)arg1;	// IMP=0x00000000004cfcc8
- (void)_didDismissSpotlight;	// IMP=0x00000000004cfb18
- (void)_willDismissSpotlightAnimated:(_Bool)arg1;	// IMP=0x00000000004cf970
- (void)_didPresentSpotlight;	// IMP=0x00000000004cf6e6
- (void)_willPresentSpotlightAnimated:(_Bool)arg1;	// IMP=0x00000000004cf3c3
- (void)_endRequiringSearchBarPortalViewForReason:(id)arg1;	// IMP=0x00000000004cf31b
- (void)_beginRequiringSearchBarPortalViewForReason:(id)arg1;	// IMP=0x00000000004cf0ae
- (id)sharedRemoteSearchViewController;	// IMP=0x00000000004cf090
- (double)_topOffset;	// IMP=0x00000000004cf038
- (void)_updateMaskLayers;	// IMP=0x00000000004ced1d
- (void)_layoutSearchViews;	// IMP=0x00000000004ce8b1
- (void)_layoutSearchViewsWithMode:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000004ce7b3
- (double)_spotlightPresentationProgressForOffset:(double)arg1;	// IMP=0x00000000004ce77a
- (double)_rubberbandingOffsetForContentOffset:(struct CGPoint)arg1;	// IMP=0x00000000004ce707
- (void)scrollViewWillEndDragging:(id)arg1;	// IMP=0x00000000004ce503
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x00000000004ce463
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x00000000004ce386
- (void)containerViewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x00000000004ce218
- (void)containerViewDidMoveToWindow:(id)arg1;	// IMP=0x00000000004ce1a1
- (void)updateMaskLayerFrame;	// IMP=0x00000000004ce18f
- (void)layout;	// IMP=0x00000000004ce176
- (_Bool)isPresenting;	// IMP=0x00000000004ce168
- (void)_setUpSearchBackdropMatchMoveAnimation;	// IMP=0x00000000004ce0da
- (void)_setUpFeatherBackgroundMatchMoveAnimations;	// IMP=0x00000000004cde3a
- (void)_setUpSearchAnimationSettings;	// IMP=0x00000000004cddb5
- (void)_setUpSearchBackdrop;	// IMP=0x00000000004cdd22
- (void)_setUpSearchBar;	// IMP=0x00000000004cd765
- (id)initWithSearchBarViewController:(id)arg1 containerView:(id)arg2 scrollView:(id)arg3 delegate:(id)arg4;	// IMP=0x00000000004cd400

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

