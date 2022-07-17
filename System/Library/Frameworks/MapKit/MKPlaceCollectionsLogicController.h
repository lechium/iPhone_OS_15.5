//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/CollectionsAnalyticsProvider-Protocol.h>
#import <MapKit/MKCollectionDataProvider-Protocol.h>
#import <MapKit/MKCollectionUpdater-Protocol.h>
#import <MapKit/MKCollectionsFetcher-Protocol.h>
#import <MapKit/MKPlaceBatchConsumer-Protocol.h>

@class MKPlaceBatchController, NSArray, NSDiffableDataSourceSnapshot, NSString, UICollectionView, UICollectionViewDiffableDataSource, UIFont;
@protocol MKCuratedCollectionsSyncCoordinator;

@interface MKPlaceCollectionsLogicController : NSObject <MKCollectionsFetcher, MKCollectionDataProvider, MKCollectionUpdater, CollectionsAnalyticsProvider, MKPlaceBatchConsumer>
{
    long long _context;	// 8 = 0x8
    UIFont *_titleFont;	// 16 = 0x10
    UICollectionView *_collectionView;	// 24 = 0x18
    NSArray *_collections;	// 32 = 0x20
    NSArray *_geoCollections;	// 40 = 0x28
    UICollectionViewDiffableDataSource *_dataSource;	// 48 = 0x30
    NSDiffableDataSourceSnapshot *_snapshot;	// 56 = 0x38
    id <MKCuratedCollectionsSyncCoordinator> _syncCoordinator;	// 64 = 0x40
    MKPlaceBatchController *_batchController;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000002701e8
@property(retain, nonatomic) MKPlaceBatchController *batchController; // @synthesize batchController=_batchController;
@property(retain, nonatomic) id <MKCuratedCollectionsSyncCoordinator> syncCoordinator; // @synthesize syncCoordinator=_syncCoordinator;
@property(retain, nonatomic) NSDiffableDataSourceSnapshot *snapshot; // @synthesize snapshot=_snapshot;
@property(retain, nonatomic) UICollectionViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSArray *geoCollections; // @synthesize geoCollections=_geoCollections;
@property(retain, nonatomic) NSArray *collections; // @synthesize collections=_collections;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)didStartFetchingBatch;	// IMP=0x000000000026ff44
- (void)shouldConsumeBatch:(_Bool)arg1 fetchedBatch:(id)arg2;	// IMP=0x000000000026fc64
- (void)applySnapShot:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000026fb17
- (void)_dispatchOnManThread:(CDUnknownBlockType)arg1;	// IMP=0x000000000026fa10
- (void)createBatchControllerIfNeededUsingIdentifiers:(id)arg1 andPlaceCollections:(id)arg2 usingCollectionFetcher:(id)arg3 usingGuideConsumer:(id)arg4 usingBatchSize:(unsigned long long)arg5;	// IMP=0x000000000026f8b0
- (id)removeIdentifiers:(id)arg1 collidingWithPlaceCollections:(id)arg2;	// IMP=0x000000000026f631
- (void)initializeFonts;	// IMP=0x000000000026f567
- (void)clearPreviousModelImageDownloads;	// IMP=0x000000000026f503
- (id)buildCuratedCollectionsFrom:(id)arg1 shouldCancelImageDownloads:(_Bool)arg2;	// IMP=0x000000000026f29f
- (void)prepareSnapshot;	// IMP=0x000000000026f12c
- (_Bool)isCollectionSavedAtIndex:(long long)arg1;	// IMP=0x000000000026f0e8
- (id)identifierForCollectionAtIndex:(long long)arg1;	// IMP=0x000000000026f098
- (void)dismissedCollections;	// IMP=0x000000000026f086
- (void)appendBatchOfCollections:(id)arg1;	// IMP=0x000000000026ee6c
- (void)updateUsingBatchedIdentifiers:(id)arg1 usingCollectionFetcher:(id)arg2 usingBatchSize:(unsigned long long)arg3;	// IMP=0x000000000026edd6
- (void)updateCollectionsWithoutPreparingSnapshot:(id)arg1 usingBatchedIdentifiers:(id)arg2 usingCollectionFetcher:(id)arg3 usingGuideConsumer:(id)arg4 usingBatchSize:(unsigned long long)arg5;	// IMP=0x000000000026ecb9
- (void)updateCollections:(id)arg1 usingBatchedIdentifiers:(id)arg2 usingCollectionFetcher:(id)arg3 usingBatchSize:(unsigned long long)arg4;	// IMP=0x000000000026eb95
- (id)geoCollectionAtIndex:(long long)arg1;	// IMP=0x000000000026eb36
- (id)collectionAtIndex:(long long)arg1;	// IMP=0x000000000026ead7
- (long long)numberOfCollections;	// IMP=0x000000000026ea93
- (long long)sectionKindAtIndex:(long long)arg1;	// IMP=0x000000000026ea53
- (long long)numberOfSections;	// IMP=0x000000000026ea48
- (void)refreshCollections;	// IMP=0x000000000026e8f9
- (void)displayCollections;	// IMP=0x000000000026e8ab
- (void)getCollections:(CDUnknownBlockType)arg1;	// IMP=0x000000000026e534
- (void)getCollectionsUsingDataSource:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000026e4d7
- (id)visibleFocusItems;	// IMP=0x000000000026e41a
- (void)clearSnapshotData;	// IMP=0x000000000026e330
- (void)willDisplayCellAtIndexpath:(id)arg1;	// IMP=0x000000000026e2ae
- (id)initWithCollectionView:(id)arg1 withPlaceCollections:(id)arg2 usingCollectionIds:(id)arg3 usingCollectionFetcher:(id)arg4 usingGuideConsumer:(id)arg5 usingSyncCoordinator:(id)arg6 inContext:(long long)arg7 usingBatchSize:(unsigned long long)arg8;	// IMP=0x000000000026dfe0
- (id)initWithPlaceCollections:(id)arg1 usingSyncCoordinator:(id)arg2 inContext:(long long)arg3;	// IMP=0x000000000026dfae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
