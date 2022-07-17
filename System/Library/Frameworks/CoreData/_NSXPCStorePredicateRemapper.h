//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreData/NSPredicateVisitor-Protocol.h>

__attribute__((visibility("hidden")))
@interface _NSXPCStorePredicateRemapper : NSObject <NSPredicateVisitor>
{
}

+ (id)defaultInstance;	// IMP=0x000000000005249c
+ (void)initialize;	// IMP=0x0000000000052461
- (void)visitPredicateExpression:(id)arg1;	// IMP=0x0000000000052584
- (void)visitPredicateOperator:(id)arg1;	// IMP=0x000000000005257e
- (void)visitPredicate:(id)arg1;	// IMP=0x0000000000052578
- (id)createPredicateForFetchFromPredicate:(id)arg1 withContext:(id)arg2;	// IMP=0x0000000000052566
- (id)createPredicateForFetchFromPredicate:(id)arg1;	// IMP=0x000000000005251f
- (void)dealloc;	// IMP=0x00000000000524f0
- (id)init;	// IMP=0x00000000000524c1

@end
