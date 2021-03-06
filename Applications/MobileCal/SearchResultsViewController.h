//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString, NSTimer, UISearchBar;
@protocol SearchResultsViewControllerDelegate;

@interface SearchResultsViewController
{
    NSTimer *_timer;	// 8 = 0x8
    _Bool _showFilteredData;	// 16 = 0x10
    _Bool _pendingUpdate;	// 17 = 0x11
    _Bool _shouldLeaveSearchString;	// 18 = 0x12
    NSObject<SearchResultsViewControllerDelegate> *_searchResultsDelegate;	// 24 = 0x18
    UISearchBar *_searchBar;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000133d7c
@property(nonatomic) _Bool shouldLeaveSearchString; // @synthesize shouldLeaveSearchString=_shouldLeaveSearchString;
@property(nonatomic) __weak UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(nonatomic) __weak NSObject<SearchResultsViewControllerDelegate> *searchResultsDelegate; // @synthesize searchResultsDelegate=_searchResultsDelegate;
- (void)_setSearchString:(id)arg1;	// IMP=0x0010000000133c83
- (void)_refreshView;	// IMP=0x0010000000133ba4
- (void)_searchResultsUpdated:(id)arg1;	// IMP=0x0010000000133a1f
- (void)_eventStoreChanged:(id)arg1;	// IMP=0x00100000001338c8
- (void)eventViewController:(id)arg1 requestsDismissalOfEditViewController:(id)arg2;	// IMP=0x0010000000133858
- (void)eventViewController:(id)arg1 requestsDisplayOfEditViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00100000001337be
- (_Bool)eventViewDelegateShouldHandlePresentationOfEditViewController:(id)arg1;	// IMP=0x00100000001337b6
- (long long)editorPresentationStyle;	// IMP=0x00100000001337ab
- (_Bool)eventViewControllerShouldHideInlineEditButton;	// IMP=0x00100000001337a3
- (struct CGRect)_searchBar:(id)arg1 proposedSearchFieldFrame:(struct CGRect)arg2;	// IMP=0x00100000001335b7
- (id)_sizingContextWindow;	// IMP=0x0010000000133488
- (void)cancelTimer;	// IMP=0x0010000000133450
- (void)beginSearch:(id)arg1;	// IMP=0x00100000001333c1
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;	// IMP=0x0010000000133278
- (void)searchBarSearchButtonClicked:(id)arg1;	// IMP=0x0010000000133263
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0010000000133226
- (void)searchBarCancelButtonClicked:(id)arg1;	// IMP=0x0010000000133179
- (long long)positionForBar:(id)arg1;	// IMP=0x001000000013316e
- (void)updateSearchResultsForSearchController:(id)arg1;	// IMP=0x00100000001330d3
- (void)tableView:(id)arg1 willPerformPreviewActionForMenuWithConfiguration:(id)arg2 animator:(id)arg3;	// IMP=0x0010000000132f0e
- (_Bool)shouldUpdateModelSelectedDate;	// IMP=0x0010000000132f06
- (_Bool)prefersShowingViewControllersOnNavigationStack;	// IMP=0x0010000000132e76
- (void)showEvent:(id)arg1;	// IMP=0x0010000000132b08
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0010000000132a2d
- (id)backButtonTitleForEventDetails;	// IMP=0x00100000001329ba
- (void)scrollToDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000132920
- (_Bool)shouldPreserveDateAcrossRefresh;	// IMP=0x0010000000132918
- (_Bool)showFilteredData;	// IMP=0x0010000000132908
- (void)setShowFilteredData:(_Bool)arg1;	// IMP=0x00100000001328f8
- (void)_updateFilterState;	// IMP=0x00100000001327df
- (id)noContentTextFont;	// IMP=0x0010000000132759
- (_Bool)noContentShowsLines;	// IMP=0x0010000000132744
- (id)noContentTextColor;	// IMP=0x0010000000132706
- (id)noContentStringForListTableView:(id)arg1;	// IMP=0x001000000013261a
- (void)_updateTableAlpha:(_Bool)arg1;	// IMP=0x0010000000132362
- (double)_maxHeightOfTableView;	// IMP=0x001000000013217d
- (void)_updatePreferredContentSize;	// IMP=0x0010000000131fae
- (_Bool)_useLargeFormatBehavior;	// IMP=0x0010000000131f73
- (void)_setContentInsets;	// IMP=0x0010000000131e4f
- (void)viewWillLayoutSubviews;	// IMP=0x0010000000131dab
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0010000000131d2d
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000131cda
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0010000000131b9a
- (void)viewDidLoad;	// IMP=0x0010000000131ad7
- (void)dealloc;	// IMP=0x0010000000131a14
- (id)initWithModel:(id)arg1 window:(id)arg2;	// IMP=0x00100000001318ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long destination;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

