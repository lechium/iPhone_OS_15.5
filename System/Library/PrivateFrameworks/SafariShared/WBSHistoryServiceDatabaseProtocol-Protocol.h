//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SafariShared/NSObject-Protocol.h>

@class NSArray, NSDate, NSFileHandle, NSNumber, NSObject, NSSet, NSString, WBSHistoryServiceEvent, WBSHistoryVisitIdentifier, WBSSetInt64, WBSURLCompletionUserTypedString;
@protocol WBSHistoryPredicate;

@protocol WBSHistoryServiceDatabaseProtocol <NSObject>
- (void)setTitle:(NSString *)arg1 ofTagWithID:(long long)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)assignHistoryItemWithID:(long long)arg1 toTopicTagsWithIDs:(WBSSetInt64 *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)createTagsForIdentifiers:(NSArray *)arg1 withTitles:(NSArray *)arg2 type:(unsigned long long)arg3 level:(long long)arg4 completionHandler:(void (^)(NSArray *, NSError *))arg5;
- (void)updateDatabaseAfterSuccessfulSyncWithGeneration:(long long)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)visitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completionHandler:(void (^)(NSSet *, NSSet *, long long, NSError *))arg2;
- (void)resetCloudHistoryDataWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)visitIdentifiersMatchingExistingVisits:(NSSet *)arg1 completionHandler:(void (^)(NSSet *, NSError *))arg2;
- (void)dispatchEvent:(WBSHistoryServiceEvent *)arg1 listenersToIgnore:(NSSet *)arg2 persistForDelayedDispatching:(_Bool)arg3 completionHandler:(void (^)(_Bool, NSError *))arg4;
- (void)markEventsAsReceivedByListener:(NSString *)arg1 eventIDs:(WBSSetInt64 *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)fetchEventsForListener:(NSString *)arg1 completionHandler:(void (^)(NSArray *, NSError *))arg2;
- (void)computeFrequentlyVisitedSites:(unsigned long long)arg1 minimalVisitCountScore:(unsigned long long)arg2 disallowList:(NSSet *)arg3 allowList:(NSSet *)arg4 options:(unsigned long long)arg5 currentTime:(double)arg6 completionHandler:(void (^)(NSArray *, NSError *))arg7;
- (void)searchForUserTypedString:(WBSURLCompletionUserTypedString *)arg1 options:(unsigned long long)arg2 currentTime:(double)arg3 writeHandle:(NSFileHandle *)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)fetchDatabaseURL:(void (^)(NSURL *, NSError *))arg1;
- (void)close;
- (_Bool)isOpen;
- (void)setMetadataValue:(NSObject *)arg1 forKey:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)fetchMetadataForKeys:(NSSet *)arg1 completionHandler:(void (^)(NSDictionary *, NSError *))arg2;
- (void)setLastSeenDate:(NSDate *)arg1 forCloudClientVersion:(unsigned long long)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)lastSeenDateForCloudClientVersion:(unsigned long long)arg1 completionHandler:(void (^)(NSDate *, NSError *))arg2;
- (void)fetchCloudClientVersionTable:(void (^)(NSDictionary *, NSError *))arg1;
- (void)fetchAllTombstonesWithCompletionHandler:(void (^)(NSSet *, NSError *))arg1;
- (void)replayAndAddTombstones:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)convertTombstoneWithGenerationToSecureFormat:(long long)arg1 lastSyncedGeneration:(long long)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)pruneTombstonesWithEndDatePriorToDate:(NSDate *)arg1 completionHandler:(void (^)(unsigned long long, NSError *))arg2;
- (void)getItemCountBeforeDate:(NSDate *)arg1 completionHandler:(void (^)(long long, NSError *))arg2;
- (void)getHighLevelHTTPFamilyDomainsVisitedAfterDate:(NSDate *)arg1 beforeDate:(NSDate *)arg2 onlyFromThisDevice:(_Bool)arg3 completionHandler:(void (^)(NSSet *, NSError *))arg4;
- (void)checkIfLocalVisitExistsForDatabaseIDs:(NSArray *)arg1 withCompletion:(void (^)(_Bool))arg2;
- (void)flushWithCompletionHandler:(void (^)(void))arg1;
- (void)updateVisitWithIdentifier:(WBSHistoryVisitIdentifier *)arg1 title:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)updateVisitWithIdentifier:(WBSHistoryVisitIdentifier *)arg1 removeAttributes:(unsigned long long)arg2 addAttributes:(unsigned long long)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)recordVisitWithIdentifier:(WBSHistoryVisitIdentifier *)arg1 sourceVisit:(WBSHistoryVisitIdentifier *)arg2 title:(NSString *)arg3 wasHTTPNonGet:(_Bool)arg4 loadSuccessful:(_Bool)arg5 origin:(long long)arg6 attributes:(unsigned long long)arg7 completionHandler:(void (^)(NSError *))arg8;
- (void)fetchAutocompleteTriggersForURLString:(NSString *)arg1 completionHandler:(void (^)(NSError *, NSArray *))arg2;
- (void)addAutocompleteTrigger:(NSString *)arg1 forURL:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
- (void)vacuumHistoryWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)performMaintenanceWithAgeLimit:(double)arg1 itemCountLimit:(unsigned long long)arg2 completionHandler:(void (^)(NSError *, unsigned long long, unsigned long long))arg3;
- (void)recomputeItemScoresWithCompletionHandler:(void (^)(WBSSetInt64 *, NSError *))arg1;
- (void)expireOldVisits:(double)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)finishClearingHistoryIfNecessaryWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)clearHistoryItems:(NSSet *)arg1 afterDate:(NSDate *)arg2 beforeDate:(NSDate *)arg3 tombstoneMode:(unsigned long long)arg4 completionHandler:(void (^)(NSError *))arg5;
- (void)clearHistoryVisitsAddedAfterDate:(NSDate *)arg1 beforeDate:(NSDate *)arg2 tombstoneMode:(unsigned long long)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)clearAllHistoryInsertingTombstoneUpToDate:(NSDate *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)updateWithType:(unsigned long long)arg1 addOrModifyObjects:(NSArray *)arg2 updateCurrentGeneration:(NSNumber *)arg3 updateLastSyncGeneration:(NSNumber *)arg4 updateLastMaintenance:(NSDate *)arg5 completionHandler:(void (^)(NSError *))arg6;
- (void)fetchDomainExpansions:(void (^)(NSFileHandle *, NSError *))arg1;
- (void)fetchWithOptions:(unsigned long long)arg1 predicate:(id <WBSHistoryPredicate>)arg2 completionHandler:(void (^)(unsigned long long, NSFileHandle *, NSError *))arg3;
@end
