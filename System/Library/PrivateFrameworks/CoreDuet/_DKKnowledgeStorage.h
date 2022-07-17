//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuet/_DKCoreDataStorageDelegate-Protocol.h>
#import <CoreDuet/_DKKnowledgeDeleting-Protocol.h>
#import <CoreDuet/_DKKnowledgeEventStreamDeleting-Protocol.h>
#import <CoreDuet/_DKKnowledgeQuerying-Protocol.h>
#import <CoreDuet/_DKKnowledgeSaving-Protocol.h>

@class NSHashTable, NSString, NSURL, NSUUID, _DKCoreDataStorage, _DKTombstonePolicy;
@protocol OS_dispatch_queue;

@interface _DKKnowledgeStorage : NSObject <_DKCoreDataStorageDelegate, _DKKnowledgeEventStreamDeleting, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying>
{
    _Bool _localOnly;	// 8 = 0x8
    _DKCoreDataStorage *_syncStorage;	// 16 = 0x10
    NSUUID *_deviceUUID;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_defaultResponseQueue;	// 32 = 0x20
    NSString *_directory;	// 40 = 0x28
    NSURL *_modelURL;	// 48 = 0x30
    NSHashTable *_knowledgeStorageEventNotificationDelegates;	// 56 = 0x38
    unsigned long long _insertsAndDeletesObserverCount;	// 64 = 0x40
    NSString *_clientID;	// 72 = 0x48
    _DKTombstonePolicy *_tombstonePolicy;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_executionQueue;	// 88 = 0x58
    _DKCoreDataStorage *_storage;	// 96 = 0x60
}

+ (id)sourceDeviceIdentityFromObject:(id)arg1;	// IMP=0x00000000000d0d81
+ (id)storageWithDirectory:(id)arg1 readOnly:(_Bool)arg2 localOnly:(_Bool)arg3;	// IMP=0x00000000000c23d2
+ (id)storageWithDirectory:(id)arg1 readOnly:(_Bool)arg2;	// IMP=0x00000000000c23bd
+ (id)storeWithDirectory:(id)arg1 readOnly:(_Bool)arg2;	// IMP=0x00000000000c23ab
+ (id)storageWithShallowCopyFromStorage:(id)arg1 clientIdentifier:(id)arg2;	// IMP=0x00000000000c2347
- (void).cxx_destruct;	// IMP=0x00000000000d0eab
@property(readonly, nonatomic) _DKCoreDataStorage *storage; // @synthesize storage=_storage;
@property(readonly, nonatomic) _Bool localOnly; // @synthesize localOnly=_localOnly;
@property(retain) _DKTombstonePolicy *tombstonePolicy; // @synthesize tombstonePolicy=_tombstonePolicy;
- (id)syncStorageAssertion;	// IMP=0x00000000000d0e5c
- (id)sourceDeviceIdentity;	// IMP=0x00000000000d0dd4
@property(readonly, nonatomic) NSUUID *deviceUUID; // @synthesize deviceUUID=_deviceUUID;
- (void)decrementInsertsAndDeletesObserverCount;	// IMP=0x00000000000d09c3
- (void)incrementInsertsAndDeletesObserverCount;	// IMP=0x00000000000d08f0
- (void)_databaseChangedWithNotification:(id)arg1;	// IMP=0x00000000000cf511
- (id)lastChangeSetWithEntityName:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000cee7d
- (void)startSyncUpToCloudWithResponseQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ce571
- (void)startSyncDownFromCloudWithResponseQueue:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cdb70
- (unsigned long long)lastSequenceNumberForChangeSetWithEntityName:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000cd4db
- (_Bool)saveChangeSetsForSync:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000cd000
- (id)fetchSyncChangesSinceDate:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000cb0a0
- (id)fetchLocalChangesSinceDate:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c98a0
- (unsigned long long)deleteHistogram:(id)arg1;	// IMP=0x00000000000c9701
- (void)saveHistogram:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c90fe
- (_Bool)coreDataStorage:(id)arg1 didAutoMigratePersistentStore:(id)arg2 toManagedObjectModel:(id)arg3 havingVersion:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x00000000000c8f95
- (_Bool)coreDataStorage:(id)arg1 willAutoMigrateStoreAtURL:(id)arg2 fromManagedObjectModel:(id)arg3 havingVersion:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x00000000000c8e2d
- (id)coreDataStorage:(id)arg1 needsManagedObjectModelNameForVersion:(unsigned long long)arg2;	// IMP=0x00000000000c8d59
- (_Bool)coreDataStorage:(id)arg1 shouldCallDelegateAfterAutoMigrationToManagedObjectModelHavingVersion:(unsigned long long)arg2;	// IMP=0x00000000000c8ce3
- (_Bool)coreDataStorage:(id)arg1 shouldCallDelegateBeforeAutoMigrationFromManagedObjectModelHavingVersion:(unsigned long long)arg2;	// IMP=0x00000000000c8c6d
- (void)closeSyncStorage;	// IMP=0x00000000000c8c46
- (void)closeStorage;	// IMP=0x00000000000c8bd9
- (unsigned long long)deleteObjectsInEventStream:(id)arg1 ifNeededToLimitEventCount:(unsigned long long)arg2 batchLimit:(unsigned long long)arg3;	// IMP=0x00000000000c8a6d
- (unsigned long long)deleteObjectsInEventStreams:(id)arg1 olderThanDate:(id)arg2 limit:(unsigned long long)arg3;	// IMP=0x00000000000c86d3
- (id)eventCountPerStreamName;	// IMP=0x00000000000c8041
- (unsigned long long)eventCount;	// IMP=0x00000000000c7f73
- (unsigned long long)deleteOrphanedEntities;	// IMP=0x00000000000c7f0a
- (unsigned long long)deleteOldObjectsIfNeededToLimitTotalNumber:(unsigned long long)arg1 excludingPredicate:(id)arg2 limit:(unsigned long long)arg3;	// IMP=0x00000000000c7d4c
- (unsigned long long)deleteEventsMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2;	// IMP=0x00000000000c7bf4
- (unsigned long long)deleteEventsStartingEarlierThanDate:(id)arg1 limit:(unsigned long long)arg2;	// IMP=0x00000000000c7a5b
- (unsigned long long)deleteObjectsOlderThanDate:(id)arg1 excludingPredicate:(id)arg2 limit:(unsigned long long)arg3;	// IMP=0x00000000000c780b
- (id)executeQuery:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c7486
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c6c7c
- (void)executeQuery:(id)arg1 responseQueue:(id)arg2;	// IMP=0x00000000000c6c67
- (unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c6ac0
- (void)deleteAllEventsMatchingPredicate:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c66cf
- (unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c663d
- (void)deleteAllEventsInEventStream:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c657d
- (_Bool)deleteObjects:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c51b9
- (void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c47d9
- (_Bool)saveObjects:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c400b
- (void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c3598
- (void)removeKnowledgeStorageEventNotificationDelegate:(id)arg1;	// IMP=0x00000000000c2784
- (void)addKnowledgeStorageEventNotificationDelegate:(id)arg1;	// IMP=0x00000000000c2709
- (_Bool)deleteSyncStorage;	// IMP=0x00000000000c26b2
- (_Bool)deleteStorage;	// IMP=0x00000000000c2668
@property(readonly, nonatomic) _DKCoreDataStorage *syncStorage; // @synthesize syncStorage=_syncStorage;
- (void)removeSyncPeer:(id)arg1;	// IMP=0x00000000000eebe1
- (_Bool)saveSyncPeer:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ee603
- (id)syncPeersWithError:(id *)arg1;	// IMP=0x00000000000edd9f
- (id)keyValueStoreForDomain:(id)arg1;	// IMP=0x000000000012596f

@end
