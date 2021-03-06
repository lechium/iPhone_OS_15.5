//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKInteractiveChartQuantityDefaultAxisBoundsProvider-Protocol.h>

@class HKQuantity, HKUnit, HKValueRange, NSDictionary;

@interface HKQuantityMinimumRangeAxisScalingRule <HKInteractiveChartQuantityDefaultAxisBoundsProvider>
{
    HKQuantity *_defaultYAxisRangeQuantity;	// 40 = 0x28
    HKQuantity *_minimumQuantity;	// 48 = 0x30
    HKQuantity *_maximumQuantity;	// 56 = 0x38
    NSDictionary *_axisRangeQuantityOverrides;	// 64 = 0x40
    HKValueRange *_noDataAxisBounds;	// 72 = 0x48
    HKUnit *_unit;	// 80 = 0x50
}

+ (id)ruleWithDefaultYAxisRange:(id)arg1 minimumValue:(id)arg2 maximumValue:(id)arg3 axisRangeOverrides:(id)arg4;	// IMP=0x00000000002435d3
+ (id)ruleWithDefaultYAxisRange:(id)arg1 axisRangeOverrides:(id)arg2;	// IMP=0x000000000024351a
- (void).cxx_destruct;	// IMP=0x0000000000243c9d
@property(retain, nonatomic) HKUnit *unit; // @synthesize unit=_unit;
@property(retain, nonatomic) HKValueRange *noDataAxisBounds; // @synthesize noDataAxisBounds=_noDataAxisBounds;
- (id)noDataStartingRange;	// IMP=0x0000000000243b3a
- (void)_convertQuantities;	// IMP=0x00000000002438a2
- (_Bool)isCompatibleWithQuantityType:(id)arg1;	// IMP=0x0000000000243823

@end

