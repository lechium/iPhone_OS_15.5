//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SiriCoreSQLiteDatabase;

@interface SiriCoreSyncDatabase : NSObject
{
    NSString *_path;	// 8 = 0x8
    SiriCoreSQLiteDatabase *_db;	// 16 = 0x10
    _Bool _inTransaction;	// 24 = 0x18
    _Bool _debugMode;	// 25 = 0x19
}

+ (void)removeCurrentSyncDatabase;	// IMP=0x000000000002cbc8
+ (id)currentSyncDatabase;	// IMP=0x000000000002ca5c
- (void).cxx_destruct;	// IMP=0x000000000002ef46
@property(nonatomic) _Bool debugMode; // @synthesize debugMode=_debugMode;
@property(nonatomic) _Bool inTransaction; // @synthesize inTransaction=_inTransaction;
- (_Bool)_enumerateKey:(id)arg1 updatedAfter:(id)arg2 fromTable:(id)arg3 usingBlock:(CDUnknownBlockType)arg4 error:(id *)arg5;	// IMP=0x000000000002e66e
- (_Bool)enumerateSentItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000002e648
- (_Bool)enumerateRemovalsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000002e622
- (_Bool)enumerateItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000002e5fc
- (int)_countKey:(id)arg1 fromTable:(id)arg2 updatedAfter:(id)arg3 error:(id *)arg4;	// IMP=0x000000000002e3f2
- (int)countSentItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002e3d3
- (int)countItemsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002e3b4
- (int)countRemovalsOfKey:(id)arg1 updatedAfter:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002e395
- (_Bool)_insertSyncRec:(id)arg1 intoTable:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002dfe1
- (_Bool)markAsSent:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002dfc5
- (_Bool)removeAllItemsOfKey:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002dde7
- (_Bool)remove:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002da17
- (_Bool)donate:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002d9fb
- (_Bool)succeedOrRollbackOnFail:(id)arg1 error:(id *)arg2 whileExecuting:(CDUnknownBlockType)arg3;	// IMP=0x000000000002d899
- (_Bool)_executeStatement:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002d79d
- (_Bool)rollbackTransactionWithError:(id *)arg1;	// IMP=0x000000000002d698
- (_Bool)commitTransactionWithError:(id *)arg1;	// IMP=0x000000000002d593
- (_Bool)beginTransactionWithError:(id *)arg1;	// IMP=0x000000000002d492
- (_Bool)closeWithError:(id *)arg1;	// IMP=0x000000000002d47c
- (_Bool)openWithError:(id *)arg1;	// IMP=0x000000000002d466
- (_Bool)prepare;	// IMP=0x000000000002cf25
- (id)initWithPath:(id)arg1;	// IMP=0x000000000002ce5e

@end

