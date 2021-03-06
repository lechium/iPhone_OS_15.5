//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableArray, UIBarButtonItem, UIImage;
@protocol UIMultiColumnViewControllerDelegate;

@interface UIMultiColumnViewController
{
    unsigned long long _lastColumnCount;	// 400 = 0x190
    unsigned long long _animatingTargetColumnCount;	// 408 = 0x198
    UIBarButtonItem *_showSecondColumnBarButtonItem;	// 416 = 0x1a0
    UIBarButtonItem *_hideSecondColumnBarButtonItem;	// 424 = 0x1a8
    struct {
        unsigned int updatingNavControllerChildren:1;
        unsigned int animatingItem1LeftBarButton:1;
        unsigned int lastColumnCountIsValid:1;
        unsigned int animatingSplitToWidth:1;
    } _mcvcFlags;	// 432 = 0x1b0
    NSMutableArray *_borderViews;	// 440 = 0x1b8
    struct CGRect _lastFrameInWindow;	// 448 = 0x1c0
    struct CGSize _containerSizeAtLastUpdate;	// 480 = 0x1e0
    NSArray *_possibleStatesAtLastUpdate;	// 496 = 0x1f0
    id <UIMultiColumnViewControllerDelegate> _delegate;	// 504 = 0x1f8
    NSArray *_viewControllers;	// 512 = 0x200
    NSArray *_navControllers;	// 520 = 0x208
    double _keyboardInset;	// 528 = 0x210
    NSArray *_columnWidths;	// 536 = 0x218
    UIImage *__columnToggleButtonImage;	// 544 = 0x220
}

- (void).cxx_destruct;	// IMP=0x000000000049beb6
@property(retain, nonatomic, setter=_setColumnToggleButtonImage:) UIImage *_columnToggleButtonImage; // @synthesize _columnToggleButtonImage=__columnToggleButtonImage;
@property(retain, nonatomic) NSArray *columnWidths; // @synthesize columnWidths=_columnWidths;
@property(nonatomic) double keyboardInset; // @synthesize keyboardInset=_keyboardInset;
@property(retain, nonatomic) NSArray *navControllers; // @synthesize navControllers=_navControllers;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) __weak id <UIMultiColumnViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)description;	// IMP=0x000000000049b789
- (void)_hideSecondColumn:(id)arg1;	// IMP=0x000000000049b76d
- (void)_showSecondColumn:(id)arg1;	// IMP=0x000000000049b6c7
- (id)_secondColumnBarButtonItem:(long long)arg1 createIfNecessary:(_Bool)arg2;	// IMP=0x000000000049b565
- (unsigned long long)_columnCountForPossibleStates:(id)arg1 containerSize:(struct CGSize)arg2;	// IMP=0x000000000049b2dd
- (_Bool)_allowMultipleColumnsForPossibleStates:(id)arg1 containerSize:(struct CGSize)arg2;	// IMP=0x000000000049b0ee
- (_Bool)sizeMightAllowMultipleColumns:(struct CGSize)arg1;	// IMP=0x000000000049b049
- (void)_updateButtonsForColumnCount:(unsigned long long)arg1 animatingChange:(_Bool)arg2;	// IMP=0x000000000049ab5c
- (id)_removeSecondColumnBarButton:(long long)arg1 fromNavItem:(id)arg2;	// IMP=0x000000000049aa4c
- (id)_addSecondColumnBarButton:(long long)arg1 toNavItem:(id)arg2;	// IMP=0x000000000049a927
- (void)_moveViewControllersForColumnCount:(unsigned long long)arg1;	// IMP=0x000000000049a62e
- (void)_willShowColumnCount:(unsigned long long)arg1;	// IMP=0x000000000049a5a8
- (_Bool)_canShowColumnIndex:(unsigned long long)arg1;	// IMP=0x000000000049a554
- (id)_liveVCs;	// IMP=0x000000000049a412
- (id)_contentSizesForColumnWidths:(id)arg1;	// IMP=0x000000000049a21e
- (double)_unsafeAreaPaddingForFirstVisibleColumn;	// IMP=0x000000000049a16e
- (id)_possibleContentSizes;	// IMP=0x000000000049a0f1
- (id)_effectiveColumnWidths;	// IMP=0x000000000049a03a
- (void)_adjustNonOverlayScrollViewsForKeyboardInfo:(id)arg1;	// IMP=0x0000000000499d6f
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;	// IMP=0x0000000000499c42
- (id)_splitViewControllerImageForDisplayModeButtonToShowPrimary:(id)arg1;	// IMP=0x0000000000499b36
- (id)_sideBarImage;	// IMP=0x0000000000499b16
- (void)_splitViewControllerDidUpdate:(id)arg1 withSize:(struct CGSize)arg2;	// IMP=0x0000000000499702
- (void)_marginInfoForChild:(id)arg1 leftMargin:(double *)arg2 rightMargin:(double *)arg3;	// IMP=0x0000000000499660
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;	// IMP=0x000000000049962c
- (void)_navigationControllerChangedViewControllers:(id)arg1;	// IMP=0x00000000004995c8
- (id)_navigationBarForDragAffordance;	// IMP=0x000000000049954e
- (void)_setAllowNestedNavigationControllers:(_Bool)arg1;	// IMP=0x00000000004993f1
- (id)_preferredContentSizes;	// IMP=0x00000000004992f0
@property(readonly, nonatomic) unsigned long long columnCount;
- (void)requestColumnCount:(unsigned long long)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000498f1a
- (id)separateSecondaryViewControllerForSplitViewController:(id)arg1;	// IMP=0x0000000000498790
- (void)_collapseSecondaryViewController:(id)arg1 forSplitViewController:(id)arg2 withTransitionCoordinator:(id)arg3;	// IMP=0x000000000049863f
- (void)_splitViewControllerWillCollapseOntoPrimaryViewController:(id)arg1;	// IMP=0x00000000004985e2
- (void)showViewController:(id)arg1 sender:(id)arg2;	// IMP=0x00000000004982de
- (id)title;	// IMP=0x0000000000498264
- (id)childViewControllerForStatusBarStyle;	// IMP=0x0000000000498214
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000004981b2
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000004980be
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000496cb5
- (void)dealloc;	// IMP=0x0000000000496c40
- (id)initWithNavController:(id)arg1 viewControllers:(id)arg2;	// IMP=0x00000000004967ed
- (id)initWithNavController:(id)arg1 viewControllers:(id)arg2 columnWidths:(id)arg3;	// IMP=0x00000000004967db

@end

