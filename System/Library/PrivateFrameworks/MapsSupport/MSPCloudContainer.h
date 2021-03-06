//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapsSupport/MSPCloudNotificationReceiver-Protocol.h>

@class CKContainer, MSPCloudContainerCache, MSPCloudKitAccountAccess, MSPContainer, MSPJournal, NSError, NSHashTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MSPCloudContainer : NSObject <MSPCloudNotificationReceiver>
{
    _Bool _requiresRemoteFetch;	// 8 = 0x8
    _Bool _canceled;	// 9 = 0x9
    _Bool _hasActiveSubscription;	// 10 = 0xa
    _Bool _useSecureContainer;	// 11 = 0xb
    MSPContainer *_container;	// 16 = 0x10
    MSPCloudKitAccountAccess *_access;	// 24 = 0x18
    MSPCloudContainerCache *_cache;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_observerQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 48 = 0x30
    MSPJournal *_journal;	// 56 = 0x38
    NSMutableDictionary *_pendingOperations;	// 64 = 0x40
    NSError *_cancelError;	// 72 = 0x48
    NSHashTable *_observers;	// 80 = 0x50
    unsigned long long _operationBatchSize;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000010024
@property(nonatomic) unsigned long long operationBatchSize; // @synthesize operationBatchSize=_operationBatchSize;
@property(nonatomic) _Bool useSecureContainer; // @synthesize useSecureContainer=_useSecureContainer;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(copy, nonatomic) NSError *cancelError; // @synthesize cancelError=_cancelError;
@property(retain, nonatomic) NSMutableDictionary *pendingOperations; // @synthesize pendingOperations=_pendingOperations;
@property(retain, nonatomic) MSPJournal *journal; // @synthesize journal=_journal;
@property(nonatomic) _Bool hasActiveSubscription; // @synthesize hasActiveSubscription=_hasActiveSubscription;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
@property(retain, nonatomic) MSPCloudContainerCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) MSPCloudKitAccountAccess *access; // @synthesize access=_access;
@property(retain, nonatomic) MSPContainer *container; // @synthesize container=_container;
@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
- (id)zoneSubscriptionName;	// IMP=0x000000000000fe67
- (_Bool)useZoneWidePCS;	// IMP=0x000000000000fe1c
- (id)zoneID;	// IMP=0x000000000000fda9
- (id)zoneName;	// IMP=0x000000000000fc62
@property(readonly, nonatomic) CKContainer *ckContainer;
- (void)configureCKOperation:(id)arg1 withGroup:(id)arg2;	// IMP=0x000000000000fae0
- (id)mergeOptionsForEarliestKnownSyncDate:(id)arg1;	// IMP=0x000000000000fa3d
- (Class)replicaRecordClass;	// IMP=0x000000000000f8da
- (void)containerDidEraseContents;	// IMP=0x000000000000f81f
- (void)cancelMergeWithError:(id)arg1;	// IMP=0x000000000000f7b8
- (void)mergeLocalChangesFromReplica:(id)arg1 withAppliedRemoteChanges:(id)arg2 group:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000ee61
- (void)mergeRemoteChanges:(id)arg1 withGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000e1a0
- (void)mergeWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ddfa
- (void)handleMergeError:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d6ce
- (void)pushChanges:(id)arg1 withGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000c3d1
- (id)batchedOperationsFromRecords:(id)arg1 toDelete:(id)arg2 group:(id)arg3 batchSize:(unsigned long long)arg4 modifyRecordsCompletionBlock:(CDUnknownBlockType)arg5;	// IMP=0x000000000000b83d
- (id)_modifyRecordsOperationWithRecordsToSave:(id)arg1 toDelete:(id)arg2 group:(id)arg3 modifyRecordsCompletion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000b69e
- (void)fetchChangesWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000a486
- (void)subscribeToChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009f31
- (void)removeCloudContainerWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000009b13
- (void)setupCloudContainerWithGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000000968c
- (void)didReceiveRemoteNotification:(id)arg1;	// IMP=0x0000000000009377
- (_Bool)isCanceled;	// IMP=0x000000000000930e
- (void)cancelPendingOperationsWithError:(id)arg1;	// IMP=0x00000000000090d1
- (void)removePendingOperationWithID:(id)arg1;	// IMP=0x0000000000009036
- (void)addCKOperation:(id)arg1;	// IMP=0x0000000000008f15
- (void)_forEachObserver:(CDUnknownBlockType)arg1;	// IMP=0x0000000000008c1c
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000008ba1
- (void)addObserver:(id)arg1;	// IMP=0x0000000000008b26
- (id)description;	// IMP=0x0000000000008a77
- (id)initWithContainer:(id)arg1 accountID:(id)arg2;	// IMP=0x00000000000089b8
- (id)initWithContainer:(id)arg1 cache:(id)arg2;	// IMP=0x0000000000008921
- (id)initWithContainer:(id)arg1 cache:(id)arg2 access:(id)arg3;	// IMP=0x00000000000086c1

@end

