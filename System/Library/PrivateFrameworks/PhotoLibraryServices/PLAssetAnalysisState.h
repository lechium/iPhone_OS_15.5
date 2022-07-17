//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString, PLManagedAsset;

@interface PLAssetAnalysisState
{
}

+ (int)defaultWorkerFlagsForWorkerType:(short)arg1;	// IMP=0x000000000003cbee
+ (void)removeAnalysisRecordsWithNoAssetOrUUIDUseMaintenanceMode:(_Bool)arg1 library:(id)arg2;	// IMP=0x000000000003c9ef
+ (void)removeAnalysisRecordsForDeletedAssetUUIDs:(id)arg1 forWorkerType:(short)arg2 library:(id)arg3;	// IMP=0x000000000003c8db
+ (void)_removeAnalysisRecordsWithPredicate:(id)arg1 library:(id)arg2;	// IMP=0x000000000003c807
+ (_Bool)resetFaceCropAnalysisStateInLibraryAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003c638
+ (_Bool)clearIgnoreUntilDatesInLibraryAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003c41f
+ (_Bool)cleanupInvalidIgnoreUntilDatesInLibraryAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003bf95
+ (_Bool)markStatesProcessedForWorkerType:(short)arg1 library:(id)arg2 error:(id *)arg3;	// IMP=0x000000000003bef3
+ (_Bool)resetPendingStatesInLibraryAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003bcaf
+ (id)deletedAssetUUIDsForAnalysisByWorkerType:(short)arg1 fetchLimit:(unsigned long long)arg2 inLibrary:(id)arg3 error:(id *)arg4;	// IMP=0x000000000003baff
+ (void)requestCountOfAnalysisRecordsForDeletedAssetsInLibrary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003b956
+ (id)analysisCountsForWorkerType:(short)arg1 library:(id)arg2;	// IMP=0x000000000003b7cf
+ (id)assetUUIDsFromAssetObjectIDs:(id)arg1 library:(id)arg2 whereAllWorkerTypes:(id)arg3 matchState:(id)arg4;	// IMP=0x000000000003b5a0
+ (void)requestAnalysisCountsInLibrary:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003b3f7
+ (void)requestTotalProgressCountsForWorkerType:(short)arg1 states:(id)arg2 library:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003b270
+ (_Bool)isUnitTestWorker:(short)arg1;	// IMP=0x000000000003b261
+ (id)workerTypesPersistingAnalysisState;	// IMP=0x000000000003b254
+ (id)keyPathDictionaryWithWorkerType:(short)arg1 workerFlags:(int)arg2 analysisState:(int)arg3 lastIgnoredDate:(id)arg4 ignoreUntilDate:(id)arg5;	// IMP=0x000000000003b0dc
+ (id)_sanitizeChanges:(id)arg1;	// IMP=0x000000000003ae01
+ (id)_subArrayOfChanges:(id)arg1 toRetryWithConflicts:(id)arg2;	// IMP=0x000000000003a97c
+ (id)_managedObjectContextForStateChangesWithLibraryURL:(id)arg1;	// IMP=0x000000000003a88d
+ (id)_managedObjectContextForStateChangesWithPersistentStoreCoordinator:(id)arg1;	// IMP=0x000000000003a7cd
+ (id)entityName;	// IMP=0x000000000003a7c0
+ (_Bool)_bulkUpdateAnalysisStatesTo:(int)arg1 predicate:(id)arg2 library:(id)arg3 error:(id *)arg4;	// IMP=0x000000000003a562
+ (unsigned long long)_countOfAssetsAllowedForProcessingInLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003a346
+ (id)_countOfAnalysisStatesByWorkerTypeWithPredicate:(id)arg1 analysisState:(int)arg2 forDeletedAssets:(_Bool)arg3 inContext:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000039f6d
+ (id)_batchOperationQueue;	// IMP=0x0000000000039f3d
- (void)unionWorkerFlags:(int)arg1;	// IMP=0x0000000000039e88
- (id)mutableKeyPathDictionary;	// IMP=0x0000000000039c2f
- (id)debugLogDescription;	// IMP=0x0000000000039ac6

// Remaining properties
@property(nonatomic) int analysisState; // @dynamic analysisState;
@property(retain, nonatomic) PLManagedAsset *asset; // @dynamic asset;
@property(retain, nonatomic) NSString *assetUUID; // @dynamic assetUUID;
@property(retain, nonatomic) NSDate *ignoreUntilDate; // @dynamic ignoreUntilDate;
@property(retain, nonatomic) NSDate *lastIgnoredDate; // @dynamic lastIgnoredDate;
@property(nonatomic) double sortToken; // @dynamic sortToken;
@property(nonatomic) int workerFlags; // @dynamic workerFlags;
@property(nonatomic) short workerType; // @dynamic workerType;

@end
