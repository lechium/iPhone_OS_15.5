//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFSQLSelectComponent-Protocol.h>
#import <EmailFoundation/EFSQLValueCollectionExpressable-Protocol.h>

@class NSArray, NSMutableArray, NSString;
@protocol EFSQLValueExpressable;

@interface EFSQLSelectStatement : NSObject <EFSQLValueCollectionExpressable, EFSQLSelectComponent>
{
    _Bool _distinct;	// 8 = 0x8
    id <EFSQLValueExpressable> _where;	// 16 = 0x10
    unsigned long long _limit;	// 24 = 0x18
    NSString *_tableName;	// 32 = 0x20
    NSMutableArray *_results;	// 40 = 0x28
    NSMutableArray *_joinExpressions;	// 48 = 0x30
    NSArray *_groupExpressions;	// 56 = 0x38
    NSMutableArray *_orderExpressions;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000544e5
@property(readonly, nonatomic) NSMutableArray *orderExpressions; // @synthesize orderExpressions=_orderExpressions;
@property(retain, nonatomic) NSArray *groupExpressions; // @synthesize groupExpressions=_groupExpressions;
@property(readonly, nonatomic) NSMutableArray *joinExpressions; // @synthesize joinExpressions=_joinExpressions;
@property(readonly, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(readonly, copy, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(retain, nonatomic) id <EFSQLValueExpressable> where; // @synthesize where=_where;
@property(nonatomic) _Bool distinct; // @synthesize distinct=_distinct;
- (id)ef_SQLIsolatedExpression;	// IMP=0x0000000000054445
- (void)ef_renderSQLExpressionInto:(id)arg1 conjoiner:(id)arg2;	// IMP=0x0000000000054432
- (void)ef_renderSQLExpressionInto:(id)arg1;	// IMP=0x0000000000054220
@property(readonly, copy, nonatomic) NSString *ef_SQLExpression;
@property(readonly, copy, nonatomic) NSString *queryString;
- (void)orderByColumn:(id)arg1 fromTable:(id)arg2 ascending:(_Bool)arg3;	// IMP=0x0000000000054133
- (void)orderByColumn:(id)arg1 ascending:(_Bool)arg2;	// IMP=0x00000000000540a3
- (void)orderBy:(id)arg1 ascending:(_Bool)arg2;	// IMP=0x0000000000053fe1
- (void)groupByColumn:(id)arg1 fromTable:(id)arg2;	// IMP=0x0000000000053ec3
- (void)groupByColumn:(id)arg1;	// IMP=0x0000000000053e39
- (void)groupBy:(id)arg1;	// IMP=0x0000000000053e26
- (id)leftOuterJoin:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4;	// IMP=0x0000000000053c6f
- (id)join:(id)arg1 alias:(id)arg2 sourceColumn:(id)arg3 targetColumn:(id)arg4;	// IMP=0x0000000000053ab8
- (id)leftOuterJoin:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3;	// IMP=0x0000000000053a8e
- (id)join:(id)arg1 sourceColumn:(id)arg2 targetColumn:(id)arg3;	// IMP=0x0000000000053a64
- (id)leftOuterJoin:(id)arg1 alias:(id)arg2 on:(id)arg3;	// IMP=0x00000000000538b8
- (id)join:(id)arg1 alias:(id)arg2 on:(id)arg3;	// IMP=0x000000000005370c
- (id)leftOuterJoin:(id)arg1 on:(id)arg2;	// IMP=0x00000000000536e5
- (id)join:(id)arg1 on:(id)arg2;	// IMP=0x00000000000536be
- (void)addResultColumn:(id)arg1 fromTable:(id)arg2;	// IMP=0x000000000005364c
- (void)addResultColumn:(id)arg1;	// IMP=0x00000000000535c2
- (void)addResult:(id)arg1 alias:(id)arg2;	// IMP=0x00000000000534e7
- (id)initWithResultColumn:(id)arg1;	// IMP=0x00000000000534d2
- (id)initWithResultColumn:(id)arg1 table:(id)arg2;	// IMP=0x000000000005342b
- (id)initWithResult:(id)arg1;	// IMP=0x0000000000053416
- (id)initWithResult:(id)arg1 table:(id)arg2;	// IMP=0x00000000000532e1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
