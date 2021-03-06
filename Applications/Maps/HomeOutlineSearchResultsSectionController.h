//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CollectionsDataProvider, CurrentLocationDataProvider, DistanceUnitDataProvider, HomeSearchResultsFilterItem, NSArray, NSString, SearchResultsDataProvider;
@protocol MapsUIDiffableDataSourceViewModel;

__attribute__((visibility("hidden")))
@interface HomeOutlineSearchResultsSectionController
{
    SearchResultsDataProvider *_searchResultsDataProvider;	// 8 = 0x8
    CurrentLocationDataProvider *_currentLocationDataProvider;	// 16 = 0x10
    CollectionsDataProvider *_collectionsDataProvider;	// 24 = 0x18
    DistanceUnitDataProvider *_distanceUnitDataProvider;	// 32 = 0x20
    HomeSearchResultsFilterItem *_searchResultsFilterItem;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000c9c80
- (void)relatedSearchSuggestionOutlineCellDidTapActionButtonWithSuggestion:(id)arg1;	// IMP=0x00100000000c9c63
- (void)venuesDropDownOutlineCell:(id)arg1 didSelectCategory:(id)arg2;	// IMP=0x00100000000c9bc0
- (void)didTapOnCuratedGuides:(id)arg1;	// IMP=0x00100000000c9b30
- (void)didTapOnCuratedGuide:(id)arg1;	// IMP=0x00100000000c9aa0
- (void)didTapOnUserGeneratedGuide:(id)arg1;	// IMP=0x00100000000c9a10
- (void)didTapOnPlaceContextWithViewModel:(id)arg1 parentView:(id)arg2;	// IMP=0x00100000000c9980
- (void)searchResultsFilterItem:(id)arg1 didSelectSuggestion:(id)arg2;	// IMP=0x00100000000c98c2
@property(readonly, nonatomic) _Bool persistsExpansions;
- (id)_childItemsInVenueSearchResult:(id)arg1;	// IMP=0x00100000000c968d
- (_Bool)_isItemVenue:(id)arg1;	// IMP=0x00100000000c9608
- (void)handleVenueSearchResultsWithSelectedSearchResult:(id)arg1 searchFieldItem:(id)arg2 browseCategories:(id)arg3;	// IMP=0x00100000000c95eb
- (void)presentVenueWithVenueCardItem:(id)arg1;	// IMP=0x00100000000c945b
- (void)expandElementAtIdentifierPath:(id)arg1;	// IMP=0x00100000000c9393
- (id)_searchResultContainingIdentifierPath:(id)arg1;	// IMP=0x00100000000c9207
- (id)contextMenuForSnapshot:(id)arg1;	// IMP=0x00100000000c91ff
@property(readonly, nonatomic) NSArray *itemSnapshots;
@property(readonly, nonatomic) id <MapsUIDiffableDataSourceViewModel> sectionHeaderViewModel;
@property(readonly, nonatomic) NSArray *dataProviders;
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00100000000c8433

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

