//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HDDataOriginProvenance, HDDemoDataGeneratorWorkoutConfiguration, HDProfile, HKActivityCache, _HDDemoDataActivityWorkoutState;

@interface HDDemoDataActivitySampleGenerator
{
    HDProfile *_profile;	// 8 = 0x8
    HDDataOriginProvenance *_provenance;	// 16 = 0x10
    double _nextActiveCaloriesSampleTime;	// 24 = 0x18
    double _nextAppleStandHourSampleTime;	// 32 = 0x20
    double _nextRestingCaloriesSampleTime;	// 40 = 0x28
    double _nextFallSampleTime;	// 48 = 0x30
    double _nextFlightsClimbedSampleTime;	// 56 = 0x38
    double _nextStepsSampleTime;	// 64 = 0x40
    double _nextExerciseMinuteTime;	// 72 = 0x48
    double _nextHeartRateRecoveryStartTime;	// 80 = 0x50
    double _nextHeartRateRecoveryStopTime;	// 88 = 0x58
    double _nextUVIndexSampleTime;	// 96 = 0x60
    double _lastUVIndexPeakTime;	// 104 = 0x68
    double _lastUVExposure;	// 112 = 0x70
    double _lastUVIndexPeak;	// 120 = 0x78
    HKActivityCache *_lastActivityCache;	// 128 = 0x80
    HDDemoDataGeneratorWorkoutConfiguration *_currentWorkoutConfiguration;	// 136 = 0x88
    _HDDemoDataActivityWorkoutState *_workoutState;	// 144 = 0x90
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000284620
- (void).cxx_destruct;	// IMP=0x000000000028dd93
- (_Bool)_isDemoPersonInWorkoutRecovery:(id)arg1 atTime:(double)arg2;	// IMP=0x000000000028dd69
- (_Bool)_isDemoPersonWalking:(id)arg1 atTime:(double)arg2 samplePeriod:(double)arg3;	// IMP=0x000000000028dbfa
- (_Bool)_isDemoPersonSedentary:(id)arg1 atTime:(double)arg2;	// IMP=0x000000000028da8a
- (_Bool)_isDemoPersonCoolingDown:(id)arg1 atTime:(double)arg2;	// IMP=0x000000000028d95b
- (double)_computePercentCooledForDemoPerson:(id)arg1 atTime:(double)arg2;	// IMP=0x000000000028d807
- (id)_computeFlightsClimbedForDemoPerson:(id)arg1 atTime:(double)arg2;	// IMP=0x000000000028d36b
- (double)_computeExerciseTimeFromCurrentTime:(double)arg1 mean:(double)arg2 stdDev:(double)arg3;	// IMP=0x000000000028d2ce
- (void)generateSamplesForDemoPerson:(id)arg1 fromTime:(double)arg2 toTime:(double)arg3 currentDate:(id)arg4 objectCollection:(id)arg5;	// IMP=0x00000000002848ae
- (void)generateFirstRunSampleForDemoPerson:(id)arg1 firstDate:(id)arg2 objectCollection:(id)arg3;	// IMP=0x000000000028487f
- (void)setupWithDemoDataGenerator:(id)arg1;	// IMP=0x0000000000284675
- (void)setProfile:(id)arg1 provenance:(id)arg2;	// IMP=0x0000000000284628
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002843e6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000028410d
- (id)init;	// IMP=0x0000000000284008

@end
