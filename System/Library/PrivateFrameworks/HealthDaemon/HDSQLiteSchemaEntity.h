//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDSQLiteEntitySchema-Protocol.h>

@class NSString;

@interface HDSQLiteSchemaEntity : NSObject <HDSQLiteEntitySchema>
{
}

+ (id)deleteStatementWithProperty:(id)arg1 database:(id)arg2;	// IMP=0x00000000002f7bad
+ (id)updateSQLForProperties:(id)arg1 predicate:(id)arg2;	// IMP=0x00000000002f793e
+ (id)insertSQLForProperties:(id)arg1 shouldReplace:(_Bool)arg2;	// IMP=0x00000000002f77b9
+ (id)allDatabaseColumnNames;	// IMP=0x00000000002f76c8
+ (Class)entityForProperty:(id)arg1;	// IMP=0x00000000002f7558
+ (void)enumerateColumnsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000002f742c
+ (_Bool)hasColumnWithName:(id)arg1;	// IMP=0x00000000002f736e
+ (id)createTableSQL;	// IMP=0x00000000002f6e80
+ (id)disambiguatedSQLForProperty:(id)arg1;	// IMP=0x00000000002f6d49
+ (id)disambiguatedDatabaseTable;	// IMP=0x00000000002f6bd6
+ (id)triggers;	// IMP=0x00000000002f6bc9
+ (id)indices;	// IMP=0x00000000002f6bbc
+ (id)foreignKeys;	// IMP=0x00000000002f6baf
+ (id)checkConstraints;	// IMP=0x00000000002f6ba7
+ (id)uniquedColumns;	// IMP=0x00000000002f6b9f
+ (id)joinClausesForProperty:(id)arg1;	// IMP=0x00000000002f6b97
+ (Class)entityClassForEnumeration;	// IMP=0x00000000002f6b8e
+ (id)privateSubEntities;	// IMP=0x00000000002f6b81
+ (id)orderingTermForSortDescriptor:(id)arg1;	// IMP=0x00000000002f6b79
+ (_Bool)isTemporary;	// IMP=0x00000000002f6b71
+ (id)tableAliases;	// IMP=0x00000000002f6b64
+ (id)databaseName;	// IMP=0x00000000002f6b5c
+ (id)primaryKeyColumns;	// IMP=0x00000000002f6b1a
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;	// IMP=0x00000000002f6ad4
+ (_Bool)hasROWID;	// IMP=0x00000000002f6a92
+ (id)databaseTable;	// IMP=0x00000000002f6a50

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

