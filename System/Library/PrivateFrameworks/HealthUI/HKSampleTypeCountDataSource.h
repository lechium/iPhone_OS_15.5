//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HKSampleTypeCountDataSource
{
    CDUnknownBlockType _userInfoCreationBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000026e5cc
@property(copy, nonatomic) CDUnknownBlockType userInfoCreationBlock; // @synthesize userInfoCreationBlock=_userInfoCreationBlock;
- (id)chartPointsFromQueryData:(id)arg1 dataIsFromRemoteSource:(_Bool)arg2;	// IMP=0x000000000026e0f5
- (CDUnknownBlockType)queryDataForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 healthStore:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000026dd47
- (_Bool)supportsChartQueryDataGeneration;	// IMP=0x000000000026dd3f
- (id)_chartPointsWithCounts:(id)arg1 blockStart:(id)arg2 blockEnd:(id)arg3 sourceTimeZone:(id)arg4;	// IMP=0x000000000026d9c0
- (id)queriesForStartDate:(id)arg1 endDate:(id)arg2 statisticsInterval:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000026d52a
- (id)queryDescription;	// IMP=0x000000000026d49d

@end

