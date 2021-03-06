//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@class NSMutableOrderedSet, NSObject, NSString, PXCMMSuggestionsDataSource, PXCMMSuggestionsDataSourceContext, PXCMMSuggestionsDataSourceState;
@protocol OS_dispatch_queue;

@interface PXCMMSuggestionsDataSourceManager <PXPhotoLibraryUIChangeObserver>
{
    NSObject<OS_dispatch_queue> *_workerQueue;	// 8 = 0x8
    _Bool _isLoading;	// 16 = 0x10
    _Bool _hasCreatedInitialDataSource;	// 17 = 0x11
    PXCMMSuggestionsDataSourceState *__state;	// 24 = 0x18
    NSMutableOrderedSet *__remainingAssetCollectionsObjectIDsToFetch;	// 32 = 0x20
    PXCMMSuggestionsDataSourceContext *_context;	// 40 = 0x28
}

+ (id)keyPathsAffectingCurrentDataSourceManager;	// IMP=0x0000000000741864
+ (id)mockDataSourceManagerFromRecentLargeMoments;	// IMP=0x00000000007417f7
+ (id)dataSourceManagerWithParticipants:(id)arg1 fetchLimit:(long long)arg2 shouldShowAccepted:(_Bool)arg3 message:(id)arg4 date:(id)arg5 matchingStrategy:(unsigned long long)arg6;	// IMP=0x00000000007415fd
+ (id)dataSourceManager;	// IMP=0x00000000007415cc
+ (id)currentDataSourceManager;	// IMP=0x0000000000741546
+ (id)emptyDataSourceManager;	// IMP=0x00000000007414d9
+ (id)_fetchResultForTypeGraphWithContext:(id)arg1;	// IMP=0x0000000000741218
+ (id)_fetchResultForMockRecentLargeMomentsDataSourceManager;	// IMP=0x0000000000741048
+ (id)_fetchResultForEmptyDataSourceManager;	// IMP=0x0000000000740fc2
+ (id)new;	// IMP=0x0000000000740f48
+ (id)mostRecentCreationDate;	// IMP=0x0000000000740cfc
- (void).cxx_destruct;	// IMP=0x000000000073f711
@property(readonly, nonatomic) PXCMMSuggestionsDataSourceContext *context; // @synthesize context=_context;
@property(retain) NSMutableOrderedSet *_remainingAssetCollectionsObjectIDsToFetch; // @synthesize _remainingAssetCollectionsObjectIDsToFetch=__remainingAssetCollectionsObjectIDsToFetch;
@property(retain, nonatomic) PXCMMSuggestionsDataSourceState *_state; // @synthesize _state=__state;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1 withPreparedInfo:(id)arg2;	// IMP=0x000000000073f405
- (id)prepareForPhotoLibraryChange:(id)arg1;	// IMP=0x000000000073f236
- (void)_handleFinishedFetchingBatch:(id)arg1 preparedChangeDetails:(id)arg2 forFetchResult:(id)arg3 changedObjects:(id)arg4;	// IMP=0x000000000073ed90
- (void)_workerQueue_fetchRemainingAssetCollectionsInBatchesWithAssetCollections:(id)arg1;	// IMP=0x000000000073e703
- (void)_startLoadingIfNeeded;	// IMP=0x000000000073e5ee
- (id)_createSuggestionsDataSourceFromCurrentState;	// IMP=0x000000000073e585
- (id)createInitialDataSource;	// IMP=0x000000000073e52e
- (id)assetCollections;	// IMP=0x000000000073e4de
- (id)init;	// IMP=0x000000000073e464
- (id)initWithContext:(id)arg1 assetCollectionsFetchResult:(id)arg2;	// IMP=0x000000000073e16d
- (id)initWithAssetCollectionsFetchResult:(id)arg1;	// IMP=0x000000000073e0f6

// Remaining properties
@property(readonly, nonatomic) PXCMMSuggestionsDataSource *dataSource; // @dynamic dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

