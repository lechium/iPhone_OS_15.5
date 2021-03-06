//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, WBSSQLiteDatabase;
@protocol OS_dispatch_queue, WBSSQLiteStoreDelegate;

@interface WBSSQLiteStore : NSObject
{
    long long _databaseLockingPolicy;	// 8 = 0x8
    long long _protectionType;	// 16 = 0x10
    int _databaseCoordinationLockFileDescriptor;	// 24 = 0x18
    _Bool _fallBackToMemoryStoreIfError;	// 28 = 0x1c
    NSURL *_databaseURL;	// 32 = 0x20
    id <WBSSQLiteStoreDelegate> _delegate;	// 40 = 0x28
    WBSSQLiteDatabase *_database;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_databaseQueue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000055fa4
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
@property(readonly, nonatomic) WBSSQLiteDatabase *database; // @synthesize database=_database;
@property(nonatomic) __weak id <WBSSQLiteStoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
- (void)_releaseDatabaseCoordinationLock;	// IMP=0x0000000000055dfd
- (_Bool)_acquireDatabaseCoordinationLockForDatabaseURL:(id)arg1;	// IMP=0x0000000000055bc9
- (id)_databaseCoordinationLockURLForDatabaseURL:(id)arg1;	// IMP=0x0000000000055b17
- (_Bool)_isDatabaseLocked;	// IMP=0x0000000000055b0a
- (int)_migrateToSchemaVersion:(int)arg1;	// IMP=0x0000000000055aff
- (int)_createFreshDatabaseSchema;	// IMP=0x0000000000055af4
- (int)_setDatabaseSchemaVersion:(int)arg1;	// IMP=0x00000000000559b3
- (int)_migrateToCurrentSchemaVersionIfNecessary;	// IMP=0x0000000000055823
- (void)_databaseWillClose;	// IMP=0x000000000005581d
- (int)_currentSchemaVersion;	// IMP=0x0000000000055812
- (_Bool)_confirmDatabaseIntegrityIsOK;	// IMP=0x0000000000055728
- (void)_closeDatabase;	// IMP=0x00000000000556ac
- (void)savePendingChangesBeforeTermination;	// IMP=0x000000000005563c
- (void)closeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000005558a
- (void)_handleOpenFailureWithStatus:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005546e
- (void)_openDatabase:(id)arg1 createIfNeeded:(_Bool)arg2 checkIntegrity:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000054c28
- (void)openAndCheckIntegrity:(_Bool)arg1 createIfNeeded:(_Bool)arg2 fallBackToMemoryStoreIfError:(_Bool)arg3 lockingPolicy:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000054a89
@property(readonly, nonatomic) _Bool isOpen;
- (void)dealloc;	// IMP=0x00000000000549dd
- (id)initWithURL:(id)arg1 protectionType:(long long)arg2;	// IMP=0x000000000005483e
- (id)initWithURL:(id)arg1;	// IMP=0x0000000000054829
- (id)init;	// IMP=0x0000000000054820

@end

