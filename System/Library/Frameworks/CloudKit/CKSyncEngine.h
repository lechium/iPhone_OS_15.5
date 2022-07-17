//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/CKPropertiesDescription-Protocol.h>

@class CKDatabase, CKNotificationListener, CKSyncEngineMetadata, NSOperationQueue, NSString;
@protocol CKSyncEngineDataSource, OS_dispatch_queue, OS_xpc_object;

@interface CKSyncEngine : NSObject <CKPropertiesDescription>
{
    _Bool _ignoringSystemConditions;	// 8 = 0x8
    _Bool _allowMetadataCallbackDeferral;	// 9 = 0x9
    _Bool _waitingForIdentityUpdate;	// 10 = 0xa
    _Bool _waitingForHSA2;	// 11 = 0xb
    _Bool _useUniqueActivityIdentifiers;	// 12 = 0xc
    _Bool _skipRetryOnOperationError;	// 13 = 0xd
    _Bool _automaticSyncingEnabled;	// 14 = 0xe
    _Bool _needsToReloadAccount;	// 15 = 0xf
    id <CKSyncEngineDataSource> _dataSource;	// 16 = 0x10
    CKDatabase *_database;	// 24 = 0x18
    CKSyncEngineMetadata *_metadata;	// 32 = 0x20
    unsigned long long _lastNotifiedMetadataChangeCount;	// 40 = 0x28
    CKNotificationListener *_notificationListener;	// 48 = 0x30
    NSOperationQueue *_operationQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_queue;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_batchCreationQueue;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 80 = 0x50
    unsigned long long _maxRecordCountPerBatch;	// 88 = 0x58
    unsigned long long _maxRecordBytesPerBatch;	// 96 = 0x60
    unsigned long long _maxZoneCountPerBatch;	// 104 = 0x68
    unsigned long long _maxMergeableValueCountPerMaintenanceBatch;	// 112 = 0x70
    NSObject<OS_xpc_object> *_xpcActivityCriteriaOverrides;	// 120 = 0x78
    long long _lastKnownAccountStatus;	// 128 = 0x80
    long long _priority;	// 136 = 0x88
    NSString *_databaseSubscriptionIDOverride;	// 144 = 0x90
    CDUnknownBlockType _updateMetadataBlock;	// 152 = 0x98
}

+ (_Bool)shouldDeferAfterError:(id)arg1;	// IMP=0x000000000007c283
+ (void)unregisterActivitiesWithDatabase:(id)arg1 ignoringSystemConditions:(_Bool)arg2;	// IMP=0x0000000000079e1b
+ (id)earliestStartDateAfterError:(id)arg1;	// IMP=0x00000000000797e3
+ (void)setFastErrorRetry:(_Bool)arg1;	// IMP=0x0000000000065cec
+ (_Bool)fastErrorRetry;	// IMP=0x0000000000065ce0
+ (id)saveSubscriptionActivityIdentifierInDatabase:(id)arg1 ignoringSystemConditions:(_Bool)arg2;	// IMP=0x00000000000659ee
+ (id)syncActivityIdentifierInDatabase:(id)arg1 ignoringSystemConditions:(_Bool)arg2;	// IMP=0x00000000000659da
- (void).cxx_destruct;	// IMP=0x000000000007d5ad
@property(nonatomic) _Bool needsToReloadAccount; // @synthesize needsToReloadAccount=_needsToReloadAccount;
@property(nonatomic, getter=isAutomaticSyncingEnabled) _Bool automaticSyncingEnabled; // @synthesize automaticSyncingEnabled=_automaticSyncingEnabled;
@property(nonatomic) _Bool skipRetryOnOperationError; // @synthesize skipRetryOnOperationError=_skipRetryOnOperationError;
@property(retain, nonatomic) NSString *databaseSubscriptionIDOverride; // @synthesize databaseSubscriptionIDOverride=_databaseSubscriptionIDOverride;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) long long lastKnownAccountStatus; // @synthesize lastKnownAccountStatus=_lastKnownAccountStatus;
@property(nonatomic, getter=isWaitingForHSA2) _Bool waitingForHSA2; // @synthesize waitingForHSA2=_waitingForHSA2;
@property(nonatomic, getter=isWaitingForIdentityUpdate) _Bool waitingForIdentityUpdate; // @synthesize waitingForIdentityUpdate=_waitingForIdentityUpdate;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcActivityCriteriaOverrides; // @synthesize xpcActivityCriteriaOverrides=_xpcActivityCriteriaOverrides;
@property(nonatomic) _Bool allowMetadataCallbackDeferral; // @synthesize allowMetadataCallbackDeferral=_allowMetadataCallbackDeferral;
@property(nonatomic) unsigned long long maxMergeableValueCountPerMaintenanceBatch; // @synthesize maxMergeableValueCountPerMaintenanceBatch=_maxMergeableValueCountPerMaintenanceBatch;
@property(nonatomic) unsigned long long maxZoneCountPerBatch; // @synthesize maxZoneCountPerBatch=_maxZoneCountPerBatch;
@property(nonatomic) unsigned long long maxRecordCountPerBatch; // @synthesize maxRecordCountPerBatch=_maxRecordCountPerBatch;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) CKNotificationListener *notificationListener; // @synthesize notificationListener=_notificationListener;
@property(retain, nonatomic) CKSyncEngineMetadata *metadata; // @synthesize metadata=_metadata;
@property(retain, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) __weak id <CKSyncEngineDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)accountChangedNotification:(id)arg1;	// IMP=0x000000000007c689
- (void)identityUpdateNotification:(id)arg1;	// IMP=0x000000000007c475
- (void)relatedApplicationBundleIdentifiersForZoneIDs:(id)arg1 recordIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000007bbcd
- (_Bool)hasSchedulerActivityWithIdentifier:(id)arg1;	// IMP=0x000000000007b970
- (void)submitActivityIfNecessaryWithIdentifier:(id)arg1 earliestStartDate:(id)arg2 priority:(long long)arg3 userRequestedBackupTask:(_Bool)arg4 relatedApplicationBundleIdentifiers:(id)arg5;	// IMP=0x000000000007ad31
- (void)performSyncActivity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007a001
- (void)unregisterActivities;	// IMP=0x0000000000079f9c
- (void)saveSubscriptionIfNecessaryWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000078720
- (void)didReceiveDatabaseNotification:(id)arg1;	// IMP=0x00000000000784c1
- (id)databaseSubscriptionWithID:(id)arg1;	// IMP=0x0000000000078323
- (id)databaseSubscription;	// IMP=0x00000000000782ae
- (id)defaultDatabaseSubscription;	// IMP=0x000000000007824f
- (id)defaultDatabaseSubscriptionID;	// IMP=0x00000000000781ba
- (void)setNeedsToFetchChanges;	// IMP=0x0000000000078089
- (_Bool)needsToFetchChangesForZoneIDs:(id)arg1;	// IMP=0x0000000000077f87
- (_Bool)_isFetchChangesErrorAdopterVisible:(id)arg1;	// IMP=0x0000000000077f01
- (void)_updateDataSourceForFailedToFetchChangesForRecordZoneID:(id)arg1 error:(id)arg2;	// IMP=0x0000000000077c8d
- (id)_adopterVisibleFetchChangesErrorForZoneID:(id)arg1 error:(id)arg2;	// IMP=0x0000000000077996
- (id)existingOperationToFetchChangesForZoneIDs:(id)arg1 includingExecutingOperations:(_Bool)arg2;	// IMP=0x000000000007390a
- (void)_fetchChangesForZoneIDs:(id)arg1 ifNecessary:(_Bool)arg2 operationGroup:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000071267
- (void)fetchChangesForZoneIDs:(id)arg1 group:(id)arg2 ifNecessary:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000071191
- (void)fetchChangesForZoneIDs:(id)arg1 group:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000071176
- (void)fetchChangesForZoneIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000071159
- (void)fetchChangesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000071142
- (id)nextBatchOfRecordsToModifyWithCustomBatchingInZoneIDs:(id)arg1;	// IMP=0x000000000007038f
- (_Bool)hasPendingModifications;	// IMP=0x000000000006e697
- (unsigned long long)numberOfModifyPendingRecordsOperations;	// IMP=0x000000000006e490
- (id)existingOperationToModifyRecordBatchesForZoneIDs:(id)arg1 includingExecutingOperations:(_Bool)arg2;	// IMP=0x000000000006ae30
- (void)modifyPendingChangesInZoneIDs:(id)arg1 group:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000006732a
- (void)modifyPendingChangesInZoneIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000067313
- (void)modifyPendingChangesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000672fa
- (void)addRecordZonesToSave:(id)arg1 recordZoneIDsToDelete:(id)arg2;	// IMP=0x0000000000066cdf
- (void)addRecordIDsToSave:(id)arg1 recordIDsToDelete:(id)arg2;	// IMP=0x0000000000066348
@property(nonatomic) _Bool useOpportunisticPushTopic;
- (id)mergeableValueMaintenanceActivityIdentifier;	// IMP=0x0000000000065ac7
- (id)userRequestedBackupActivityIdentifier;	// IMP=0x0000000000065ab6
- (id)saveSubscriptionActivityIdentifier;	// IMP=0x0000000000065aa5
- (id)syncActivityIdentifier;	// IMP=0x0000000000065a94
- (id)redactedDescription;	// IMP=0x0000000000065692
@property(readonly, copy) NSString *description;
- (void)CKDescribePropertiesUsing:(id)arg1;	// IMP=0x0000000000065604
- (void)dealloc;	// IMP=0x000000000006519f
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000063bc0
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 priority:(long long)arg5 xpcActivityCriteriaOverrides:(id)arg6;	// IMP=0x0000000000063aac
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4 priority:(long long)arg5;	// IMP=0x0000000000063a90
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3 machServiceName:(id)arg4;	// IMP=0x0000000000063a6d
- (id)initWithDatabase:(id)arg1 dataSource:(id)arg2 metadata:(id)arg3;	// IMP=0x0000000000063a58
- (id)init;	// IMP=0x00000000000639dc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
