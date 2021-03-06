//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ML3Predicate;

@interface ML3ConditionalPredicate
{
    ML3Predicate *_conditionPredicate;	// 8 = 0x8
    ML3Predicate *_thenPredicate;	// 16 = 0x10
    ML3Predicate *_elsePredicate;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009b60f
+ (id)predicateWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;	// IMP=0x000000000009b57c
- (void).cxx_destruct;	// IMP=0x000000000009b53a
@property(readonly, copy, nonatomic) ML3Predicate *elsePredicate; // @synthesize elsePredicate=_elsePredicate;
@property(readonly, copy, nonatomic) ML3Predicate *thenPredicate; // @synthesize thenPredicate=_thenPredicate;
@property(readonly, copy, nonatomic) ML3Predicate *conditionPredicate; // @synthesize conditionPredicate=_conditionPredicate;
- (id)spotlightPredicate;	// IMP=0x000000000009b48b
- (_Bool)isDynamicForEntityClass:(Class)arg1;	// IMP=0x000000000009b413
- (id)databaseStatementParameters;	// IMP=0x000000000009b317
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;	// IMP=0x000000000009b1e6
- (id)SQLJoinClausesForClass:(Class)arg1;	// IMP=0x000000000009b080
- (id)description;	// IMP=0x000000000009af80
- (unsigned long long)hash;	// IMP=0x000000000009ae9b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009ace7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009abde
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000009aab6
- (id)initWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;	// IMP=0x000000000009a9f0

@end

