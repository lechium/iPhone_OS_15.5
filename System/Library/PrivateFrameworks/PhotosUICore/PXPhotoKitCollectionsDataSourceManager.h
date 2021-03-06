//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXCollectionFetchOperationDelegate-Protocol.h>
#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSOperationQueue, NSString, PHCollectionList, PHFetchResult, PHPhotoLibrary, PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManagerConfiguration;
@protocol OS_os_log;

@interface PXPhotoKitCollectionsDataSourceManager <PXCollectionFetchOperationDelegate, PXChangeObserver, PXPhotoLibraryUIChangeObserver>
{
    PHCollectionList *_collectionList;	// 8 = 0x8
    PHFetchResult *_collectionsFetchResult;	// 16 = 0x10
    PHPhotoLibrary *_photoLibrary;	// 24 = 0x18
    NSMutableDictionary *_subCollectionFetchResultsCache;	// 32 = 0x20
    NSMutableDictionary *_subCollectionKeyAssetFetchResultsCache;	// 40 = 0x28
    NSMutableDictionary *_collectionIndexPathByCollection;	// 48 = 0x30
    NSOperationQueue *_subCollectionFetchOperationQueue;	// 56 = 0x38
    NSOperationQueue *_subCollectionKeyAssetsFetchOperationQueue;	// 64 = 0x40
    _Bool _performedBackgroundFetching;	// 72 = 0x48
    _Bool _needsBackgroundFetching;	// 73 = 0x49
    _Bool _prepareBackgroundFetching;	// 74 = 0x4a
    _Bool _publishChangesScheduledOnRunLoop;	// 75 = 0x4b
    double _lastPublishChangesTime;	// 80 = 0x50
    NSMutableSet *_pendingChangedCollections;	// 88 = 0x58
    NSMutableSet *_changedSubCollections;	// 96 = 0x60
    _Bool _simulateNonIncrementalChanges;	// 104 = 0x68
    NSMutableSet *_changeProcessingPausedReasons;	// 112 = 0x70
    _Bool _changesOccurredWhilePaused;	// 120 = 0x78
    NSMutableArray *_changesDetailsWhilePaused;	// 128 = 0x80
    long long _pausedChangeDetailsBufferLength;	// 136 = 0x88
    _Bool _isPhotoLibraryEmpty;	// 144 = 0x90
    _Bool _isChangeProcessingPaused;	// 145 = 0x91
    NSMutableDictionary *__subCollectionActiveCountFetchOperations;	// 152 = 0x98
    NSMutableDictionary *__subCollectionActiveKeyAssetsFetchOperations;	// 160 = 0xa0
    NSArray *__collectionListBySection;	// 168 = 0xa8
    NSArray *__collectionsFetchResultBySection;	// 176 = 0xb0
    NSArray *__virtualCollections;	// 184 = 0xb8
    PXPhotoKitCollectionsDataSourceManagerConfiguration *_configuration;	// 192 = 0xc0
}

+ (id)sharedKeyAssetsFetchQueue;	// IMP=0x0000000000a3593f
+ (id)sharedSubCollectionsFetchQueue;	// IMP=0x0000000000a3590f
- (void).cxx_destruct;	// IMP=0x0000000000a34a76
@property(readonly, nonatomic) PXPhotoKitCollectionsDataSourceManagerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) PHFetchResult *collectionsFetchResult; // @synthesize collectionsFetchResult=_collectionsFetchResult;
@property(readonly, nonatomic) PHCollectionList *collectionList; // @synthesize collectionList=_collectionList;
@property(nonatomic) _Bool isChangeProcessingPaused; // @synthesize isChangeProcessingPaused=_isChangeProcessingPaused;
@property(retain, nonatomic) NSArray *_virtualCollections; // @synthesize _virtualCollections=__virtualCollections;
@property(retain, nonatomic, setter=_setCollectionsFetchResultBySection:) NSArray *_collectionsFetchResultBySection; // @synthesize _collectionsFetchResultBySection=__collectionsFetchResultBySection;
@property(retain, nonatomic, setter=_setCollectionListBySection:) NSArray *_collectionListBySection; // @synthesize _collectionListBySection=__collectionListBySection;
@property(readonly, nonatomic) NSMutableDictionary *_subCollectionActiveKeyAssetsFetchOperations; // @synthesize _subCollectionActiveKeyAssetsFetchOperations=__subCollectionActiveKeyAssetsFetchOperations;
@property(readonly, nonatomic) NSMutableDictionary *_subCollectionActiveCountFetchOperations; // @synthesize _subCollectionActiveCountFetchOperations=__subCollectionActiveCountFetchOperations;
@property(readonly) NSObject<OS_os_log> *dataSourceManagerLog;
@property(readonly, nonatomic) long long numberOfPendingKeyAssetFetches;
- (void)waitUntilBackgroundFetchingFinishedWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a348a9
- (void)stopCoalescingAndPublishFetchResultChanges;	// IMP=0x0000000000a34897
- (void)startCoalescingFetchResultChanges;	// IMP=0x0000000000a34886
- (_Bool)canReorderCollection:(id)arg1;	// IMP=0x0000000000a3478e
- (_Bool)canRenameCollection:(id)arg1;	// IMP=0x0000000000a34732
- (_Bool)canDeleteCollection:(id)arg1;	// IMP=0x0000000000a346d6
- (_Bool)canEditAlbums;	// IMP=0x0000000000a345b6
- (_Bool)containsAnyAssets:(id)arg1;	// IMP=0x0000000000a345a4
- (_Bool)_isImportsAssetCollection:(id)arg1;	// IMP=0x0000000000a34548
- (_Bool)_isPlacesAlbumAssetCollection:(id)arg1;	// IMP=0x0000000000a344ea
- (_Bool)_needsFetchResultForCollection:(id)arg1;	// IMP=0x0000000000a34357
- (_Bool)_needsKeyAssetsFetchResultForCollection:(id)arg1;	// IMP=0x0000000000a34250
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;	// IMP=0x0000000000a33834
- (id)prepareForPhotoLibraryChange:(id)arg1;	// IMP=0x0000000000a3382c
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000a337a5
- (id)_subitemChangeDetailsByItemBySection;	// IMP=0x0000000000a336bd
- (id)_changedSubCollectionIndexesBySections;	// IMP=0x0000000000a335fd
- (_Bool)_updateCachedSubCollectionFetchResultsForChange:(id)arg1 fetchResultChangeDetails:(id)arg2;	// IMP=0x0000000000a33098
- (id)uncachedKeyAssetFetchResultForSubCollection:(id)arg1;	// IMP=0x0000000000a32d53
- (id)_keyAssetFetchResultForSubCollection:(id)arg1 fetchIfNeeded:(_Bool)arg2;	// IMP=0x0000000000a32b7d
- (_Bool)isCachedFetchResultOutdatedForCollection:(id)arg1;	// IMP=0x0000000000a32a9e
- (id)uncachedFetchResultForSubCollection:(id)arg1;	// IMP=0x0000000000a3284a
- (id)assetsFetchResultForCollection:(id)arg1 fetchIfNeeded:(_Bool)arg2;	// IMP=0x0000000000a3279d
- (id)fetchResultForSubCollection:(id)arg1;	// IMP=0x0000000000a32786
- (_Bool)hasAssetsFetchResultForCollection:(id)arg1;	// IMP=0x0000000000a32748
- (id)assetsFetchResultForCollection:(id)arg1;	// IMP=0x0000000000a32736
- (id)keyAssetsFetchResultForCollection:(id)arg1 fetchIfNeeded:(_Bool)arg2;	// IMP=0x0000000000a32724
- (id)keyAssetsFetchResultForCollection:(id)arg1;	// IMP=0x0000000000a3270d
- (void)_endSignpostForFetchOperation:(id)arg1;	// IMP=0x0000000000a325ec
- (void)collectionFetchOperationDidCancel:(id)arg1;	// IMP=0x0000000000a325da
- (void)collectionFetchOperationDidComplete:(id)arg1;	// IMP=0x0000000000a3240c
- (void)collectionFetchOperationDidBegin:(id)arg1;	// IMP=0x0000000000a32257
- (void)_publishPendingCollectionChanges;	// IMP=0x0000000000a31ca7
- (void)_updateDataSourceForChangeOnCollection:(id)arg1;	// IMP=0x0000000000a31b93
- (void)_updateKeyAssetsCacheForCollection:(id)arg1 withFetchResult:(id)arg2 otherFetchResultsByAssetCollection:(id)arg3;	// IMP=0x0000000000a31806
- (void)_enqueueFetchKeyAssetsOperationForCollection:(id)arg1;	// IMP=0x0000000000a31638
- (void)_updateVisibleCountsForCollection:(id)arg1 withWithFetchResult:(id)arg2;	// IMP=0x0000000000a31557
- (void)_enqueueFetchCountsOperationForCollection:(id)arg1;	// IMP=0x0000000000a313a1
- (_Bool)isBackgroundFetching;	// IMP=0x0000000000a31359
- (void)pauseBackgroundFetching;	// IMP=0x0000000000a31306
- (void)startBackgroundFetchingIfNeeded;	// IMP=0x0000000000a312b9
- (void)_prepareBackgroundFetchingIfNeededForCollection:(id)arg1;	// IMP=0x0000000000a31242
- (void)prepareBackgroundFetchingIfNeeded;	// IMP=0x0000000000a31187
- (void)_recursivelyCollectCollectionsIn:(id)arg1 fetchResult:(id)arg2;	// IMP=0x0000000000a30f76
- (void)_recursivelyEnumerateAssetCollectionsInFetchResult:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000a30c87
- (id)indexPathForCollection:(id)arg1;	// IMP=0x0000000000a30c6a
- (_Bool)_containsAnyAlbumsWithAssets:(id)arg1;	// IMP=0x0000000000a30b68
- (_Bool)_containsAnyAssets:(id)arg1;	// IMP=0x0000000000a3098b
- (long long)estimatedCountForAssetCollection:(id)arg1;	// IMP=0x0000000000a3090a
- (void)_enumerateAllPhotoKitCollectionsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000a30850
- (void)_updateCollectionIndexMappingForFilteredFetchResults;	// IMP=0x0000000000a307a9
- (_Bool)_shouldIncludeCollection:(id)arg1;	// IMP=0x0000000000a3011d
- (id)_filterFetchResult:(id)arg1;	// IMP=0x0000000000a2ff00
- (id)_getSectionedCollectionListAndFetchResultsFromFetchResult:(id)arg1;	// IMP=0x0000000000a2fc10
- (_Bool)_isEmpty;	// IMP=0x0000000000a2fb1f
- (unsigned long long)_fixedOrderPriorityForVirtualCollection:(id)arg1;	// IMP=0x0000000000a2fac0
- (id)createInitialDataSource;	// IMP=0x0000000000a2f9dd
- (void)_updateFilteredCollectionsFetchResults;	// IMP=0x0000000000a2f91f
- (id)_newDataSource;	// IMP=0x0000000000a2f7bc
- (void)setDataSource:(id)arg1 changeDetailsArray:(id)arg2;	// IMP=0x0000000000a2f56a
- (void)setChangeProcessingPaused:(_Bool)arg1 forReason:(id)arg2;	// IMP=0x0000000000a2f423
- (void)dealloc;	// IMP=0x0000000000a2f3d7
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000a2ef5c
- (id)displayableAssetsForCollectionList:(id)arg1 maximumCount:(long long)arg2 useCache:(_Bool)arg3 correspondingCollections:(out id *)arg4;	// IMP=0x00000000004bbc79
- (void)getDisplayableAssets:(id *)arg1 indexes:(id *)arg2 forCollection:(id)arg3 maximumCount:(long long)arg4 useCache:(_Bool)arg5;	// IMP=0x00000000004bad8f

// Remaining properties
@property(readonly, nonatomic) PXPhotoKitCollectionsDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

