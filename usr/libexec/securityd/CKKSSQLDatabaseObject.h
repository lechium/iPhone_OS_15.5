//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface CKKSSQLDatabaseObject : NSObject
{
    NSDictionary *_originalSelfWhereClause;	// 8 = 0x8
}

+ (id)sqlColumns;	// IMP=0x002000000002f0b2
+ (id)sqlTable;	// IMP=0x001000000002f00a
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x001000000002ef54
+ (id)fetch:(unsigned long long)arg1 where:(id)arg2 orderBy:(id)arg3 error:(id *)arg4;	// IMP=0x001000000002ed99
+ (id)fetch:(unsigned long long)arg1 where:(id)arg2 error:(id *)arg3;	// IMP=0x001000000002ed81
+ (id)fetch:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000002ed67
+ (id)allWhere:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002ebc8
+ (id)all:(id *)arg1;	// IMP=0x001000000002ebb1
+ (id)tryFromDatabaseWhere:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002ea2e
+ (id)fromDatabaseWhere:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002e8ca
+ (_Bool)deleteAll:(id *)arg1;	// IMP=0x001000000002e869
+ (_Bool)performCKKSTransaction:(CDUnknownBlockType)arg1;	// IMP=0x001000000002e724
+ (_Bool)queryMaxValueForField:(id)arg1 inTable:(id)arg2 where:(id)arg3 columns:(id)arg4 processRow:(CDUnknownBlockType)arg5;	// IMP=0x001000000002e590
+ (id)quotedString:(id)arg1;	// IMP=0x001000000002e4ff
+ (_Bool)queryDatabaseTable:(id)arg1 where:(id)arg2 columns:(id)arg3 groupBy:(id)arg4 orderBy:(id)arg5 limit:(long long)arg6 processRow:(CDUnknownBlockType)arg7 error:(id *)arg8;	// IMP=0x001000000002e2ea
+ (_Bool)deleteFromTable:(id)arg1 where:(id)arg2 connection:(struct __OpaqueSecDbConnection *)arg3 error:(id *)arg4;	// IMP=0x001000000002e16f
+ (void)bindWhereClause:(struct sqlite3_stmt *)arg1 whereDict:(id)arg2 cferror:(struct __CFError **)arg3;	// IMP=0x001000000002e05b
+ (id)orderByClause:(id)arg1;	// IMP=0x001000000002df4c
+ (id)groupByClause:(id)arg1;	// IMP=0x001000000002de54
+ (id)makeWhereClause:(id)arg1;	// IMP=0x001000000002dd5c
+ (_Bool)saveToDatabaseTable:(id)arg1 row:(id)arg2 connection:(struct __OpaqueSecDbConnection *)arg3 error:(id *)arg4;	// IMP=0x001000000002dbed
+ (_Bool)deleteAll:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000062a45
+ (id)all:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000062933
+ (id)allParentKeyUUIDs:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000626d2
+ (id)allUUIDs:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000062487
+ (id)allUUIDsInZones:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000620ef
- (void).cxx_destruct;	// IMP=0x002000000002dbdd
@property(copy) NSDictionary *originalSelfWhereClause; // @synthesize originalSelfWhereClause=_originalSelfWhereClause;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002db65
- (id)whereClauseToFindSelf;	// IMP=0x001000000002dabd
- (id)sqlValues;	// IMP=0x001000000002da15
- (id)memoizeOriginalSelfWhereClause;	// IMP=0x001000000002d9df
- (_Bool)deleteFromDatabase:(id *)arg1;	// IMP=0x001000000002d947
- (_Bool)saveToDatabaseWithConnection:(struct __OpaqueSecDbConnection *)arg1 error:(id *)arg2;	// IMP=0x001000000002d797
- (_Bool)saveToDatabase:(id *)arg1;	// IMP=0x001000000002d780

@end
