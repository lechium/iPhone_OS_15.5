//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/NSPredicateVisitor-Protocol.h>

@class NSSet;

@interface ATXActionCriteriaPredicateChecker : NSObject <NSPredicateVisitor>
{
    NSSet *_propertyNames;	// 8 = 0x8
    _Bool _ok;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000042f7b
- (void)visitPredicateOperator:(id)arg1;	// IMP=0x0000000000042f75
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x0000000000042ec8
- (void)visitPredicate:(id)arg1;	// IMP=0x0000000000042ec2
- (_Bool)isValid:(id)arg1;	// IMP=0x0000000000042e93
- (id)initWithObject:(id)arg1;	// IMP=0x0000000000042e18

@end
