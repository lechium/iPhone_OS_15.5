//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKFetchRecordZoneChangesOperationCallbacks-Protocol.h>

@class CKFetchRecordZoneChangesOperationInfo, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet;
@protocol CKFetchRecordZoneChangesOperationCallbacks;

@interface CKFetchRecordZoneChangesOperation <CKFetchRecordZoneChangesOperationCallbacks>
{
    _Bool _fetchAllChanges;	// 8 = 0x8
    _Bool _shouldFetchAssetContents;	// 9 = 0x9
    _Bool _shouldReportAllPerItemFailures;	// 10 = 0xa
    CDUnknownBlockType _recordChangedBlock;	// 16 = 0x10
    CDUnknownBlockType _recordWasChangedBlock;	// 24 = 0x18
    CDUnknownBlockType _perRecordChangeCompletionBlock;	// 32 = 0x20
    CDUnknownBlockType _recordWithIDWasDeletedBlock;	// 40 = 0x28
    CDUnknownBlockType _recordZoneChangeTokensUpdatedBlock;	// 48 = 0x30
    CDUnknownBlockType _recordZoneFetchCompletionBlock;	// 56 = 0x38
    CDUnknownBlockType _fetchRecordZoneChangesCompletionBlock;	// 64 = 0x40
    NSArray *_recordZoneIDs;	// 72 = 0x48
    NSDictionary *_configurationsByRecordZoneID;	// 80 = 0x50
    NSMutableDictionary *_statusByZoneID;	// 88 = 0x58
    NSMutableSet *_zoneIDsWithPendingArchivedRecords;	// 96 = 0x60
    NSMutableDictionary *_perItemErrors;	// 104 = 0x68
    NSDictionary *_assetTransferOptionsByRecordTypeAndKey;	// 112 = 0x70
    long long _errorReportingStyle;	// 120 = 0x78
}

+ (void)applyDaemonCallbackInterfaceTweaks:(id)arg1;	// IMP=0x000000000011b8a0
- (void).cxx_destruct;	// IMP=0x000000000011babd
@property(nonatomic) long long errorReportingStyle; // @synthesize errorReportingStyle=_errorReportingStyle;
@property(nonatomic) _Bool shouldReportAllPerItemFailures; // @synthesize shouldReportAllPerItemFailures=_shouldReportAllPerItemFailures;
@property(retain, nonatomic) NSDictionary *assetTransferOptionsByRecordTypeAndKey; // @synthesize assetTransferOptionsByRecordTypeAndKey=_assetTransferOptionsByRecordTypeAndKey;
@property(retain, nonatomic) NSMutableDictionary *perItemErrors; // @synthesize perItemErrors=_perItemErrors;
@property(nonatomic) _Bool shouldFetchAssetContents; // @synthesize shouldFetchAssetContents=_shouldFetchAssetContents;
@property(retain, nonatomic) NSMutableSet *zoneIDsWithPendingArchivedRecords; // @synthesize zoneIDsWithPendingArchivedRecords=_zoneIDsWithPendingArchivedRecords;
@property(retain, nonatomic) NSMutableDictionary *statusByZoneID; // @synthesize statusByZoneID=_statusByZoneID;
@property(nonatomic) _Bool fetchAllChanges; // @synthesize fetchAllChanges=_fetchAllChanges;
@property(copy, nonatomic) NSDictionary *configurationsByRecordZoneID; // @synthesize configurationsByRecordZoneID=_configurationsByRecordZoneID;
@property(copy, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
- (id)activityCreate;	// IMP=0x000000000011b877
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x000000000011b06d
- (id)partialFailureForItemsInZone:(id)arg1;	// IMP=0x000000000011ad39
- (void)handleChangeSetCompletionForRecordZoneID:(id)arg1 serverChangeToken:(id)arg2 clientChangeTokenData:(id)arg3 recordChangesStatus:(long long)arg4 hasPendingArchivedRecords:(_Bool)arg5 error:(id)arg6 reply:(CDUnknownBlockType)arg7;	// IMP=0x000000000011a38f
- (void)handleDeleteForRecordID:(id)arg1 recordType:(id)arg2;	// IMP=0x0000000000119f6f
- (void)handleChangeForRecordID:(id)arg1 record:(id)arg2 error:(id)arg3;	// IMP=0x00000000001196ef
- (void)performCKOperation;	// IMP=0x00000000001191a6
- (_Bool)CKOperationShouldRun:(id *)arg1;	// IMP=0x00000000001190b9
- (_Bool)hasCKOperationCallbacksSet;	// IMP=0x0000000000118f26
- (long long)changeTypesFromSetCallbacks;	// IMP=0x0000000000118f1b
- (void)fillFromOperationInfo:(id)arg1;	// IMP=0x0000000000118dc8
- (void)fillOutOperationInfo:(id)arg1;	// IMP=0x0000000000118c32
- (id)relevantZoneIDs;	// IMP=0x0000000000118b73
- (id)recordZoneIDsWithPendingArchivedRecords;	// IMP=0x0000000000118b2b
- (id)recordZoneChangesStatusByZoneID;	// IMP=0x0000000000118ae3
@property(copy, nonatomic) CDUnknownBlockType fetchRecordZoneChangesCompletionBlock; // @synthesize fetchRecordZoneChangesCompletionBlock=_fetchRecordZoneChangesCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneFetchCompletionBlock; // @synthesize recordZoneFetchCompletionBlock=_recordZoneFetchCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordZoneChangeTokensUpdatedBlock; // @synthesize recordZoneChangeTokensUpdatedBlock=_recordZoneChangeTokensUpdatedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordWithIDWasDeletedBlock; // @synthesize recordWithIDWasDeletedBlock=_recordWithIDWasDeletedBlock;
@property(copy, nonatomic) CDUnknownBlockType perRecordChangeCompletionBlock; // @synthesize perRecordChangeCompletionBlock=_perRecordChangeCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType recordWasChangedBlock; // @synthesize recordWasChangedBlock=_recordWasChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordChangedBlock; // @synthesize recordChangedBlock=_recordChangedBlock;
- (id)initWithRecordZoneIDs:(id)arg1 configurationsByRecordZoneID:(id)arg2;	// IMP=0x00000000001171ff
- (id)init;	// IMP=0x0000000000117135
@property(copy, nonatomic) NSDictionary *optionsByRecordZoneID;
- (id)initWithRecordZoneIDs:(id)arg1 optionsByRecordZoneID:(id)arg2;	// IMP=0x000000000011c278

// Remaining properties
@property(readonly, nonatomic) id <CKFetchRecordZoneChangesOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(readonly, nonatomic) CKFetchRecordZoneChangesOperationInfo *operationInfo; // @dynamic operationInfo;

@end

