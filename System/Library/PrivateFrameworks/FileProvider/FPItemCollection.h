//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FileProvider/FPCollectionDataSourceDelegate-Protocol.h>
#import <FileProvider/FPReachabilityObserver-Protocol.h>

@class FPAppRegistry, FPItemID, FPPacer, NSArray, NSDate, NSMutableDictionary, NSMutableSet, NSPredicate, NSString, _FPItemList;
@protocol FPCollectionDataSource, FPItemCollectionIndexPathBasedDelegate, FPItemCollectionItemIDBasedDelegate, FPItemCollectionMinimalDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface FPItemCollection : NSObject <FPReachabilityObserver, FPCollectionDataSourceDelegate>
{
    NSArray *_sortDescriptors;	// 8 = 0x8
    id <FPCollectionDataSource> _dataSource;	// 16 = 0x10
    _FPItemList *_currentItems;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workingQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_itemAccessQueue;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_restartTimer;	// 48 = 0x30
    NSDate *_lastInvalidationOnError;	// 56 = 0x38
    unsigned long long _invalidationOnErrorCount;	// 64 = 0x40
    NSMutableDictionary *_updatedItemsByIdentifiers;	// 72 = 0x48
    NSMutableSet *_deletedItemsIdentifiers;	// 80 = 0x50
    NSMutableDictionary *_formerItemsIdentifiers;	// 88 = 0x58
    NSMutableDictionary *_pendingItemsStitching;	// 96 = 0x60
    NSMutableDictionary *_pendingItemsFields;	// 104 = 0x68
    _Bool _shouldResort;	// 112 = 0x70
    _Bool _regathering;	// 113 = 0x71
    _Bool _shouldRetryOnceAfterCrash;	// 114 = 0x72
    NSPredicate *_itemFilteringPredicate;	// 120 = 0x78
    FPAppRegistry *_appRegistry;	// 128 = 0x80
    id <FPItemCollectionItemIDBasedDelegate> _itemIDBasedDelegate;	// 136 = 0x88
    id <FPItemCollectionIndexPathBasedDelegate> _indexPathBasedDelegate;	// 144 = 0x90
    _Bool _gathering;	// 152 = 0x98
    _Bool _immutable;	// 153 = 0x99
    _Bool _hasMoreUpdates;	// 154 = 0x9a
    _Bool _showHiddenFiles;	// 155 = 0x9b
    _Bool _observing;	// 156 = 0x9c
    unsigned long long _lastForcedUpdate;	// 160 = 0xa0
    id <FPItemCollectionMinimalDelegate> _delegate;	// 168 = 0xa8
    FPItemID *_enumeratedItemID;	// 176 = 0xb0
    NSPredicate *_additionalItemFilteringPredicate;	// 184 = 0xb8
    NSObject<OS_dispatch_queue> *_updateQueue;	// 192 = 0xc0
    FPPacer *_updatePacer;	// 200 = 0xc8
}

+ (void)refreshActiveCollectionsForDecorationChange;	// IMP=0x00000000000a624b
+ (void)removeActiveCollection:(id)arg1;	// IMP=0x00000000000a5e9c
+ (void)addActiveCollection:(id)arg1;	// IMP=0x00000000000a5c73
+ (void)resumeVendorEnumeration;	// IMP=0x00000000000a5894
+ (void)suspendVendorEnumeration;	// IMP=0x00000000000a5834
+ (_Bool)isEnumerationSuspended;	// IMP=0x00000000000a5790
+ (void)replacePlaceholders:(id)arg1 withActualItems:(id)arg2 deletedIDs:(id)arg3;	// IMP=0x00000000000a55ef
+ (void)consumeUpdates:(id)arg1 deletes:(id)arg2;	// IMP=0x00000000000a5267
+ (id)activeCollections;	// IMP=0x00000000000a5179
+ (id)_bouncedItem:(id)arg1 withinItems:(id)arg2;	// IMP=0x00000000000a1978
+ (void)initialize;	// IMP=0x000000000009c999
- (void).cxx_destruct;	// IMP=0x00000000000a6508
@property(readonly, nonatomic) FPPacer *updatePacer; // @synthesize updatePacer=_updatePacer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(nonatomic) _Bool observing; // @synthesize observing=_observing;
@property(retain, nonatomic) NSPredicate *additionalItemFilteringPredicate; // @synthesize additionalItemFilteringPredicate=_additionalItemFilteringPredicate;
@property(readonly, nonatomic) id <FPCollectionDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) FPItemID *enumeratedItemID; // @synthesize enumeratedItemID=_enumeratedItemID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workingQueue; // @synthesize workingQueue=_workingQueue;
@property(readonly, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(nonatomic) _Bool showHiddenFiles; // @synthesize showHiddenFiles=_showHiddenFiles;
@property(readonly, nonatomic) _Bool hasMoreUpdates; // @synthesize hasMoreUpdates=_hasMoreUpdates;
@property(readonly, nonatomic, getter=isImmutable) _Bool immutable; // @synthesize immutable=_immutable;
@property(nonatomic) __weak id <FPItemCollectionMinimalDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) unsigned long long lastForcedUpdate; // @synthesize lastForcedUpdate=_lastForcedUpdate;
@property(nonatomic, getter=isGathering) _Bool gathering; // @synthesize gathering=_gathering;
- (void)_restartObservationWithReason:(id)arg1;	// IMP=0x00000000000a6169
- (void)_setObserving:(_Bool)arg1;	// IMP=0x00000000000a615d
- (void)_replaceContentsWithVendorItems:(id)arg1;	// IMP=0x00000000000a5f9a
@property(retain, nonatomic) NSPredicate *itemFilteringPredicate;
- (_Bool)isHiddenItem:(id)arg1;	// IMP=0x00000000000a5041
- (void)updateRootItem:(id)arg1;	// IMP=0x00000000000a503b
- (_Bool)isRootItem:(id)arg1;	// IMP=0x00000000000a5033
- (_Bool)isCollectionValidForItem:(id)arg1;	// IMP=0x00000000000a502b
- (id)scopedSearchQuery;	// IMP=0x00000000000a4fae
- (id)createDataSourceWithSortDescriptors:(id)arg1;	// IMP=0x00000000000a4f31
- (void)sendItemIDBasedDiffs:(id)arg1;	// IMP=0x00000000000a4e58
- (id)computeItemIDBasedDiffs;	// IMP=0x00000000000a4b0c
- (void)sendIndexPathBasedDiffs:(id)arg1;	// IMP=0x00000000000a45a5
- (id)computeIndexPathsBasedDiffsWithOldItems:(id)arg1 futureItems:(id)arg2;	// IMP=0x00000000000a3b45
- (void)_flushPendingUpdates;	// IMP=0x00000000000a20a4
- (_Bool)shouldConsiderUsingPlaceholder:(id)arg1 forItem:(id)arg2 skipForwardFormerID:(_Bool *)arg3;	// IMP=0x00000000000a1f22
- (id)_reorderWithPlaceholdersLast:(id)arg1;	// IMP=0x00000000000a1d2b
- (id)indexPathsFromIndexSet:(id)arg1;	// IMP=0x00000000000a1842
- (id)indexPathFromIndex:(long long)arg1;	// IMP=0x00000000000a1758
- (void)_receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2 forceFlush:(_Bool)arg3 dropForReplacedPlaceholders:(_Bool)arg4;	// IMP=0x000000000009f85b
- (void)forceRefreshOfItemWithItemID:(id)arg1;	// IMP=0x000000000009f575
- (void)_receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2 dropForReplacedPlaceholders:(_Bool)arg3;	// IMP=0x000000000009f55d
- (void)_receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2;	// IMP=0x000000000009f545
- (void)receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2;	// IMP=0x000000000009f469
- (void)receivedBatchWithUpdatedItems:(id)arg1 deletedItemsIdentifiers:(id)arg2 hasMoreChanges:(_Bool)arg3;	// IMP=0x000000000009f377
- (void)_updateObservedItem:(id)arg1;	// IMP=0x000000000009f1e0
- (void)replacePlaceholders:(id)arg1 withActualItems:(id)arg2 deletedIDs:(id)arg3;	// IMP=0x000000000009eb0e
- (void)_didEncounterError:(id)arg1 forObservationID:(unsigned long long)arg2;	// IMP=0x000000000009eb08
- (_Bool)isRegatheringAfterSignal;	// IMP=0x000000000009ead8
- (_Bool)__isUsingDataSource:(id)arg1;	// IMP=0x000000000009eabe
- (_Bool)_isUsingDataSource:(id)arg1;	// IMP=0x000000000009e9b3
- (id)_itemsMutableCopy;	// IMP=0x000000000009e8c0
@property(readonly, nonatomic) NSArray *items;
- (id)_t_items;	// IMP=0x000000000009e751
- (id)itemAtIndexPath:(id)arg1;	// IMP=0x000000000009e5bb
- (unsigned long long)_indexOfItem:(id)arg1;	// IMP=0x000000000009e4b7
- (unsigned long long)_indexOfItemID:(id)arg1;	// IMP=0x000000000009e3b3
- (long long)_numberOfItems;	// IMP=0x000000000009e2f6
- (long long)numberOfItems;	// IMP=0x000000000009e2ce
- (void)reorderItemsWithSortDescriptors:(id)arg1;	// IMP=0x000000000009e145
- (void)_restartObservation;	// IMP=0x000000000009e097
- (void)dealloc;	// IMP=0x000000000009dfb6
- (void)resumeUpdates;	// IMP=0x000000000009df40
- (void)suspendUpdates;	// IMP=0x000000000009deca
- (void)stopObserving;	// IMP=0x000000000009dcf6
- (_Bool)dataSourceShouldAlwaysReplaceContents:(id)arg1;	// IMP=0x000000000009dcee
- (void)dataSource:(id)arg1 wasInvalidatedWithError:(id)arg2;	// IMP=0x000000000009d94e
- (void)dataSource:(id)arg1 receivedUpdatedItems:(id)arg2 deletedItems:(id)arg3 hasMoreChanges:(_Bool)arg4;	// IMP=0x000000000009d808
- (void)dataSource:(id)arg1 replaceContentsWithItems:(id)arg2 hasMoreChanges:(_Bool)arg3;	// IMP=0x000000000009d6db
- (_Bool)shouldRetryError:(id)arg1;	// IMP=0x000000000009d6c6
- (_Bool)recoverFromError:(id)arg1;	// IMP=0x000000000009d6be
- (void)_startRegathering;	// IMP=0x000000000009d63d
- (void)startObserving;	// IMP=0x000000000009d2fe
- (void)_cancelStartTime;	// IMP=0x000000000009d2c8
- (void)_startObserving;	// IMP=0x000000000009d15d
- (void)reachabilityMonitor:(id)arg1 didChangeReachabilityStatusTo:(_Bool)arg2;	// IMP=0x000000000009ced6
- (id)init;	// IMP=0x000000000009cdf6
- (id)initWithPacing:(_Bool)arg1;	// IMP=0x000000000009ca2b
@property(readonly) NSString *domainIdentifier;
@property(readonly) NSString *providerIdentifier;
- (void)startObservingWithEnumerationProperties:(id)arg1;	// IMP=0x00000000000d3547

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
