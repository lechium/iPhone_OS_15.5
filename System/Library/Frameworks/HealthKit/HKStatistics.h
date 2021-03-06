//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/HKSampleAggregateCacheProviding-Protocol.h>
#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>
#import <HealthKit/_HKDateBounded-Protocol.h>

@class HKObjectType, HKQuantity, HKQuantityType, NSArray, NSDate, NSDateInterval, NSDictionary, NSString;

@interface HKStatistics : NSObject <_HKDateBounded, HKSampleAggregateCacheProviding, NSSecureCoding, NSCopying>
{
    HKObjectType *_dataType;	// 8 = 0x8
    NSDate *_startDate;	// 16 = 0x10
    NSDate *_endDate;	// 24 = 0x18
    NSArray *_sources;	// 32 = 0x20
    unsigned long long _dataCount;	// 40 = 0x28
    HKQuantity *_averageQuantity;	// 48 = 0x30
    HKQuantity *_minimumQuantity;	// 56 = 0x38
    HKQuantity *_maximumQuantity;	// 64 = 0x40
    HKQuantity *_mostRecentQuantity;	// 72 = 0x48
    NSDateInterval *_mostRecentQuantityDateInterval;	// 80 = 0x50
    HKQuantity *_duration;	// 88 = 0x58
    HKQuantity *_percentileQuantity;	// 96 = 0x60
    NSDictionary *_averageQuantityBySource;	// 104 = 0x68
    NSDictionary *_minimumQuantityBySource;	// 112 = 0x70
    NSDictionary *_maximumQuantityBySource;	// 120 = 0x78
    NSDictionary *_mostRecentQuantityBySource;	// 128 = 0x80
    NSDictionary *_mostRecentQuantityDateIntervalBySource;	// 136 = 0x88
    NSDictionary *_dataCountBySource;	// 144 = 0x90
    NSDictionary *_durationBySource;	// 152 = 0x98
    NSDictionary *_percentileQuantityBySource;	// 160 = 0xa0
    HKQuantity *_sumQuantity;	// 168 = 0xa8
    NSDictionary *_sumQuantityBySource;	// 176 = 0xb0
    NSDictionary *_sumQuantityBySourceID;	// 184 = 0xb8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000011d2c6
+ (void)_validateOptions:(unsigned long long)arg1 forDataType:(id)arg2;	// IMP=0x000000000011c4f8
- (void).cxx_destruct;	// IMP=0x000000000011e26b
@property(copy, nonatomic) NSDictionary *sumQuantityBySourceID; // @synthesize sumQuantityBySourceID=_sumQuantityBySourceID;
@property(copy, nonatomic) NSDictionary *sumQuantityBySource; // @synthesize sumQuantityBySource=_sumQuantityBySource;
@property(copy, nonatomic) HKQuantity *sumQuantity; // @synthesize sumQuantity=_sumQuantity;
@property(copy, nonatomic) NSDictionary *percentileQuantityBySource; // @synthesize percentileQuantityBySource=_percentileQuantityBySource;
@property(copy, nonatomic) NSDictionary *durationBySource; // @synthesize durationBySource=_durationBySource;
@property(copy, nonatomic) NSDictionary *dataCountBySource; // @synthesize dataCountBySource=_dataCountBySource;
@property(copy, nonatomic) NSDictionary *mostRecentQuantityDateIntervalBySource; // @synthesize mostRecentQuantityDateIntervalBySource=_mostRecentQuantityDateIntervalBySource;
@property(copy, nonatomic) NSDictionary *mostRecentQuantityBySource; // @synthesize mostRecentQuantityBySource=_mostRecentQuantityBySource;
@property(copy, nonatomic) NSDictionary *maximumQuantityBySource; // @synthesize maximumQuantityBySource=_maximumQuantityBySource;
@property(copy, nonatomic) NSDictionary *minimumQuantityBySource; // @synthesize minimumQuantityBySource=_minimumQuantityBySource;
@property(copy, nonatomic) NSDictionary *averageQuantityBySource; // @synthesize averageQuantityBySource=_averageQuantityBySource;
@property(copy, nonatomic) HKQuantity *percentileQuantity; // @synthesize percentileQuantity=_percentileQuantity;
@property(copy, nonatomic) HKQuantity *duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSDateInterval *mostRecentQuantityDateInterval; // @synthesize mostRecentQuantityDateInterval=_mostRecentQuantityDateInterval;
@property(copy, nonatomic) HKQuantity *mostRecentQuantity; // @synthesize mostRecentQuantity=_mostRecentQuantity;
@property(copy, nonatomic) HKQuantity *maximumQuantity; // @synthesize maximumQuantity=_maximumQuantity;
@property(copy, nonatomic) HKQuantity *minimumQuantity; // @synthesize minimumQuantity=_minimumQuantity;
@property(copy, nonatomic) HKQuantity *averageQuantity; // @synthesize averageQuantity=_averageQuantity;
@property(nonatomic) unsigned long long dataCount; // @synthesize dataCount=_dataCount;
@property(readonly, copy) NSString *description;
- (long long)bucketIndexForIntervalComponents:(id)arg1 anchorDate:(id)arg2;	// IMP=0x000000000011dfd7
- (_Bool)getData:(id *)arg1 error:(id *)arg2;	// IMP=0x000000000011df2a
- (void)_setSources:(id)arg1;	// IMP=0x000000000011defd
@property(readonly) NSArray *sources;
- (void)_setEndDate:(id)arg1;	// IMP=0x000000000011dede
@property(readonly) NSDate *endDate;
- (void)_setStartDate:(id)arg1;	// IMP=0x000000000011debf
@property(readonly) NSDate *startDate;
@property(readonly) HKQuantityType *quantityType;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000011dae9
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000011d4b9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000011d2ce
- (id)_initAsCopyOf:(id)arg1;	// IMP=0x000000000011cfac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011cf64
- (id)durationForSource:(id)arg1;	// IMP=0x000000000011ca3b
- (id)sumQuantityForSource:(id)arg1;	// IMP=0x000000000011c9d5
- (id)mostRecentQuantityDateIntervalForSource:(id)arg1;	// IMP=0x000000000011c96f
- (id)mostRecentQuantityForSource:(id)arg1;	// IMP=0x000000000011c909
- (id)maximumQuantityForSource:(id)arg1;	// IMP=0x000000000011c8a6
- (id)minimumQuantityForSource:(id)arg1;	// IMP=0x000000000011c843
- (id)averageQuantityForSource:(id)arg1;	// IMP=0x000000000011c7e0
- (id)_initWithDataType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;	// IMP=0x000000000011c7ce
- (id)initWithDataType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;	// IMP=0x000000000011c717
- (id)init;	// IMP=0x000000000011c47e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

