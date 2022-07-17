//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMBCloudPushObserver-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class CKContainer, CKDatabase, HMDCloudCache, HMDCloudDataSyncStateFilter, HMDCloudHomeManagerZone, HMDCloudLegacyZone, HMDCloudMetadataZone, HMDSyncOperationManager, HMFMessageDispatcher, NSData, NSMutableArray, NSObject, NSString;
@protocol HMDCloudManagerDataSource, HMDCloudManagerDelegate, HMMLogEventSubmitting, OS_dispatch_queue, OS_dispatch_source, OS_os_log;

@interface HMDCloudManager : HMFObject <HMBCloudPushObserver, HMFLogging>
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    _Bool _accountActive;	// 16 = 0x10
    _Bool _cloudHomeDataRecordExists;	// 17 = 0x11
    _Bool _keychainSyncEnabled;	// 18 = 0x12
    _Bool _firstV3FetchRun;	// 19 = 0x13
    _Bool _firstDBQueryRun;	// 20 = 0x14
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    id <HMDCloudManagerDelegate> _delegate;	// 32 = 0x20
    id <HMDCloudManagerDataSource> _dataSource;	// 40 = 0x28
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 48 = 0x30
    CKContainer *_container;	// 56 = 0x38
    CKDatabase *_database;	// 64 = 0x40
    HMDCloudCache *_cloudCache;	// 72 = 0x48
    HMFMessageDispatcher *_configSyncDispatcher;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_workQueue;	// 88 = 0x58
    CDUnknownBlockType _fetchCompletionHandler;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_clientCallbackQueue;	// 104 = 0x68
    NSObject<OS_dispatch_source> *_retryTimer;	// 112 = 0x70
    NSObject<OS_dispatch_source> *_pollTimer;	// 120 = 0x78
    NSObject<OS_dispatch_source> *_controllerKeyPollTimer;	// 128 = 0x80
    NSObject<OS_dispatch_source> *_watchdogControllerKeyPollTimer;	// 136 = 0x88
    CDUnknownBlockType _cloudDataDeletedNotificationHandler;	// 144 = 0x90
    CDUnknownBlockType _cloudMetadataDeletedNotificationHandler;	// 152 = 0x98
    CDUnknownBlockType _controllerKeyAvailableNotificationHandler;	// 160 = 0xa0
    HMDCloudDataSyncStateFilter *_cloudDataSyncStateFilter;	// 168 = 0xa8
    HMFMessageDispatcher *_msgDispatcher;	// 176 = 0xb0
    HMDSyncOperationManager *_syncManager;	// 184 = 0xb8
    NSMutableArray *_currentBackoffTimerValuesInMinutes;	// 192 = 0xc0
    CDUnknownBlockType _dataDecryptionFailedHandler;	// 200 = 0xc8
    CDUnknownBlockType _accountActiveUpdateHandler;	// 208 = 0xd0
}

+ (id)logCategory;	// IMP=0x000000000036f27e
- (void).cxx_destruct;	// IMP=0x000000000035c7f1
@property(nonatomic, getter=isFirstDBQueryRun) _Bool firstDBQueryRun; // @synthesize firstDBQueryRun=_firstDBQueryRun;
@property(nonatomic, getter=isFirstV3FetchRun) _Bool firstV3FetchRun; // @synthesize firstV3FetchRun=_firstV3FetchRun;
@property(copy, nonatomic) CDUnknownBlockType accountActiveUpdateHandler; // @synthesize accountActiveUpdateHandler=_accountActiveUpdateHandler;
@property(copy, nonatomic) CDUnknownBlockType dataDecryptionFailedHandler; // @synthesize dataDecryptionFailedHandler=_dataDecryptionFailedHandler;
@property(retain, nonatomic) NSMutableArray *currentBackoffTimerValuesInMinutes; // @synthesize currentBackoffTimerValuesInMinutes=_currentBackoffTimerValuesInMinutes;
@property(nonatomic) __weak HMDSyncOperationManager *syncManager; // @synthesize syncManager=_syncManager;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(retain, nonatomic) HMDCloudDataSyncStateFilter *cloudDataSyncStateFilter; // @synthesize cloudDataSyncStateFilter=_cloudDataSyncStateFilter;
@property(copy, nonatomic) CDUnknownBlockType controllerKeyAvailableNotificationHandler; // @synthesize controllerKeyAvailableNotificationHandler=_controllerKeyAvailableNotificationHandler;
@property(copy, nonatomic) CDUnknownBlockType cloudMetadataDeletedNotificationHandler; // @synthesize cloudMetadataDeletedNotificationHandler=_cloudMetadataDeletedNotificationHandler;
@property(copy, nonatomic) CDUnknownBlockType cloudDataDeletedNotificationHandler; // @synthesize cloudDataDeletedNotificationHandler=_cloudDataDeletedNotificationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *watchdogControllerKeyPollTimer; // @synthesize watchdogControllerKeyPollTimer=_watchdogControllerKeyPollTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *controllerKeyPollTimer; // @synthesize controllerKeyPollTimer=_controllerKeyPollTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *pollTimer; // @synthesize pollTimer=_pollTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *retryTimer; // @synthesize retryTimer=_retryTimer;
@property(nonatomic) _Bool keychainSyncEnabled; // @synthesize keychainSyncEnabled=_keychainSyncEnabled;
@property(nonatomic) _Bool cloudHomeDataRecordExists; // @synthesize cloudHomeDataRecordExists=_cloudHomeDataRecordExists;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientCallbackQueue; // @synthesize clientCallbackQueue=_clientCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) HMFMessageDispatcher *configSyncDispatcher; // @synthesize configSyncDispatcher=_configSyncDispatcher;
@property(retain, nonatomic) HMDCloudCache *cloudCache; // @synthesize cloudCache=_cloudCache;
@property(retain, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) __weak id <HMDCloudManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) __weak id <HMDCloudManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(nonatomic) _Bool accountActive; // @synthesize accountActive=_accountActive;
- (void)handler:(id)arg1 didReceiveCKNotification:(id)arg2;	// IMP=0x000000000035c32c
- (void)handler:(id)arg1 didReceivePushForTopic:(id)arg2;	// IMP=0x000000000035c260
- (void)_fetchDatabaseZoneChangesCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000035bd6f
- (void)cacheDatabaseServerToken;	// IMP=0x000000000035bcfe
- (void)fetchDatabaseZoneChanges;	// IMP=0x000000000035bbd1
- (void)_scheduleZoneFetch:(id)arg1;	// IMP=0x000000000035b6fb
- (void)registerForPushNotifications;	// IMP=0x000000000035b67d
- (void)_setupSubscriptionForZone:(id)arg1;	// IMP=0x000000000035b40b
- (void)_registerForProxSetupNotifications;	// IMP=0x000000000035b374
- (void)_auditProxSetupNotification:(id)arg1;	// IMP=0x000000000035b221
- (void)_stopControllerKeyPollTimer;	// IMP=0x000000000035b0e7
- (void)_startControllerKeyPollTimerWithValue:(long long)arg1;	// IMP=0x000000000035ae6a
- (void)_startControllerKeyPollTimerWithBackoff;	// IMP=0x000000000035abe7
- (void)_startControllerKeyPollTimer;	// IMP=0x000000000035ab85
- (void)_stopWatchdogControllerKeyPollTimer;	// IMP=0x000000000035aa4b
- (void)_startWatchdogControllerKeyPollTimer;	// IMP=0x000000000035a7e1
- (void)_handleControllerKeyAvailable;	// IMP=0x000000000035a5b5
- (void)_handleKeychainSyncStateChanged:(_Bool)arg1;	// IMP=0x000000000035a37e
- (void)handleKeychainStateChangedNotification:(id)arg1;	// IMP=0x000000000035a2c7
- (void)_stopFetchPollTimer;	// IMP=0x000000000035a18d
- (void)_startFetchPollTimer;	// IMP=0x0000000000359e76
- (void)_stopFetchRetryTimer;	// IMP=0x0000000000359d3c
- (void)_startFetchRetryTimer;	// IMP=0x0000000000359ab9
- (void)_updateServerTokenStatusOnCloudFilter;	// IMP=0x0000000000359a1c
- (void)updateServerTokenStatusOnCloudFilter;	// IMP=0x00000000003599ab
- (void)initializeServerTokenStatusOnCloudFilter;	// IMP=0x00000000003598f3
- (_Bool)_validFetchRetryCKErrorCode:(long long)arg1;	// IMP=0x00000000003598dd
- (void)_forceCleanCloud:(_Bool)arg1 fetchTransaction:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000003595f3
- (void)updateCloudDataSyncFilterState:(_Bool)arg1;	// IMP=0x00000000003595a7
- (void)_accountIsActive;	// IMP=0x000000000035928b
- (void)_createZoneAndFetchChanges:(CDUnknownBlockType)arg1;	// IMP=0x0000000000358f83
- (void)_verifyZonesExist:(id)arg1 zoneIndex:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000358c07
- (void)_resetHomeDataRecordState;	// IMP=0x0000000000358b9e
- (id)_changeTokenFromData:(id)arg1;	// IMP=0x0000000000358905
- (void)_handleAccountStatus:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000358699
- (void)updateAccountStatusChanged:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003585e2
- (void)_processFetchCompletedWithError:(id)arg1 serverToken:(id)arg2 fetchTransaction:(id)arg3 migrationOptions:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5 moreRecordsComing:(_Bool)arg6 emptyRecord:(_Bool)arg7;	// IMP=0x0000000000357c13
- (_Bool)_processFetchedTransaction:(id)arg1;	// IMP=0x0000000000357267
- (void)_fetchLegacyTransaction:(id)arg1 forceFetch:(_Bool)arg2 accountCompletionHandler:(CDUnknownBlockType)arg3 dataCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000003562c7
- (void)fetchLegacyTransaction:(id)arg1 forceFetch:(_Bool)arg2 accountCompletionHandler:(CDUnknownBlockType)arg3 dataCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000003561b4
- (void)setAccountActiveUpdateCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000356103
- (void)setDataDecryptionFailedCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000356052
- (void)setControllerKeyAvailableNotificationBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000355fa1
- (void)setCloudMetadataDeletedNotificationBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000355ef0
- (void)setCloudDataDeletedNotificationBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000355e3f
- (void)setDataAvailableFromCloudCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000355d8e
- (void)fetchCurrentAccountStateWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000355b83
- (id)_serverTokenData;	// IMP=0x0000000000355a9f
@property(readonly, nonatomic) NSData *serverTokenData;
@property(readonly, nonatomic) _Bool decryptionFailed;
- (void)_resetCloudCache:(CDUnknownBlockType)arg1;	// IMP=0x0000000000355788
- (void)resetCloudCache:(CDUnknownBlockType)arg1;	// IMP=0x00000000003556d7
- (void)_resetCloudServerTokenData;	// IMP=0x0000000000355570
- (void)resetCloudServerTokenData:(id)arg1;	// IMP=0x00000000003554ff
- (void)_resetCloudDataAndDeleteMetadataForCurrentAccount:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000355095
- (void)_resetCloudZonesIgnoreHomeManager:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000354e00
- (void)_verifyAndRemoveAllHomeZonesCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000354ac8
- (void)_verifyAndRemoveZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000354860
- (void)verifyAndRemoveZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000354784
- (void)_removeAllHomeZonesCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000003543b9
- (void)resetCloudDataAndDeleteMetadataForCurrentAccount:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003542c4
- (void)_fetchAndVerifyZoneRootRecord:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000353bbc
- (void)_uploadLegacyTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000353932
- (void)uploadLegacyTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000353818
- (void)_removeZonesTransactions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003535cf
- (void)removeZonesTransactions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003534f3
- (void)_uploadTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000353202
- (void)_checkZoneAndUploadTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000352e08
- (void)_verifyZoneHasBeenDeletedTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000035296a
- (void)_createZoneAndUploadTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003526b0
- (void)uploadTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000352596
- (void)_fetchTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000351a7a
- (void)fetchTransaction:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000035199e
- (void)_removeHomeZoneName:(id)arg1;	// IMP=0x000000000035186f
- (void)removeHomeZoneName:(id)arg1;	// IMP=0x0000000000351781
- (void)_addHomeZoneName:(id)arg1 owner:(id)arg2;	// IMP=0x00000000003515d9
- (void)addHomeZoneName:(id)arg1 owner:(id)arg2;	// IMP=0x00000000003514bf
@property(readonly, nonatomic) HMDCloudHomeManagerZone *homeManagerZone;
@property(readonly, nonatomic) HMDCloudMetadataZone *metadataZone;
- (_Bool)legacyZoneHasRecordsAvaliable;	// IMP=0x00000000003513b1
@property(readonly, nonatomic) HMDCloudLegacyZone *legacyZone;
- (void)__deleteRecordWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000035105d
- (void)__deleteRecordZonesWithIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000350db9
- (void)__deleteRecordZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000350bf0
- (void)__saveRecordZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003508ec
- (void)__fetchRecordZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000003505ea
- (void)__fetchAllRecordZonesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000350424
- (void)__saveSubscription:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000350120
- (void)__fetchSubscriptionWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000034fe1e
- (void)__addCKDatabaseOperation:(id)arg1;	// IMP=0x000000000034fc62
- (void)dealloc;	// IMP=0x000000000034fbed
- (id)initWithMessageDispatcher:(id)arg1 cloudDataSyncStateFilter:(id)arg2 cloudCache:(id)arg3 delegate:(id)arg4 dataSource:(id)arg5 syncManager:(id)arg6 callbackQueue:(id)arg7 container:(id)arg8 logEventSubmitter:(id)arg9 workQueue:(id)arg10;	// IMP=0x000000000034f750
- (id)initWithMessageDispatcher:(id)arg1 cloudDataSyncStateFilter:(id)arg2 cloudCache:(id)arg3 delegate:(id)arg4 dataSource:(id)arg5 syncManager:(id)arg6 logEventSubmitter:(id)arg7 callbackQueue:(id)arg8;	// IMP=0x000000000034f4c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
