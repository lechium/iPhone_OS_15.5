//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, WBSSQLiteDatabase;
@protocol OS_dispatch_queue;

@interface WBSSiteMetadataImageCacheSettingsSQLiteStore : NSObject
{
    WBSSQLiteDatabase *_database;	// 8 = 0x8
    _Bool _isClosed;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_databaseQueue;	// 24 = 0x18
    long long _protectionType;	// 32 = 0x20
    NSURL *_databaseURL;	// 40 = 0x28
}

+ (long long)databaseSchemaVersion;	// IMP=0x00000000000762dd
+ (Class)cacheSettingsEntryClass;	// IMP=0x00000000000762d5
- (void).cxx_destruct;	// IMP=0x0000000000076339
@property(readonly, nonatomic) NSURL *databaseURL; // @synthesize databaseURL=_databaseURL;
@property(readonly, nonatomic) WBSSQLiteDatabase *database; // @synthesize database=_database;
- (id)_statementsForMigrationToSchemaVersion:(long long)arg1;	// IMP=0x000000000007631d
- (id)_deleteAllEntriesSQLiteStatement;	// IMP=0x0000000000076315
- (id)_deleteEntrySQLiteStatementWithHost:(id)arg1;	// IMP=0x000000000007630d
- (id)_updateEntrySQLiteStatementWithEntry:(id)arg1;	// IMP=0x0000000000076305
- (id)_insertEntrySQLiteStatementWithEntry:(id)arg1;	// IMP=0x00000000000762fd
- (id)_selectEntrySQLiteStatementWithHost:(id)arg1;	// IMP=0x00000000000762f5
- (id)_selectAllEntriesSQLiteStatement;	// IMP=0x00000000000762ed
- (id)_createNewDatabaseSQLiteStatement;	// IMP=0x00000000000762e5
- (_Bool)deleteAllEntries;	// IMP=0x00000000000760d8
- (_Bool)deleteEntryWithHost:(id)arg1;	// IMP=0x0000000000075e75
- (id)_updateEntry:(id)arg1;	// IMP=0x0000000000075cd3
- (id)_insertEntry:(id)arg1;	// IMP=0x0000000000075b0e
- (id)saveEntry:(id)arg1;	// IMP=0x00000000000759b2
- (id)allEntries;	// IMP=0x0000000000075696
- (id)entryWithHost:(id)arg1;	// IMP=0x000000000007545a
- (int)_setDatabaseSchemaVersion:(int)arg1;	// IMP=0x000000000007530a
- (_Bool)_performMigrationStepToSchemaVersion:(long long)arg1 withStatements:(id)arg2;	// IMP=0x0000000000074aa1
- (_Bool)_createNewDatabaseSchema;	// IMP=0x0000000000074928
- (_Bool)_migrateToCurrentSchemaVersionifNeeded;	// IMP=0x0000000000074784
- (_Bool)_checkDatabaseIntegrity;	// IMP=0x000000000007460f
- (_Bool)_openDatabase:(id)arg1 andCheckIntegrity:(_Bool)arg2;	// IMP=0x0000000000074372
- (void)dealloc;	// IMP=0x0000000000074343
- (void)_closeDatabase;	// IMP=0x0000000000074318
- (void)close;	// IMP=0x00000000000742b7
- (id)initWithDatabaseURL:(id)arg1 protectionType:(long long)arg2;	// IMP=0x0000000000073fe3
- (id)initWithDatabaseURL:(id)arg1;	// IMP=0x0000000000073fce

@end

