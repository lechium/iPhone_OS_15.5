//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIScrollViewScrollObserver_Internal-Protocol.h>

@class NSArray, NSString, UIButton, UIColor, UILabel, UINavigationItem, UIPopoverController, UIScrollView, UISearchBar, UISearchDisplayControllerContainerView, UITableView, UIView, UIViewController, _UINavigationControllerPalette, _UISearchControllerDidScrollDelegate;
@protocol UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate;

@interface UISearchDisplayController : NSObject <_UIScrollViewScrollObserver_Internal>
{
    UIViewController *_viewController;	// 8 = 0x8
    UITableView *_tableView;	// 16 = 0x10
    UIView *_dimmingView;	// 24 = 0x18
    UISearchBar *_searchBar;	// 32 = 0x20
    UILabel *_noResultsLabel;	// 40 = 0x28
    NSString *_noResultsMessage;	// 48 = 0x30
    NSString *_resultsTitle;	// 56 = 0x38
    struct __CFArray *_containingScrollViews;	// 64 = 0x40
    double _lastKeyboardAdjustment;	// 72 = 0x48
    double _lastFooterAdjustment;	// 80 = 0x50
    UIPopoverController *_popoverController;	// 88 = 0x58
    long long _searchResultsTableViewStyle;	// 96 = 0x60
    id _navigationControllerBookkeeper;	// 104 = 0x68
    NSArray *_savedSelectedCellsWhenViewWillAppear;	// 112 = 0x70
    UIScrollView *_savedContainingScrollView;	// 120 = 0x78
    UISearchDisplayControllerContainerView *_containerView;	// 128 = 0x80
    unsigned long long _savedSearchBarResizingMask;	// 136 = 0x88
    UINavigationItem *_navigationItem;	// 144 = 0x90
    struct CGPoint _containingScrollViewContentOffset;	// 152 = 0x98
    struct CGRect _searchFieldInNavigationBarFrame;	// 168 = 0xa8
    _UINavigationControllerPalette *_attachedNavigationPalette;	// 200 = 0xc8
    UIButton *_animatingAppearanceNavigationButton;	// 208 = 0xd0
    double _animatingAppearanceNavigationSearchBarWidth;	// 216 = 0xd8
    UIColor *_dimmingOverlayColor;	// 224 = 0xe0
    UIView *_tableViewBackgroundHeaderView;	// 232 = 0xe8
    long long _unactivatedBarPosition;	// 240 = 0xf0
    _UISearchControllerDidScrollDelegate *_didScrollDelegate;	// 248 = 0xf8
    struct {
        unsigned int visible:1;
        unsigned int animating:1;
        unsigned int hidIndexBar:1;
        unsigned int hidNavigationBar:1;
        unsigned int noResultsMessageVisible:1;
        unsigned int noResultsMessageAutoDisplay:1;
        unsigned int navigationBarHidingEnabled:1;
        unsigned int dimTableViewOnEmptySearchString:1;
        unsigned int isRotatingWithPopover:1;
        unsigned int cancelButtonManagementDisabled:1;
        unsigned int allowDisablingNavigationBarHiding:1;
        unsigned int showsResultsForEmptyField:1;
        unsigned int searchBarCanBeHoisted:1;
        unsigned int animatingSearchResultsDisappearance:1;
        unsigned int navigationBarShadowWasHidden:1;
        unsigned int hoistingSearchBar:1;
    } _searchDisplayControllerFlags;	// 256 = 0x100
    _Bool _displaysSearchBarInNavigationBar;	// 260 = 0x104
    id <UISearchDisplayDelegate> _delegate;	// 264 = 0x108
    id <UITableViewDataSource> _tableViewDataSource;	// 272 = 0x110
    id <UITableViewDelegate> _tableViewDelegate;	// 280 = 0x118
    unsigned long long _navigationBarSearchFieldSizing;	// 288 = 0x120
    double __activationGapHeight;	// 296 = 0x128
    double __additionalNonCollapsingHeightAboveSearchBar;	// 304 = 0x130
}

+ (void)_uiibSetRequiresSearchDisplayControllerSupport;	// IMP=0x000000000048a82c
- (void).cxx_destruct;	// IMP=0x0000000000495a36
@property(nonatomic) double _additionalNonCollapsingHeightAboveSearchBar; // @synthesize _additionalNonCollapsingHeightAboveSearchBar=__additionalNonCollapsingHeightAboveSearchBar;
@property(nonatomic) double _activationGapHeight; // @synthesize _activationGapHeight=__activationGapHeight;
@property(nonatomic) unsigned long long navigationBarSearchFieldSizing; // @synthesize navigationBarSearchFieldSizing=_navigationBarSearchFieldSizing;
@property(nonatomic) _Bool displaysSearchBarInNavigationBar; // @synthesize displaysSearchBarInNavigationBar=_displaysSearchBarInNavigationBar;
@property(copy, nonatomic) NSString *searchResultsTitle; // @synthesize searchResultsTitle=_resultsTitle;
@property(nonatomic) __weak id <UITableViewDelegate> searchResultsDelegate; // @synthesize searchResultsDelegate=_tableViewDelegate;
@property(nonatomic) __weak id <UITableViewDataSource> searchResultsDataSource; // @synthesize searchResultsDataSource=_tableViewDataSource;
@property(readonly, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(readonly, nonatomic) __weak UIViewController *searchContentsController; // @synthesize searchContentsController=_viewController;
@property(nonatomic) id <UISearchDisplayDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_containedInPopover;	// IMP=0x00000000004958f1
- (double)_statusBarHeight;	// IMP=0x00000000004958b5
- (_Bool)_shouldAccountForStatusBarHeight;	// IMP=0x00000000004957a7
- (_Bool)_searchBarInNavigationControllerComponent;	// IMP=0x000000000049576d
- (id)_dimmingOverlayColor;	// IMP=0x000000000049575c
- (void)_setDimmingOverlayColor:(id)arg1;	// IMP=0x0000000000495700
- (void)_animateNavigationBarSearchBarAppearance:(id)arg1;	// IMP=0x0000000000494844
- (id)_containerView;	// IMP=0x0000000000494243
- (void)_configureContainerView;	// IMP=0x0000000000494141
@property(readonly, nonatomic) UINavigationItem *navigationItem;
- (_Bool)_showsResultsForEmptyField;	// IMP=0x00000000004940cd
- (void)_setShowsResultsForEmptyField:(_Bool)arg1;	// IMP=0x00000000004940a2
- (_Bool)_searchBarShouldScrollToVisible:(id)arg1;	// IMP=0x0000000000494052
- (void)_observeScrollViewDidScroll:(id)arg1;	// IMP=0x0000000000493e9f
- (void)_updateSearchBarMaskIfNecessary;	// IMP=0x0000000000493b06
- (void)_updateTableHeaderBackgroundViewInTableView:(id)arg1 amountScrolledUnder:(double)arg2;	// IMP=0x00000000004938f9
- (void)_watchContainingTableViewForScrolling:(_Bool)arg1;	// IMP=0x0000000000493683
- (id)_noResultsMessageLabel;	// IMP=0x000000000049365e
@property(nonatomic, getter=_isCancelButtonManagementDisabled, setter=_setCancelButtonManagementDisabled:) _Bool cancelButtonManagementDisabled;
- (void)_clearViewController;	// IMP=0x0000000000493621
@property(nonatomic) _Bool dimTableViewOnEmptySearchString;
- (_Bool)_allowDisablingNavigationBarHiding;	// IMP=0x00000000004935e4
- (void)_setAllowDisablingNavigationBarHiding:(_Bool)arg1;	// IMP=0x00000000004935c7
@property(nonatomic, getter=isNavigationBarHidingEnabled) _Bool navigationBarHidingEnabled;
@property(copy, nonatomic) NSString *noResultsMessage;
@property(nonatomic) _Bool automaticallyShowsNoResultsMessage;
@property(nonatomic) _Bool noResultsMessageVisible;
@property(readonly, nonatomic) UITableView *searchResultsTableView; // @synthesize searchResultsTableView=_tableView;
- (_Bool)popoverControllerShouldDismissPopover:(id)arg1;	// IMP=0x00000000004930fa
- (void)popoverController:(id)arg1 animationCompleted:(long long)arg2;	// IMP=0x00000000004930dc
- (void)_managedTableViewDidScroll;	// IMP=0x0000000000493039
- (void)_updateNoSearchResultsMessageVisiblity;	// IMP=0x0000000000492ec2
- (void)navigationControllerDidCancelShowingViewController:(id)arg1;	// IMP=0x0000000000492e31
- (void)navigationControllerDidShowViewController:(id)arg1;	// IMP=0x0000000000492d60
- (void)navigationControllerWillShowViewController:(id)arg1;	// IMP=0x0000000000492687
- (void)_restoreSelectedCellsInCaseViewDidNotReallyAppear;	// IMP=0x0000000000492611
- (void)_saveSelectedRowsInCaseViewDoesNotReallyAppear;	// IMP=0x000000000049258f
- (void)_clearSavedSelectedCellsWeUsedWhenHedgingOurBets;	// IMP=0x000000000049256e
- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;	// IMP=0x00000000004924bd
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x0000000000492379
- (void)searchBarResultsListButtonClicked:(id)arg1;	// IMP=0x0000000000492326
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x00000000004922e5
- (void)searchBarCancelButtonClicked:(id)arg1;	// IMP=0x000000000049207a
- (void)searchBarTextDidBeginEditing:(id)arg1;	// IMP=0x0000000000491f47
- (void)windowDidRotate:(id)arg1;	// IMP=0x0000000000491ee9
- (void)windowWillAnimateRotation:(id)arg1;	// IMP=0x0000000000491981
- (void)_keyboardWillHide:(id)arg1;	// IMP=0x0000000000491926
- (void)_keyboardWillShow:(id)arg1;	// IMP=0x00000000004918cb
- (double)_updateNavigationPalette;	// IMP=0x0000000000491620
- (void)_updatePinnedSearchBar;	// IMP=0x000000000049156b
@property(nonatomic, getter=isActive) _Bool active;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000048d78a
- (void)showHideAnimationDidFinish;	// IMP=0x000000000048d44d
- (void)_sendDelegateDidBeginDidEndSearch;	// IMP=0x000000000048d3dd
- (id)_dimmingViewColor;	// IMP=0x000000000048d2da
- (double)_dimmingViewAlpha;	// IMP=0x000000000048d238
- (void)_hideVisibleRefreshControl;	// IMP=0x000000000048d104
- (void)_searchBarSuperviewChanged;	// IMP=0x000000000048d066
- (void)_searchBarSuperviewWillChange;	// IMP=0x000000000048d048
- (void)_setTableViewVisible:(_Bool)arg1 inView:(id)arg2;	// IMP=0x000000000048c819
- (void)_hoistSearchBar;	// IMP=0x000000000048c4d1
- (void)_adjustTableViewContentInsetsAndOffsetsIgnoringCurrent:(_Bool)arg1;	// IMP=0x000000000048c2aa
- (struct UIEdgeInsets)_tableViewContentInsets;	// IMP=0x000000000048bed7
- (void)_enableParentScrollViews;	// IMP=0x000000000048be4e
- (void)_disableParentScrollViews;	// IMP=0x000000000048bcd4
- (void)_destroyManagedTableView;	// IMP=0x000000000048bc4f
- (id)_createPopoverController;	// IMP=0x000000000048b8f5
- (void)_popoverClearButtonPressed:(id)arg1;	// IMP=0x000000000048b8b5
- (void)_popoverKeyboardDidHide:(id)arg1;	// IMP=0x000000000048b847
- (void)_popoverKeyboardDidShow:(id)arg1;	// IMP=0x000000000048b798
- (_Bool)_isSearchBarInBar;	// IMP=0x000000000048b782
- (_Bool)hidNavigationBar;	// IMP=0x000000000048b771
- (id)_topShadowView;	// IMP=0x000000000048b71f
- (id)_containingTableView;	// IMP=0x000000000048b676
- (id)_containingViewOfClass:(Class)arg1;	// IMP=0x000000000048b522
- (void)setSearchContentsController:(id)arg1;	// IMP=0x000000000048b425
- (void)_setupNoResultsLabelIfNecessary;	// IMP=0x000000000048b29f
- (void)setSearchBar:(id)arg1;	// IMP=0x000000000048b155
- (void)_configureNewSearchBar;	// IMP=0x000000000048aed1
- (_Bool)_areSearchContentsSplitViewMaster;	// IMP=0x000000000048adef
- (void)_cleanUpSearchBar;	// IMP=0x000000000048ad4e
- (void)_configureSearchBarForTableView;	// IMP=0x000000000048abbd
- (void)dealloc;	// IMP=0x000000000048aa93
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000048aa69
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000048a9c5
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2 searchResultsTableViewStyle:(long long)arg3;	// IMP=0x000000000048a839
- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2;	// IMP=0x000000000048a683
- (id)init;	// IMP=0x000000000048a66d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
