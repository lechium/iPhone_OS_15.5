//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, WBSAllowedPasswordRule, WBSMaxConsecutivePasswordRule, WBSMaxLengthPasswordRule, WBSMinLengthPasswordRule;

@interface WBSPasswordRuleSet : NSObject
{
    WBSAllowedPasswordRule *_allowedRule;	// 8 = 0x8
    NSArray *_requiredRules;	// 16 = 0x10
    WBSMaxConsecutivePasswordRule *_maxConsecutiveRule;	// 24 = 0x18
    WBSMinLengthPasswordRule *_minLengthRule;	// 32 = 0x20
    WBSMaxLengthPasswordRule *_maxLengthRule;	// 40 = 0x28
}

+ (id)ruleSetWithAllowedRule:(id)arg1 requiredRules:(id)arg2 maxConsecutiveRule:(id)arg3 minLengthRule:(id)arg4 maxLengthRule:(id)arg5;	// IMP=0x000000000004f35d
+ (id)ruleSetWithAllowedRule:(id)arg1 requiredRules:(id)arg2 maxConsecutiveRule:(id)arg3;	// IMP=0x000000000004f2c4
- (void).cxx_destruct;	// IMP=0x000000000004f581
@property(readonly, nonatomic) WBSMaxLengthPasswordRule *maxLengthRule; // @synthesize maxLengthRule=_maxLengthRule;
@property(readonly, nonatomic) WBSMinLengthPasswordRule *minLengthRule; // @synthesize minLengthRule=_minLengthRule;
@property(readonly, nonatomic) WBSMaxConsecutivePasswordRule *maxConsecutiveRule; // @synthesize maxConsecutiveRule=_maxConsecutiveRule;
@property(readonly, copy, nonatomic) NSArray *requiredRules; // @synthesize requiredRules=_requiredRules;
@property(readonly, nonatomic) WBSAllowedPasswordRule *allowedRule; // @synthesize allowedRule=_allowedRule;
- (id)initWithAllowedRule:(id)arg1 requiredRules:(id)arg2 maxConsecutiveRule:(id)arg3 minLengthRule:(id)arg4 maxLengthRule:(id)arg5;	// IMP=0x000000000004f425

@end
