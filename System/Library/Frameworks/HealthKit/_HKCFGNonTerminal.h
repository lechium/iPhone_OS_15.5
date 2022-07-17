//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCharacterSet, NSMutableArray, NSString;

@interface _HKCFGNonTerminal
{
    NSString *_label;	// 16 = 0x10
    NSMutableArray *_replacementRules;	// 24 = 0x18
    NSCharacterSet *_charactersToBeSkipped;	// 32 = 0x20
}

+ (id)nonTerminalWithLabel:(id)arg1;	// IMP=0x00000000000948b4
- (void).cxx_destruct;	// IMP=0x0000000000094e7d
@property(copy, nonatomic) NSCharacterSet *charactersToBeSkipped; // @synthesize charactersToBeSkipped=_charactersToBeSkipped;
- (void)_invalidate;	// IMP=0x0000000000094e3e
- (void)_checkForCycles:(id)arg1;	// IMP=0x0000000000094b8d
- (void)_checkForCycles;	// IMP=0x0000000000094b3a
- (id)_replacementRules;	// IMP=0x0000000000094b25
- (id)_parseTreeWithContext:(id)arg1;	// IMP=0x0000000000018f14
- (unsigned long long)_minimumLength;	// IMP=0x0000000000094af5
- (id)_label;	// IMP=0x0000000000094ae0
- (_Bool)_tryNodesForExpressions:(id)arg1 nodes:(id)arg2 context:(id)arg3 solutionTest:(CDUnknownBlockType)arg4;	// IMP=0x00000000000198a9
- (void)_tryNodesWithContext:(id)arg1 solutionTest:(CDUnknownBlockType)arg2;	// IMP=0x000000000001902b
- (void)addReplacementRuleWithExpressions:(id)arg1 nodeEvaluator:(CDUnknownBlockType)arg2;	// IMP=0x00000000000949d0
- (id)initWithLabel:(id)arg1;	// IMP=0x00000000000948fd

@end
