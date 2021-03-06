//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _SYSharedServiceDB : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    struct sqlite3 *_db;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSMutableDictionary *_schemaSetupCallbacks;	// 32 = 0x20
}

+ (id)sharedInstanceForServiceName:(id)arg1;	// IMP=0x0000000000006826
+ (void)pairingStorePathWasReset;	// IMP=0x0000000000006792
+ (void)initialize;	// IMP=0x00000000000066fe
+ (void)_releaseSharedInstanceForServiceName:(id)arg1;	// IMP=0x0000000000007e8c
- (void).cxx_destruct;	// IMP=0x0000000000007e64
- (_Bool)inExclusiveTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007e4d
- (_Bool)inTransaction:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007e39
- (_Bool)_runTransactionBlock:(CDUnknownBlockType)arg1 exclusive:(_Bool)arg2;	// IMP=0x0000000000007a53
- (void)withDBRef:(CDUnknownBlockType)arg1;	// IMP=0x00000000000079a6
- (void)updateSchemaForClient:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000078ad
- (void)_LOCKED_runSchemaUpdate:(CDUnknownBlockType)arg1 forClientNamed:(id)arg2;	// IMP=0x00000000000077db
- (void)setSchemaVersion:(long long)arg1 forClient:(id)arg2;	// IMP=0x0000000000007717
- (long long)schemaVersionForClient:(id)arg1;	// IMP=0x0000000000007650
- (_Bool)_LOCKED_ensureDBExists;	// IMP=0x0000000000007537
- (_Bool)_LOCKED_createOrOpenDBForServiceName:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000072f9
- (void)_ensureSchemaVersionsTable;	// IMP=0x0000000000007294
- (void)_LOCKED_ensureSchemaVersionsTableInDB:(struct sqlite3 *)arg1;	// IMP=0x0000000000007235
- (void)_LOCKED_setVersion:(long long)arg1 forClient:(id)arg2;	// IMP=0x000000000000709e
- (long long)_LOCKED_getClientVersion:(id)arg1;	// IMP=0x0000000000006f08
- (_Bool)_LOCKED_hasSchemaVersionForClient:(id)arg1;	// IMP=0x0000000000006d6f
- (_Bool)_ensureParentExists:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000006a67
- (_Bool)_addSkipBackupAttributeToItemAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000069fc
- (void)dealloc;	// IMP=0x00000000000069b5
- (id)initWithServiceName:(id)arg1;	// IMP=0x0000000000006916
@property(readonly, nonatomic, getter=_dbPath) NSString *dbPath;

@end

