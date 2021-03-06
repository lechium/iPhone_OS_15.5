//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSObject, PHFetchResult, PXPhotosDetailsContext, PXRelatedDataSource, PXRelatedSettings;
@protocol OS_dispatch_queue;

@interface PXRelatedDataSourceManager
{
    _Bool _didStartLoading;	// 8 = 0x8
    _Bool _shouldCancelLoading;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_backgroundQueue;	// 16 = 0x10
    PXRelatedSettings *_settings;	// 24 = 0x18
    unsigned long long _fetchLimit;	// 32 = 0x20
    unsigned long long _initialBatchSize;	// 40 = 0x28
    unsigned long long _loadBatchSize;	// 48 = 0x30
    NSDate *_loadStartDate;	// 56 = 0x38
    _Bool _didLoadInitialDataSource;	// 64 = 0x40
    _Bool _useItemIndexPaths;	// 65 = 0x41
    _Bool __canceled;	// 66 = 0x42
    unsigned long long __initialBatchSize;	// 72 = 0x48
    unsigned long long __loadBatchSize;	// 80 = 0x50
    PXPhotosDetailsContext *__context;	// 88 = 0x58
    PHFetchResult *__collectionListFetchResult;	// 96 = 0x60
    PHFetchResult *__relatedCollections;	// 104 = 0x68
    PHFetchResult *__preparedRelatedCollections;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x00000000000f8e1c
@property(retain, nonatomic, setter=_setPreparedRelatedCollections:) PHFetchResult *_preparedRelatedCollections; // @synthesize _preparedRelatedCollections=__preparedRelatedCollections;
@property(retain, nonatomic, setter=_setRelatedCollections:) PHFetchResult *_relatedCollections; // @synthesize _relatedCollections=__relatedCollections;
@property(nonatomic, getter=_isCanceled, setter=_setCanceled:) _Bool _canceled; // @synthesize _canceled=__canceled;
@property(readonly, nonatomic) PHFetchResult *_collectionListFetchResult; // @synthesize _collectionListFetchResult=__collectionListFetchResult;
@property(readonly, nonatomic) PXPhotosDetailsContext *_context; // @synthesize _context=__context;
@property(readonly, nonatomic) _Bool useItemIndexPaths; // @synthesize useItemIndexPaths=_useItemIndexPaths;
@property(nonatomic) unsigned long long loadBatchSize; // @synthesize loadBatchSize=__loadBatchSize;
@property(nonatomic) unsigned long long initialBatchSize; // @synthesize initialBatchSize=__initialBatchSize;
- (id)_referenceAssetForReferenceObject:(id)arg1;	// IMP=0x00000000000f8bca
- (id)_keyAssetFetchResultForRelatedCollection:(id)arg1 referenceAsset:(id)arg2;	// IMP=0x00000000000f88cd
- (id)_collectionListRelatedToObject:(id)arg1;	// IMP=0x00000000000f8170
- (id)_referenceObjectFromCollectionListFetchResult:(id)arg1;	// IMP=0x00000000000f7fed
- (id)_referenceObject;	// IMP=0x00000000000f7e83
- (void)_continueBackgroundLoadWithReferenceObject:(id)arg1 relatedCollections:(id)arg2;	// IMP=0x00000000000f759b
- (id)_collectionsRelatedToReferenceObject:(id)arg1;	// IMP=0x00000000000f7407
- (void)_continueBackgroundLoadWithReferenceObject:(id)arg1 attemptIndex:(long long)arg2;	// IMP=0x00000000000f7012
- (void)_startBackgroundLoad;	// IMP=0x00000000000f6eef
- (id)createPhotosDataSourceForRelatedEntry:(id)arg1;	// IMP=0x00000000000f6c68
- (void)_setDataSource:(id)arg1 changeDetails:(id)arg2;	// IMP=0x00000000000f6aae
- (void)unregisterChangeObserver:(id)arg1 context:(void *)arg2;	// IMP=0x00000000000f6a7f
- (void)registerChangeObserver:(id)arg1 context:(void *)arg2;	// IMP=0x00000000000f6a50
- (void)cancelLoading;	// IMP=0x00000000000f69b0
- (void)startLoading;	// IMP=0x00000000000f6783
- (id)initWithPhotosDetailsContext:(id)arg1 useItemIndexPaths:(_Bool)arg2;	// IMP=0x00000000000f65bd
- (id)initWithPhotosDetailsContext:(id)arg1;	// IMP=0x00000000000f65a9
- (id)init;	// IMP=0x00000000000f6522

// Remaining properties
@property(readonly, nonatomic) PXRelatedDataSource *dataSource; // @dynamic dataSource;

@end

