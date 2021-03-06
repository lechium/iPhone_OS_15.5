//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSEqualityPredicateOperator
{
    _Bool _negate;	// 24 = 0x18
    unsigned long long _options;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000055601
- (_Bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;	// IMP=0x0000000000055a8f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000559c9
- (void)_setOptions:(unsigned long long)arg1;	// IMP=0x00000000000559b8
- (unsigned long long)options;	// IMP=0x00000000000559a7
- (void)setNegation:(_Bool)arg1;	// IMP=0x0000000000055997
- (_Bool)isNegation;	// IMP=0x0000000000055987
- (id)predicateFormat;	// IMP=0x0000000000055871
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000557fb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000556f9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000055609
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 negate:(_Bool)arg3 options:(unsigned long long)arg4;	// IMP=0x00000000000555d4
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 negate:(_Bool)arg3;	// IMP=0x000000000005556e

@end

