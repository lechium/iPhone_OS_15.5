//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordID, FCCKContentDatabase, NSArray, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface FCCKContentBatchedRefreshRecordsOperation
{
    _Bool _checkForDeletions;	// 8 = 0x8
    FCCKContentDatabase *_database;	// 16 = 0x10
    NSArray *_recordIDs;	// 24 = 0x18
    NSDictionary *_changeTagsByRecordID;	// 32 = 0x20
    NSArray *_desiredKeys;	// 40 = 0x28
    CKRecordID *_canaryRecordID;	// 48 = 0x30
    CDUnknownBlockType _refreshRecordsCompletionBlock;	// 56 = 0x38
    NSMutableArray *_remainingRecordIDBatches;	// 64 = 0x40
    NSMutableSet *_refreshedRecordIDs;	// 72 = 0x48
    NSMutableDictionary *_updatedRecordsByRecordID;	// 80 = 0x50
    NSMutableSet *_deletedRecordIDs;	// 88 = 0x58
    NSMutableDictionary *_errorsByRecordID;	// 96 = 0x60
    NSError *_operationError;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000002297f1
- (void)resetForRetry;	// IMP=0x00000000002290ea
- (void)operationWillFinishWithError:(id)arg1;	// IMP=0x0000000000228fce
- (void)performOperation;	// IMP=0x0000000000228c9c
- (void)prepareOperation;	// IMP=0x0000000000228c4a
- (_Bool)validateOperation;	// IMP=0x0000000000228a01
- (id)init;	// IMP=0x0000000000228920

@end
