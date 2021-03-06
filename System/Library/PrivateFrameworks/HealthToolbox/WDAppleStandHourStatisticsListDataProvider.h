//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKDisplayTypeValueFormatter, NSDateFormatter, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface WDAppleStandHourStatisticsListDataProvider
{
    NSMutableArray *_orderedTimePeriods;	// 8 = 0x8
    NSMutableDictionary *_totalsByTimePeriod;	// 16 = 0x10
    HKDisplayTypeValueFormatter *_valueFormatter;	// 24 = 0x18
    NSDateFormatter *_dateFormatter;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000023de3
- (id)viewControllerForItemAtIndexPath:(id)arg1;	// IMP=0x0000000000023b80
- (void)deleteObjectsAtIndexPath:(id)arg1 healthStore:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000023995
- (void)deleteAllData;	// IMP=0x000000000002392c
- (void)_removeSamplesInDateRange:(id)arg1;	// IMP=0x0000000000023619
- (void)removeObjectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2 sectionRemoved:(_Bool *)arg3;	// IMP=0x000000000002358e
- (id)secondaryTextForObject:(id)arg1;	// IMP=0x0000000000023524
- (id)textForObject:(id)arg1;	// IMP=0x0000000000023461
- (id)objectAtIndex:(unsigned long long)arg1 forSection:(unsigned long long)arg2;	// IMP=0x0000000000023444
- (unsigned long long)numberOfObjectsForSection:(unsigned long long)arg1;	// IMP=0x0000000000023427
- (id)titleForSection:(unsigned long long)arg1;	// IMP=0x000000000002337e
- (unsigned long long)numberOfSections;	// IMP=0x0000000000023373
- (long long)cellStyle;	// IMP=0x000000000002336b
- (id)predicateForType:(id)arg1;	// IMP=0x000000000002334b
- (id)sampleTypes;	// IMP=0x0000000000023296
- (id)_samplesSortDescriptor;	// IMP=0x0000000000023271
- (void)_callUpdateHandler;	// IMP=0x0000000000022ebc
- (id)initWithDisplayType:(id)arg1 profile:(id)arg2;	// IMP=0x0000000000022d69

@end

