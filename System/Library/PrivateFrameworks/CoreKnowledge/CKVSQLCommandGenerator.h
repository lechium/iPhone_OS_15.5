//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CKVSQLCommandGenerator : NSObject
{
}

+ (id)_generateCommaSeparatedValuesString:(id)arg1;	// IMP=0x0000000000096bda
+ (id)_generateCommaSeparatedPlaceholdersString:(unsigned long long)arg1;	// IMP=0x0000000000096b23
+ (id)_generateOrderByClause:(id)arg1;	// IMP=0x00000000000969dc
+ (id)_produceCriterionClause:(id)arg1 tableName:(id)arg2;	// IMP=0x000000000009627f
+ (id)_produceSelectClauseWithTableName:(id)arg1 columnNames:(id)arg2 count:(_Bool)arg3;	// IMP=0x0000000000096185
+ (id)_produceSetValuesClauseForColumnNames:(id)arg1 columnValues:(id)arg2;	// IMP=0x0000000000095ec8
+ (id)insertCommandStringWithTableName:(id)arg1 columnNames:(id)arg2 returningColumns:(id)arg3;	// IMP=0x0000000000095d19
+ (id)updateWithTableName:(id)arg1 columnNames:(id)arg2 columnValues:(id)arg3 criterion:(id)arg4;	// IMP=0x0000000000095a0c
+ (id)deleteFromTableWithName:(id)arg1 criterion:(id)arg2;	// IMP=0x000000000009588e
+ (void)replaceOffset:(id)arg1 forSelect:(id)arg2;	// IMP=0x00000000000957cc
+ (void)addLimit:(id)arg1 offset:(id)arg2 forSelect:(id)arg3;	// IMP=0x00000000000955b8
+ (id)selectFromTableWithName:(id)arg1 columns:(id)arg2 count:(_Bool)arg3 criterion:(id)arg4 order:(id)arg5 limit:(id)arg6 offset:(id)arg7;	// IMP=0x0000000000095285
- (id)init;	// IMP=0x0000000000096c56

@end
