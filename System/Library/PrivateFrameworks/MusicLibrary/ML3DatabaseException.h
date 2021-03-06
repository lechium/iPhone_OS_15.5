//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSError;

@interface ML3DatabaseException
{
    NSError *_sqliteError;	// 40 = 0x28
}

+ (id)databaseExceptionWithReason:(id)arg1 sqliteError:(id)arg2;	// IMP=0x000000000010a77d
- (void).cxx_destruct;	// IMP=0x000000000010a76a
@property(readonly, nonatomic) NSError *sqliteError; // @synthesize sqliteError=_sqliteError;
- (void)_SQLITE_DONE;	// IMP=0x000000000010a72a
- (void)_SQLITE_ROW;	// IMP=0x000000000010a6fb
- (void)_SQLITE_NOTADB;	// IMP=0x000000000010a6cc
- (void)_SQLITE_RANGE;	// IMP=0x000000000010a69d
- (void)_SQLITE_FORMAT;	// IMP=0x000000000010a66e
- (void)_SQLITE_AUTH;	// IMP=0x000000000010a63f
- (void)_SQLITE_NOLFS;	// IMP=0x000000000010a610
- (void)_SQLITE_MISUSE;	// IMP=0x000000000010a5e1
- (void)_SQLITE_MISMATCH;	// IMP=0x000000000010a5b2
- (void)_SQLITE_CONSTRAINT;	// IMP=0x000000000010a583
- (void)_SQLITE_TOOBIG;	// IMP=0x000000000010a554
- (void)_SQLITE_SCHEMA;	// IMP=0x000000000010a525
- (void)_SQLITE_EMPTY;	// IMP=0x000000000010a4f6
- (void)_SQLITE_PROTOCOL;	// IMP=0x000000000010a4c7
- (void)_SQLITE_CANTOPEN;	// IMP=0x000000000010a498
- (void)_SQLITE_FULL;	// IMP=0x000000000010a469
- (void)_SQLITE_NOTFOUND;	// IMP=0x000000000010a43a
- (void)_SQLITE_CORRUPT;	// IMP=0x000000000010a40b
- (void)_SQLITE_IOERR;	// IMP=0x000000000010a3dc
- (void)_SQLITE_INTERRUPT;	// IMP=0x000000000010a3ad
- (void)_SQLITE_READONLY;	// IMP=0x000000000010a37e
- (void)_SQLITE_NOMEM;	// IMP=0x000000000010a34f
- (void)_SQLITE_LOCKED;	// IMP=0x000000000010a320
- (void)_SQLITE_BUSY;	// IMP=0x000000000010a2f1
- (void)_SQLITE_ABORT;	// IMP=0x000000000010a2c2
- (void)_SQLITE_PERM;	// IMP=0x000000000010a293
- (void)_SQLITE_INTERNAL;	// IMP=0x000000000010a264
- (void)_SQLITE_ERROR;	// IMP=0x000000000010a235
- (void)raise;	// IMP=0x0000000000109e79
- (id)init;	// IMP=0x0000000000109de1
- (id)initWithReason:(id)arg1 sqliteError:(id)arg2;	// IMP=0x0000000000109cd4

@end

