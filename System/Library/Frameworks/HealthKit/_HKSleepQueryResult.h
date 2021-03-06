//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>
#import <HealthKit/_HKDateBounded-Protocol.h>

@class NSDateInterval, NSDictionary, NSString;

@interface _HKSleepQueryResult : NSObject <_HKDateBounded, NSSecureCoding>
{
    NSDictionary *_resultsByCategoryValue;	// 8 = 0x8
    NSDictionary *_samplesBySource;	// 16 = 0x10
    NSDateInterval *_dateInterval;	// 24 = 0x18
    NSDateInterval *_resultInterval;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000058839
+ (id)_preferredSourceFromSources:(id)arg1 sourceOrder:(id)arg2;	// IMP=0x0000000000057e33
+ (id)samplesForSamplesBySource:(id)arg1;	// IMP=0x0000000000057b6d
+ (id)dateIntervalForSamples:(id)arg1;	// IMP=0x0000000000057853
- (void).cxx_destruct;	// IMP=0x0000000000058881
@property(readonly, copy, nonatomic) NSDictionary *samplesBySource; // @synthesize samplesBySource=_samplesBySource;
@property(readonly, nonatomic) NSDateInterval *resultInterval; // @synthesize resultInterval=_resultInterval;
- (id)endDate;	// IMP=0x0000000000058857
- (id)startDate;	// IMP=0x0000000000058841
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000587b6
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000585b8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000585ad
- (_Bool)_calculatePreferredDuration:(double *)arg1 categoryValue:(long long *)arg2;	// IMP=0x00000000000584f2
@property(readonly, copy) NSString *description;
- (id)preferredDateIntervals;	// IMP=0x0000000000057db3
- (id)dateIntervalsForCategoryValue:(long long)arg1;	// IMP=0x0000000000057d4c
- (id)initWithResultInterval:(id)arg1 dateIntervalsByCategoryValue:(id)arg2 samplesBySource:(id)arg3;	// IMP=0x0000000000057c34
- (id)dateInterval;	// IMP=0x0000000000057c26

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

