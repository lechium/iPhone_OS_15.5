//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FCCKContentDatabase, NSArray, NSError, NSMutableArray, NSMutableDictionary;

@interface FCCKContentBatchedFetchRecordsOperation
{
    FCCKContentDatabase *_database;	// 8 = 0x8
    NSArray *_recordIDs;	// 16 = 0x10
    NSArray *_desiredKeys;	// 24 = 0x18
    unsigned long long _maxBatchSize;	// 32 = 0x20
    CDUnknownBlockType _fetchRecordsCompletionBlock;	// 40 = 0x28
    NSMutableArray *_remainingRecordIDBatches;	// 48 = 0x30
    NSMutableDictionary *_recordsByRecordID;	// 56 = 0x38
    NSMutableDictionary *_errorsByRecordID;	// 64 = 0x40
    NSError *_operationError;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000024e191
- (void)operationWillFinishWithError:(id)arg1;	// IMP=0x000000000024daeb
- (void)resetForRetry;	// IMP=0x000000000024dac8
- (void)performOperation;	// IMP=0x000000000024d93b
- (void)prepareOperation;	// IMP=0x000000000024d83f
- (_Bool)validateOperation;	// IMP=0x000000000024d71b
- (id)init;	// IMP=0x000000000024d67a

@end

