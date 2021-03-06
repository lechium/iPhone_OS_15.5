//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordID, IMDCKDatabaseManager, IMDRecordZoneManager, NSDate, NSError, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface IMDCKExitManager
{
    _Bool _fetchedExitDateOnLaunch;	// 8 = 0x8
    NSDate *_exitRecordDate;	// 16 = 0x10
    NSError *_errorFetchingExitDate;	// 24 = 0x18
    CKRecordID *_exitRecordID;	// 32 = 0x20
    NSNumber *_saltZoneCreatedOverride;	// 40 = 0x28
    NSNumber *_subscriptionCreatedOverride;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_ckQueue;	// 56 = 0x38
    IMDRecordZoneManager *_recordZoneManager;	// 64 = 0x40
    IMDCKDatabaseManager *_databaseManager;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x000000000001e308
@property(nonatomic) _Bool fetchedExitDateOnLaunch; // @synthesize fetchedExitDateOnLaunch=_fetchedExitDateOnLaunch;
@property(retain, nonatomic) IMDCKDatabaseManager *databaseManager; // @synthesize databaseManager=_databaseManager;
@property(retain, nonatomic) IMDRecordZoneManager *recordZoneManager; // @synthesize recordZoneManager=_recordZoneManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue; // @synthesize ckQueue=_ckQueue;
@property(retain, nonatomic) NSNumber *subscriptionCreatedOverride; // @synthesize subscriptionCreatedOverride=_subscriptionCreatedOverride;
@property(retain, nonatomic) NSNumber *saltZoneCreatedOverride; // @synthesize saltZoneCreatedOverride=_saltZoneCreatedOverride;
@property(retain, nonatomic) CKRecordID *exitRecordID; // @synthesize exitRecordID=_exitRecordID;
- (void)sendCloudKitZoneFetchRequestToNoteFeatureIsOn;	// IMP=0x000000000002138c
- (void)submitCloudKitAnalyticWithDictionary:(id)arg1 operationGroupName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000211c1
- (void)submitCloudKitMetricWithData:(id)arg1 operationGroupName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000021074
- (_Bool)_canSubmitCloudKitAnalytic;	// IMP=0x0000000000020fda
- (_Bool)_canSubmitCloudKitMetric;	// IMP=0x0000000000020f40
- (void)_submitCloudKitMetricWithOperationGroupName:(id)arg1 record:(id)arg2 ignoreZoneNotFoundError:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000020ba9
- (id)_modifiedOpGroupName:(id)arg1;	// IMP=0x0000000000020b45
- (id)_sharedCKUtilities;	// IMP=0x0000000000020b2c
- (void)_scheduleMetricOperation:(id)arg1;	// IMP=0x0000000000020a9a
- (void)submitCloudKitAnalyticWithOperationGroupName:(id)arg1 analyticDictionary:(id)arg2;	// IMP=0x0000000000020673
- (_Bool)_analyticZoneCreated;	// IMP=0x00000000000204dc
- (void)submitCloudKitMetricWithOperationGroupName:(id)arg1;	// IMP=0x000000000002033c
- (void)writeSyncCompletedRecordWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000202d4
- (void)writeInitialSyncCompletedRecordIfNeeded;	// IMP=0x00000000000200a8
- (_Bool)_subscriptionCreated;	// IMP=0x000000000001feb4
- (_Bool)_saltZoneCreated;	// IMP=0x000000000001fcce
- (void)_scheduleOperation:(id)arg1;	// IMP=0x000000000001fc92
- (id)exitConfiguration;	// IMP=0x000000000001fbd0
- (long long)derivedQualityOfService;	// IMP=0x000000000001fb3e
- (id)analyticZoneRecordID;	// IMP=0x000000000001fad8
- (id)syncCompleteRecordID;	// IMP=0x000000000001fa72
- (void)deleteExitRecordWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f6dc
- (void)_fetchExitRecordDateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f195
- (void)_evalToggleiCloudSettingsSwitch;	// IMP=0x000000000001f163
- (void)exitRecordDateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000001ed99
- (void)writeExitRecordWithDate:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001e8b0
- (void)handleNotificationForSubscriptionID:(id)arg1;	// IMP=0x000000000001e843
@property(retain, nonatomic) NSError *errorFetchingExitDate; // @synthesize errorFetchingExitDate=_errorFetchingExitDate;
@property(retain, nonatomic) NSDate *exitRecordDate; // @synthesize exitRecordDate=_exitRecordDate;
- (void)_setUpSubscription;	// IMP=0x000000000001e4f3
- (void)dealloc;	// IMP=0x000000000001e445
- (id)init;	// IMP=0x000000000001e3e8
- (id)initRecordZoneManager:(id)arg1 databaseManager:(id)arg2;	// IMP=0x000000000001e34d

@end

