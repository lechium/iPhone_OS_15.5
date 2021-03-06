//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOComposedRouteStep, MKTransitItemReferenceDateUpdater, MNLocation, MNNavigationService, MapsThrottler, NSArray, NSIndexPath, NSMapTable, NSString, Route, TransitDirectionsListView, TransitDirectionsStepsListDataProvider, UICollectionView, UITableView;
@protocol TransitDirectionsStepsListDelegate, UIScrollViewDelegate;

__attribute__((visibility("hidden")))
@interface TransitDirectionsStepsListDataSource : NSObject
{
    double _listWidthForLeadingInset;	// 8 = 0x8
    double _listWidthForCachedRowHeights;	// 16 = 0x10
    _Bool _animatingExpansion;	// 24 = 0x18
    CDUnknownBlockType _reloadTableCompletionBlock;	// 32 = 0x20
    _Bool _listViewReloadWaitingAnimationCompletion;	// 40 = 0x28
    _Bool _routeSetAwaitingTableViewReload;	// 41 = 0x29
    MKTransitItemReferenceDateUpdater *_referenceDateUpdater;	// 48 = 0x30
    TransitDirectionsStepsListDataProvider *_dataProvider;	// 56 = 0x38
    _Bool _flattenToSingleSection;	// 64 = 0x40
    _Bool _allowStepSelection;	// 65 = 0x41
    _Bool _active;	// 66 = 0x42
    _Bool _automaticallyScrollToDisplayedStep;	// 67 = 0x43
    _Bool _useCollapsedDisplayStyle;	// 68 = 0x44
    id <TransitDirectionsStepsListDelegate> _delegate;	// 72 = 0x48
    unsigned long long _options;	// 80 = 0x50
    NSIndexPath *_activeItemIndexPath;	// 88 = 0x58
    NSIndexPath *_displayedItemIndexPath;	// 96 = 0x60
    MapsThrottler *_matchedLocationThrottler;	// 104 = 0x68
    id <UIScrollViewDelegate> _scrollViewDelegate;	// 112 = 0x70
    UITableView *_tableView;	// 120 = 0x78
    UICollectionView *_collectionView;	// 128 = 0x80
    CDUnknownBlockType _reloadHandler;	// 136 = 0x88
    Route *_route;	// 144 = 0x90
    double _transitDirectionsListInstructionsLeadingInset;	// 152 = 0x98
    MNNavigationService *_navigationService;	// 160 = 0xa0
    TransitDirectionsListView *_listView;	// 168 = 0xa8
    unsigned long long _activeComposedRouteStepIndex;	// 176 = 0xb0
    unsigned long long _displayedComposedRouteStepIndex;	// 184 = 0xb8
    NSMapTable *_estimatedHeightsByItem;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x001000000098a3b8
@property(retain, nonatomic) NSMapTable *estimatedHeightsByItem; // @synthesize estimatedHeightsByItem=_estimatedHeightsByItem;
@property(nonatomic) _Bool useCollapsedDisplayStyle; // @synthesize useCollapsedDisplayStyle=_useCollapsedDisplayStyle;
@property(nonatomic) _Bool automaticallyScrollToDisplayedStep; // @synthesize automaticallyScrollToDisplayedStep=_automaticallyScrollToDisplayedStep;
@property(nonatomic) unsigned long long displayedComposedRouteStepIndex; // @synthesize displayedComposedRouteStepIndex=_displayedComposedRouteStepIndex;
@property(readonly, nonatomic) unsigned long long activeComposedRouteStepIndex; // @synthesize activeComposedRouteStepIndex=_activeComposedRouteStepIndex;
@property(nonatomic) __weak TransitDirectionsListView *listView; // @synthesize listView=_listView;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) MNNavigationService *navigationService; // @synthesize navigationService=_navigationService;
@property(readonly, nonatomic) double leadingInstructionMargin; // @synthesize leadingInstructionMargin=_transitDirectionsListInstructionsLeadingInset;
@property(retain, nonatomic) Route *route; // @synthesize route=_route;
@property(copy, nonatomic) CDUnknownBlockType reloadHandler; // @synthesize reloadHandler=_reloadHandler;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <UIScrollViewDelegate> scrollViewDelegate; // @synthesize scrollViewDelegate=_scrollViewDelegate;
@property(nonatomic, getter=allowsStepSelection) _Bool allowStepSelection; // @synthesize allowStepSelection=_allowStepSelection;
@property(readonly, nonatomic) NSIndexPath *displayedItemIndexPath; // @synthesize displayedItemIndexPath=_displayedItemIndexPath;
@property(nonatomic, getter=shouldFlattenToSingleSection) _Bool flattenToSingleSection; // @synthesize flattenToSingleSection=_flattenToSingleSection;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) __weak id <TransitDirectionsStepsListDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)pptTestMoveToBoardStep;	// IMP=0x001000000098a12e
- (void)pptTestMoveToNextStep;	// IMP=0x001000000098a032
@property(readonly, nonatomic) _Bool pptTestHasNextStep;
@property(readonly, nonatomic) long long pptTestCurrentStepIndex;
@property(readonly, nonatomic) _Bool pptTestSupportStepping;
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x0010000000989ebf
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0010000000989e18
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x0010000000989c5f
- (_Bool)shouldShowSeparatorForItemAtIndexPath:(id)arg1 insets:(struct NSDirectionalEdgeInsets *)arg2;	// IMP=0x0010000000989858
- (_Bool)_shouldHighlightItemAtIndexPath:(id)arg1;	// IMP=0x001000000098962a
- (id)_additionalSelectionIndexPathsForIndexPath:(id)arg1;	// IMP=0x00100000009891a9
- (void)transitDirectionsListView:(id)arg1 didDisplayAdvisory:(id)arg2;	// IMP=0x00100000009890fe
- (void)transitDirectionsListView:(id)arg1 didSelectItem:(id)arg2;	// IMP=0x0010000000988fb1
- (_Bool)transitDirectionsListView:(id)arg1 canSelectItem:(id)arg2;	// IMP=0x0010000000988ef1
- (_Bool)transitDirectionsListView:(id)arg1 shouldShowSeparatorForItem:(id)arg2 atIndexPath:(id)arg3 insets:(struct NSDirectionalEdgeInsets *)arg4;	// IMP=0x0010000000988ed9
- (void)_configureStepView:(id)arg1 forItem:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0010000000988c0e
- (id)transitDirectionsListView:(id)arg1 stepViewForItemAtIndexPath:(id)arg2;	// IMP=0x0010000000988b38
- (long long)transitDirectionsListView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0010000000988b23
- (long long)numberOfSectionsInTransitDirectionsListView:(id)arg1;	// IMP=0x0010000000988b11
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x001000000098850e
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x00100000009883b3
- (void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2;	// IMP=0x001000000098820d
- (void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2;	// IMP=0x0010000000988064
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x001000000098804f
- (void)_configureTransitDirectionsCollectionViewCell:(id)arg1 withItem:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0010000000987d20
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0010000000987b88
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0010000000987adf
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0010000000987aa3
- (void)_updateListForClusteredRideOptionChangeInClusteredSegment:(id)arg1;	// IMP=0x0010000000987a75
- (void)transitDirectionsClusteredVehiclesCellDidTapAlternateRouteButtonInCell:(id)arg1;	// IMP=0x00100000009879c1
- (void)transitDirectionsBoardingInfoStepView:(id)arg1 didSelectScheduleForItem:(id)arg2;	// IMP=0x001000000098788f
- (void)didTapReportAProblemButtonOnRoutePlanningFooterView:(id)arg1;	// IMP=0x001000000098771b
- (void)routePlanningView:(id)arg1 didTapGetTicketsForURL:(id)arg2;	// IMP=0x0010000000987671
- (id)ticketingSegmentsForRoutePlanningFooterView:(id)arg1;	// IMP=0x001000000098761a
- (void)didTapGetTicketsOnRoutePlanningFooterView:(id)arg1;	// IMP=0x001000000098752e
- (void)didTapShareButtonOnRoutePlanningFooterView:(id)arg1;	// IMP=0x00100000009873ba
- (void)_transitDirectionsStepView:(id)arg1 wantsToExpandOrCollapseItem:(id)arg2 inListView:(id)arg3;	// IMP=0x0010000000987017
- (void)_transitDirectionsCell:(id)arg1 wantsToExpandOrCollapseItem:(id)arg2 inCollectionView:(id)arg3;	// IMP=0x00100000009864ef
- (void)_transitDirectionsCell:(id)arg1 wantsToExpandOrCollapseItem:(id)arg2 inTableView:(id)arg3;	// IMP=0x00100000009859e7
- (void)transitDirectionsCell:(id)arg1 wantsToExpandOrCollapseItem:(id)arg2;	// IMP=0x001000000098588f
- (void)transitDirectionsCell:(id)arg1 didTapAdvisory:(id)arg2;	// IMP=0x0010000000985741
- (void)_configureSeparatorForCell:(id)arg1 forRowAtIndexPath:(id)arg2;	// IMP=0x00100000009854aa
- (void)_configureFooterView:(id)arg1;	// IMP=0x00100000009853bc
- (id)_footerCellForIndexPath:(id)arg1 inCollectionView:(id)arg2;	// IMP=0x001000000098533d
- (id)_footerCellForIndexPath:(id)arg1 inTableView:(id)arg2;	// IMP=0x0010000000985282
- (struct _NSRange)_segementRangeForItemAtIndexPath:(id)arg1;	// IMP=0x0010000000985035
- (long long)_cellNavStateForItem:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0010000000984d98
- (void)_cacheHeightForRow:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0010000000984c62
- (void)tableViewDidFinishReload:(id)arg1;	// IMP=0x0010000000984ada
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0010000000984ac5
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00100000009845f3
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;	// IMP=0x001000000098447c
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;	// IMP=0x00100000009842b0
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;	// IMP=0x0010000000984107
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00100000009840ef
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000983fe3
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000983b6a
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0010000000983ac1
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0010000000983a85
- (void)_resetRowHeightCache;	// IMP=0x0010000000983a48
- (unsigned long long)_stepViewDisplayOptionsForSection:(unsigned long long)arg1;	// IMP=0x0010000000983987
- (void)_updateDisplayStyleInVisibleCells;	// IMP=0x00100000009831e3
- (void)_setUseCollapsedDisplayStyle:(_Bool)arg1;	// IMP=0x001000000098315a
@property(copy, nonatomic) MNLocation *matchedLocation;
@property(readonly, nonatomic) MapsThrottler *matchedLocationThrottler; // @synthesize matchedLocationThrottler=_matchedLocationThrottler;
- (void)_localeDidChange;	// IMP=0x0010000000982f3c
- (id)displayedItemIndexForAnalytics;	// IMP=0x0010000000982ef0
- (unsigned long long)indexOfItem:(id)arg1;	// IMP=0x0010000000982e5a
@property(readonly, nonatomic) unsigned long long displayedItemIndex;
@property(readonly, nonatomic) GEOComposedRouteStep *displayedComposedRouteStep;
- (id)_displayedItem;	// IMP=0x0010000000982cc7
@property(readonly, nonatomic) unsigned long long activeItemIndex;
@property(readonly, nonatomic) GEOComposedRouteStep *activeComposedRouteStep;
- (id)_activeItem;	// IMP=0x0010000000982b34
- (void)_notifyDelegateOfUpdatedDisplayedStep;	// IMP=0x001000000098298f
- (void)_notifyDelegateOfUpdatedActiveStep;	// IMP=0x00100000009827ea
- (struct CGRect)frameOfDisplayedComposedRouteStepCell;	// IMP=0x00100000009823b6
- (id)_itemIndexPathForStepIndex:(unsigned long long)arg1;	// IMP=0x0010000000981f75
- (void)_refreshDisplayedItemIndexPath;	// IMP=0x0010000000981cd9
- (id)displayedTransitDirectionsListItemIndexPath;	// IMP=0x0010000000981ca8
- (void)_refreshActiveItemIndexPath;	// IMP=0x00100000009818eb
@property(readonly, nonatomic) NSIndexPath *activeItemIndexPath; // @synthesize activeItemIndexPath=_activeItemIndexPath;
- (void)setActiveComposedRouteStepIndex:(unsigned long long)arg1;	// IMP=0x0010000000981769
- (void)navigationService:(id)arg1 didReceiveRealtimeUpdates:(id)arg2;	// IMP=0x0010000000981404
- (void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x00100000009813ef
- (void)navigationService:(id)arg1 didUpdateDisplayedStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x00100000009812e5
- (void)navigationService:(id)arg1 didUpdateStepIndex:(unsigned long long)arg2 segmentIndex:(unsigned long long)arg3;	// IMP=0x0010000000981094
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0010000000981003
- (_Bool)_useNavigationMetrics;	// IMP=0x0010000000980e6a
- (void)composedRoute:(id)arg1 appliedTransitRouteUpdates:(id)arg2;	// IMP=0x0010000000980df7
- (void)composedRoute:(id)arg1 changedSelectedRideInClusteredSegment:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;	// IMP=0x0010000000980de2
- (void)composedRoute:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;	// IMP=0x0010000000980ddc
- (void)composedRouteUpdatedSnappedPaths:(id)arg1;	// IMP=0x0010000000980dd6
- (void)transitItemReferenceDateUpdater:(id)arg1 didUpdateToReferenceDate:(id)arg2;	// IMP=0x0010000000980dc4
- (void)_expandItemsAtIndices:(id)arg1;	// IMP=0x0010000000980c3e
- (id)_expandedItemsIndices;	// IMP=0x0010000000980a2b
- (void)_rebuildItems;	// IMP=0x00100000009809a6
- (void)updateForClusteredLegSelectedRideIndexChange;	// IMP=0x0010000000980994
- (void)_refreshItemInstructionStrings;	// IMP=0x0010000000980982
- (void)expandAllItems;	// IMP=0x001000000098075c
- (void)collapseAllItems;	// IMP=0x00100000009804f9
// Error: Property attributes should begin with the type ('T') attribute, property name: hasIncidentItems
// Property attributes: (null)

@property(readonly, nonatomic) NSArray *transitSegmentSectionRanges;
- (id)_indexPathFromFlatIndexPath:(id)arg1;	// IMP=0x0010000000980371
- (id)_flatIndexFromIndexPath:(id)arg1;	// IMP=0x0010000000980297
- (unsigned long long)_numberOfRowsInSection:(unsigned long long)arg1;	// IMP=0x00100000009801fe
- (unsigned long long)_numberOfSections;	// IMP=0x0010000000980185
- (id)listItemForIndexPath:(id)arg1;	// IMP=0x00100000009800ab
- (_Bool)_supportsFooterItem;	// IMP=0x001000000098003f
- (void)_scrollToDisplayedItemIfNeeded:(id)arg1 animated:(_Bool)arg2;	// IMP=0x001000000097f924
- (void)_scrollToFirstCell;	// IMP=0x001000000097f423
- (void)_resetArtworkSizesForAdaptiveItems;	// IMP=0x001000000097f237
- (void)_measureShieldWidthForListWidth:(double)arg1;	// IMP=0x001000000097edce
- (void)recalculateLeadingInstructionMarginForWidth:(double)arg1;	// IMP=0x001000000097ed85
- (long long)_userInterfaceIdiom;	// IMP=0x001000000097ed17
- (double)_availableWidth;	// IMP=0x001000000097eca1
- (void)_didFinishAnimatingListView;	// IMP=0x001000000097ebc2
- (void)_updateFooterInListView;	// IMP=0x001000000097ea46
- (void)_reloadVisibleCells;	// IMP=0x001000000097e678
- (void)_reloadListViewForRouteChangeIfNotAnimating:(CDUnknownBlockType)arg1;	// IMP=0x001000000097e566
- (void)_reloadListViewForRouteChangeIfNotAnimating;	// IMP=0x001000000097e552
- (void)_reloadListViewForRouteChange;	// IMP=0x001000000097e3f3
- (void)_updateRegisteredCellClasses;	// IMP=0x001000000097e272
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000097e081
- (id)_scrollView;	// IMP=0x001000000097dd08
- (void)_prepareForUpdatedRoute;	// IMP=0x001000000097dd02
@property(readonly, nonatomic) __weak TransitDirectionsStepsListDataProvider *dataProvider;
- (id)initWithRoute:(id)arg1;	// IMP=0x001000000097d8b6
- (id)init;	// IMP=0x001000000097d8a2
- (void)dealloc;	// IMP=0x001000000097d7bc
@property(readonly, nonatomic) NSArray *_transitDirectionsListItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

