//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKitUI/SKUIDynamicBarAnimatorDelegate-Protocol.h>
#import <StoreKitUI/SKUIProxyScrollViewDelegate-Protocol.h>
#import <StoreKitUI/SKUIScrollViewDelegateObserver-Protocol.h>
#import <StoreKitUI/SKUIScrollingTabBarContentCollectionViewDelegate-Protocol.h>
#import <StoreKitUI/SKUIScrollingTabBarControllerItemContextDelegate-Protocol.h>
#import <StoreKitUI/SKUIScrollingTabBarPaletteDelegate-Protocol.h>
#import <StoreKitUI/SKUITabBarController-Protocol.h>
#import <StoreKitUI/UICollectionViewDataSource-Protocol.h>
#import <StoreKitUI/UICollectionViewDelegate-Protocol.h>

@class NSArray, NSMapTable, NSString, SKUICrossFadingTabBar, SKUIDynamicBarAnimator, SKUIProxyScrollView, SKUIScrollingTabBarBackgroundView, SKUIScrollingTabBarContentCollectionView, SKUIScrollingTabBarControllerItemContext, SKUIScrollingTabBarPalette, UINavigationController, UIScrollView, UIView, UIViewController;
@protocol SKUITabBarControllerDelegate;

@interface SKUIScrollingTabBarController <SKUIDynamicBarAnimatorDelegate, SKUIProxyScrollViewDelegate, SKUIScrollingTabBarContentCollectionViewDelegate, SKUIScrollingTabBarControllerItemContextDelegate, SKUIScrollingTabBarPaletteDelegate, SKUIScrollViewDelegateObserver, UICollectionViewDataSource, UICollectionViewDelegate, SKUITabBarController>
{
    unsigned long long _activePaletteTransitions;	// 8 = 0x8
    CDStruct_efaabef7 _additionalPositionOffsetsUpdateRecord;	// 16 = 0x10
    unsigned long long _additionalPositionOffsetsAtomicUpdateRequestCount;	// 64 = 0x40
    _Bool _canHideBarsOnSwipe;	// 72 = 0x48
    struct CGSize _contentCollectionViewItemSize;	// 80 = 0x50
    SKUIScrollingTabBarContentCollectionView *_contentCollectionView;	// 96 = 0x60
    SKUIDynamicBarAnimator *_dynamicBarAnimator;	// 104 = 0x68
    UIScrollView *_focusedContentScrollView;	// 112 = 0x70
    UIViewController *_focusedViewController;	// 120 = 0x78
    _Bool _focusedScrollViewIsDragging;	// 128 = 0x80
    long long _indexOfViewControllerWithUpdatedContentSize;	// 136 = 0x88
    _Bool _isDelegatingPresentedViewControllerLogicToSelectedViewController;	// 144 = 0x90
    SKUIProxyScrollView *_proxyScrollView;	// 152 = 0x98
    struct UIEdgeInsets _proxyScrollViewContentInsetAdjustment;	// 160 = 0xa0
    unsigned long long _referenceCountForIgnoringContentOffsetUpdateRequests;	// 192 = 0xc0
    _Bool _shouldPreserveFocusUponNextContentCollectionViewItemSizeChange;	// 200 = 0xc8
    _Bool _shouldShowBarsAfterDraggingDownward;	// 201 = 0xc9
    SKUICrossFadingTabBar *_tabBar;	// 208 = 0xd0
    UIView *_tabBarContainerView;	// 216 = 0xd8
    struct UIOffset _tabBarExplicitHidingOffset;	// 224 = 0xe0
    _Bool _tabBarExplicitlyHidden;	// 240 = 0xf0
    SKUIScrollingTabBarBackgroundView *_tabBarExtendedBackgroundView;	// 248 = 0xf8
    SKUIScrollingTabBarPalette *_tabBarPalette;	// 256 = 0x100
    UIViewController *_topLevelFocusedViewController;	// 264 = 0x108
    SKUIScrollingTabBarControllerItemContext *_transientViewControllerItemContext;	// 272 = 0x110
    NSMapTable *_viewControllerToItemContext;	// 280 = 0x118
    _Bool _chargeEnabledOnTabBarButtonsContainer;	// 288 = 0x120
    _Bool _scrollEnabled;	// 289 = 0x121
    id <SKUITabBarControllerDelegate> _delegate;	// 296 = 0x128
    UIViewController *_transientViewController;	// 304 = 0x130
    NSArray *_viewControllers;	// 312 = 0x138
    struct UIOffset _additionalTabBarButtonsContainerPositionOffset;	// 320 = 0x140
    struct UIOffset _additionalTabBarPalettePositionOffset;	// 336 = 0x150
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;	// IMP=0x000000000014b83d
+ (_Bool)areScrollingTabsAllowed;	// IMP=0x000000000014a608
- (void).cxx_destruct;	// IMP=0x00000000001540dd
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) _Bool chargeEnabledOnTabBarButtonsContainer; // @synthesize chargeEnabledOnTabBarButtonsContainer=_chargeEnabledOnTabBarButtonsContainer;
@property(nonatomic) struct UIOffset additionalTabBarPalettePositionOffset; // @synthesize additionalTabBarPalettePositionOffset=_additionalTabBarPalettePositionOffset;
@property(nonatomic) struct UIOffset additionalTabBarButtonsContainerPositionOffset; // @synthesize additionalTabBarButtonsContainerPositionOffset=_additionalTabBarButtonsContainerPositionOffset;
@property(copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) UIViewController *transientViewController; // @synthesize transientViewController=_transientViewController;
@property(nonatomic) id <SKUITabBarControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_viewControllerNeedsNestedPagingScrollViewUpdate:(id)arg1;	// IMP=0x0000000000154001
- (CDStruct_17994511)_viewControllerContentScrollViewContentInsetDescriptor;	// IMP=0x0000000000153e8f
- (void)_updateViewControllerContentScrollViewInset;	// IMP=0x0000000000153c4f
- (void)_updateTabBarButtonsSelectionProgressWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1;	// IMP=0x0000000000153b37
- (void)_updateTabBarButtons;	// IMP=0x00000000001536ce
- (void)_updateTabBarBackgroundsAndHairlines;	// IMP=0x00000000001534af
- (void)_updateStatusBarPositionForcingVisible:(_Bool)arg1;	// IMP=0x000000000015335a
- (void)_updateScrollViewContentOffsetsToTargetContentOffsets;	// IMP=0x0000000000153202
- (void)_updateNavigationBarsForVerticalLayoutChange;	// IMP=0x0000000000152db8
- (void)_updateLayoutOfVisibleCollectionViewCells;	// IMP=0x0000000000152c78
- (void)_updateLayoutOfTabBar;	// IMP=0x0000000000152884
- (void)_updateLayoutOfCollectionViewCell:(id)arg1;	// IMP=0x00000000001523af
- (void)_updateHorizontalScrollingAvailability;	// IMP=0x000000000015233d
- (void)_updateHidesBarsOnSwipeAvailability;	// IMP=0x00000000001521ec
- (void)_updateForHorizontalLayoutChange;	// IMP=0x0000000000151a1a
- (void)_updateFocusedViewControllerWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1;	// IMP=0x0000000000151971
- (void)_updateFocusedViewControllerInsetsForVerticalLayoutChange;	// IMP=0x0000000000151719
- (void)_updateDynamicBarGeometry;	// IMP=0x00000000001514a8
- (void)_updateAdditionalPositionOffsetsWithUpdateRecord:(CDStruct_efaabef7)arg1;	// IMP=0x0000000000151364
- (id)_tabBarBackdropGroupName;	// IMP=0x00000000001512f3
- (void)_setViewControllers:(id)arg1 collectionViewsUpdateHandler:(CDUnknownBlockType)arg2 forFinalTearDown:(_Bool)arg3;	// IMP=0x00000000001505ce
- (void)_selectTabAtIndex:(unsigned long long)arg1 shouldFallbackToPoppingToTabRootContent:(_Bool)arg2;	// IMP=0x0000000000150172
- (void)_setFocusedViewController:(id)arg1 showBarsIfNeeded:(_Bool)arg2 animated:(_Bool)arg3 notifyDelegate:(_Bool)arg4;	// IMP=0x000000000014fecc
- (struct UIOffset)_roundedOffsetFromOffset:(struct UIOffset)arg1;	// IMP=0x000000000014fe4c
- (void)_popVisibleNavigationStacksToRootWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1;	// IMP=0x000000000014fc90
- (void)_animatePaletteWithSetup:(CDUnknownBlockType)arg1 animations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000014f8b9
- (id)_parentCellForViewController:(id)arg1;	// IMP=0x000000000014f7c4
- (void)_notifyViewControllerAppearanceProgressUpdateWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1;	// IMP=0x000000000014f675
- (void)_invalidateContentCollectionViewLayoutForUpdatedContentSizeWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1 indexOfViewControllerWithUpdatedContentSize:(unsigned long long)arg2;	// IMP=0x000000000014f44a
- (_Bool)_focusedContentScrollViewIsScrolledToOrPastBottom;	// IMP=0x000000000014f3a3
- (double)_effectiveTopBarHeight;	// IMP=0x000000000014f2c7
- (double)_effectiveBottomBarOffset;	// IMP=0x000000000014f25f
- (void)_discardUndesirableLastSelectedPageIndexesWithHorizontalLayoutContext:(CDStruct_00a825b0)arg1;	// IMP=0x000000000014f1ad
- (id)_deepestFocusedViewControllerWithTopLevelFocusedViewController:(id)arg1;	// IMP=0x000000000014f049
- (void)_tabBarButtonTapped:(id)arg1;	// IMP=0x000000000014ef95
- (void)showBarWithTransition:(int)arg1;	// IMP=0x000000000014ebf1
- (void)hideBarWithTransition:(int)arg1;	// IMP=0x000000000014e891
- (void)updateTabBarComponentPositionOffsetsWithPresentationValues;	// IMP=0x000000000014e1df
- (void)didUpdateAdditionalTabBarComponentsPositionOffsets;	// IMP=0x000000000014e158
- (void)willUpdateAdditionalTabBarComponentsPositionOffsets;	// IMP=0x000000000014e147
- (void)detachTabBarPalette:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000014ddae
- (void)detachTabBarPalette:(id)arg1;	// IMP=0x000000000014dd97
- (void)attachTabBarPalette:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000014d893
- (void)attachTabBarPalette:(id)arg1;	// IMP=0x000000000014d87c
- (id)tabBarPaletteWithHeight:(double)arg1;	// IMP=0x000000000014d72c
- (id)existingTabBarPalette;	// IMP=0x000000000014d717
@property(readonly, nonatomic) struct CGRect tabBarPaletteFrame;
@property(readonly, nonatomic) struct CGRect tabBarButtonsContainerFrame;
@property(readonly, nonatomic) UIView *tabBar;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000014d44a
- (void)setTransientViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000014d00c
@property(nonatomic) UIViewController *selectedViewController;
@property(nonatomic) unsigned long long selectedIndex;
@property(readonly, nonatomic) double contentViewControllerBottomInsetAdjustment;
@property(readonly, nonatomic) NSArray *allViewControllers;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000014ca91
- (void)encodeRestorableStateWithCoder:(id)arg1;	// IMP=0x000000000014c9c4
- (void)decodeRestorableStateWithCoder:(id)arg1;	// IMP=0x000000000014c8e9
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x000000000014c731
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000014c667
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x000000000014c467
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x000000000014c112
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x000000000014c0e4
- (void)observedScrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint)arg3;	// IMP=0x000000000014c0a9
- (void)observedScrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000014c04c
- (void)observedScrollViewDidScroll:(id)arg1;	// IMP=0x000000000014bf6d
- (void)tabBarBackgroundExtendsBehindPaletteDidChangeForPalette:(id)arg1;	// IMP=0x000000000014bf26
- (void)scrollingTabBarControllerItemContext:(id)arg1 observedNavigationStackDidChange:(id)arg2;	// IMP=0x000000000014bf05
- (void)scrollingTabBarControllerItemContextRequestsContentSizeUpdate:(id)arg1;	// IMP=0x000000000014be6f
- (void)scrollingTabBarControllerItemContextRequestsContentOffsetUpdate:(id)arg1;	// IMP=0x000000000014bcc5
- (void)scrollingTabBarContentCollectionViewDidLayoutSubviews:(id)arg1;	// IMP=0x000000000014bca4
- (void)scrollViewDidChangeContentInset:(id)arg1;	// IMP=0x000000000014bbc4
- (void)dynamicBarAnimatorDidUpdate:(id)arg1;	// IMP=0x000000000014bb89
- (_Bool)dynamicBarAnimator:(id)arg1 canHideBarsByDraggingWithOffset:(double)arg2;	// IMP=0x000000000014baaa
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000014ba60
- (void)setClientContext:(id)arg1;	// IMP=0x000000000014b8c1
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;	// IMP=0x000000000014b857
- (id)_backdropBarGroupName;	// IMP=0x000000000014b845
- (id)rotatingSnapshotViewForWindow:(id)arg1;	// IMP=0x000000000014b7ca
- (id)contentScrollView;	// IMP=0x000000000014b6b9
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;	// IMP=0x000000000014b588
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000014b459
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000014b32b
- (void)viewDidLayoutSubviews;	// IMP=0x000000000014afea
- (void)viewDidLoad;	// IMP=0x000000000014aa69
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x000000000014a9e2
- (id)presentedViewController;	// IMP=0x000000000014a95a
- (id)childViewControllerForStatusBarStyle;	// IMP=0x000000000014a90b
- (id)childViewControllerForStatusBarHidden;	// IMP=0x000000000014a8bc
- (void)dealloc;	// IMP=0x000000000014a702
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000014a684

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UIViewController *floatingOverlayViewController;
@property(nonatomic) long long forcedUserInterfaceStyle;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UINavigationController *moreNavigationController;
@property(readonly) Class superclass;

@end
