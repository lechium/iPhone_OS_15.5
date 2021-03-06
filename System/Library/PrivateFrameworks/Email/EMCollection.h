//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Email/EFLoggable-Protocol.h>
#import <Email/EFSignpostable-Protocol.h>

@class EFFuture, EFPromise, EFQuery, NSHashTable, NSMutableOrderedSet, NSMutableSet, NSOrderedSet, NSString;
@protocol EFCancelable, EFScheduler;

@interface EMCollection <EFLoggable, EFSignpostable>
{
    NSMutableOrderedSet *_itemIDs;	// 8 = 0x8
    NSMutableSet *_itemIDsAnticipatingDelete;	// 16 = 0x10
    NSOrderedSet *_recoveringItemIDs;	// 24 = 0x18
    EFPromise *_allItemIDsPromise;	// 32 = 0x20
    struct os_unfair_lock_s _itemIDsLock;	// 40 = 0x28
    _Bool _foundAllItemIDs;	// 44 = 0x2c
    _Bool _foundFirstBatch;	// 45 = 0x2d
    struct os_unfair_lock_s _changeObserversLock;	// 48 = 0x30
    EFQuery *_query;	// 56 = 0x38
    id <EFCancelable> _cancelationToken;	// 64 = 0x40
    NSHashTable *_changeObservers;	// 72 = 0x48
    id <EFScheduler> _observerScheduler;	// 80 = 0x50
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000e44e
+ (id)signpostLog;	// IMP=0x000000000000dfed
+ (id)log;	// IMP=0x000000000000df10
- (void).cxx_destruct;	// IMP=0x0000000000014231
@property(readonly, nonatomic) id <EFScheduler> observerScheduler; // @synthesize observerScheduler=_observerScheduler;
@property(retain, nonatomic) NSHashTable *changeObservers; // @synthesize changeObservers=_changeObservers;
@property(retain, nonatomic) id <EFCancelable> cancelationToken; // @synthesize cancelationToken=_cancelationToken;
@property(readonly, nonatomic) EFQuery *query; // @synthesize query=_query;
- (void)notifyChangeObserverAboutStockedItemIDs:(id)arg1;	// IMP=0x0000000000013f02
- (void)queryReplacedObjectID:(id)arg1 withNewObjectID:(id)arg2;	// IMP=0x0000000000013adc
- (_Bool)observerContainsObjectID:(id)arg1;	// IMP=0x0000000000013a30
- (void)_filterAndTransformObjectIDs:(id)arg1 before:(_Bool)arg2 existingObjectID:(id)arg3 batchBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000001321b
- (id)_itemIDsForObjectIDs:(id)arg1;	// IMP=0x0000000000013189
- (void)queryDidFinishRemoteSearch;	// IMP=0x00000000000130cf
- (void)queryDidFinishInitialLoad;	// IMP=0x0000000000011f23
- (void)queryMatchedDeletedObjectIDs:(id)arg1;	// IMP=0x0000000000011c2d
- (void)queryAnticipatesDeletedObjectIDs:(id)arg1;	// IMP=0x0000000000011962
- (void)queryMatchedChangesByObjectIDs:(id)arg1;	// IMP=0x0000000000011555
- (void)queryMatchedMovedObjectIDs:(id)arg1 after:(id)arg2;	// IMP=0x000000000001111d
- (void)queryMatchedMovedObjectIDs:(id)arg1 before:(id)arg2;	// IMP=0x0000000000010d65
- (void)queryMatchedAddedObjectIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3;	// IMP=0x0000000000010a0a
- (void)queryMatchedAddedObjectIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3;	// IMP=0x000000000001056e
- (void)queryDidStartRecovery;	// IMP=0x0000000000010398
- (void)enumerateObserversWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000010209
- (void)finishRecovery;	// IMP=0x0000000000010203
- (_Bool)isRecovering;	// IMP=0x00000000000101c7
- (void)_cancelQueryIfNeeded;	// IMP=0x0000000000010095
- (void)_performQueryIfNeeded;	// IMP=0x000000000000ffb5
- (void)_cancelQuery;	// IMP=0x000000000000fede
- (void)_performQuery;	// IMP=0x000000000000fe17
- (void)refresh;	// IMP=0x000000000000fced
- (void)stopObserving:(id)arg1;	// IMP=0x000000000000f95d
- (void)beginObserving:(id)arg1;	// IMP=0x000000000000f304
@property(readonly, nonatomic) EFFuture *allItemIDs;
- (void)notifyChangeObserver:(id)arg1 stockedItemIDs:(id)arg2;	// IMP=0x000000000000f114
- (void)notifyChangeObserversAboutChangesByItemIDs:(id)arg1;	// IMP=0x000000000000efd3
- (void)notifyChangeObserversAboutAddedItemIDs:(id)arg1 after:(id)arg2 extraInfo:(id)arg3;	// IMP=0x000000000000ee8a
- (void)notifyChangeObserversAboutAddedItemIDs:(id)arg1 before:(id)arg2 extraInfo:(id)arg3;	// IMP=0x000000000000ed41
- (id)_iterateItemIDsStartingAtItemID:(id)arg1 inReverse:(_Bool)arg2 includeStartingItem:(_Bool)arg3 withBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000000ebfe
- (id)iterateItemIDsStartingAtItemID:(id)arg1 inReverse:(_Bool)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000ebd6
- (id)_firstExistingItemIDForItemID:(id)arg1 inReverse:(_Bool)arg2;	// IMP=0x000000000000eb48
- (id)firstExistingItemIDBeforeItemID:(id)arg1;	// IMP=0x000000000000eb21
- (id)firstExistingItemIDAfterItemID:(id)arg1;	// IMP=0x000000000000eafd
- (_Bool)containsItemID:(id)arg1 includeRecovery:(_Bool)arg2;	// IMP=0x000000000000ea4a
- (id)removeItemIDs:(id)arg1;	// IMP=0x000000000000e7cb
- (void)insertItemIDs:(id)arg1 after:(id)arg2;	// IMP=0x000000000000e70c
- (void)insertItemIDs:(id)arg1 before:(id)arg2;	// IMP=0x000000000000e64d
- (_Bool)objectIDBelongsToCollection:(id)arg1;	// IMP=0x000000000000e641
- (id)itemIDForObjectID:(id)arg1;	// IMP=0x000000000000e62b
- (id)objectIDForItemID:(id)arg1;	// IMP=0x000000000000e5c4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000e541
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000e456
@property(readonly, nonatomic) id <EFScheduler> queryScheduler;
- (void)dealloc;	// IMP=0x000000000000e378
- (void)_commonInitWithQuery:(id)arg1;	// IMP=0x000000000000e26f
- (id)initWithObjectID:(id)arg1 query:(id)arg2;	// IMP=0x000000000000e1b7
- (id)initWithQuery:(id)arg1 repository:(id)arg2;	// IMP=0x000000000000e113
@property(readonly) unsigned long long signpostID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

