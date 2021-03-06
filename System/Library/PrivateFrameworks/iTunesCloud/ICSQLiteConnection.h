//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICSQLiteConnectionOptions, NSError, NSMapTable, NSMutableArray, NSNumber;
@protocol ICSQLiteConnectionDelegate;

@interface ICSQLiteConnection : NSObject
{
    NSMutableArray *_afterTransactionBlocks;	// 8 = 0x8
    struct sqlite3 *_database;	// 16 = 0x10
    id <ICSQLiteConnectionDelegate> _delegate;	// 24 = 0x18
    _Bool _didResetForCorruption;	// 32 = 0x20
    NSMapTable *_preparedStatements;	// 40 = 0x28
    long long _transactionDepth;	// 48 = 0x30
    _Bool _transactionWantsRollback;	// 56 = 0x38
    ICSQLiteConnectionOptions *_options;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001b0bee
@property(readonly, copy, nonatomic) ICSQLiteConnectionOptions *options; // @synthesize options=_options;
@property(nonatomic) __weak id <ICSQLiteConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_verifiedStatementForSQL:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001b0a36
- (id)_verifiedStatementForPreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001b0882
- (id)_statementForPreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001b071c
- (id)_prepareStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001b0394
- (_Bool)_performResetAfterCorruptionError;	// IMP=0x00000000001b02f4
- (_Bool)_open;	// IMP=0x00000000001b0266
- (void)_flushAfterTransactionBlocks;	// IMP=0x00000000001b01c3
- (void)_finalizeAllStatements;	// IMP=0x00000000001afffd
- (_Bool)_executeStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001afe73
- (_Bool)_close;	// IMP=0x00000000001afe12
- (_Bool)resetAfterIOError;	// IMP=0x00000000001afd44
- (_Bool)resetAfterCorruptionError;	// IMP=0x00000000001afcff
@property(readonly, copy, nonatomic) NSError *currentError;
- (_Bool)truncate;	// IMP=0x00000000001afc50
- (id)prepareStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001afad4
- (void)performTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00000000001af9d1
- (_Bool)open;	// IMP=0x00000000001af9bf
- (_Bool)setUserVersion:(id)arg1;	// IMP=0x00000000001af8ad
@property(readonly, copy, nonatomic) NSNumber *userVersion;
@property(readonly, nonatomic) long long lastChangeCount;
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;	// IMP=0x00000000001af695
- (_Bool)executeStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001af680
- (void)executeQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;	// IMP=0x00000000001af55e
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2 bindings:(CDUnknownBlockType)arg3;	// IMP=0x00000000001af447
- (_Bool)executePreparedStatement:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001af432
- (void)executePreparedQuery:(id)arg1 withResults:(CDUnknownBlockType)arg2;	// IMP=0x00000000001af300
- (void)dispatchAfterTransaction:(CDUnknownBlockType)arg1;	// IMP=0x00000000001af252
- (_Bool)close;	// IMP=0x00000000001af240
- (id)initWithOptions:(id)arg1;	// IMP=0x00000000001af1cd

@end

