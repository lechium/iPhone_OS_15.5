//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet;

@interface ML3ContainmentPredicate
{
    NSSet *_values;	// 16 = 0x10
}

+ (id)predicateWithProperty:(id)arg1 values:(id)arg2;	// IMP=0x0000000000094ec8
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000094ec0
- (void).cxx_destruct;	// IMP=0x0000000000094ead
@property(retain, nonatomic) NSSet *values; // @synthesize values=_values;
- (_Bool)containsPropertyPredicate:(id)arg1 matchingValue:(id)arg2 usingComparison:(int)arg3;	// IMP=0x0000000000094caa
- (id)databaseStatementParameters;	// IMP=0x0000000000094c62
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;	// IMP=0x0000000000094a80
- (id)description;	// IMP=0x0000000000094774
- (unsigned long long)hash;	// IMP=0x00000000000946e7
- (id)_orderedValues;	// IMP=0x0000000000094666
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009458e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000944f3
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000943d1
- (id)initWithProperty:(id)arg1 values:(id)arg2;	// IMP=0x00000000000942d6

@end
