//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface NNMKSQLiteConnection : NSObject
{
    _Bool _isInTransaction;	// 8 = 0x8
    struct sqlite3 *_db;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_dbQueue;	// 24 = 0x18
    NSString *_databasePath;	// 32 = 0x20
    NSMutableDictionary *_cachedPreparedStatementsBySQLPattern;	// 40 = 0x28
}

+ (_Bool)errorCodeMeansCorruptedDatabase:(int)arg1;	// IMP=0x0000000000039d72
- (void).cxx_destruct;	// IMP=0x000000000003ac8b
@property(retain, nonatomic) NSMutableDictionary *cachedPreparedStatementsBySQLPattern; // @synthesize cachedPreparedStatementsBySQLPattern=_cachedPreparedStatementsBySQLPattern;
@property(retain, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dbQueue; // @synthesize dbQueue=_dbQueue;
@property(nonatomic) _Bool isInTransaction; // @synthesize isInTransaction=_isInTransaction;
@property(nonatomic) struct sqlite3 *db; // @synthesize db=_db;
- (int)_runRetryingIfNeeded:(CDUnknownBlockType)arg1;	// IMP=0x000000000003ab10
- (id)_lastErrorMessage;	// IMP=0x000000000003aaa2
- (int)_lastErrorCode;	// IMP=0x000000000003aa56
- (int)_executeSQL:(id)arg1;	// IMP=0x000000000003a94e
- (int)_stepPreparedStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x000000000003a8e4
- (struct sqlite3_stmt *)_preparedStatementForPattern:(id)arg1 cacheStatement:(_Bool)arg2;	// IMP=0x000000000003a5d4
- (void)_closeDatabase;	// IMP=0x000000000003a255
- (_Bool)_openDatabaseWithPath:(id)arg1 errorCode:(int *)arg2;	// IMP=0x0000000000039d8e
- (_Bool)tableExists:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0000000000039ab6
- (id)lastErrorMessage;	// IMP=0x000000000003999a
- (int)lastErrorCode;	// IMP=0x00000000000398dd
- (_Bool)rollbackTransaction;	// IMP=0x00000000000397d1
- (_Bool)commitTransaction;	// IMP=0x00000000000396c5
- (_Bool)beginTransaction;	// IMP=0x00000000000395b9
- (int)executeSQL:(id)arg1;	// IMP=0x00000000000394b8
- (int)stepPreparedStatement:(struct sqlite3_stmt *)arg1;	// IMP=0x00000000000393f3
- (struct sqlite3_stmt *)preparedStatementForPattern:(id)arg1 cacheStatement:(_Bool)arg2;	// IMP=0x0000000000039271
- (struct sqlite3_stmt *)preparedStatementForPattern:(id)arg1;	// IMP=0x000000000003925a
- (void)dealloc;	// IMP=0x00000000000391d9
- (id)initWithPath:(id)arg1 errorCode:(int *)arg2;	// IMP=0x000000000003907f

@end
