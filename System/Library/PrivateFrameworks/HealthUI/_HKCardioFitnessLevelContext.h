//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKDisplayType, HKGraphSeries, HKHealthStore, HKInteractiveChartDisplayType, HKUnit;
@protocol HKDateRangeDataSourceDelegate;

@interface _HKCardioFitnessLevelContext
{
    long long _cardioFitnessLevel;	// 40 = 0x28
    HKGraphSeries *_cardioFitnessLevelSeries;	// 48 = 0x30
    id <HKDateRangeDataSourceDelegate> _dataSourceDelegate;	// 56 = 0x38
    HKInteractiveChartDisplayType *_overlayDisplayType;	// 64 = 0x40
    HKDisplayType *_baseDisplayType;	// 72 = 0x48
    HKUnit *_unit;	// 80 = 0x50
    HKHealthStore *_healthStore;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000d9f4d
@property(retain, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property(retain, nonatomic) HKUnit *unit; // @synthesize unit=_unit;
@property(retain, nonatomic) HKDisplayType *baseDisplayType; // @synthesize baseDisplayType=_baseDisplayType;
@property(retain, nonatomic) HKInteractiveChartDisplayType *overlayDisplayType; // @synthesize overlayDisplayType=_overlayDisplayType;
@property(retain, nonatomic) id <HKDateRangeDataSourceDelegate> dataSourceDelegate; // @synthesize dataSourceDelegate=_dataSourceDelegate;
@property(retain, nonatomic) HKGraphSeries *cardioFitnessLevelSeries; // @synthesize cardioFitnessLevelSeries=_cardioFitnessLevelSeries;
@property(nonatomic) long long cardioFitnessLevel; // @synthesize cardioFitnessLevel=_cardioFitnessLevel;
- (id)_makeGraphSeriesWithDataSource:(id)arg1 color:(id)arg2;	// IMP=0x00000000000d9b65
- (void)_updateContextItemWithSampleCountForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d9333
- (void)_updateContextItemWithChartPointCountForDateInterval:(id)arg1 timeScope:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d8e66
- (void)updateContextItemForDateInterval:(id)arg1 overlayController:(id)arg2 timeScope:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d8e3c
- (id)overlayDisplayTypeForTimeScope:(long long)arg1;	// IMP=0x00000000000d8e2a
- (id)initWithMode:(long long)arg1 applicationItems:(id)arg2 overlayChartController:(id)arg3 baseDisplayType:(id)arg4 cardioFitnessLevel:(long long)arg5;	// IMP=0x00000000000d8ae6

@end

