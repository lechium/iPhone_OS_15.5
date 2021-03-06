//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@interface NSPredicateOperator : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _operatorType;	// 8 = 0x8
    unsigned long long _modifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000106a24
+ (id)operatorWithCustomSelector:(SEL)arg1 modifier:(unsigned long long)arg2;	// IMP=0x0000000000106958
+ (id)_newOperatorWithType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3;	// IMP=0x000000000010663e
+ (id)operatorWithType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000000106624
+ (SEL)_getSelectorForType:(unsigned long long)arg1;	// IMP=0x0000000000106570
+ (id)_getSymbolForType:(unsigned long long)arg1;	// IMP=0x000000000010646c
- (void)_setModifier:(unsigned long long)arg1;	// IMP=0x00000000001070d5
- (unsigned long long)options;	// IMP=0x00000000001070cd
- (void)_setOptions:(unsigned long long)arg1;	// IMP=0x00000000001070a2
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x0000000000107080
- (_Bool)performOperationUsingObject:(id)arg1 andObject:(id)arg2;	// IMP=0x0000000000106d25
- (_Bool)performPrimitiveOperationUsingObject:(id)arg1 andObject:(id)arg2;	// IMP=0x0000000000106cf7
- (unsigned long long)hash;	// IMP=0x0000000000106ca0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000106c1c
- (unsigned long long)modifier;	// IMP=0x0000000000106c12
- (id)symbol;	// IMP=0x0000000000106bf2
- (unsigned long long)operatorType;	// IMP=0x0000000000106be8
- (SEL)selector;	// IMP=0x0000000000106bc8
- (id)description;	// IMP=0x0000000000106bb6
- (id)predicateFormat;	// IMP=0x0000000000106ba4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000106b76
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000106ac1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000106a2c
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2 options:(unsigned long long)arg3;	// IMP=0x0000000000106a12
- (id)initWithOperatorType:(unsigned long long)arg1 modifier:(unsigned long long)arg2;	// IMP=0x00000000001069a7
- (id)initWithOperatorType:(unsigned long long)arg1;	// IMP=0x0000000000106993

@end

