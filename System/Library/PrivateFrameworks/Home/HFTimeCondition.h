//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HFTimeCondition
{
}

+ (id)defaultConditionForType:(unsigned long long)arg1;	// IMP=0x000000000026cfdb
+ (id)_formattedStringForOffset:(id)arg1;	// IMP=0x00000000000425dc
+ (id)_formattedStringForSunriseSunsetCondition:(id)arg1 style:(unsigned long long)arg2 formattingContext:(long long)arg3;	// IMP=0x000000000004224d
+ (id)_formattedStringForDateComponentsCondition:(id)arg1 style:(unsigned long long)arg2 formattingContext:(long long)arg3;	// IMP=0x0000000000042019
+ (id)_formattedStringForTimeCondition:(id)arg1 style:(unsigned long long)arg2 formattingContext:(long long)arg3;	// IMP=0x0000000000041f3b
+ (id)_formattedStringForTimeRangeCondition:(id)arg1 style:(unsigned long long)arg2 formattingContext:(long long)arg3;	// IMP=0x0000000000041e04
+ (id)_nameForConditionType:(unsigned long long)arg1 formattingStyle:(long long)arg2 formattingContext:(long long)arg3;	// IMP=0x0000000000041cde
+ (id)hf_naturalLanguageSummaryForTypeOnlyWithOptions:(id)arg1;	// IMP=0x0000000000041bd5
- (unsigned long long)timeConditionType;	// IMP=0x000000000026cfd0
- (id)hf_naturalLanguageSummaryWithOptions:(id)arg1;	// IMP=0x00000000000418c4

@end
