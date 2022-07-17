//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKQuantity;

@interface HDDemoDataWorkoutPrototype : NSObject
{
    unsigned long long _workoutActivityType;	// 8 = 0x8
    unsigned long long _goalType;	// 16 = 0x10
    HKQuantity *_goal;	// 24 = 0x18
    double _startTimeOffsetInDay;	// 32 = 0x20
    double _duration;	// 40 = 0x28
    double _totalEnergyBurnedInKcal;	// 48 = 0x30
    double _totalDistanceWalkingInMiles;	// 56 = 0x38
    double _totalDistanceCyclingInMiles;	// 64 = 0x40
    double _totalDistanceSwimmingInYards;	// 72 = 0x48
    double _swimmingSegmentDistanceInYards;	// 80 = 0x50
    long long _totalSwimmingSegments;	// 88 = 0x58
    long long _numLapsPerSegment;	// 96 = 0x60
    double _swimTimePerSegment;	// 104 = 0x68
    double _restTimePerSegment;	// 112 = 0x70
    long long _swimmingStrokeStyle;	// 120 = 0x78
}

+ (id)pickRandomWorkoutFrom:(id)arg1;	// IMP=0x000000000026b6b7
+ (id)yogaAndRunningPrototypes;	// IMP=0x000000000026b4de
+ (id)dancePrototype;	// IMP=0x000000000026b418
+ (id)coreTrainingPrototype;	// IMP=0x000000000026b3d2
+ (id)coolDownPrototype;	// IMP=0x000000000026b38c
+ (id)functionalStrengthTrainingPrototype;	// IMP=0x000000000026b346
+ (id)thirdPartyWorkoutPrototype;	// IMP=0x000000000026b303
+ (id)yogaPrototype;	// IMP=0x000000000026b23d
+ (id)hikingPrototype;	// IMP=0x000000000026b1f2
+ (id)walkingPrototype;	// IMP=0x000000000026b11e
+ (id)swimmingPrototype;	// IMP=0x000000000026b017
+ (id)runningPrototype;	// IMP=0x000000000026af43
+ (id)HIITPrototype;	// IMP=0x000000000026ae7d
+ (id)ellipticalPrototype;	// IMP=0x000000000026adb7
+ (id)workoutPrototypeWithActivityType:(unsigned long long)arg1 goalType:(unsigned long long)arg2 goal:(id)arg3 startTime:(double)arg4 duration:(double)arg5 energyBurned:(double)arg6 distanceWalking:(double)arg7 distanceCycling:(double)arg8 distanceSwimming:(double)arg9 distanceSwimmingSegment:(double)arg10 totalSwimmingSegments:(long long)arg11 numLapsPerSegment:(long long)arg12 swimTimePerSegment:(double)arg13 restTimePerSegment:(double)arg14 swimmingStrokeStyle:(long long)arg15;	// IMP=0x000000000026aca9
+ (id)workoutPrototypeWithActivityType:(unsigned long long)arg1 goalType:(unsigned long long)arg2 goal:(id)arg3 startTime:(double)arg4 duration:(double)arg5 energyBurned:(double)arg6 distanceWalking:(double)arg7 distanceCycling:(double)arg8;	// IMP=0x000000000026ac04
- (void).cxx_destruct;	// IMP=0x000000000026b86c
@property(nonatomic) long long swimmingStrokeStyle; // @synthesize swimmingStrokeStyle=_swimmingStrokeStyle;
@property(nonatomic) double restTimePerSegment; // @synthesize restTimePerSegment=_restTimePerSegment;
@property(nonatomic) double swimTimePerSegment; // @synthesize swimTimePerSegment=_swimTimePerSegment;
@property(nonatomic) long long numLapsPerSegment; // @synthesize numLapsPerSegment=_numLapsPerSegment;
@property(nonatomic) long long totalSwimmingSegments; // @synthesize totalSwimmingSegments=_totalSwimmingSegments;
@property(nonatomic) double swimmingSegmentDistanceInYards; // @synthesize swimmingSegmentDistanceInYards=_swimmingSegmentDistanceInYards;
@property(nonatomic) double totalDistanceSwimmingInYards; // @synthesize totalDistanceSwimmingInYards=_totalDistanceSwimmingInYards;
@property(nonatomic) double totalDistanceCyclingInMiles; // @synthesize totalDistanceCyclingInMiles=_totalDistanceCyclingInMiles;
@property(nonatomic) double totalDistanceWalkingInMiles; // @synthesize totalDistanceWalkingInMiles=_totalDistanceWalkingInMiles;
@property(nonatomic) double totalEnergyBurnedInKcal; // @synthesize totalEnergyBurnedInKcal=_totalEnergyBurnedInKcal;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double startTimeOffsetInDay; // @synthesize startTimeOffsetInDay=_startTimeOffsetInDay;
@property(retain, nonatomic) HKQuantity *goal; // @synthesize goal=_goal;
@property(nonatomic) unsigned long long goalType; // @synthesize goalType=_goalType;
@property(nonatomic) unsigned long long workoutActivityType; // @synthesize workoutActivityType=_workoutActivityType;

@end
