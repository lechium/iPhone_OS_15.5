//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HKSingleDailyValueQuantityTypeDataSource
{
}

- (unsigned long long)calendarUnitForTimeScope:(long long)arg1 displayType:(id)arg2;	// IMP=0x00000000001e6b04
- (id)statisticsIntervalForTimeScope:(long long)arg1 displayType:(id)arg2;	// IMP=0x00000000001e6a6e
- (_Bool)_matchesDailyValues:(id)arg1;	// IMP=0x00000000001e6a48
- (id)_componentsForDailyValues;	// IMP=0x00000000001e6a0b
- (id)_quantityValueFromStatistics:(id)arg1 statisticsInterval:(id)arg2 date:(id)arg3;	// IMP=0x00000000001e6804
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000001e60af
- (id)queryDescription;	// IMP=0x00000000001e6022

@end
