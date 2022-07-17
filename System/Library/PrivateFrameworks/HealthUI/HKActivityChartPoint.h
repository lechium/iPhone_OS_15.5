//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/HKChartPoint-Protocol.h>

@class HKActivityCache, HKActivityChartPointSummary, HKUnit, NSArray, NSDate, NSNumber, NSString;

@interface HKActivityChartPoint : NSObject <HKChartPoint>
{
    NSDate *_date;	// 8 = 0x8
    HKActivityCache *_activityCache;	// 16 = 0x10
    NSArray *_workouts;	// 24 = 0x18
    HKUnit *_unit;	// 32 = 0x20
    NSNumber *_activeEnergyBurnedMinusWorkouts;	// 40 = 0x28
    NSNumber *_workoutActiveEnergyBurned;	// 48 = 0x30
    NSArray *_workoutTimes;	// 56 = 0x38
    HKActivityChartPointSummary *_summary;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000001671e4
- (id)maxXValueAsGenericType;	// IMP=0x00000000001671d6
- (id)minXValueAsGenericType;	// IMP=0x00000000001671c8
- (id)xValueAsGenericType;	// IMP=0x00000000001671ba
- (id)maxYValue;	// IMP=0x0000000000167143
- (id)minYValue;	// IMP=0x00000000001670cc
- (id)yValue;	// IMP=0x0000000000167055
- (id)yValueForKey:(id)arg1;	// IMP=0x0000000000166f28
- (id)userInfo;	// IMP=0x0000000000166f1a
- (id)allYValues;	// IMP=0x0000000000166e8f
- (void)_createSummary;	// IMP=0x0000000000166e4e
- (void)_populateWorkoutTimes;	// IMP=0x0000000000166c16
- (void)_calculateEnergyBurned;	// IMP=0x00000000001669b3
- (id)initWithActivityCache:(id)arg1 workouts:(id)arg2 unit:(id)arg3;	// IMP=0x00000000001668a7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
