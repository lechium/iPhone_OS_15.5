//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EFSQLColumnSchema, NSArray, NSHashTable, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface EFSQLTableSchema : NSObject
{
    NSMutableArray *_columns;	// 8 = 0x8
    NSMutableDictionary *_columnsByName;	// 16 = 0x10
    NSMutableArray *_uniquenessConstraints;	// 24 = 0x18
    NSMutableArray *_checkConstraints;	// 32 = 0x20
    NSHashTable *_foreignKeyReferences;	// 40 = 0x28
    NSHashTable *_associatedColumns;	// 48 = 0x30
    NSMutableArray *_indexes;	// 56 = 0x38
    NSArray *_primaryKeyColumns;	// 64 = 0x40
    NSString *_name;	// 72 = 0x48
    NSString *_rowIDColumnName;	// 80 = 0x50
    unsigned long long _primaryKeyConflictResolution;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000005723b
@property(readonly, nonatomic) unsigned long long primaryKeyConflictResolution; // @synthesize primaryKeyConflictResolution=_primaryKeyConflictResolution;
@property(readonly, copy, nonatomic) NSString *rowIDColumnName; // @synthesize rowIDColumnName=_rowIDColumnName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSArray *primaryKeyColumns; // @synthesize primaryKeyColumns=_primaryKeyColumns;
- (void)addIndexForColumns:(id)arg1;	// IMP=0x0000000000057153
- (void)addIndex:(id)arg1;	// IMP=0x0000000000057067
@property(readonly, copy, nonatomic) NSArray *indexes;
- (void)addAssociatedColumn:(id)arg1;	// IMP=0x000000000005703a
@property(readonly, copy, nonatomic) NSSet *associatedColumns;
- (void)addForeignKeyReference:(id)arg1;	// IMP=0x0000000000056fbb
@property(readonly, copy, nonatomic) NSSet *foreignKeyReferences;
- (void)addCheckConstraintForExpression:(id)arg1;	// IMP=0x0000000000056f3c
- (id)_columnsForColumnNames:(id)arg1;	// IMP=0x0000000000056deb
- (void)addUniquenessConstraintForColumns:(id)arg1 conflictResolution:(unsigned long long)arg2;	// IMP=0x0000000000056d04
- (void)removeColumn:(id)arg1;	// IMP=0x0000000000056c50
- (void)addColumn:(id)arg1;	// IMP=0x0000000000056b9a
- (id)columnForName:(id)arg1;	// IMP=0x0000000000056b74
@property(readonly, copy, nonatomic) NSArray *checkConstraints;
@property(readonly, copy, nonatomic) NSArray *uniqueColumns;
@property(readonly, copy, nonatomic) NSArray *columns;
@property(readonly, nonatomic) EFSQLColumnSchema *rowIDColumn;
- (id)fullNameWithDatabaseName:(id)arg1;	// IMP=0x000000000005695a
- (id)indexDefinitionsWithDatabaseName:(id)arg1;	// IMP=0x00000000000567e2
- (id)definitionWithDatabaseName:(id)arg1 includeIndexes:(_Bool)arg2;	// IMP=0x0000000000055d51
- (id)definitionWithDatabaseName:(id)arg1;	// IMP=0x0000000000055d2a
- (id)description;	// IMP=0x0000000000055c56
- (id)initWithName:(id)arg1 rowIDType:(unsigned long long)arg2 rowIDAlias:(id)arg3 columns:(id)arg4 primaryKeyColumns:(id)arg5 conflictResolution:(unsigned long long)arg6;	// IMP=0x00000000000556db
- (id)initWithName:(id)arg1 columns:(id)arg2 primaryKeyColumns:(id)arg3 conflictResolution:(unsigned long long)arg4;	// IMP=0x00000000000556b3
- (id)initWithName:(id)arg1 columns:(id)arg2 primaryKeyColumns:(id)arg3;	// IMP=0x000000000005568e
- (id)initWithName:(id)arg1 rowIDType:(unsigned long long)arg2 rowIDAlias:(id)arg3 columns:(id)arg4;	// IMP=0x0000000000055518
- (id)initWithName:(id)arg1 rowIDType:(unsigned long long)arg2 columns:(id)arg3;	// IMP=0x00000000000553d9

@end

