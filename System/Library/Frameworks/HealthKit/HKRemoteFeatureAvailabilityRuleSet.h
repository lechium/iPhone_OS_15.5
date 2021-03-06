//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSSet;

@interface HKRemoteFeatureAvailabilityRuleSet : NSObject
{
    NSMutableDictionary *_conditions;	// 8 = 0x8
    NSSet *_supportedConditions;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001e6324
@property(retain, nonatomic) NSSet *supportedConditions; // @synthesize supportedConditions=_supportedConditions;
@property(retain, nonatomic) NSMutableDictionary *conditions; // @synthesize conditions=_conditions;
- (id)evaluateAll;	// IMP=0x00000000001e609f
- (void)_parseRulesFromRawValue:(id)arg1 dataSource:(id)arg2;	// IMP=0x00000000001e5d73
- (id)initWithRawValue:(id)arg1 dataSource:(id)arg2 supportedConditions:(id)arg3;	// IMP=0x00000000001e5c93

@end

