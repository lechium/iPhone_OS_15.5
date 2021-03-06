//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKitDaemon/CKXPCContainerScopedDaemonSPI-Protocol.h>

@interface CKDSPIContainer <CKXPCContainerScopedDaemonSPI>
{
}

- (void)setFakeResponseOperationResult:(id)arg1 forNextRequestOfClassName:(id)arg2 forItemID:(id)arg3 withLifetime:(int)arg4;	// IMP=0x000000000004639c
- (void)setFakeError:(id)arg1 forNextRequestOfClassName:(id)arg2;	// IMP=0x00000000000461f8
- (void)deviceCountWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000046079
- (void)tossConfigWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000045e9d
- (void)performRepairZonePCSOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000458e2
- (void)getRecordPCSDiagnosticsForZonesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004568e
- (void)getPCSDiagnosticsForZonesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004543a
- (void)representativeDataclassEnabledWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004523d
- (void)clearPILSCacheForLookupInfos:(id)arg1;	// IMP=0x000000000004519d
- (void)clearContainerFromMetadataCache;	// IMP=0x0000000000045110
- (void)statusGroupsForApplicationPermission:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000044e2b
- (void)resetAllApplicationPermissionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000044b1d
- (void)setApplicationPermission:(unsigned long long)arg1 enabled:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044b0b
- (void)dropDetachedContainersWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000446cd
- (void)getOutstandingOperationCountWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004427a
- (void)clearInvalidatedPCSCacheEntriesIfNeeded;	// IMP=0x000000000004407d
- (void)fetchPCSFromCacheForZoneWithZoneID:(id)arg1 databaseScope:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000043e31
- (void)clearCachesForZoneWithZoneID:(id)arg1 databaseScope:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000043ce3
- (void)clearCachesForRecordWithRecordID:(id)arg1 databaseScope:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000043af7
- (void)clearCachesWithOptions:(unsigned long long)arg1 databaseScope:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000043619
- (void)clearAuthTokensWithRecordID:(id)arg1 databaseScope:(long long)arg2;	// IMP=0x0000000000043402
- (void)clearRecordCacheWithDatabaseScope:(long long)arg1;	// IMP=0x00000000000431df
- (void)showAssetCacheWithDatabaseScope:(long long)arg1;	// IMP=0x000000000004314b
- (void)clearAssetCacheWithDatabaseScope:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043054
- (void)countAssetCacheItemsWithDatabaseScope:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000042f50
- (void)performAggregateZonePCSOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000042d59
- (void)currentUserBoundaryKeyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000426d3
- (void)currentDeviceIDWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000425cb
- (void)serverEnvironmentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000042490
- (void)serverPreferredPushEnvironmentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000421ea
- (void)performFetchRegisteredBundleIDsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000041da8
- (void)performFetchWhitelistedBundleIDsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000041d96
- (void)performFetchUserQuotaOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000004197c
- (void)performInitiateParticipantVettingOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000004158c
- (void)decryptPersonalInfoOnShare:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000040ff6
- (void)performFetchShareParticipantKeyOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000040bbe
- (void)performCompleteParticipantVettingOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000405cd
- (void)performModifyRecordAccessOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000003fed6
- (void)fetchXPCCriteriaWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003facd
- (void)getNewWebSharingIdentityDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f9cd
- (void)getNewWebSharingIdentityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f5c0
- (void)performModifyWebSharingOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000003eec9
- (void)performMarkAssetBrokenOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000003ea31
- (void)performRepairAssetsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000003e588
- (void)performPublishAssetsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000003e0bb
- (void)performArchiveRecordsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000003dca1
- (void)performFetchArchivedRecordsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000003d557
- (void)performFetchRecordVersionsOperation:(id)arg1 clientOperationCallbackProxy:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000003cf8b
- (void)frameworkCachesDirectoryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003ce41

@end

