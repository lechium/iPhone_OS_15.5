//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLSearchIndexManagerDatabaseConnectionDelegate-Protocol.h>

@class NSMutableDictionary, NSString, PLPhotoLibraryBundleController, PLSQLiteRecorder;
@protocol OS_dispatch_io, OS_dispatch_queue;

@interface PLSQLStatementFileRecorder : NSObject <PLSearchIndexManagerDatabaseConnectionDelegate>
{
    NSMutableDictionary *_observationCountByNormalizedStatementSQL;	// 8 = 0x8
    NSMutableDictionary *_observationCountByBacktraceHash;	// 16 = 0x10
    NSMutableDictionary *_isMutedByBacktraceHash;	// 24 = 0x18
    struct os_unfair_lock_s _observationsLock;	// 32 = 0x20
    NSString *_backtraceFilter;	// 40 = 0x28
    NSObject<OS_dispatch_io> *_file;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_writingQueue;	// 56 = 0x38
    PLSQLiteRecorder *_splSearchDbRecorder;	// 64 = 0x40
    PLPhotoLibraryBundleController *_bundleController;	// 72 = 0x48
}

+ (id)_daemonSearchIndexManagerFromBundleController:(id)arg1;	// IMP=0x00000000002a939a
+ (void)_writeRecordingPostambleUsingQueue:(id)arg1 toFile:(id)arg2;	// IMP=0x00000000002a928e
+ (void)_writeStatements:(id)arg1 toFile:(id)arg2 usingQueue:(id)arg3;	// IMP=0x00000000002a8f1c
+ (id)_chooseFileURLFromFileURL:(id)arg1;	// IMP=0x00000000002a8c0e
+ (unsigned long long)_callStackHash;	// IMP=0x00000000002a8b76
- (void).cxx_destruct;	// IMP=0x00000000002a8922
- (_Bool)stopRecording;	// IMP=0x00000000002a87ad
- (_Bool)startRecordingToFileURL:(id)arg1 withTag:(id)arg2;	// IMP=0x00000000002a82ac
- (id)initWithBundleController:(id)arg1;	// IMP=0x00000000002a8022
- (void)willTeardownConnection:(struct sqlite3 *)arg1;	// IMP=0x00000000002a8005
- (void)didCreateConnection:(struct sqlite3 *)arg1;	// IMP=0x00000000002a7fe8
- (_Bool)_decorateStatement:(id)arg1;	// IMP=0x00000000002a7b11
- (void)_reconsiderRecordingState;	// IMP=0x00000000002a7885
- (void)_installSignalHandler;	// IMP=0x00000000002a775c

@end

