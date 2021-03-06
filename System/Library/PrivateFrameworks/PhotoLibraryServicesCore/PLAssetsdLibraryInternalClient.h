//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PLAssetsdLibraryInternalClient
{
}

- (id)metricsForLibraryAtURL:(id)arg1 syncedAssetCount:(unsigned long long *)arg2 nonSyncedAssetCount:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x000000000004acd4
- (void)coreAnalyticsLibrarySummaryDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000004a9cb
- (void)forceRunBackgroundJobsOnLibraryPath:(id)arg1 priority:(int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004a69c
- (void)setWidgetTimelineGeneratedForDisplaySize:(struct CGSize)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004a35b
- (void)resetLimitedLibraryAccessForApplication:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000049f99
- (void)setFetchFilterWithAssets:(id)arg1 forApplication:(id)arg2 withAuditToken:(CDStruct_4c969caf)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000049ae9
- (_Bool)invalidateBehavioralScoreOnAllAssetsWithError:(id *)arg1;	// IMP=0x0000000000049747
- (void)deleteiTunesSyncedContentWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000049430
- (_Bool)backgroundJobServiceRemoveAllBundleRecordsFromProcessingSet:(id *)arg1;	// IMP=0x0000000000049122
- (id)getBackgroundJobServiceBundlesInQueueDictionaryWithError:(id *)arg1;	// IMP=0x0000000000048d7d
- (id)getBackgroundJobServiceStatusCenterDumpWithError:(id *)arg1;	// IMP=0x00000000000489d8
- (unsigned long long)getBackgroundJobServiceStateWithError:(id *)arg1;	// IMP=0x0000000000048647
- (_Bool)registerBackgroundJobServiceIfNecessaryOnLibraryPath:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000481f3
- (_Bool)invalidateReverseLocationDataOnAllAssetsWithError:(id *)arg1;	// IMP=0x0000000000047e51
- (_Bool)setKeywords:(id)arg1 forAssetWithUUID:(id)arg2;	// IMP=0x0000000000047a91
- (void)applySearchIndexGraphUpdates:(id)arg1 supportingData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000047522
- (void)applySearchIndexUpdates:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000471d8
- (void)waitForSearchIndexExistence:(CDUnknownBlockType)arg1;	// IMP=0x0000000000046e52
- (void)getSearchIndexProgress:(CDUnknownBlockType)arg1;	// IMP=0x0000000000046b12
- (_Bool)synchronouslyMarkPersonAsNeedingKeyFace:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004660f
- (void)markPersonAsNeedingKeyFace:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000461bf
- (void)reloadMomentGenerationOptions;	// IMP=0x0000000000045ecc
- (_Bool)repairMemoriesWithUUIDs:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000045a17
- (void)updateAssetLocationDataWithUUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000455c7
- (_Bool)synchronouslyGetSizeOfResourcesToUploadByCPL:(long long *)arg1 error:(id *)arg2;	// IMP=0x0000000000045072
- (_Bool)synchronouslyGetLibrarySizesFromDB:(_Bool)arg1 sizes:(id *)arg2 error:(id *)arg3;	// IMP=0x0000000000044afb
- (void)getLibrarySizesFromDB:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000044767
- (void)getAssetCountsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x0000000000044450

@end

