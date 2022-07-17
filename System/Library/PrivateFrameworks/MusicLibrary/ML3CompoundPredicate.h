//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface ML3CompoundPredicate
{
    NSArray *_predicates;	// 8 = 0x8
}

+ (id)predicateMatchingPredicates:(id)arg1;	// IMP=0x00000000000995f1
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000995e9
- (void).cxx_destruct;	// IMP=0x00000000000995d6
@property(retain, nonatomic) NSArray *predicates; // @synthesize predicates=_predicates;
- (_Bool)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3;	// IMP=0x000000000009941e
- (id)spotlightPredicate;	// IMP=0x00000000000992d3
- (_Bool)isDynamicForEntityClass:(Class)arg1;	// IMP=0x0000000000099192
- (id)databaseStatementParameters;	// IMP=0x0000000000098ff7
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;	// IMP=0x0000000000098da4
- (id)SQLJoinClausesForClass:(Class)arg1;	// IMP=0x0000000000098baf
- (id)description;	// IMP=0x0000000000098b00
- (unsigned long long)hash;	// IMP=0x0000000000098a7f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000989a7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009890c
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000098813
- (id)initWithPredicates:(id)arg1;	// IMP=0x00000000000987ab

// Remaining properties
@property(readonly, copy, nonatomic) NSString *compoundOperatorJoiner; // @dynamic compoundOperatorJoiner;

@end
