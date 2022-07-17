//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CKDDecryptRecordsOperation
{
    _Bool _forcePCSDecrypt;	// 8 = 0x8
    _Bool _started;	// 9 = 0x9
    _Bool _markedToFinish;	// 10 = 0xa
    NSMutableArray *_outstandingDecryptions;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_recordDecryptGroup;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_recordDecryptQueue;	// 32 = 0x20
    unsigned long long _maxUnwrapAttempts;	// 40 = 0x28
    NSDictionary *_webSharingIdentityDataByRecordID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002bed30
@property(retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID; // @synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID;
@property(nonatomic) unsigned long long maxUnwrapAttempts; // @synthesize maxUnwrapAttempts=_maxUnwrapAttempts;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recordDecryptQueue; // @synthesize recordDecryptQueue=_recordDecryptQueue;
@property(getter=isMarkedToFinish) _Bool markedToFinish; // @synthesize markedToFinish=_markedToFinish;
@property(getter=isStarted) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *recordDecryptGroup; // @synthesize recordDecryptGroup=_recordDecryptGroup;
@property(retain, nonatomic) NSMutableArray *outstandingDecryptions; // @synthesize outstandingDecryptions=_outstandingDecryptions;
@property(nonatomic) _Bool forcePCSDecrypt; // @synthesize forcePCSDecrypt=_forcePCSDecrypt;
- (_Bool)supportsClearAssetEncryption;	// IMP=0x00000000002bec0e
- (void)main;	// IMP=0x00000000002be9a1
- (id)_possiblyWrapError:(id)arg1 forRecordWithID:(id)arg2 withCode:(long long)arg3 format:(id)arg4;	// IMP=0x00000000002be78b
- (void)_finishDecryptOperation;	// IMP=0x00000000002be397
- (void)finishDecryption;	// IMP=0x00000000002be1e5
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000002bdd3e
- (id)_unwrapEncryptedPropertiesOnRecord:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2;	// IMP=0x00000000002bd7a4
- (id)_unwrapEncryptedPropertiesForRecordValueStore:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2;	// IMP=0x00000000002bcd3a
- (id)_unwrapPackageAssets:(id)arg1 inRecordWithID:(id)arg2 forField:(id)arg3 withPCS:(struct _OpaquePCSShareProtection *)arg4;	// IMP=0x00000000002bcb7c
- (id)_unwrapAssetKeyForAsset:(id)arg1 inRecordWithID:(id)arg2 forField:(id)arg3 withPCS:(struct _OpaquePCSShareProtection *)arg4;	// IMP=0x00000000002bc856
- (void)_handleProtectionDataForRecordInfo:(id)arg1;	// IMP=0x00000000002bc485
- (void)_handleShareProtectionDataForRecordInfo:(id)arg1;	// IMP=0x00000000002baf10
- (id)_decryptRecordPCSForRecord:(id)arg1 usingChainPCS:(id)arg2;	// IMP=0x00000000002ba862
- (id)_decryptRecordPCSForRecord:(id)arg1 usingSharePCS:(id)arg2;	// IMP=0x00000000002ba42d
- (id)_decryptRecordPCSForRecord:(id)arg1 usingZonePCS:(id)arg2;	// IMP=0x00000000002b9cf3
- (void)_handleZoneProtectionDataForRecordInfo:(id)arg1;	// IMP=0x00000000002b96ff
- (void)_decryptRecordInfo:(id)arg1 usingWebSharingIdentityData:(id)arg2;	// IMP=0x00000000002b9236
- (void)_decryptRecordInfo:(id)arg1;	// IMP=0x00000000002b8b18
- (void)_clearProtectionDataForRecordInfo:(id)arg1;	// IMP=0x00000000002b8903
- (_Bool)operationShouldBeFlowControlled;	// IMP=0x00000000002b88fb
- (_Bool)shouldCheckAppVersion;	// IMP=0x00000000002b88f3
- (void)_recordInfoWasDecrypted:(id)arg1 nextSteps:(CDUnknownBlockType)arg2;	// IMP=0x00000000002b8343
- (void)decryptRecord:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002b7f17
- (id)activityCreate;	// IMP=0x00000000002b7eee
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000002b7dac

@end
