//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, CKContainer, DADBuddyStateObserver, ICCloudContextSyncMetrics, ICSelectorDelayer, MISSING_TYPE, NSDate, NSDictionary, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSSet, NSString, NSTimer, RDAccountInitializerDidCompleteInitializeAllAccountsObserver, RDAccountPersonIDSaltObserver, RDStoreController, REMAppleAccountUtilities, _TtC7remindd21RDDebouncerWithNumber;
@protocol ICCloudContextDelegate, OS_dispatch_queue;

@interface ICCloudContext : NSObject
{
    _Bool _fetchOperationsPending;	// 8 = 0x8
    _Bool _needsToUpdateSubscriptions;	// 9 = 0x9
    _Bool _disabled;	// 10 = 0xa
    _Bool _hasPassedBuddy;	// 11 = 0xb
    _Bool _isSystemAvailableForSyncing;	// 12 = 0xc
    _Bool _hasRetryTimer;	// 13 = 0xd
    _Bool _disabledInternal;	// 14 = 0xe
    _Bool _needsToProcessAllDirtyObjects;	// 15 = 0xf
    _Bool _didAddObservers;	// 16 = 0x10
    _Bool _fetchingEnabled;	// 17 = 0x11
    _Bool _syncDisabledByServer;	// 18 = 0x12
    _Bool _uploadSuspended;	// 19 = 0x13
    _Bool _supportsCloudKitSyncing;	// 20 = 0x14
    _Bool _shouldUnregisterBuddy;	// 21 = 0x15
    _Bool _didCheckForLongLivedOperations;	// 22 = 0x16
    _Bool _discretionaryNetwork;	// 23 = 0x17
    _Bool _automaticallyRetryNetworkFailures;	// 24 = 0x18
    _Bool _wasInternetReachable;	// 25 = 0x19
    _Bool _pendingAccountInitializerCompleteOnLaunch;	// 26 = 0x1a
    _Bool _needsToMergeLocalObjects;	// 27 = 0x1b
    _Bool _needsToUpdateCloudContextOnAccountsDidChange;	// 28 = 0x1c
    struct os_unfair_lock_s _containersByAccountIDLock;	// 32 = 0x20
    struct os_unfair_lock_s _accountInitializerDidCompleteOnAccountsDidChangeObserverLock;	// 36 = 0x24
    RDStoreController *_storeController;	// 40 = 0x28
    CKContainer *_container;	// 48 = 0x30
    id <ICCloudContextDelegate> _cloudContextDelegate;	// 56 = 0x38
    long long _qualityOfService;	// 64 = 0x40
    unsigned long long _discretionaryNetworkBehavior;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_processingQueue;	// 80 = 0x50
    NSOperationQueue *_operationQueue;	// 88 = 0x58
    REMAppleAccountUtilities *_appleAccountUtilities;	// 96 = 0x60
    ICCloudContextSyncMetrics *_lastSyncMetrics;	// 104 = 0x68
    NSMutableSet *_objectIDsToRetry;	// 112 = 0x70
    NSTimer *_retryTimer;	// 120 = 0x78
    NSMutableDictionary *_retryCountsByOperationType;	// 128 = 0x80
    NSMutableSet *_databaseScopeStringsNeedingRetryFetchChanges;	// 136 = 0x88
    NSMutableSet *_objectIDsToProcess;	// 144 = 0x90
    ICSelectorDelayer *_processingSelectorDelayer;	// 152 = 0x98
    ICSelectorDelayer *_pollingSelectorDelayer;	// 160 = 0xa0
    NSDictionary *_containersByAccountID;	// 168 = 0xa8
    NSMutableSet *_zoneIDsNeedingFetchChanges;	// 176 = 0xb0
    NSMutableSet *_zoneIDsFetchingChanges;	// 184 = 0xb8
    NSMutableSet *_zoneIDsNeedingToBeSaved;	// 192 = 0xc0
    NSSet *_subscribedSubscriptionIDs;	// 200 = 0xc8
    NSDate *_subscribedSubscriptionIDsLastModifiedDate;	// 208 = 0xd0
    double _timeoutIntervalForResource;	// 216 = 0xd8
    NSString *_apsTopic;	// 224 = 0xe0
    APSConnection *_apsConnection;	// 232 = 0xe8
    _TtC7remindd21RDDebouncerWithNumber *_apsNotificationHandlingDebouncer;	// 240 = 0xf0
    _TtC7remindd21RDDebouncerWithNumber *_accountChangedNotificationHandlingDebouncer;	// 248 = 0xf8
    double _lastSyncSinceInternetReachable;	// 256 = 0x100
    DADBuddyStateObserver *_buddyStateObserver;	// 264 = 0x108
    RDAccountInitializerDidCompleteInitializeAllAccountsObserver *_accountInitializerDidCompleteOnLaunchObserver;	// 272 = 0x110
    RDAccountInitializerDidCompleteInitializeAllAccountsObserver *_accountInitializerDidCompleteOnAccountsDidChangeObserver;	// 280 = 0x118
    NSMutableDictionary *_recognizedCloudObjectClasses;	// 288 = 0x120
    RDAccountPersonIDSaltObserver *_accountPersonIDSaltObserver;	// 296 = 0x128
}

+ (id)zoneIDsFromZoneInfos:(id)arg1;	// IMP=0x002000000002ff3b
+ (id)zoneInfosFromZoneIDs:(id)arg1;	// IMP=0x001000000002fc4a
+ (_Bool)isZoneConfigurations:(id)arg1 subsetOfZoneConfigurations:(id)arg2;	// IMP=0x00100000000294e7
+ (_Bool)_performLocalObjectMergeWithFetchedCloudObjectIDs:(id)arg1 primaryCloudKitAccount:(id)arg2 managedObjectContext:(id)arg3 error:(id *)arg4;	// IMP=0x001000000002391b
+ (id)_objectIDsThatShouldAttemptLocalObjectMergeWithCloudObjects:(id)arg1;	// IMP=0x0010000000022aee
+ (void)faultAndPromptToFileRadarWithICTap2RadarType:(unsigned long long)arg1 logMessage:(id)arg2;	// IMP=0x001000000001e540
+ (void)faultAndPromptToFileRadarWithICTap2RadarType:(unsigned long long)arg1 title:(id)arg2 description:(id)arg3 logMessage:(id)arg4;	// IMP=0x001000000001e1cf
+ (void)addRunExclusivelyOperations:(id)arg1 operationQueue:(id)arg2;	// IMP=0x001000000001d57f
+ (void)saveAndFaultIfFailWithContext:(id)arg1 shouldTakeServerAsTruth:(_Bool)arg2 logDescription:(id)arg3;	// IMP=0x001000000001d386
+ (id)errorsFromError:(id)arg1;	// IMP=0x001000000001cf77
+ (id)deduplicatedRecordsForCloudObjects:(id)arg1;	// IMP=0x001000000001cb9a
+ (void)recursivelyFixCrossZoneRelationship:(id)arg1 perObjectHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001c8e5
+ (id)objectsByDatabaseScope:(id)arg1;	// IMP=0x001000000001c634
+ (id)sortedRecords:(id)arg1;	// IMP=0x001000000001bd9b
+ (void)batchRecordsToSave:(id)arg1 delete:(id)arg2 maxRecordCountPerBatch:(unsigned long long)arg3 maxRecordSizePerBatch:(unsigned long long)arg4 withBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000017974
+ (id)errorFromOperations:(id)arg1;	// IMP=0x001000000000ffc4
+ (id)errorFromErrors:(id)arg1;	// IMP=0x001000000000fea8
+ (id)errorForDisabledCloudSyncing;	// IMP=0x001000000000fde7
+ (id)allDirtyCloudObjectIDsInContext:(id)arg1;	// IMP=0x001000000000c335
+ (id)allCloudObjectIDsOfClassesPassingTest:(CDUnknownBlockType)arg1 inContext:(id)arg2;	// IMP=0x001000000000c081
+ (id)allCloudObjectsInContext:(id)arg1;	// IMP=0x001000000000bfa3
+ (id)allCloudObjectsOfClassesPassingTest:(CDUnknownBlockType)arg1 inContext:(id)arg2;	// IMP=0x001000000000bd40
+ (id)metadataZoneID;	// IMP=0x001000000000a00a
+ (id)migrationZoneID;	// IMP=0x0010000000009f94
+ (id)appZoneID;	// IMP=0x0010000000009f1e
+ (id)_recordTypesToSortChildrenAfterFetch;	// IMP=0x0010000000009cf7
+ (id)_cloudObjectClassesByRecordType;	// IMP=0x0010000000009933
+ (id)_systemBuildVersion;	// IMP=0x00100000000098ce
+ (id)processingQueue;	// IMP=0x0010000000005c48
- (void).cxx_destruct;	// IMP=0x002000000003ad25
@property(retain, nonatomic) RDAccountPersonIDSaltObserver *accountPersonIDSaltObserver; // @synthesize accountPersonIDSaltObserver=_accountPersonIDSaltObserver;
@property(retain, nonatomic) NSMutableDictionary *recognizedCloudObjectClasses; // @synthesize recognizedCloudObjectClasses=_recognizedCloudObjectClasses;
@property(nonatomic) struct os_unfair_lock_s accountInitializerDidCompleteOnAccountsDidChangeObserverLock; // @synthesize accountInitializerDidCompleteOnAccountsDidChangeObserverLock=_accountInitializerDidCompleteOnAccountsDidChangeObserverLock;
@property(retain, nonatomic) RDAccountInitializerDidCompleteInitializeAllAccountsObserver *accountInitializerDidCompleteOnAccountsDidChangeObserver; // @synthesize accountInitializerDidCompleteOnAccountsDidChangeObserver=_accountInitializerDidCompleteOnAccountsDidChangeObserver;
@property(nonatomic) _Bool needsToUpdateCloudContextOnAccountsDidChange; // @synthesize needsToUpdateCloudContextOnAccountsDidChange=_needsToUpdateCloudContextOnAccountsDidChange;
@property(nonatomic) _Bool needsToMergeLocalObjects; // @synthesize needsToMergeLocalObjects=_needsToMergeLocalObjects;
@property(retain, nonatomic) RDAccountInitializerDidCompleteInitializeAllAccountsObserver *accountInitializerDidCompleteOnLaunchObserver; // @synthesize accountInitializerDidCompleteOnLaunchObserver=_accountInitializerDidCompleteOnLaunchObserver;
@property(nonatomic) _Bool pendingAccountInitializerCompleteOnLaunch; // @synthesize pendingAccountInitializerCompleteOnLaunch=_pendingAccountInitializerCompleteOnLaunch;
@property(retain, nonatomic) DADBuddyStateObserver *buddyStateObserver; // @synthesize buddyStateObserver=_buddyStateObserver;
@property(nonatomic) double lastSyncSinceInternetReachable; // @synthesize lastSyncSinceInternetReachable=_lastSyncSinceInternetReachable;
@property(nonatomic) _Bool wasInternetReachable; // @synthesize wasInternetReachable=_wasInternetReachable;
@property(retain, nonatomic) _TtC7remindd21RDDebouncerWithNumber *accountChangedNotificationHandlingDebouncer; // @synthesize accountChangedNotificationHandlingDebouncer=_accountChangedNotificationHandlingDebouncer;
@property(retain, nonatomic) _TtC7remindd21RDDebouncerWithNumber *apsNotificationHandlingDebouncer; // @synthesize apsNotificationHandlingDebouncer=_apsNotificationHandlingDebouncer;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
@property(retain, nonatomic) NSString *apsTopic; // @synthesize apsTopic=_apsTopic;
@property(nonatomic) double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;
@property(nonatomic) _Bool automaticallyRetryNetworkFailures; // @synthesize automaticallyRetryNetworkFailures=_automaticallyRetryNetworkFailures;
@property(nonatomic) _Bool discretionaryNetwork; // @synthesize discretionaryNetwork=_discretionaryNetwork;
@property(nonatomic) _Bool didCheckForLongLivedOperations; // @synthesize didCheckForLongLivedOperations=_didCheckForLongLivedOperations;
@property(retain) NSDate *subscribedSubscriptionIDsLastModifiedDate; // @synthesize subscribedSubscriptionIDsLastModifiedDate=_subscribedSubscriptionIDsLastModifiedDate;
@property(retain) NSSet *subscribedSubscriptionIDs; // @synthesize subscribedSubscriptionIDs=_subscribedSubscriptionIDs;
@property(retain, nonatomic) NSMutableSet *zoneIDsNeedingToBeSaved; // @synthesize zoneIDsNeedingToBeSaved=_zoneIDsNeedingToBeSaved;
@property(retain, nonatomic) NSMutableSet *zoneIDsFetchingChanges; // @synthesize zoneIDsFetchingChanges=_zoneIDsFetchingChanges;
@property(retain, nonatomic) NSMutableSet *zoneIDsNeedingFetchChanges; // @synthesize zoneIDsNeedingFetchChanges=_zoneIDsNeedingFetchChanges;
@property(nonatomic) struct os_unfair_lock_s containersByAccountIDLock; // @synthesize containersByAccountIDLock=_containersByAccountIDLock;
@property(retain, nonatomic) NSDictionary *containersByAccountID; // @synthesize containersByAccountID=_containersByAccountID;
@property(nonatomic) _Bool shouldUnregisterBuddy; // @synthesize shouldUnregisterBuddy=_shouldUnregisterBuddy;
@property(nonatomic) _Bool supportsCloudKitSyncing; // @synthesize supportsCloudKitSyncing=_supportsCloudKitSyncing;
@property(nonatomic) _Bool uploadSuspended; // @synthesize uploadSuspended=_uploadSuspended;
@property(nonatomic) _Bool syncDisabledByServer; // @synthesize syncDisabledByServer=_syncDisabledByServer;
@property(nonatomic, getter=isFetchingEnabled) _Bool fetchingEnabled; // @synthesize fetchingEnabled=_fetchingEnabled;
@property(nonatomic) _Bool didAddObservers; // @synthesize didAddObservers=_didAddObservers;
@property(retain) ICSelectorDelayer *pollingSelectorDelayer; // @synthesize pollingSelectorDelayer=_pollingSelectorDelayer;
@property(retain) ICSelectorDelayer *processingSelectorDelayer; // @synthesize processingSelectorDelayer=_processingSelectorDelayer;
@property(retain, nonatomic) NSMutableSet *objectIDsToProcess; // @synthesize objectIDsToProcess=_objectIDsToProcess;
- (void)setNeedsToProcessAllDirtyObjects:(_Bool)arg1;	// IMP=0x001000000003a989
- (_Bool)needsToProcessAllDirtyObjects;	// IMP=0x001000000003a980
@property(getter=isDisabledInternal) _Bool disabledInternal; // @synthesize disabledInternal=_disabledInternal;
@property(retain, nonatomic) NSMutableSet *databaseScopeStringsNeedingRetryFetchChanges; // @synthesize databaseScopeStringsNeedingRetryFetchChanges=_databaseScopeStringsNeedingRetryFetchChanges;
@property(retain, nonatomic) NSMutableDictionary *retryCountsByOperationType; // @synthesize retryCountsByOperationType=_retryCountsByOperationType;
@property(retain) NSTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
@property _Bool hasRetryTimer; // @synthesize hasRetryTimer=_hasRetryTimer;
@property(retain, nonatomic) NSMutableSet *objectIDsToRetry; // @synthesize objectIDsToRetry=_objectIDsToRetry;
@property(nonatomic) _Bool isSystemAvailableForSyncing; // @synthesize isSystemAvailableForSyncing=_isSystemAvailableForSyncing;
- (_Bool);	// IMP=0x001000000003a8c9
@property(nonatomic) _Bool hasPassedBuddy; // @synthesize hasPassedBuddy=_hasPassedBuddy;
@property(retain) ICCloudContextSyncMetrics *lastSyncMetrics; // @synthesize lastSyncMetrics=_lastSyncMetrics;
@property(retain, nonatomic) REMAppleAccountUtilities *appleAccountUtilities; // @synthesize appleAccountUtilities=_appleAccountUtilities;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) unsigned long long discretionaryNetworkBehavior; // @synthesize discretionaryNetworkBehavior=_discretionaryNetworkBehavior;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property _Bool needsToUpdateSubscriptions; // @synthesize needsToUpdateSubscriptions=_needsToUpdateSubscriptions;
@property(readonly, nonatomic) _Bool fetchOperationsPending; // @synthesize fetchOperationsPending=_fetchOperationsPending;
@property(nonatomic) __weak id <ICCloudContextDelegate> cloudContextDelegate; // @synthesize cloudContextDelegate=_cloudContextDelegate;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) RDStoreController *storeController; // @synthesize storeController=_storeController;
- (void)adjustAPSNotificationDebouncerIntervalWithMigrationState:(_Bool)arg1;	// IMP=0x001000000003a670
- (void)adjustAPSNotificationDebouncerInterval;	// IMP=0x001000000003a437
- (id)waiterID;	// IMP=0x001000000003a42a
- (void)migrationStateDidChange:(_Bool)arg1 didFinishMigration:(_Bool)arg2;	// IMP=0x001000000003a2a6
- (void)setMigrationStateToDidChooseToMigrate:(_Bool)arg1 didFinishMigration:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000397f7
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x0010000000038cab
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;	// IMP=0x0010000000038c3a
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0010000000038bcf
- (void)applicationWillEnterForeground;	// IMP=0x0010000000038ad9
- (void)applicationWillTerminate;	// IMP=0x0010000000038ad3
- (void)applicationDidEnterBackground;	// IMP=0x0010000000038acd
- (void)didCompleteInitializeAllAccounts:(id)arg1;	// IMP=0x00100000000387a9
- (void)accountsDidChange;	// IMP=0x0010000000038002
- (_Bool)shouldPollCloudKitWhenLaunchingAndBackgrounding;	// IMP=0x0010000000037ed2
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000037b83
- (id)serverChangeTokenForChangedZonesInDatabase:(id)arg1;	// IMP=0x0010000000037b4d
- (void)deleteServerChangeTokenForChangedZonesInDatabase:(id)arg1;	// IMP=0x0010000000037b17
- (void)saveServerChangeToken:(id)arg1 forChangedZonesInDatabase:(id)arg2;	// IMP=0x0010000000037ab4
- (void)deleteAllApplicationDataFromServerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000376e2
- (void)deleteAllServerChangeTokens;	// IMP=0x00100000000372db
- (void)deleteServerChangeTokenForRecordZoneID:(id)arg1 databaseScope:(long long)arg2;	// IMP=0x001000000003703b
- (id)serverChangeTokenForRecordZoneID:(id)arg1 databaseScope:(long long)arg2;	// IMP=0x0010000000036e3b
- (void)saveServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2 databaseScope:(long long)arg3;	// IMP=0x00100000000363c2
- (void)retryOperationsIfNecessary;	// IMP=0x00100000000357a7
- (void)startRetryTimerIfNecessaryWithError:(id)arg1;	// IMP=0x00100000000351fa
- (_Bool)shouldIgnoreErrorForBackoffTimer:(id)arg1 operationType:(id)arg2;	// IMP=0x0010000000034fac
- (id)errorCodesToIgnoreForBackoffTimer;	// IMP=0x0010000000034f80
- (void)incrementOrClearRetryCountForOperationType:(id)arg1 error:(id)arg2;	// IMP=0x0010000000034efb
- (void)clearRetryCountForOperationType:(id)arg1;	// IMP=0x0010000000034d60
- (void)incrementRetryCountForOperationType:(id)arg1;	// IMP=0x0010000000034af0
- (void)_clearCloudDirtyForToken:(id)arg1;	// IMP=0x0010000000034906
- (id)_markCloudAsDirtyAndReturnToken;	// IMP=0x00100000000347c6
- (id)_existingCloudDirtyToken;	// IMP=0x0010000000034738
- (void)checkForLongLivedOperations;	// IMP=0x0010000000033f07
- (void)updateCloudContextStateWithReason:(id)arg1;	// IMP=0x0010000000033eed
- (void)updateCloudContextStateWithSyncOption:(long long)arg1 syncReason:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000327e5
- (_Bool)isInForeground;	// IMP=0x00100000000327dd
- (void)clearSubscribedSubscriptionIDs;	// IMP=0x0010000000032650
- (void)addSubscribedSubscriptionIDs:(id)arg1;	// IMP=0x00100000000323f4
- (void)loadSubscribedSubscriptionIDs;	// IMP=0x001000000003204e
- (void)saveSubscriptionsForDatabase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000315f4
- (void)fetchSubscriptionsForDatabase:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000030e68
- (void)updateSubscriptionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000003048b
- (void)setupAPSConnection;	// IMP=0x0010000000030296
- (id)subscriptionForDatabase:(id)arg1;	// IMP=0x00100000000301b7
- (void)clearZoneFetchState;	// IMP=0x001000000002fb37
- (void)saveZoneFetchState;	// IMP=0x001000000002f90f
- (void)loadZoneFetchState;	// IMP=0x001000000002f703
- (void)fetchDatabaseChangesOperation:(id)arg1 finishedWithServerChangeToken:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002f1b7
- (void)fetchDatabaseChangesOperation:(id)arg1 changeTokenUpdated:(id)arg2;	// IMP=0x001000000002ef84
- (void)fetchDatabaseChangesOperation:(id)arg1 recordZoneWithIDWasDeleted:(id)arg2;	// IMP=0x001000000002eadc
- (void)sharedZoneWasDeleted:(id)arg1;	// IMP=0x001000000002e4e8
- (void)fetchDatabaseChangesOperation:(id)arg1 recordZoneWithIDChanged:(id)arg2;	// IMP=0x001000000002e279
- (id)operationToFetchDatabaseChangesForDatabase:(id)arg1 ignoreServerChangeTokens:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002d9a4
- (void)fetchDatabaseChangesForDatabases:(id)arg1 reason:(id)arg2 ignoreServerChangeTokens:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000002d129
- (void)fetchDatabaseChangesWithReason:(id)arg1 ignoreServerChangeTokens:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002ce9e
- (void)firePollingSyncRequest;	// IMP=0x001000000002cdb2
- (void)_performSortingChildrenObjectsAfterFetchingInBlockOfManagedObjectContext:(id)arg1 fetchHasFullyCompleted:(_Bool)arg2;	// IMP=0x001000000002c7bb
- (void)fetchRecordZoneChangesOperation:(id)arg1 zoneID:(id)arg2 changeTokenUpdated:(id)arg3 batchFetchHelper:(id)arg4;	// IMP=0x001000000002c53d
- (void)fetchRecordZoneChangesOperation:(id)arg1 recordWasDeletedWithRecordID:(id)arg2 recordType:(id)arg3 context:(id)arg4;	// IMP=0x001000000002be52
- (void)fetchRecordZoneChangesOperation:(id)arg1 recordChanged:(id)arg2 context:(id)arg3;	// IMP=0x001000000002b899
- (void)fetchRecordZoneChangesOperationDidComplete:(id)arg1 error:(id)arg2;	// IMP=0x001000000002b33b
- (void)fetchRecordZoneChangesOperation:(id)arg1 completedFetchForZoneID:(id)arg2 serverChangeToken:(id)arg3 batchFetchHelper:(id)arg4 error:(id)arg5;	// IMP=0x001000000002abda
- (id)newOperationToFetchRecordZoneChangesWithZoneConfigurations:(id)arg1 database:(id)arg2;	// IMP=0x0010000000029877
- (id)operationToFetchRecordZoneChangesForZoneIDs:(id)arg1 database:(id)arg2 ignoreServerChangeTokens:(_Bool)arg3;	// IMP=0x0010000000028d78
- (id)operationsToFetchRecordZoneChangesForZoneIDs:(id)arg1 ignoreServerChangeTokens:(_Bool)arg2;	// IMP=0x00100000000283c7
- (void)addOperationsToFetchRecordZoneChangesForZoneIDs:(id)arg1 reason:(id)arg2 ignoreServerChangeTokens:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000027bc8
- (void)fetchRecordZoneChangesForZoneIDs:(id)arg1 reason:(id)arg2 ignoreServerChangeTokens:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000027507
- (void)fetchRecordZoneChangesWithReason:(id)arg1 ignoreServerChangeTokens:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000027396
- (void)_handleDatabaseNotificationWithScope:(long long)arg1 notificationID:(id)arg2 ignoreServerChangeTokens:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000026c37
- (void)handleNotification:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000025e53
- (void)_processCloudObjectIDs:(id)arg1 operationQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000024e03
- (_Bool)_isRecognizedCloudObjectClass:(id)arg1;	// IMP=0x0010000000024b7f
- (void)_processFetchedCloudObjectsWithObjectIDs:(id)arg1 withManagedObjectContext:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000245ba
- (void)_processFetchedCloudObjectsWithObjectIDs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000024500
- (void)processObjectIDs:(id)arg1 operationQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002435a
- (void)retryProcessingCloudObjects;	// IMP=0x001000000002424a
- (void)processAllDirtyCloudObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000023fa2
- (void)processPendingToMergeObjectIDs:(id)arg1 operationQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002318a
- (void)addOperationToMergeLocalObjectsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000021bc9
- (void)processPendingCloudObjectsWithLabel:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000002093e
- (void)processPendingCloudObjects;	// IMP=0x0010000000020918
- (void)addOperationToProcessObjectsWithLabel:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000020644
- (void)_addOperationToProcessBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000020012
- (void)contextDidSave:(id)arg1;	// IMP=0x001000000001f572
- (id)operationToSaveZonesForZoneIDs:(id)arg1;	// IMP=0x001000000001ead4
- (id)operationToSaveZonesIfNecessary;	// IMP=0x001000000001e597
- (void)addDependenciesForModifyRecordsOperation:(id)arg1;	// IMP=0x001000000001dfd4
- (void)recursiveCancelDependentOperations:(id)arg1;	// IMP=0x001000000001dcca
- (_Bool)partialError:(id)arg1 containsErrorCode:(long long)arg2;	// IMP=0x001000000001da83
- (void)handleGenericPartialFailuresForError:(id)arg1 operation:(id)arg2;	// IMP=0x001000000001b5a9
- (void)modifyRecordsOperation:(id)arg1 didCompleteWithSavedRecords:(id)arg2 deletedRecordIDs:(id)arg3 rootRecordIDsByShareID:(id)arg4 error:(id)arg5;	// IMP=0x001000000001aa14
- (void)modifyRecordsOperation:(id)arg1 perDeleteRecordIDCompletion:(id)arg2 rootRecordIDsByShareID:(id)arg3 context:(id)arg4 onProcessingQueue:(_Bool)arg5 error:(id)arg6;	// IMP=0x0010000000019ebb
- (void)modifyRecordsOperation:(id)arg1 perSaveRecordCompletion:(id)arg2 context:(id)arg3 onProcessingQueue:(_Bool)arg4 error:(id)arg5;	// IMP=0x00100000000195bd
- (void)addCallbackBlocksToModifyRecordsOperation:(id)arg1 rootRecordIDsByShareID:(id)arg2;	// IMP=0x001000000001905b
- (id)operationToModifyRecordsToSave:(id)arg1 delete:(id)arg2 rootRecordIDsByShareID:(id)arg3 database:(id)arg4;	// IMP=0x0010000000018a76
- (id)operationsToModifyRecordsToSave:(id)arg1 delete:(id)arg2 rootRecordIDsByShareID:(id)arg3 database:(id)arg4;	// IMP=0x00100000000187a6
- (id)operationsToModifyRecordsForCloudObjectsToSave:(id)arg1 delete:(id)arg2 deleteShares:(id)arg3 operationGroupName:(id)arg4 addDependencies:(_Bool)arg5;	// IMP=0x0010000000016370
- (void)_addModifyRecordsOperationsWithCloudObjectsToSave:(id)arg1 delete:(id)arg2 operationGroupName:(id)arg3 waitForDependencies:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000015fae
- (void)addModifyRecordsOperationsWithCloudObjectsToSave:(id)arg1 delete:(id)arg2 operationGroupName:(id)arg3 waitForDependencies:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000015b78
- (void)deleteCloudObjects:(id)arg1 operationGroupName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000015b4b
- (void)deleteSharesForObjects:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000014cb7
- (void)pushCloudObjects:(id)arg1 operationGroupName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000014c8d
- (void)didFetchShare:(id)arg1 context:(id)arg2;	// IMP=0x0010000000014795
- (void)fetchOperation:(id)arg1 didCompleteWithRecordsByRecordID:(id)arg2 error:(id)arg3;	// IMP=0x001000000001459e
- (void)fetchOperation:(id)arg1 fetchedRecord:(id)arg2 recordID:(id)arg3 error:(id)arg4;	// IMP=0x0010000000013e98
- (void)fetchOperation:(id)arg1 progressWithRecordID:(id)arg2 progress:(double)arg3;	// IMP=0x0010000000013d30
- (id)operationToFetchRecordIDs:(id)arg1 database:(id)arg2;	// IMP=0x0010000000013674
- (id)operationsToFetchRecordIDs:(id)arg1 database:(id)arg2;	// IMP=0x0010000000013363
- (id)operationsToFetchRecordIDs:(id)arg1 operationGroupName:(id)arg2;	// IMP=0x0010000000012e90
- (void)addFetchOperationsForRecordIDs:(id)arg1 operationGroupName:(id)arg2 runExclusively:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000001291d
- (void)fetchRecordIDs:(id)arg1 operationGroupName:(id)arg2 runExclusively:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000127dc
- (id)newPlaceholderObjectForRecordID:(id)arg1 account:(id)arg2 recordType:(id)arg3 context:(id)arg4;	// IMP=0x0010000000012703
- (id)newCloudObjectForRecord:(id)arg1 context:(id)arg2;	// IMP=0x001000000001263a
- (id)existingCloudObjectForRecordID:(id)arg1 recordType:(id)arg2 context:(id)arg3;	// IMP=0x00100000000123d0
- (id)existingCloudObjectForRecord:(id)arg1 context:(id)arg2;	// IMP=0x001000000001230b
- (void)updateUserRecordWithUpdateFunction:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011ffb
- (void)operationQueueFetchUserRecordWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011f68
- (void)fetchUserRecordWithAccountID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011e62
- (void)fetchUserRecordWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011ded
- (void)fetchUserRecordWithContainer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011d80
- (id)fetchUserRecordOperationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000011d03
- (id)fetchUserRecordOperationWithContainer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000116dd
- (void)updateAccountStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000001126a
@property(nonatomic) long long accountStatus;
- (void)finishOperationsForRecordID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010913
- (_Bool)canRetryImmediatelyAfterError:(id)arg1;	// IMP=0x00100000000105c3
- (double)timeIntervalToRetryAfterFromError:(id)arg1;	// IMP=0x00100000000101f5
- (_Bool)isInternetReachable;	// IMP=0x001000000000fdb9
- (_Bool)isFetchingAllRecordZones;	// IMP=0x001000000000fc43
- (void)deleteRecordZonesWithZoneIDs:(id)arg1 markZonesAsUserPurged:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000f459
- (void)configureOperation:(id)arg1;	// IMP=0x001000000000f2f4
- (void)clearPendingActivity;	// IMP=0x001000000000efe0
- (void)cancelEverythingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000e6de
- (void)_syncWithReason:(id)arg1 ignoreServerChangeTokens:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000e0c5
- (void)syncWithReason:(id)arg1 discretionary:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000c970
- (_Bool)retryPerformingCloudSchemaCatchUpSync;	// IMP=0x001000000000c6b4
- (_Bool)_generateAndSavePersonIDSaltIfNeeded:(id)arg1;	// IMP=0x001000000000c3ce
- (id)allDirtyCloudObjectIDsInContext:(id)arg1;	// IMP=0x001000000000c2e4
- (id)allCloudObjectIDsOfClassesPassingTest:(CDUnknownBlockType)arg1 inContext:(id)arg2;	// IMP=0x001000000000c00d
- (id)allCloudObjectIDsInContext:(id)arg1;	// IMP=0x001000000000bfba
- (id)allCloudObjectsOfClassesPassingTest:(CDUnknownBlockType)arg1 inContext:(id)arg2;	// IMP=0x001000000000bccc
- (id)allCloudObjectsInContext:(id)arg1;	// IMP=0x001000000000bc79
- (void)receivedZoneNotFound:(id)arg1 operation:(id)arg2;	// IMP=0x001000000000ba94
- (id)allZoneIDs;	// IMP=0x001000000000b9cd
- (MISSING_TYPE *)configurationDump;	// IMP=0x001000000000b175
- (id)status;	// IMP=0x001000000000b11f
- (void)addStateHandler;	// IMP=0x001000000000ad60
- (void)addStateHandlerWithName:(const char *)arg1 stateBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000a9a3
- (void)printOperationQueue;	// IMP=0x001000000000a674
- (_Bool)hasPendingOperations;	// IMP=0x001000000000a62c
- (void)cloudKitAccountChanged:(id)arg1;	// IMP=0x001000000000a409
- (void)reachabilityChanged:(id)arg1;	// IMP=0x001000000000a080
@property(readonly, nonatomic) NSDictionary *cloudObjectClassesByRecordType;
- (void)handleUnrecoverableError;	// IMP=0x0010000000009894
- (void)updateSelectorDelayers;	// IMP=0x001000000000956b
- (void)updateConfiguration;	// IMP=0x001000000000953d
- (void)disableCloudSyncingIfCurrentVersionNotSuppported;	// IMP=0x00100000000092d8
- (_Bool)_isCloudKitAccountAvailableWithManagedObjectContext:(id)arg1 requireActive:(_Bool)arg2;	// IMP=0x001000000000927d
- (_Bool)isCloudKitAccountAvailableRequiringActive:(_Bool)arg1;	// IMP=0x0010000000009149
- (_Bool)isCloudKitAccountAvailable;	// IMP=0x0010000000009135
- (_Bool)isReadyToSync;	// IMP=0x0010000000009121
- (_Bool)isReadyToSyncWithActiveAccountAvailable:(_Bool)arg1;	// IMP=0x001000000000906f
- (id)readinessLoggingDescription;	// IMP=0x0010000000008ed5
- (id)primaryCloudKitAccountInContext:(id)arg1;	// IMP=0x0010000000008e20
- (id)cloudKitAccountsInContext:(id)arg1;	// IMP=0x0010000000008e07
- (_Bool)notificationContainsCloudContextInternalChangesOnly:(id)arg1;	// IMP=0x0010000000008d26
- (id)batchFetchHelperWithContext:(id)arg1;	// IMP=0x0010000000008c22
- (id)serverChangeTokenContext;	// IMP=0x0010000000008bce
- (id)internalContextWithBatchFetchHelper;	// IMP=0x0010000000008b31
- (id)mergeLocalObjectsWriteContext;	// IMP=0x0010000000008ae2
- (id)mergeLocalObjectsFetchContext;	// IMP=0x0010000000008a93
- (void)performAndWaitContextWithBatchFetchHelper:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008985
- (id)contextWithBatchFetchHelper;	// IMP=0x0010000000008916
- (id)context;	// IMP=0x00100000000088ff
- (id)contextWithQueryGenerationTokenEnabled:(_Bool)arg1;	// IMP=0x001000000000889e
- (id)newBackgroundContext;	// IMP=0x0010000000008850
- (void)dealloc;	// IMP=0x0010000000008666
- (id)containerForAccountID:(id)arg1;	// IMP=0x0010000000008400
- (void)clearContainers;	// IMP=0x001000000000835d
- (void)observePersonIDSaltChanges;	// IMP=0x00100000000079c1
- (void)resetPrimaryCloudKitAccountPersonIDWithError:(id)arg1;	// IMP=0x0010000000007772
- (void)savePrimaryCloudKitAccountPersonIDHashedWithSalt:(id)arg1;	// IMP=0x001000000000748c
- (id)hashedAccountPersonIDWithSalt:(id)arg1;	// IMP=0x001000000000747f
- (void)pq_unregisterForBuddy;	// IMP=0x0010000000007373
- (void)registerForBuddy;	// IMP=0x0010000000007098
- (void)bootstrapSyncingOnLaunchIfSystemReady;	// IMP=0x0010000000006ddf
- (id)initWithStoreController:(id)arg1;	// IMP=0x0010000000005c61

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

