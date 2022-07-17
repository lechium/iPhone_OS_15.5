//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFSQLGeneratorPredicateNode-Protocol.h>

@class NSArray, NSString;

@interface EFSQLGeneratorCompoundPredicateNode : NSObject <EFSQLGeneratorPredicateNode>
{
    unsigned long long _predicateType;	// 8 = 0x8
    NSArray *_childPredicates;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000044396
@property(readonly, nonatomic) NSArray *childPredicates; // @synthesize childPredicates=_childPredicates;
@property(readonly, nonatomic) unsigned long long predicateType; // @synthesize predicateType=_predicateType;
- (void)traverseTreeWithAliasMap:(id)arg1;	// IMP=0x00000000000441eb
- (id)sqlExpressableWithTableExpressions:(id)arg1;	// IMP=0x0000000000043ece
- (id)initWithPredicateType:(unsigned long long)arg1 childPredicates:(id)arg2;	// IMP=0x0000000000043e44

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
