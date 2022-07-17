//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet, _HDSQLiteStatementCacheStorage;

@interface HDSQLiteStatementCache : NSObject
{
    struct sqlite3 *_db;	// 8 = 0x8
    _HDSQLiteStatementCacheStorage *_defaultStatementStorage;	// 16 = 0x10
    _HDSQLiteStatementCacheStorage *_transactionStatementStorage;	// 24 = 0x18
    struct __CFSet *_activeStatements;	// 32 = 0x20
    struct __CFSet *_uncachedActiveStatements;	// 40 = 0x28
    _Bool _inTransaction;	// 48 = 0x30
    long long _faultCount;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000006c8107
@property(readonly, nonatomic) long long faultCount; // @synthesize faultCount=_faultCount;
- (void)clearCachedStatements;	// IMP=0x00000000006c7e83
- (void)checkInStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x00000000006c7d97
- (struct sqlite3_stmt *)checkOutCachedStatementForKey:(const char *)arg1 SQLGenerator:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x00000000006c7c4b
- (struct sqlite3_stmt *)checkOutStatementForSQL:(id)arg1 shouldCache:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000006c74ef
- (void)endTransaction;	// IMP=0x00000000006c7449
- (void)beginTransaction;	// IMP=0x00000000006c73bf
@property(readonly, copy, nonatomic) NSSet *allStatmentSQLStrings;
@property(readonly, nonatomic) long long count;
- (void)dealloc;	// IMP=0x00000000006c7073
- (id)initWithDatabase:(struct sqlite3 *)arg1;	// IMP=0x00000000006c6ff4
- (id)init;	// IMP=0x00000000006c6f7a

@end
