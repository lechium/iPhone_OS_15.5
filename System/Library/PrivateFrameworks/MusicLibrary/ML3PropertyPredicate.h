//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface ML3PropertyPredicate
{
    NSString *_property;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000942ce
+ (id)predicateWithProperty:(id)arg1;	// IMP=0x0000000000094281
- (void).cxx_destruct;	// IMP=0x000000000009426e
@property(copy, nonatomic) NSString *property; // @synthesize property=_property;
- (id)description;	// IMP=0x00000000000941bf
- (_Bool)isDynamicForEntityClass:(Class)arg1;	// IMP=0x0000000000094199
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;	// IMP=0x0000000000094119
- (id)SQLJoinClausesForClass:(Class)arg1;	// IMP=0x0000000000094054
- (unsigned long long)hash;	// IMP=0x0000000000093fd3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000093efb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000093e60
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000093db2
- (id)initWithProperty:(id)arg1;	// IMP=0x0000000000093d4a

@end

