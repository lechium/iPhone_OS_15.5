//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSError;

@interface CKFlowControl : NSObject
{
    unsigned long long _budgetCap;	// 8 = 0x8
    double _regenerationPerSecond;	// 16 = 0x10
    unsigned long long _totalSamples;	// 24 = 0x18
    double _totalCost;	// 32 = 0x20
    double _budget;	// 40 = 0x28
    double _maximumThrottleTime;	// 48 = 0x30
    NSError *_lastReportableError;	// 56 = 0x38
    NSDate *_lastRegeneration;	// 64 = 0x40
}

+ (id)flowControlWithBudgetCap:(unsigned long long)arg1 withMaximumThrottleTime:(double)arg2 andRegenerationPerSecond:(double)arg3;	// IMP=0x0000000000001b6f
- (void).cxx_destruct;	// IMP=0x00000000000025c8
@property(retain) NSDate *lastRegeneration; // @synthesize lastRegeneration=_lastRegeneration;
@property(retain, nonatomic) NSError *lastReportableError; // @synthesize lastReportableError=_lastReportableError;
@property(nonatomic) double maximumThrottleTime; // @synthesize maximumThrottleTime=_maximumThrottleTime;
@property double budget; // @synthesize budget=_budget;
- (_Bool)attemptBudgetedExpenditureWithCost:(double)arg1;	// IMP=0x00000000000024e0
- (void)expendWithCost:(double)arg1 reportableError:(id)arg2;	// IMP=0x0000000000002321
- (_Bool)isLimited;	// IMP=0x00000000000022e9
- (double)secondsUntilBudgetLimitationRemoved;	// IMP=0x00000000000022bb
- (double)_secondsUntilBudgetLimitationRemovedNoRegen;	// IMP=0x0000000000002220
@property double regenerationPerSecond; // @synthesize regenerationPerSecond=_regenerationPerSecond;
@property unsigned long long budgetCap; // @synthesize budgetCap=_budgetCap;
- (void)regenerate;	// IMP=0x0000000000001d71
- (id)description;	// IMP=0x0000000000001d5f
- (id)CKPropertiesDescription;	// IMP=0x0000000000001bbd
- (id)initWithBudgetCap:(unsigned long long)arg1 withMaximumThrottleTime:(double)arg2 andRegenerationPerSecond:(double)arg3;	// IMP=0x0000000000001a84

@end

