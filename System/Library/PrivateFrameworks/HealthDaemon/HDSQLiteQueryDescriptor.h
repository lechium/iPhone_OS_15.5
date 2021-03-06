//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDSQLitePredicate, NSArray, NSString;

@interface HDSQLiteQueryDescriptor : NSObject <NSCopying>
{
    _Bool _returnsDistinctEntities;	// 8 = 0x8
    _Bool _shouldExpandLastSQLStatement;	// 9 = 0x9
    Class _entityClass;	// 16 = 0x10
    long long _limitCount;	// 24 = 0x18
    NSArray *_orderingTerms;	// 32 = 0x20
    HDSQLitePredicate *_predicate;	// 40 = 0x28
    NSString *_groupBy;	// 48 = 0x30
    NSArray *_preferredEntityJoinOrder;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0000000000006b55
@property(nonatomic) _Bool shouldExpandLastSQLStatement; // @synthesize shouldExpandLastSQLStatement=_shouldExpandLastSQLStatement;
@property(copy, nonatomic) NSArray *preferredEntityJoinOrder; // @synthesize preferredEntityJoinOrder=_preferredEntityJoinOrder;
@property(copy, nonatomic) NSString *groupBy; // @synthesize groupBy=_groupBy;
@property(copy, nonatomic) HDSQLitePredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) _Bool returnsDistinctEntities; // @synthesize returnsDistinctEntities=_returnsDistinctEntities;
@property(copy, nonatomic) NSArray *orderingTerms; // @synthesize orderingTerms=_orderingTerms;
@property(nonatomic) long long limitCount; // @synthesize limitCount=_limitCount;
@property(nonatomic) Class entityClass; // @synthesize entityClass=_entityClass;
- (id)_SQLForDeleteWithError:(id *)arg1;	// IMP=0x00000000006a85ad
- (id)_joinClauseForProperties:(id)arg1;	// IMP=0x0000000000007146
- (id)_SQLForSelectWithProperties:(id)arg1 columns:(id)arg2;	// IMP=0x0000000000006ffa
- (id)_sortedJoinClauses:(id)arg1 preferredOrder:(id)arg2 baseTables:(id)arg3;	// IMP=0x00000000006a7859
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000006a5a
- (void)bindToDeleteStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;	// IMP=0x00000000006a7771
- (void)bindToSelectStatement:(struct sqlite3_stmt *)arg1 bindingIndex:(inout int *)arg2;	// IMP=0x00000000006a7643
- (id)selectSQLForProperties:(id)arg1;	// IMP=0x00000000006a73f3

@end

