//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKDisplayType;

@interface HKHandwashingInteractiveChartViewController
{
    HKDisplayType *_primaryDisplayType;	// 8 = 0x8
    HKDisplayType *_goalDisplayType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000021a0e0
@property(retain, nonatomic) HKDisplayType *goalDisplayType; // @synthesize goalDisplayType=_goalDisplayType;
@property(retain, nonatomic) HKDisplayType *primaryDisplayType; // @synthesize primaryDisplayType=_primaryDisplayType;
- (id)_generateHandwashingGoalDisplayTypeWithDisplayType:(id)arg1 unitPreferencesController:(id)arg2 selectedTimeScopeController:(id)arg3;	// IMP=0x0000000000219e6d
- (id)_generateHandwashingGoalLineSeriesWithDisplayType:(id)arg1 unitPreferenceController:(id)arg2 color:(id)arg3;	// IMP=0x0000000000219945
- (id)_generateHandwashingGoalDataSource;	// IMP=0x00000000002198d3
- (void)configureDisplayTypes:(id)arg1 timeScope:(long long)arg2 stackOffset:(long long)arg3;	// IMP=0x00000000002197e4
- (void)viewDidLoad;	// IMP=0x0000000000219771
- (id)initWithDisplayTypeController:(id)arg1 healthStore:(id)arg2 unitPreferenceController:(id)arg3 dateCache:(id)arg4 chartDataCacheController:(id)arg5 selectedTimeScopeController:(id)arg6 sampleTypeDateRangeController:(id)arg7 initialXValue:(id)arg8;	// IMP=0x000000000021955a

@end

