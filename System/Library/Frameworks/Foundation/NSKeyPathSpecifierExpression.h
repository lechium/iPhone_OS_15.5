//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface NSKeyPathSpecifierExpression
{
    NSString *_value;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000009683d
- (unsigned long long)hash;	// IMP=0x0000000000096cfb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000096c8f
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;	// IMP=0x0000000000096c33
- (id)keyPath;	// IMP=0x0000000000096c22
- (id)constantValue;	// IMP=0x0000000000096c11
- (id)predicateFormat;	// IMP=0x0000000000096a30
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000969f9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000096909
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000096845
- (id)initWithObject:(id)arg1;	// IMP=0x00000000000967c3
- (void)dealloc;	// IMP=0x000000000009675e

@end

