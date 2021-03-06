//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface MSASPersonModel
{
    _Bool _shouldDownloadEarliestPhotosFirst;	// 8 = 0x8
}

@property(nonatomic) _Bool shouldDownloadEarliestPhotosFirst; // @synthesize shouldDownloadEarliestPhotosFirst=_shouldDownloadEarliestPhotosFirst;
- (void)removeAssetCollectionsFromUploadQueue:(id)arg1;	// IMP=0x000000000007e516
- (void)setErrorCount:(int)arg1 forAssetCollectionInUploadQueue:(id)arg2;	// IMP=0x000000000007e45f
- (id)nextItemsForUploadAlbumGUID:(id)arg1 maxPriority:(int)arg2 maxCount:(int)arg3;	// IMP=0x000000000007e2f1
- (id)nextItemsForUploadMaxCount:(int)arg1;	// IMP=0x000000000007e2d5
- (id)itemsForUpload;	// IMP=0x000000000007e1de
- (int)assetCollectionsInUploadQueueAlbumGUID:(id)arg1;	// IMP=0x000000000007e0d3
- (int)assetCollectionsInUploadQueue;	// IMP=0x000000000007e006
- (void)enqueueAssetCollectionForUpload:(id)arg1 album:(id)arg2;	// IMP=0x000000000007df2a
- (void)removeAssetsFromDownloadQueue:(id)arg1;	// IMP=0x000000000007de79
- (void)setInFlightAssets:(id)arg1;	// IMP=0x000000000007dbfa
- (void)setErrorCount:(int)arg1 forAssetInDownloadQueue:(id)arg2;	// IMP=0x000000000007db43
- (int)itemsForDownloadCountFocusAlbumGUID:(id)arg1 focusAssetCollectionGUID:(id)arg2;	// IMP=0x000000000007da04
- (_Bool)hasItemsForDownloadCountFocusAlbumGUID:(id)arg1 focusAssetCollectionGUID:(id)arg2;	// IMP=0x000000000007d8c8
- (id)nextItemsForDownloadFocusAlbumGUID:(id)arg1 focusAssetCollectionGUID:(id)arg2 maxCount:(int)arg3;	// IMP=0x000000000007d719
- (id)nextItemsForDownloadFocusAlbumGUID:(id)arg1 focusAssetCollectionGUID:(id)arg2 thumbnails:(_Bool)arg3 maxCount:(int)arg4 isInflight:(_Bool)arg5;	// IMP=0x000000000007d591
- (int)assetsInDownloadQueueAlbumGUID:(id)arg1;	// IMP=0x000000000007d486
- (int)assetsInDownloadQueue;	// IMP=0x000000000007d3b9
- (void)enqueueAssetForDownload:(id)arg1 inAlbumWithGUID:(id)arg2;	// IMP=0x000000000007d2dd
- (long long)nextMMCSItemID;	// IMP=0x000000000007d214
- (_Bool)dbQueueIsGUIDQueued:(id)arg1 inQueue:(id)arg2;	// IMP=0x000000000007d041
- (void)dbQueueRemoveGUID:(id)arg1 fromQueue:(id)arg2;	// IMP=0x000000000007ceae
- (void)dbQueueSetErrorCount:(int)arg1 forGUID:(id)arg2 inQueue:(id)arg3;	// IMP=0x000000000007ccf3
- (int)dbQueueAssetCountAlbumGUID:(id)arg1 inQueue:(id)arg2;	// IMP=0x000000000007ca31
- (void)requeuePendingAssetCollectionsWithAlbumGUID:(id)arg1;	// IMP=0x000000000007c980
- (void)requeuePendingAssetCollectionGUID:(id)arg1;	// IMP=0x000000000007c8cf
- (void)addPendingAssetCollectionGUID:(id)arg1 albumGUID:(id)arg2;	// IMP=0x000000000007c7f3
- (_Bool)dbQueueIsAssetCollectionWithGUIDPending:(id)arg1;	// IMP=0x000000000007c73a
- (_Bool)isAssetCollectionWithGUIDPending:(id)arg1;	// IMP=0x000000000007c632
- (long long)countOfEnqueuedCommands;	// IMP=0x000000000007c569
- (long long)countOfEnqueuedCommand:(id)arg1;	// IMP=0x000000000007c464
- (void)purgeCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007c3b3
- (void)dbQueueRemoveAllEntriesFromTable:(id)arg1;	// IMP=0x000000000007c271
- (void)dbQueueRemoveCommandIdentifier:(long long)arg1;	// IMP=0x000000000007c174
- (void)removeCommandIdentifier:(long long)arg1;	// IMP=0x000000000007c0f8
- (void)dbQueueRemoveCommandAtHeadOfQueue;	// IMP=0x000000000007c087
- (void)setParams:(id)arg1 forCommandWithIdentifier:(long long)arg2;	// IMP=0x000000000007bfd0
- (id)commandWithMinimumIdentifier:(long long)arg1 outParams:(id *)arg2 outCommandIdentifier:(long long *)arg3 outPersonID:(id *)arg4 outAlbumGUID:(id *)arg5 outAssetCollectionGUID:(id *)arg6;	// IMP=0x000000000007bf3b
- (id)commandAtHeadOfQueueOutParams:(id *)arg1 outCommandIdentifier:(long long *)arg2 outPersonID:(id *)arg3 outAlbumGUID:(id *)arg4 outAssetCollectionGUID:(id *)arg5;	// IMP=0x000000000007bf12
- (id)_commandWithMinimumIdentifier:(id)arg1 outParams:(id *)arg2 outCommandIdentifier:(long long *)arg3 outPersonID:(id *)arg4 outAlbumGUID:(id *)arg5 outAssetCollectionGUID:(id *)arg6;	// IMP=0x000000000007bb86
- (void)dbQueueRequeuePendingCommandsWithAlbumGUID:(id)arg1;	// IMP=0x000000000007ba6e
- (void)dbQueueRequeuePendingCommandsWithAssetCollectionGUID:(id)arg1;	// IMP=0x000000000007b956
- (void)dbQueueRequeuePendingCommandsWithQueryStatement:(struct sqlite3_stmt *)arg1 deleteStatement:(struct sqlite3_stmt *)arg2;	// IMP=0x000000000007b51c
- (void)enqueueCommand:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 pendingOnAssetCollectionGUID:(id)arg5;	// IMP=0x000000000007b3ab
- (void)dbQueueEnqueueCommand:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5 sequenceNumber:(long long)arg6;	// IMP=0x000000000007b05e
- (void)enqueueCommandAtHeadOfQueue:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5;	// IMP=0x000000000007aef6
- (void)enqueueCommand:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5;	// IMP=0x000000000007ad8e
- (void)dbQueueEnqueueCommand:(id)arg1 params:(id)arg2 personID:(id)arg3 albumGUID:(id)arg4 assetCollectionGUID:(id)arg5;	// IMP=0x000000000007aca3
- (long long)dbQueueSmallestCommandSequenceNumber;	// IMP=0x000000000007ab23
- (long long)dbQueueNextCommandSequenceNumber;	// IMP=0x000000000007a9a0
- (_Bool)dbQueueUpgradeFromDatabaseVersion:(int)arg1 currentVersion:(int)arg2;	// IMP=0x00000000000799ef
- (id)initWithPersonID:(id)arg1;	// IMP=0x000000000007996e

@end

