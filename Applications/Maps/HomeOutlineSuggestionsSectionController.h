//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CurrentLocationDataProvider, DistanceUnitDataProvider, NSArray, NSMutableDictionary, NSString, SharedCollectionsDataProvider, SharedTripsDataProvider, SuggestionsDataProvider;
@protocol MapsUIDiffableDataSourceViewModel;

__attribute__((visibility("hidden")))
@interface HomeOutlineSuggestionsSectionController
{
    CurrentLocationDataProvider *_currentLocationDataProvider;	// 8 = 0x8
    DistanceUnitDataProvider *_distanceUnitDataProvider;	// 16 = 0x10
    SharedCollectionsDataProvider *_sharedCollectionsDataProvider;	// 24 = 0x18
    SharedTripsDataProvider *_sharedTripsDataProvider;	// 32 = 0x20
    SuggestionsDataProvider *_suggestionsDataProvider;	// 40 = 0x28
    NSMutableDictionary *_sortItems;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000185548
@property(readonly, nonatomic) SuggestionsDataProvider *suggestionsDataProvider; // @synthesize suggestionsDataProvider=_suggestionsDataProvider;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0010000000185325
- (void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x00100000001851ef
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000185179
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000184e76
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000184d57
- (void)twoLinesOutlineCell:(id)arg1 tappedActionButtonAtIndex:(long long)arg2;	// IMP=0x0010000000184bb5
- (void)twoLinesOutlineCell:(id)arg1 accessoryViewTapped:(id)arg2 accessoryModel:(id)arg3;	// IMP=0x0010000000184820
- (void)_deleteSnapshot:(id)arg1;	// IMP=0x00100000001843d6
- (void)collectionSortItem:(id)arg1 didSelectSortType:(long long)arg2;	// IMP=0x00100000001842fa
- (void)_scrubSortItems;	// IMP=0x0010000000184073
- (id)_sortItemForCollection:(id)arg1;	// IMP=0x0010000000183f83
- (id)_childItemsInCollection:(id)arg1;	// IMP=0x0010000000183e65
- (id)contentInjectorForSnapshot:(id)arg1;	// IMP=0x0010000000183d15
- (void)showSharedCollection:(id)arg1;	// IMP=0x0010000000183cc1
- (_Bool)shouldPersistExpandedIdentifierPath:(id)arg1;	// IMP=0x0010000000183c4a
@property(readonly, nonatomic) _Bool persistsExpansions;
- (id)contextMenuForSnapshot:(id)arg1;	// IMP=0x0010000000183a4a
@property(readonly, nonatomic) NSArray *itemSnapshots;
- (_Bool)_canDisplaySuggestionsEntry:(id)arg1;	// IMP=0x0010000000182577
@property(readonly, nonatomic) id <MapsUIDiffableDataSourceViewModel> sectionHeaderViewModel;
@property(readonly, nonatomic) NSArray *dataProviders;
- (id)initWithConfiguration:(id)arg1 suggestionsDataProvider:(id)arg2;	// IMP=0x00100000001822d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

