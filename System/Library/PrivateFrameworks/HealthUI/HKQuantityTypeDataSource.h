//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKQuantityType, HKUnitPreferenceController;

@interface HKQuantityTypeDataSource
{
    CDUnknownBlockType _mappingFunction;	// 16 = 0x10
    unsigned long long _statisticsOptions;	// 24 = 0x18
    HKUnitPreferenceController *_unitController;	// 32 = 0x20
    CDUnknownBlockType _userInfoCreationBlock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001babfa
@property(copy, nonatomic) CDUnknownBlockType userInfoCreationBlock; // @synthesize userInfoCreationBlock=_userInfoCreationBlock;
@property(readonly, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;
@property(readonly, nonatomic) unsigned long long statisticsOptions; // @synthesize statisticsOptions=_statisticsOptions;
- (id)chartPointsFromQueryData:(id)arg1 dataIsFromRemoteSource:(_Bool)arg2;	// IMP=0x00000000001ba9c8
- (CDUnknownBlockType)queryDataForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 healthStore:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000001ba59f
- (_Bool)supportsChartQueryDataGeneration;	// IMP=0x00000000001ba597
- (id)_defaultQueriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001b9f29
- (id)_averageByInterval:(id)arg1 startDate:(id)arg2 statistics:(id)arg3;	// IMP=0x00000000001b995c
- (id)_dailyAverageQueriesWithStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001b9737
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001b9600
- (id)queryDescription;	// IMP=0x00000000001b9573
- (CDUnknownBlockType)_createMappingFunction;	// IMP=0x00000000001b9230
- (CDUnknownBlockType)mappingFunctionForContext:(id)arg1;	// IMP=0x00000000001b9213
@property(readonly, nonatomic) HKQuantityType *quantityType;
- (id)initWithUnitController:(id)arg1 options:(unsigned long long)arg2 displayType:(id)arg3 healthStore:(id)arg4;	// IMP=0x00000000001b90fd

@end
