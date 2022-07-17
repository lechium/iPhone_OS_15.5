//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKDatabase, CKRecordZone, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface CloudSettingStore : NSObject
{
    CKDatabase *_database;	// 8 = 0x8
    CKRecordZone *_cloudSettingsRecordZone;	// 16 = 0x10
    NSOperationQueue *_cloudSettingsOperationQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_internalQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_completionHandlerQueue;	// 40 = 0x28
    CKContainer *_container;	// 48 = 0x30
}

+ (id)cloudSettingsRecordZoneID;	// IMP=0x002000000001e4e9
+ (id)recordZoneSubscriptionID;	// IMP=0x001000000001e4dc
- (void).cxx_destruct;	// IMP=0x0020000000023c0e
@property(readonly, nonatomic) CKContainer *container; // @synthesize container=_container;
- (void)_scheduleOperation:(id)arg1 inOperationGroup:(id)arg2 operationQueue:(id)arg3;	// IMP=0x0010000000023a47
- (void)_createCloudSettingsRecordZoneInOperationGroup:(id)arg1 withRetryManager:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000022fed
- (void)fetchCloudSettingsZoneSubscriptionInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000022c0b
- (void)createCloudSettingsRecordZoneInOperationGroup:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000022b8c
- (void)deleteCloudSettingsZoneInOperationGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000022851
- (void)clearCachedCloudSettingsRecordZone;	// IMP=0x00100000000227a7
- (void)deleteCloudSettingsRecords:(id)arg1 inOperationGroup:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000002241d
- (void)_saveCloudSettingsRecords:(id)arg1 retryManager:(id)arg2 inOperationGroup:(id)arg3 clientChangeTokenData:(id)arg4 mergeHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000021004
- (void)_saveCloudSettingsRecords:(id)arg1 inOperationGroup:(id)arg2 clientChangeTokenData:(id)arg3 mergeHandler:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000020f2c
- (void)saveCloudSettingsRecords:(id)arg1 createCloudSettingsZoneIfMissing:(_Bool)arg2 inOperationGroup:(id)arg3 clientChangeTokenData:(id)arg4 mergeHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000207b1
- (void)_saveRecordZoneSubscriptionForZoneID:(id)arg1 subscriptionID:(id)arg2 inOperationGroup:(id)arg3 operationQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000002031f
- (void)saveCloudSettingsZoneSubscriptionInOperationGroup:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001ff30
- (void)fetchNumberOfDevicesInSyncCircleInOperationGroup:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000001fded
- (void)_fetchRecordsOnInternalQueueWithRetryManager:(id)arg1 serverChangeToken:(id)arg2 recordChangedBlock:(CDUnknownBlockType)arg3 recordWithIDWasDeletedBlock:(CDUnknownBlockType)arg4 inOperationGroup:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000001eb16
- (void)_fetchRecordsOnInternalQueueWithServerChangeToken:(id)arg1 recordChangedBlock:(CDUnknownBlockType)arg2 recordWithIDWasDeletedBlock:(CDUnknownBlockType)arg3 inOperationGroup:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000001ea3e
- (void)fetchCloudSettingsRecordChangesSinceServerChangeToken:(id)arg1 inOperationGroup:(id)arg2 recordChangedBlock:(CDUnknownBlockType)arg3 recordWithIDWasDeletedBlock:(CDUnknownBlockType)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x001000000001e7af
- (id)createOperationGroupWithName:(id)arg1 useLargerExpectedSendSize:(_Bool)arg2;	// IMP=0x001000000001e72e
- (id)initWithContainer:(id)arg1;	// IMP=0x001000000001e4f3

@end
