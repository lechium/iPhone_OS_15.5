//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ML3Predicate;

@interface ML3UnaryPredicate
{
    ML3Predicate *_predicate;	// 8 = 0x8
}

+ (id)predicateWithPredicate:(id)arg1;	// IMP=0x0000000000093bec
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000093be4
- (void).cxx_destruct;	// IMP=0x0000000000093bd1
@property(retain, nonatomic) ML3Predicate *predicate; // @synthesize predicate=_predicate;
- (id)databaseStatementParameters;	// IMP=0x0000000000093b8f
- (id)SQLJoinClausesForClass:(Class)arg1;	// IMP=0x0000000000093b72
- (unsigned long long)hash;	// IMP=0x0000000000093af1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000093a19
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000009397e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000938d3
- (id)initWithPredicate:(id)arg1;	// IMP=0x000000000009386b

@end
