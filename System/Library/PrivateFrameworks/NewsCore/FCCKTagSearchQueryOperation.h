//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKQueryCursor, FCCKContentDatabase, NSArray, NSError, NSString;

@interface FCCKTagSearchQueryOperation
{
    FCCKContentDatabase *_database;	// 8 = 0x8
    unsigned long long _resultsLimit;	// 16 = 0x10
    NSString *_searchString;	// 24 = 0x18
    long long _tagType;	// 32 = 0x20
    CKQueryCursor *_cursor;	// 40 = 0x28
    NSArray *_desiredKeys;	// 48 = 0x30
    NSString *_locale;	// 56 = 0x38
    CDUnknownBlockType _queryCompletionHandler;	// 64 = 0x40
    NSString *_tagTypeString;	// 72 = 0x48
    NSArray *_resultRecords;	// 80 = 0x50
    CKQueryCursor *_resultCursor;	// 88 = 0x58
    NSError *_resultError;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000001c8e99
- (void)operationWillFinishWithError:(id)arg1;	// IMP=0x00000000001c8db5
- (void)resetForRetry;	// IMP=0x00000000001c8d8b
- (void)performOperation;	// IMP=0x00000000001c8037
- (void)prepareOperation;	// IMP=0x00000000001c7fc4
- (_Bool)validateOperation;	// IMP=0x00000000001c7c0e

@end
