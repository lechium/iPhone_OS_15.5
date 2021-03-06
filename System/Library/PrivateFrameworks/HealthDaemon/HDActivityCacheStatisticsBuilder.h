//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKQuantity, NSNumber, NSString;
@protocol HDActivityCacheStatisticsBuilderSourceOrderDelegate;

@interface HDActivityCacheStatisticsBuilder : NSObject
{
    struct vector<HDActivityCacheStatisticsBuilderWorkoutSample, std::allocator<HDActivityCacheStatisticsBuilderWorkoutSample>> _workouts;	// 8 = 0x8
    struct vector<HDActivityCacheStatisticsBuilderStandHourSample, std::allocator<HDActivityCacheStatisticsBuilderStandHourSample>> _standHourSamples;	// 32 = 0x20
    vector_0fd01da3 _activationLogSamples;	// 56 = 0x38
    HKQuantity *_lastActiveEnergyValue;	// 80 = 0x50
    NSNumber *_lastMoveMinuteValue;	// 88 = 0x58
    HKQuantity *_lastDistanceWalkingValue;	// 96 = 0x60
    NSNumber *_lastFlightsClimbedValue;	// 104 = 0x68
    NSNumber *_lastStepCountValue;	// 112 = 0x70
    NSNumber *_lastPushCountValue;	// 120 = 0x78
    NSNumber *_lastStandHourValue;	// 128 = 0x80
    NSNumber *_lastExerciseMinuteValue;	// 136 = 0x88
    double _deepBreathingDurationValue;	// 144 = 0x90
    vector_0fd01da3 _activeSourcesList;	// 152 = 0x98
    struct map<_HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>, std::less<_HKDataTypeCode>, std::allocator<std::pair<const _HKDataTypeCode, std::map<long long, _HDActivityCacheSourceTotal>>>> _sourceTotalsByIntervalIndexByTypeCode;	// 176 = 0xb0
    double _builderStartTime;	// 200 = 0xc8
    double _builderEndTime;	// 208 = 0xd0
    NSString *_loggingName;	// 216 = 0xd8
    double _intervalDuration;	// 224 = 0xe0
    id <HDActivityCacheStatisticsBuilderSourceOrderDelegate> _sourceOrderDelegate;	// 232 = 0xe8
}

- (id).cxx_construct;	// IMP=0x000000000007436d
- (void).cxx_destruct;	// IMP=0x0000000000082337
@property(nonatomic) __weak id <HDActivityCacheStatisticsBuilderSourceOrderDelegate> sourceOrderDelegate; // @synthesize sourceOrderDelegate=_sourceOrderDelegate;
@property(nonatomic) double intervalDuration; // @synthesize intervalDuration=_intervalDuration;
- (id)workoutSamplesWithSourceManager:(id)arg1;	// IMP=0x000000000008326e
- (id)createStandStatisticsWithCalendar:(id)arg1;	// IMP=0x000000000001533b
- (id)createExerciseStatisticsWithIntervalComponents:(id)arg1 calendar:(id)arg2;	// IMP=0x000000000001527a
- (id)createMoveMinuteStatisticsWithIntervalComponents:(id)arg1 calendar:(id)arg2;	// IMP=0x00000000004b96fb
- (id)createMoveStatisticsWithIntervalComponents:(id)arg1 calendar:(id)arg2;	// IMP=0x0000000000013614
- (id)createStatisticsCollectionWithType:(id)arg1 intervalComponents:(id)arg2 calendar:(id)arg3;	// IMP=0x00000000004b90e6
- (void)addDeepBreathingSessionDuration:(double)arg1;	// IMP=0x00000000004b90d0
- (void)addWorkoutSample:(struct HDActivityCacheStatisticsBuilderSample)arg1 typeCode:(long long)arg2;	// IMP=0x0000000000075ee8
- (void)addDeviceSamples:(const void *)arg1 typeCode:(long long)arg2;	// IMP=0x00000000004b9037
- (void)addDeviceSample:(struct HDActivityCacheStatisticsBuilderSample)arg1 typeCode:(long long)arg2;	// IMP=0x000000000003e061
- (void)addActivationLogSamples:(const void *)arg1;	// IMP=0x00000000004b89d9
- (void)addStandHourSamples:(const void *)arg1;	// IMP=0x0000000000055bee
- (void)addWorkouts:(const void *)arg1;	// IMP=0x0000000000074a49
- (double)deepBreathingDurationValue;	// IMP=0x0000000000040feb
- (long long)exerciseMinuteValue;	// IMP=0x0000000000040c63
- (long long)standHourValue;	// IMP=0x0000000000040bf6
- (long long)pushCountValue;	// IMP=0x0000000000040d9a
- (long long)stepCountValue;	// IMP=0x0000000000040ec2
- (long long)flightsClimbedValue;	// IMP=0x0000000000040ffa
- (id)distanceWalkingValue;	// IMP=0x0000000000040aa0
- (long long)moveMinuteValue;	// IMP=0x00000000004b862c
- (id)activeEnergyValue;	// IMP=0x000000000004082d
- (id)init;	// IMP=0x00000000004b8595
- (id)initWithDateInterval:(id)arg1 loggingName:(id)arg2;	// IMP=0x00000000000743b3

@end

