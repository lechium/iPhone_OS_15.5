//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface WBSTouchIconCacheSettingsSQLiteStore
{
}

+ (Class)cacheSettingsEntryClass;	// IMP=0x00000000000967e1
+ (long long)databaseSchemaVersion;	// IMP=0x00000000000967d6
- (id)_statementsForMigrationToSchemaVersion:(long long)arg1;	// IMP=0x0000000000096fa4
- (id)_deleteAllEntriesSQLiteStatement;	// IMP=0x0000000000096f20
- (id)_deleteEntrySQLiteStatementWithHost:(id)arg1;	// IMP=0x0000000000096e5b
- (id)_updateEntrySQLiteStatementWithEntry:(id)arg1;	// IMP=0x0000000000096bf9
- (id)_insertEntrySQLiteStatementWithEntry:(id)arg1;	// IMP=0x00000000000969bf
- (id)_selectEntrySQLiteStatementWithHost:(id)arg1;	// IMP=0x00000000000968fa
- (id)_selectAllEntriesSQLiteStatement;	// IMP=0x0000000000096876
- (id)_createNewDatabaseSQLiteStatement;	// IMP=0x00000000000967f2

@end
