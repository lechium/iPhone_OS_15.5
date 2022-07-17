//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSHistoryServiceDatabaseProtocol-Protocol.h>

@class NSString;
@protocol NSXPCProxyCreating;

@interface WBSHistoryServiceDatabaseProxy : NSObject <WBSHistoryServiceDatabaseProtocol>
{
    id <NSXPCProxyCreating> _proxy;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000045b72
- (void)setTitle:(id)arg1 ofTagWithID:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000045ae3
- (void)assignHistoryItemWithID:(long long)arg1 toTopicTagsWithIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000045a54
- (void)createTagsForIdentifiers:(id)arg1 withTitles:(id)arg2 type:(unsigned long long)arg3 level:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000004599e
- (void)updateDatabaseAfterSuccessfulSyncWithGeneration:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000045922
- (void)visitsAndTombstonesNeedingSyncWithVisitSyncWindow:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000045842
- (void)resetCloudHistoryDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000457d5
- (void)visitIdentifiersMatchingExistingVisits:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000456ed
- (void)dispatchEvent:(id)arg1 listenersToIgnore:(id)arg2 persistForDelayedDispatching:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000455de
- (void)markEventsAsReceivedByListener:(id)arg1 eventIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000004552c
- (void)fetchEventsForListener:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000045471
- (void)computeFrequentlyVisitedSites:(unsigned long long)arg1 minimalVisitCountScore:(unsigned long long)arg2 disallowList:(id)arg3 allowList:(id)arg4 options:(unsigned long long)arg5 currentTime:(double)arg6 completionHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000004536c
- (void)searchForUserTypedString:(id)arg1 options:(unsigned long long)arg2 currentTime:(double)arg3 writeHandle:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000452b6
- (void)fetchDatabaseURL:(CDUnknownBlockType)arg1;	// IMP=0x000000000004521c
- (void)close;	// IMP=0x00000000000451db
- (_Bool)isOpen;	// IMP=0x0000000000045193
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000450f2
- (void)fetchMetadataForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000045037
- (void)setLastSeenDate:(id)arg1 forCloudClientVersion:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044fa5
- (void)lastSeenDateForCloudClientVersion:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000044f03
- (void)fetchCloudClientVersionTable:(CDUnknownBlockType)arg1;	// IMP=0x0000000000044e69
- (void)getItemCountBeforeDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000044d81
- (void)getHighLevelHTTPFamilyDomainsVisitedAfterDate:(id)arg1 beforeDate:(id)arg2 onlyFromThisDevice:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000044ca1
- (void)checkIfLocalVisitExistsForDatabaseIDs:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000044b6e
- (void)vacuumHistoryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000044b01
- (void)flushWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000449e6
- (void)updateVisitWithIdentifier:(id)arg1 title:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044945
- (void)updateVisitWithIdentifier:(id)arg1 removeAttributes:(unsigned long long)arg2 addAttributes:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000448a6
- (void)recordVisitWithIdentifier:(id)arg1 sourceVisit:(id)arg2 title:(id)arg3 wasHTTPNonGet:(_Bool)arg4 loadSuccessful:(_Bool)arg5 origin:(long long)arg6 attributes:(unsigned long long)arg7 completionHandler:(CDUnknownBlockType)arg8;	// IMP=0x00000000000447ae
- (void)fetchAutocompleteTriggersForURLString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000446c9
- (void)addAutocompleteTrigger:(id)arg1 forURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044628
- (void)fetchAllTombstonesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000044556
- (void)replayAndAddTombstones:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000444c7
- (void)convertTombstoneWithGenerationToSecureFormat:(long long)arg1 lastSyncedGeneration:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044445
- (void)pruneTombstonesWithEndDatePriorToDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004435d
- (void)performMaintenanceWithAgeLimit:(double)arg1 itemCountLimit:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044275
- (void)recomputeItemScoresWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000441db
- (void)expireOldVisits:(double)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000004415c
- (void)finishClearingHistoryIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000440ef
- (void)clearHistoryItems:(id)arg1 afterDate:(id)arg2 beforeDate:(id)arg3 tombstoneMode:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000044016
- (void)clearHistoryVisitsAddedAfterDate:(id)arg1 beforeDate:(id)arg2 tombstoneMode:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000043f6a
- (void)clearAllHistoryInsertingTombstoneUpToDate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000043edb
- (void)updateWithType:(unsigned long long)arg1 addOrModifyObjects:(id)arg2 updateCurrentGeneration:(id)arg3 updateLastSyncGeneration:(id)arg4 updateLastMaintenance:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000043de8
- (void)fetchDomainExpansions:(CDUnknownBlockType)arg1;	// IMP=0x0000000000043d4e
- (void)fetchWithOptions:(unsigned long long)arg1 predicate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000043c5d
- (CDUnknownBlockType)_defaultProxyErrorHandlerWithSimpleReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000043b71
- (id)initWithProxy:(id)arg1;	// IMP=0x0000000000043af3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
