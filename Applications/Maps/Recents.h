//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOObserverHashTable, NSArray, NSMutableArray, NSMutableDictionary, NSString, RecentCuratedCollectionResolver, geo_isolater;
@protocol MapsSyncQueryLike, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface Recents : NSObject
{
    id <MapsSyncQueryLike> _historyQuery;	// 8 = 0x8
    GEOObserverHashTable *_observers;	// 16 = 0x10
    _Bool _loadingCoreRecents;	// 24 = 0x18
    _Bool _needsReload;	// 25 = 0x19
    NSMutableDictionary *_coreRecentsMapItemCache;	// 32 = 0x20
    geo_isolater *_coreRecentsMapItemCacheIsolator;	// 40 = 0x28
    NSMutableArray *_coreRecentsNoResultCacheIDs;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_dataLoadingQueue;	// 56 = 0x38
    RecentCuratedCollectionResolver *_curatedCollectionResolver;	// 64 = 0x40
    NSArray *_orderedRecents;	// 72 = 0x48
    NSArray *_historyQueryContents;	// 80 = 0x50
    NSArray *_systemRecents;	// 88 = 0x58
    NSArray *_historyRecents;	// 96 = 0x60
    NSArray *_resolvedHistoryRecents;	// 104 = 0x68
    NSArray *_resolvedOrderedRecents;	// 112 = 0x70
}

+ (id)sharedRecents;	// IMP=0x0020000000255fa5
+ (void)beginPrecachingRecentsIfNeeded;	// IMP=0x0010000000255f8a
- (void).cxx_destruct;	// IMP=0x0020000000259256
@property(retain, nonatomic) NSArray *resolvedOrderedRecents; // @synthesize resolvedOrderedRecents=_resolvedOrderedRecents;
@property(retain, nonatomic) NSArray *resolvedHistoryRecents; // @synthesize resolvedHistoryRecents=_resolvedHistoryRecents;
@property(retain, nonatomic) NSArray *historyRecents; // @synthesize historyRecents=_historyRecents;
@property(retain, nonatomic) NSArray *systemRecents; // @synthesize systemRecents=_systemRecents;
@property(retain, nonatomic) NSArray *historyQueryContents; // @synthesize historyQueryContents=_historyQueryContents;
- (id)_recentByUnmappingCuratedCollectionsForRecents:(id)arg1;	// IMP=0x00100000002590a1
- (id)_recentsByMappingCuratedCollectionsForRecents:(id)arg1;	// IMP=0x0010000000258ed4
- (void)recentCuratedCollectionResolverDidUpdate:(id)arg1;	// IMP=0x0010000000258ec2
- (void)queryContentsDidChangeWithQuery:(id)arg1;	// IMP=0x0010000000258d56
- (id)_recentPlaceDisplayWithSupersededStorageIdentifier:(id)arg1;	// IMP=0x0010000000258a9c
- (id)_recentWithIdentifier:(id)arg1;	// IMP=0x0010000000258877
- (void)deleteAllRecentsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002585b9
- (void)deleteRecents:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000257edd
- (void)recordCoreRecentContact:(id)arg1;	// IMP=0x0010000000257d13
- (void)deleteCoreRecentContact:(id)arg1;	// IMP=0x0010000000257a36
- (void)_processRecents;	// IMP=0x0010000000257904
- (void)_combineRecents;	// IMP=0x0010000000257639
- (void)loadCoreRecentsOnQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000002567ce
- (void)setNeedsCoreRecentsReload;	// IMP=0x0010000000256603
- (void)_applicationActivating;	// IMP=0x00100000002565f1
- (id)_recentsFromHistoryQuery;	// IMP=0x00100000002563f2
@property(readonly, nonatomic) NSArray *recents;
@property(readonly, nonatomic) NSArray *orderedRecents;
- (id)init;	// IMP=0x0010000000256227
- (id)cachedMapItemForContactID:(long long)arg1;	// IMP=0x00100000002560aa
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000256094
- (void)addObserver:(id)arg1;	// IMP=0x0010000000255ffa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

