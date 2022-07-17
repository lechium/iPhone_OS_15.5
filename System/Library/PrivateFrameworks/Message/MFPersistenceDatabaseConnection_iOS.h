//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EmailDaemon/EDPersistenceDatabaseConnection.h>

@class _MFSearchMatcherContext;

@interface MFPersistenceDatabaseConnection_iOS : EDPersistenceDatabaseConnection
{
    void *_ICUSearchContext;	// 8 = 0x8
    _MFSearchMatcherContext *_CPSearchContext;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000140375
- (void)_logFileSystemStats;	// IMP=0x0000000000140130
- (void)_handleBusyError;	// IMP=0x0000000000140081
- (void)_handleIOError;	// IMP=0x000000000013ffd2
- (void)_handleDetachedDatabaseIOError;	// IMP=0x000000000013feb0
- (void)_handleInvalidDatabaseIOError;	// IMP=0x000000000013fe01
- (void)_handleProtectedDataIOError;	// IMP=0x000000000013fce1
- (void)_handleFullDatabase;	// IMP=0x000000000013fc24
- (void)_handleCorruptDatabase;	// IMP=0x000000000013fb60
- (void)handleSQLResult:(int)arg1 message:(id)arg2;	// IMP=0x000000000013f9e5
- (long long)transactionTypeForWriting;	// IMP=0x000000000013f9da
- (_Bool)performWithOptions:(unsigned long long)arg1 transactionError:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000013f8ae
- (int)configureSQLConnection;	// IMP=0x000000000013f6b4
- (void)dealloc;	// IMP=0x000000000013f63c

@end
