//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface EFParenthesizedSQLExpression : NSObject
{
    id _expressable;	// 8 = 0x8
}

+ (id)parenthesizedValueCollectionExpressable:(id)arg1;	// IMP=0x000000000003d6aa
+ (id)parenthesizedValueExpressable:(id)arg1;	// IMP=0x000000000003d64d
- (void).cxx_destruct;	// IMP=0x000000000003d934
- (id)ef_SQLIsolatedExpression;	// IMP=0x000000000003d92b
- (void)ef_renderSQLExpressionInto:(id)arg1 conjoiner:(id)arg2;	// IMP=0x000000000003d881
- (void)ef_renderSQLExpressionInto:(id)arg1;	// IMP=0x000000000003d800
- (id)ef_SQLExpression;	// IMP=0x000000000003d79a
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000003d786
- (id)initWithExpressable:(id)arg1;	// IMP=0x000000000003d707

@end

