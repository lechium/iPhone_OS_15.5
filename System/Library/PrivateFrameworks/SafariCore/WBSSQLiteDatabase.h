//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol OS_dispatch_queue, WBSSQLiteDatabaseDelegate;

@interface WBSSQLiteDatabase : NSObject
{
    struct sqlite3 *_handle;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSString *_lastSQLQuery;	// 24 = 0x18
    id <WBSSQLiteDatabaseDelegate> _delegate;	// 32 = 0x20
    NSURL *_url;	// 40 = 0x28
}

+ (id)writeAheadLogSharedMemoryURLForDatabaseURL:(id)arg1;	// IMP=0x00000000000161fe
+ (id)writeAheadLogURLForDatabaseURL:(id)arg1;	// IMP=0x000000000001614d
+ (id)_errorWithErrorCode:(int)arg1 userInfo:(id)arg2;	// IMP=0x000000000001603e
+ (id)privateOnDiskDatabaseURL;	// IMP=0x0000000000014fa9
+ (id)inMemoryDatabaseURL;	// IMP=0x0000000000014f89
+ (void)initialize;	// IMP=0x0000000000014c88
- (void).cxx_destruct;	// IMP=0x000000000001630e
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, nonatomic) struct sqlite3 *handle; // @synthesize handle=_handle;
@property(nonatomic) __weak id <WBSSQLiteDatabaseDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setBusyTimeout:(double)arg1;	// IMP=0x00000000000162af
- (_Bool)_openWithFlags:(int)arg1 vfs:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000015d4f
- (id)lastErrorWithMethodName:(const char *)arg1;	// IMP=0x0000000000015c3a
@property(readonly, nonatomic) long long changedRowCount;
@property(readonly, nonatomic) long long lastInsertRowID;
@property(readonly, nonatomic) NSString *lastErrorMessage;
@property(readonly, nonatomic) int lastErrorCode;
- (int)checkpointWriteAheadLogWithLogFrameCount:(int *)arg1 checkpointedFrameCount:(int *)arg2;	// IMP=0x0000000000015ad0
- (id)fetchQuery:(id)arg1 stringArguments:(id)arg2;	// IMP=0x000000000001597b
- (id)fetchQuery:(id)arg1;	// IMP=0x000000000001584e
- (_Bool)executeQuery:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001573f
- (_Bool)reportErrorWithCode:(int)arg1 query:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000154aa
- (_Bool)reportErrorWithCode:(int)arg1 statement:(struct sqlite3_stmt *)arg2 error:(id *)arg3;	// IMP=0x00000000000153e1
- (void)_reportSevereError:(id)arg1;	// IMP=0x00000000000152ab
- (int)close;	// IMP=0x00000000000151ad
- (_Bool)openWithAccessType:(long long)arg1 protectionType:(long long)arg2 vfs:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000015108
- (_Bool)openWithAccessType:(long long)arg1 vfs:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000150ed
- (_Bool)openWithAccessType:(long long)arg1 error:(id *)arg2;	// IMP=0x00000000000150d6
- (void)dealloc;	// IMP=0x00000000000150a7
- (id)initWithURL:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000014fc9
- (id)checkIntegrity;	// IMP=0x00000000000435cb
- (_Bool)enableWAL:(id *)arg1;	// IMP=0x00000000000434a7
- (_Bool)tryToPerformTransactionInBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000431f6

@end

