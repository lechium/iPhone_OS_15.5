//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CollectionsFilterMenu, MKPlaceCollectionsLogicController, MKPlaceCollectionsSizeController, NSArray, NSIndexPath, NSString, PublisherAPIController, PublisherHeaderViewActionManager, UICollectionViewDiffableDataSource;
@protocol FilterAnalyticsProvider, MKCollectionCarouselRoutingDelegate, PublisherAnalytics;

__attribute__((visibility("hidden")))
@interface PublisherViewDataSource
{
    id <FilterAnalyticsProvider> _filterAnalyticsProvider;	// 8 = 0x8
    NSArray *_placeCollections;	// 16 = 0x10
    NSArray *_placeCollectionViewModels;	// 24 = 0x18
    NSArray *_resultFilters;	// 32 = 0x20
    NSIndexPath *_selectedFilterIndexPath;	// 40 = 0x28
    UICollectionViewDiffableDataSource *_dataSource;	// 48 = 0x30
    CollectionsFilterMenu *_filterMenu;	// 56 = 0x38
    PublisherAPIController *_apiController;	// 64 = 0x40
    MKPlaceCollectionsLogicController *_logicController;	// 72 = 0x48
    MKPlaceCollectionsSizeController *_sizeController;	// 80 = 0x50
    id <MKCollectionCarouselRoutingDelegate> _routingDelegate;	// 88 = 0x58
    id <PublisherAnalytics> _analyticsManager;	// 96 = 0x60
    PublisherHeaderViewActionManager *_actionsManager;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0020000000ad4e00
@property(retain, nonatomic) PublisherHeaderViewActionManager *actionsManager; // @synthesize actionsManager=_actionsManager;
@property(retain, nonatomic) id <PublisherAnalytics> analyticsManager; // @synthesize analyticsManager=_analyticsManager;
@property(nonatomic) __weak id <MKCollectionCarouselRoutingDelegate> routingDelegate; // @synthesize routingDelegate=_routingDelegate;
@property(retain, nonatomic) MKPlaceCollectionsSizeController *sizeController; // @synthesize sizeController=_sizeController;
@property(retain, nonatomic) MKPlaceCollectionsLogicController *logicController; // @synthesize logicController=_logicController;
@property(retain, nonatomic) PublisherAPIController *apiController; // @synthesize apiController=_apiController;
@property(retain, nonatomic) CollectionsFilterMenu *filterMenu; // @synthesize filterMenu=_filterMenu;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSIndexPath *selectedFilterIndexPath; // @synthesize selectedFilterIndexPath=_selectedFilterIndexPath;
@property(retain, nonatomic) NSArray *resultFilters; // @synthesize resultFilters=_resultFilters;
@property(retain, nonatomic) NSArray *placeCollectionViewModels; // @synthesize placeCollectionViewModels=_placeCollectionViewModels;
@property(retain, nonatomic) NSArray *placeCollections; // @synthesize placeCollections=_placeCollections;
- (void)curatedCollectionSyncManagerDidUpdateCachedCollections:(id)arg1;	// IMP=0x0010000000ad4c36
- (void)curatedCollectionSyncManagerDidUpdateSyncedCollections:(id)arg1;	// IMP=0x0010000000ad4bf9
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;	// IMP=0x0010000000ad4b46
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000ad494f
- (void)dismissedCollections;	// IMP=0x0010000000ad4912
- (void)updateCollections:(id)arg1 usingBatchIdentifiers:(id)arg2;	// IMP=0x0010000000ad4827
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x0010000000ad478a
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;	// IMP=0x0010000000ad46ed
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;	// IMP=0x0010000000ad4621
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0010000000ad4435
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x0010000000ad41dc
- (void)didRouteToAddressFilter:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0010000000ad3e59
- (void)didRouteToKeywordFilter:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0010000000ad3ad6
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x0010000000ad3719
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 itemIdentifier:(id)arg3;	// IMP=0x0010000000ad3553
- (void)filterDataFetchStarted;	// IMP=0x0010000000ad3419
- (void)didTapTryAgainOnErrorView;	// IMP=0x0010000000ad32c2
- (void)clearPublisherData;	// IMP=0x0010000000ad3285
- (void)displayCollections:(CDUnknownBlockType)arg1;	// IMP=0x0010000000ad30eb
- (long long)presentationStyle;	// IMP=0x0010000000ad30e0
- (void)dealloc;	// IMP=0x0010000000ad306b
- (id)initWithCollectionView:(id)arg1 usingCuratedCollections:(id)arg2 usingPlaceCollectionIds:(id)arg3 withResultFilters:(id)arg4 withAPIController:(id)arg5 withCollectionRoutingDelegate:(id)arg6 usingAnalyticsManager:(id)arg7 usingPublisherActionsManager:(id)arg8;	// IMP=0x0010000000ad2b02

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

