//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSHistoryServiceDatabaseProtocol-Protocol.h>
#import <SafariShared/WBSSQLiteDatabaseDelegate-Protocol.h>

@class NSDictionary, NSMapTable, NSMutableArray, NSMutableSet, NSString, NSURL, WBSHistoryCrypto, WBSHistoryServiceURLCompletion, WBSHistoryTagDatabaseController, WBSSQLiteDatabase, WBSSQLiteStatementCache;
@protocol OS_dispatch_queue;

@interface WBSHistoryServiceDatabase : NSObject <WBSSQLiteDatabaseDelegate, WBSHistoryServiceDatabaseProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    unsigned long long _currentRangeForTemporaryID;	// 16 = 0x10
    WBSHistoryCrypto *_crypto;	// 24 = 0x18
    WBSSQLiteDatabase *_database;	// 32 = 0x20
    NSDictionary *_databaseOptions;	// 40 = 0x28
    WBSSQLiteStatementCache *_statements;	// 48 = 0x30
    NSMapTable *_delegates;	// 56 = 0x38
    NSMapTable *_listeners;	// 64 = 0x40
    NSMutableSet *_registeredListeners;	// 72 = 0x48
    struct LatestVisitInformationMap _latestVisitMap;	// 80 = 0x50
    _Bool _hasComputedLatestVisit;	// 120 = 0x78
    unordered_map_86398ced _temporaryIDToItem;	// 128 = 0x80
    unordered_map_86398ced _visitForTemporaryID;	// 168 = 0xa8
    NSMutableArray *_pendingVisits;	// 208 = 0xd0
    struct atomic<bool> _integrityCheckPending;	// 216 = 0xd8
    NSURL *_clearHistoryInProgressFileURL;	// 224 = 0xe0
    CDUnknownBlockType _pendingVisitsTimeout;	// 232 = 0xe8
    WBSHistoryTagDatabaseController *_tagController;	// 240 = 0xf0
    NSString *_databaseID;	// 248 = 0xf8
    NSURL *_databaseURL;	// 256 = 0x100
    WBSHistoryServiceURLCompletion *_urlCompletion;	// 264 = 0x108
}

- (id).cxx_construct;	// IMP=0x0000000000129148
- (void).cxx_destruct;	// IMP=0x000000000012905b
@property(readonly, nonatomic) WBSHistoryServiceURLCompletion *urlCompletion; // @synthesize urlCompletion=_urlCompletion;
@property(readonly, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
@property(readonly, copy, nonatomic) NSString *databaseID; // @synthesize databaseID=_databaseID;
- (void)setTitle:(id)arg1 ofTagWithID:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000128ef0
- (void)assignHistoryItemWithID:(long long)arg1 toTopicTagsWithIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000128dac
- (void)createTagsForIdentifiers:(id)arg1 withTitles:(id)arg2 type:(unsigned long long)arg3 level:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000128c08
- (void)updateDatabaseAfterSuccessfulSyncWithGeneration:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000128a29
- (void)visitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000127ec4
- (void)resetCloudHistoryDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000127bca
- (void)visitIdentifiersMatchingExistingVisits:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000127594
- (void)_clearWBSHistorySQLiteStoreClearHistoryKeys;	// IMP=0x00000000001273fa
- (void)_finishedClearingHistory;	// IMP=0x00000000001272b5
- (void)_startingClearHistoryOperationForStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x0000000000126f69
- (id)_dateForMetadataKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000126d36
- (void)dispatchEvent:(id)arg1 listenersToIgnore:(id)arg2 persistForDelayedDispatching:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000126b8a
- (void)_dispatchEvent:(id)arg1 listenersToIgnore:(id)arg2 persistForDelayedDispatching:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001261d0
- (long long)_writeEventToDatabase:(id)arg1 listeners:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000125e68
- (void)markEventsAsReceivedByListener:(id)arg1 eventIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000125c99
- (id)_markEventsAsReceivedByListener:(id)arg1 eventIDs:(id)arg2;	// IMP=0x00000000001250d4
- (void)fetchEventsForListener:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000124ea6
- (id)_fetchEventsForListener:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012485c
- (id)_updateListenerRegistration:(id)arg1 lastSeen:(double)arg2;	// IMP=0x0000000000124706
- (id)_fetchListenerNamesFromDatabase:(id *)arg1;	// IMP=0x0000000000124391
- (void)computeFrequentlyVisitedSites:(unsigned long long)arg1 minimalVisitCountScore:(unsigned long long)arg2 disallowList:(id)arg3 allowList:(id)arg4 options:(unsigned long long)arg5 currentTime:(double)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x0000000000124367
- (void)searchForUserTypedString:(id)arg1 options:(unsigned long long)arg2 currentTime:(double)arg3 writeHandle:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000123da2
- (void)getItemCountBeforeDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000123b54
- (void)getHighLevelHTTPFamilyDomainsVisitedAfterDate:(id)arg1 beforeDate:(id)arg2 onlyFromThisDevice:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001234ff
- (void)checkIfLocalVisitExistsForDatabaseIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000012323a
- (void)vacuumHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000123121
- (void)performMaintenanceWithAgeLimit:(double)arg1 itemCountLimit:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000012225d
- (id)_executePlan:(void *)arg1 outDeletedItemCount:(unsigned long long *)arg2 outDeletedVisitCount:(unsigned long long *)arg3;	// IMP=0x0000000000121d2d
- (id)_collectDeletedHostnamesForPlan:(void *)arg1;	// IMP=0x0000000000121bef
- (id)_collectDeletedHighLevelDomainsFromDeletedHostnamesForPlan:(void *)arg1;	// IMP=0x0000000000121368
- (id)_collectDeletedHighLevelDomainsForPlan:(void *)arg1;	// IMP=0x00000000001210cd
- (id)_collectDeletedURLsForPlan:(void *)arg1;	// IMP=0x0000000000120dd8
- (void)deletionPlanForAgeLimit:(double)arg1 itemCountLimit:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000120abe
- (void)deletionPlanForItemsToDelete:(id)arg1 visitsToDelete:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000120729
- (id)_preparePlan:(void *)arg1 ageLimit:(double)arg2 itemCountLimit:(unsigned long long)arg3;	// IMP=0x0000000000120272
- (id)_deleteOldestItems:(unsigned long long)arg1 forPlan:(void *)arg2;	// IMP=0x000000000011fff8
- (unsigned long long)_countOfItems;	// IMP=0x000000000011fecb
- (id)_preparePlan:(void *)arg1 itemsToDelete:(const void *)arg2 visitsToDelete:(const void *)arg3 afterDate:(id)arg4 beforeDate:(id)arg5;	// IMP=0x000000000011fc56
- (id)_findObsoleteItemsForPlan:(void *)arg1;	// IMP=0x000000000011fad2
- (id)_findAllRelatedVisitsToItems:(const void *)arg1 forPlan:(void *)arg2;	// IMP=0x000000000011f8d9
- (id)_findAllRelatedVisits:(const void *)arg1 forPlan:(void *)arg2 afterDate:(id)arg3 beforeDate:(id)arg4;	// IMP=0x000000000011ef7d
- (void)recomputeItemScoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000011eddf
- (id)_recomputeItemScores:(void *)arg1;	// IMP=0x000000000011e945
- (id)_recomputeVisitScores:(void *)arg1;	// IMP=0x000000000011e4a6
- (void)expireOldVisits:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000011e397
- (id)_expireOldVisits:(double)arg1;	// IMP=0x000000000011e1b9
- (double)_oldestLatestVisit;	// IMP=0x000000000011e11d
- (void)finishClearingHistoryIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000011de88
- (void)clearHistoryItems:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 tombstoneMode:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000011dabb
- (id)_clearHistoryItems:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 tombstoneMode:(unsigned long long)arg4;	// IMP=0x000000000011ca99
- (id)_insertTombstonesForURLs:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 tombstoneMode:(unsigned long long)arg4;	// IMP=0x000000000011c1f1
- (void)_removeLegacyHistoryDatabaseIfNeeded;	// IMP=0x000000000011c093
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 tombstoneMode:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000011be12
- (void)_notifyExecutionOfPlan:(void *)arg1;	// IMP=0x000000000011b90c
- (id)_clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 tombstoneMode:(unsigned long long)arg3;	// IMP=0x000000000011abcf
- (id)_generateVisitsDictionary:(const void *)arg1;	// IMP=0x000000000011a5c3
- (id)_generateItemsDictionary:(const void *)arg1;	// IMP=0x000000000011a248
- (id)_generateUpdatedLastVisit:(const void *)arg1;	// IMP=0x000000000011a119
- (id)_generateDisposedVisitsForPlan:(void *)arg1;	// IMP=0x000000000011a051
- (void)clearAllHistoryInsertingTombstoneUpToDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000119e92
- (id)_clearAllHistoryInsertingTombstoneUpToDate:(id)arg1;	// IMP=0x00000000001196d3
- (long long)_lastSyncedGeneration;	// IMP=0x0000000000119651
- (long long)_currentGeneration;	// IMP=0x00000000001195cf
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000011951d
- (void)_updateItem:(long long)arg1 visitCountScore:(long long)arg2 dailyVisitCounts:(id)arg3 weeklyVisitCounts:(id)arg4 shouldRecomputeDerivedVisitCounts:(_Bool)arg5;	// IMP=0x000000000011919e
- (void)updateVisitWithIdentifier:(id)arg1 title:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000118d86
- (void)updateVisitWithIdentifier:(id)arg1 removeAttributes:(unsigned long long)arg2 addAttributes:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001185ea
- (void)_updateVisitWithIdentifier:(id)arg1 removeAttributes:(unsigned long long)arg2 addAttributes:(unsigned long long)arg3 pendingVisit:(id)arg4;	// IMP=0x00000000001184c7
- (void)recordVisitWithIdentifier:(id)arg1 sourceVisit:(id)arg2 title:(id)arg3 wasHTTPNonGet:(_Bool)arg4 loadSuccessful:(_Bool)arg5 origin:(long long)arg6 attributes:(unsigned long long)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x000000000011805a
- (void)fetchAutocompleteTriggersForURLString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000117d92
- (void)addAutocompleteTrigger:(id)arg1 forURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000117b85
- (_Bool)_addAutocompleteTrigger:(id)arg1 forURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001178d5
- (void)updateWithType:(unsigned long long)arg1 addOrModifyObjects:(id)arg2 updateCurrentGeneration:(id)arg3 updateLastSyncGeneration:(id)arg4 updateLastMaintenance:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000001172ac
- (id)_updateByAddingOrModifyObjects:(id)arg1 updateCurrentGeneration:(id)arg2 updateLastSyncGeneration:(id)arg3 updateLastMaintenance:(id)arg4;	// IMP=0x00000000001171ab
- (void)_checkpointWriteAheadLog;	// IMP=0x0000000000116f9c
- (id)_addOrModifyObjects:(id)arg1;	// IMP=0x00000000001167af
- (void)_notifyDelegatesOfVisitIDs;	// IMP=0x000000000011634e
- (void)_notifyDelegatesOfItemIDs;	// IMP=0x0000000000115eb3
- (id)_updateVisitRedirectRelationships:(id)arg1;	// IMP=0x00000000001156a1
- (id)_insertTombstone:(id)arg1;	// IMP=0x000000000011519a
- (id)_updateVisit:(id)arg1;	// IMP=0x0000000000114cd7
- (id)_insertVisit:(id)arg1;	// IMP=0x00000000001147c4
- (id)_updateItem:(id)arg1;	// IMP=0x0000000000114388
- (id)_insertItem:(id)arg1;	// IMP=0x0000000000113f2c
- (long long)_permanentIDsForVisitIfAvailable:(long long)arg1;	// IMP=0x0000000000113eee
- (long long)_permanentIDsForItemIfAvailable:(long long)arg1;	// IMP=0x0000000000113eb3
- (_Bool)_commitPendingVisits:(id)arg1;	// IMP=0x0000000000111c11
- (_Bool)_commitPendingItems:(id)arg1;	// IMP=0x0000000000110c42
- (id)_findItemIDsForPendingVisitsWithError:(id *)arg1;	// IMP=0x00000000001107e2
- (void)_ensureDatabaseIsSynced;	// IMP=0x00000000001107ab
- (void)_commitPendingUpdates;	// IMP=0x00000000001105d8
- (void)_queuePendingUpdates;	// IMP=0x00000000001104a6
- (void)fetchAllTombstonesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001101bc
- (void)replayAndAddTombstones:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010f912
- (void)convertTombstoneWithGenerationToSecureFormat:(long long)arg1 lastSyncedGeneration:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010f817
- (id)_convertTombstoneWithGenerationToSecureFormat:(long long)arg1 lastSyncedGeneration:(long long)arg2;	// IMP=0x000000000010edcb
- (void)pruneTombstonesWithEndDatePriorToDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010ec20
- (unsigned long long)_pruneTombstonesOnDatabaseQueueWithEndDatePriorToDate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010e90b
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010e72c
- (id)_setMetadataValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000010e1a2
- (void)fetchMetadataForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010ddf8
- (id)_metadataForKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010dba7
- (_Bool)_shouldEmitLegacyTombstones;	// IMP=0x000000000010db45
- (void)setLastSeenDate:(id)arg1 forCloudClientVersion:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010d6a5
- (void)lastSeenDateForCloudClientVersion:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000010d5b3
- (id)_lastSeenDateForCloudClientVersion:(unsigned long long)arg1;	// IMP=0x000000000010d3ee
- (void)fetchCloudClientVersionTable:(CDUnknownBlockType)arg1;	// IMP=0x000000000010d07f
- (void)fetchDomainExpansions:(CDUnknownBlockType)arg1;	// IMP=0x000000000010ccd2
- (void)fetchWithOptions:(unsigned long long)arg1 predicate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000010c6fa
- (id)_fetchTombstonesWithOptions:(unsigned long long)arg1 predicate:(id)arg2 writeDescriptor:(int)arg3;	// IMP=0x000000000010c239
- (id)_fetchObjectToTagMappingsWithOptions:(unsigned long long)arg1 predicate:(id)arg2 writeDescriptor:(int)arg3;	// IMP=0x000000000010c0b2
- (id)_fetchTagsWithOptions:(unsigned long long)arg1 predicate:(id)arg2 writeDescriptor:(int)arg3;	// IMP=0x000000000010bef2
- (id)_fetchVisitsWithOptions:(unsigned long long)arg1 predicate:(id)arg2 writeDescriptor:(int)arg3;	// IMP=0x000000000010a898
- (unordered_map_86398ced)_recomputeLatestVisitsForItems:(const void *)arg1 error:(id *)arg2;	// IMP=0x000000000010a250
- (void)ensureLatestVisitsAreComputed:(CDUnknownBlockType)arg1;	// IMP=0x000000000010a043
- (id)_ensureLatestVisitsAreComputed;	// IMP=0x0000000000109ea8
- (void)warmUp;	// IMP=0x0000000000109d8f
- (void)database:(id)arg1 hadSevereError:(id)arg2;	// IMP=0x0000000000109740
- (void)fetchDatabaseURL:(CDUnknownBlockType)arg1;	// IMP=0x0000000000109728
- (void)close;	// IMP=0x0000000000109686
- (void)_closeTagController;	// IMP=0x0000000000109666
- (_Bool)isOpen;	// IMP=0x00000000001095a4
- (void)addDelegate:(id)arg1 listenerName:(id)arg2 forConnection:(id)arg3;	// IMP=0x000000000010942b
- (long long)allocateTemporaryIDRange:(long long *)arg1;	// IMP=0x00000000001092d7
- (int)_migrateToCurrentSchemaVersionIfNeeded;	// IMP=0x00000000001091d4
- (_Bool)_reopenDatabase:(id *)arg1;	// IMP=0x000000000010912b
- (void)_registerHistoryTagFrecencyScoringFunction;	// IMP=0x0000000000109049
- (_Bool)_prepareDatabase:(id *)arg1;	// IMP=0x00000000001081c2
- (id)initWithID:(id)arg1 url:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000107c8c
- (id)init;	// IMP=0x0000000000107c7e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
