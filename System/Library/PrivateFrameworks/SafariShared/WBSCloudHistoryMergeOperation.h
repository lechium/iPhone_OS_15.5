//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSSet, WBSCloudHistoryFetchResult;
@protocol OS_dispatch_queue, WBSHistoryServiceDatabaseProtocol;

@interface WBSCloudHistoryMergeOperation : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <WBSHistoryServiceDatabaseProtocol> _database;	// 16 = 0x10
    WBSCloudHistoryFetchResult *_fetchResult;	// 24 = 0x18
    _Bool _mergeStarted;	// 32 = 0x20
    NSMutableDictionary *_visitsByVisitIdentifiers;	// 40 = 0x28
    NSMutableSet *_redirectChainEarliestVisits;	// 48 = 0x30
    NSSet *_tombstones;	// 56 = 0x38
    NSMutableDictionary *_tombstonesByURLString;	// 64 = 0x40
    NSSet *_existingVisits;	// 72 = 0x48
    NSSet *_redirectChainSourceVisits;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x000000000002b67b
- (void)_mergeVisitsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002b170
- (void)_lookupRedirectChainSourcesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ae1c
- (void)_removeDuplicateVisits;	// IMP=0x000000000002aaa1
- (void)_lookUpExistingItemsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002a882
- (void)_filterVisitsByTombstones;	// IMP=0x000000000002a0ba
- (void)_buildRedirectChains;	// IMP=0x0000000000029e39
- (void)_loadTombstonesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000029c86
- (void)_buildVisitsByVisitIdentifiersMap;	// IMP=0x00000000000297fb
- (void)_replayAndAddTombstones:(CDUnknownBlockType)arg1;	// IMP=0x000000000002971f
- (void)_updateClientVersions;	// IMP=0x00000000000295e2
- (void)mergeWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000292b0
- (id)initWithDatabase:(id)arg1 fetchResult:(id)arg2;	// IMP=0x00000000000291ec

@end
