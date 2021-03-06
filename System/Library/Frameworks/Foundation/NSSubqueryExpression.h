//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSExpression, NSPredicate;

@interface NSSubqueryExpression
{
    NSExpression *_collection;	// 24 = 0x18
    NSExpression *_variableExpression;	// 32 = 0x20
    NSPredicate *_subpredicate;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000144d39
- (void)acceptVisitor:(id)arg1 flags:(unsigned long long)arg2;	// IMP=0x00000000001458fc
- (_Bool)_shouldUseParensWithDescription;	// IMP=0x00000000001458f4
- (id)_expressionWithSubstitutionVariables:(id)arg1;	// IMP=0x0000000000145808
- (id)expressionValueWithObject:(id)arg1 context:(id)arg2;	// IMP=0x000000000014549c
- (unsigned long long)hash;	// IMP=0x0000000000145448
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000145397
- (id)predicate;	// IMP=0x0000000000145386
- (id)variable;	// IMP=0x000000000014535b
- (id)variableExpression;	// IMP=0x000000000014534a
- (id)collection;	// IMP=0x0000000000145339
- (id)predicateFormat;	// IMP=0x0000000000145299
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001451ed
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000144ef6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000144dda
- (void)allowEvaluation;	// IMP=0x0000000000144d41
- (id)initWithExpression:(id)arg1 usingIteratorExpression:(id)arg2 predicate:(id)arg3;	// IMP=0x0000000000144c3c
- (id)initWithExpression:(id)arg1 usingIteratorVariable:(id)arg2 predicate:(id)arg3;	// IMP=0x0000000000144b7f
- (void)dealloc;	// IMP=0x0000000000144af6

@end

