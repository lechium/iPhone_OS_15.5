//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKServerChangeToken, IMDRecordZoneManager, NSMutableDictionary, NSObject;
@protocol IMDCKSyncTokenStore, OS_dispatch_queue;

@interface IMDCKUpdateSyncController
{
    _Bool _fetchedChatsDuringLastSync;	// 8 = 0x8
    CKServerChangeToken *_latestSyncToken;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_ckQueue;	// 24 = 0x18
    IMDRecordZoneManager *_recordZoneManager;	// 32 = 0x20
    id <IMDCKSyncTokenStore> _syncTokenStore;	// 40 = 0x28
    NSMutableDictionary *_writeMsgIDToRowIDMap;	// 48 = 0x30
}

+ (id)fetchOperationFactory:(id)arg1 token:(id)arg2 batchSize:(unsigned long long)arg3 activity:(id)arg4;	// IMP=0x00000000000c8370
+ (id)_fetchUpdatesCKConfiguration:(id)arg1;	// IMP=0x00000000000c82e9
+ (id)_zoneChangesOptionsDictionaryUsingToken:(id)arg1 zoneID:(id)arg2 resultsLimit:(unsigned long long)arg3;	// IMP=0x00000000000c823f
+ (long long)stepAfter:(long long)arg1;	// IMP=0x00000000000c7304
+ (id)messageUpdateV1RecordType;	// IMP=0x00000000000c6680
+ (id)sharedInstance;	// IMP=0x00000000000c63df
@property(retain, nonatomic) NSMutableDictionary *writeMsgIDToRowIDMap; // @synthesize writeMsgIDToRowIDMap=_writeMsgIDToRowIDMap;
@property(nonatomic) _Bool fetchedChatsDuringLastSync; // @synthesize fetchedChatsDuringLastSync=_fetchedChatsDuringLastSync;
@property(retain, nonatomic) id <IMDCKSyncTokenStore> syncTokenStore; // @synthesize syncTokenStore=_syncTokenStore;
@property(retain, nonatomic) IMDRecordZoneManager *recordZoneManager; // @synthesize recordZoneManager=_recordZoneManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue; // @synthesize ckQueue=_ckQueue;
- (void)_scheduleOperation:(id)arg1;	// IMP=0x00000000000c8e8c
- (id)saveT2UpdatesOperationFactory:(id)arg1 token:(id)arg2 batchSize:(unsigned long long)arg3 recordNameToRowIDMap:(id)arg4 activity:(id)arg5;	// IMP=0x00000000000c89f8
- (id)saveT1UpdatesOperationFactory:(id)arg1 token:(id)arg2 batchSize:(unsigned long long)arg3 recordNameToRowIDMap:(id)arg4 activity:(id)arg5;	// IMP=0x00000000000c84f5
- (id)_writeUpdatesCKConfiguration:(id)arg1;	// IMP=0x00000000000c846e
- (id)_saveRecordsT2OperationWithMap:(id)arg1 activity:(id)arg2;	// IMP=0x00000000000c81b9
- (id)_saveRecordsT1OperationWithMap:(id)arg1 activity:(id)arg2;	// IMP=0x00000000000c8133
- (id)_fetchRecordsOperationWithActivity:(id)arg1;	// IMP=0x00000000000c80af
- (void)_onWriteT2Complete:(long long)arg1 error:(id)arg2 shouldWriteMore:(_Bool)arg3 activity:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000c7fd7
- (void)_onRecordT2Write:(id)arg1 error:(id)arg2 recordNameToItemMap:(id)arg3;	// IMP=0x00000000000c7dad
- (void)_writeT2RecordUpdatesWithType:(long long)arg1 activity:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c7a63
- (void)_onWriteT1Complete:(long long)arg1 error:(id)arg2 shouldWriteMore:(_Bool)arg3 activity:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000c798b
- (void)_onRecordT1Write:(id)arg1 error:(id)arg2 recordNameToRowIDMap:(id)arg3;	// IMP=0x00000000000c778f
- (void)_writeT1RecordUpdatesWithType:(long long)arg1 activity:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c7445
- (void)_writeUpdatesWithType:(long long)arg1 updateStep:(long long)arg2 activity:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c7324
- (void)_writeRecordsWithType:(long long)arg1 activity:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c72e7
- (_Bool)_zoneCreated;	// IMP=0x00000000000c7150
@property(retain, nonatomic) CKServerChangeToken *latestSyncToken; // @synthesize latestSyncToken=_latestSyncToken;
- (id)_changeTokenKey;	// IMP=0x00000000000c70a0
- (unsigned long long)_numberOfRecordsToFetchPerBatch;	// IMP=0x00000000000c7095
- (void)_onReadComplete:(long long)arg1 error:(id)arg2 activity:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c6cfe
- (void)_onRecordZoneFetchComplete:(id)arg1 token:(id)arg2 tokenData:(id)arg3 moreComing:(_Bool)arg4 error:(id)arg5;	// IMP=0x00000000000c6c75
- (void)_onChangeTokenUpdated:(id)arg1 token:(id)arg2 data:(id)arg3;	// IMP=0x00000000000c6bb3
- (void)_onRecordDeleted:(id)arg1 type:(id)arg2;	// IMP=0x00000000000c6b85
- (void)_onRecordRead:(id)arg1;	// IMP=0x00000000000c6a6d
- (void)_readRecordsWithType:(long long)arg1 attemptCount:(unsigned long long)arg2 activity:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000c67c6
- (void)syncWithType:(long long)arg1 withActivity:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000c668d
- (void)deleteUpdateSyncToken;	// IMP=0x00000000000c65de
- (void)clearLocalSyncState:(unsigned long long)arg1;	// IMP=0x00000000000c658a
- (void)dealloc;	// IMP=0x00000000000c6506
- (id)init;	// IMP=0x00000000000c64d0
- (id)initWithSyncTokenStore:(id)arg1;	// IMP=0x00000000000c6424

@end

