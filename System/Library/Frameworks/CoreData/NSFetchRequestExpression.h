//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSExpression.h>

@interface NSFetchRequestExpression : NSExpression
{
    void *_reserved1;	// 24 = 0x18
    void *_reserved2;	// 32 = 0x20
    void *_reserved3;	// 40 = 0x28
    void *_reserved4;	// 48 = 0x30
    NSExpression *_fetchRequest;	// 56 = 0x38
    NSExpression *_managedObjectContext;	// 64 = 0x40
    struct _fetchExpressionFlags {
        unsigned int isCountOnly:1;
        unsigned int _RESERVED:31;
    } _flags;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000a0d89
+ (id)expressionForFetch:(id)arg1 context:(id)arg2 countOnly:(_Bool)arg3;	// IMP=0x00000000000a0d0b
- (id)_expressionWithSubstitutionVariables:(id)arg1;	// IMP=0x00000000000a13c1
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x00000000000a12c5
- (unsigned long long)hash;	// IMP=0x00000000000a1271
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000a118e
- (unsigned long long)expressionType;	// IMP=0x00000000000a1183
- (id)description;	// IMP=0x00000000000a111f
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;	// IMP=0x00000000000a100b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000a0fbb
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000a0e36
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000a0d91
@property(readonly, getter=isCountOnlyRequest) _Bool countOnlyRequest;
@property(readonly) NSExpression *contextExpression;
@property(readonly) NSExpression *requestExpression;
- (void)dealloc;	// IMP=0x00000000000a0cb3
- (id)initForFetch:(id)arg1 context:(id)arg2 countOnly:(_Bool)arg3;	// IMP=0x00000000000a0c1a

@end

