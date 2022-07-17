//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HKQuantity, NSArray, NSDate;

@interface FIUIWorkoutStatistics : NSObject
{
    NSArray *_workouts;	// 8 = 0x8
    long long _numberOfWalkRunWorkouts;	// 16 = 0x10
    long long _numberOfCyclingWorkouts;	// 24 = 0x18
    _Bool _isAllOutdoorCycling;	// 32 = 0x20
    _Bool _isAllRunning;	// 33 = 0x21
    double _totalWorkoutDuration;	// 40 = 0x28
    double _averageWorkoutDuration;	// 48 = 0x30
    HKQuantity *_totalActiveEnergyBurn;	// 56 = 0x38
    HKQuantity *_averageActiveEnergyBurn;	// 64 = 0x40
    HKQuantity *_totalWalkRunDistance;	// 72 = 0x48
    HKQuantity *_averageWalkRunDistance;	// 80 = 0x50
    double _totalWalkRunDuration;	// 88 = 0x58
    HKQuantity *_totalCyclingDistance;	// 96 = 0x60
    HKQuantity *_averageCyclingDistance;	// 104 = 0x68
    double _totalCyclingDuration;	// 112 = 0x70
    unsigned long long _workoutsWithEnergyBurned;	// 120 = 0x78
    NSDate *_startOfMonth;	// 128 = 0x80
}

+ (id)_monthFormatter;	// IMP=0x0000000000033f31
- (void).cxx_destruct;	// IMP=0x0000000000033ec4
@property(readonly, nonatomic) NSDate *startOfMonth; // @synthesize startOfMonth=_startOfMonth;
@property(readonly, nonatomic) unsigned long long workoutsWithEnergyBurned; // @synthesize workoutsWithEnergyBurned=_workoutsWithEnergyBurned;
@property(readonly, nonatomic) double totalCyclingDuration; // @synthesize totalCyclingDuration=_totalCyclingDuration;
@property(readonly, nonatomic) HKQuantity *averageCyclingDistance; // @synthesize averageCyclingDistance=_averageCyclingDistance;
@property(readonly, nonatomic) HKQuantity *totalCyclingDistance; // @synthesize totalCyclingDistance=_totalCyclingDistance;
@property(readonly, nonatomic) double totalWalkRunDuration; // @synthesize totalWalkRunDuration=_totalWalkRunDuration;
@property(readonly, nonatomic) HKQuantity *averageWalkRunDistance; // @synthesize averageWalkRunDistance=_averageWalkRunDistance;
@property(readonly, nonatomic) HKQuantity *totalWalkRunDistance; // @synthesize totalWalkRunDistance=_totalWalkRunDistance;
@property(readonly, nonatomic) HKQuantity *averageActiveEnergyBurn; // @synthesize averageActiveEnergyBurn=_averageActiveEnergyBurn;
@property(readonly, nonatomic) HKQuantity *totalActiveEnergyBurn; // @synthesize totalActiveEnergyBurn=_totalActiveEnergyBurn;
@property(readonly, nonatomic) double averageWorkoutDuration; // @synthesize averageWorkoutDuration=_averageWorkoutDuration;
@property(readonly, nonatomic) double totalWorkoutDuration; // @synthesize totalWorkoutDuration=_totalWorkoutDuration;
- (void)_calculateAverages;	// IMP=0x0000000000033b4e
- (void)_calculateStats;	// IMP=0x00000000000331d8
@property(readonly, nonatomic) unsigned long long workoutCount;
- (id)init;	// IMP=0x00000000000331b4
- (id)initWithWorkouts:(id)arg1;	// IMP=0x0000000000033117
- (id)formattedWorkoutCount;	// IMP=0x0000000000034ea6
- (id)simpleWorkoutCount;	// IMP=0x0000000000034e27
- (id)_formattedCyclingDistance:(id)arg1 formattingManager:(id)arg2;	// IMP=0x0000000000034bf4
- (id)formattedAverageCyclingDistanceWithFormattingManager:(id)arg1;	// IMP=0x0000000000034bdb
- (id)formattedTotalCyclingDistanceWithFormattingManager:(id)arg1;	// IMP=0x0000000000034bc2
- (id)_formattedWalkRunDistance:(id)arg1 formattingManager:(id)arg2;	// IMP=0x000000000003498f
- (id)formattedAverageWalkRunDistanceWithFormattingManager:(id)arg1;	// IMP=0x0000000000034976
- (id)formattedTotalWalkRunDistanceWithFormattingManager:(id)arg1;	// IMP=0x000000000003495d
- (id)_formattedEnergyBurn:(id)arg1 formattingManager:(id)arg2;	// IMP=0x000000000003482b
- (id)formattedAverageActiveEnergyBurnWithFormattingManager:(id)arg1;	// IMP=0x0000000000034812
- (id)formattedTotalActiveEnergyBurnWithFormattingManager:(id)arg1;	// IMP=0x00000000000347f9
- (id)_formattedDuration:(double)arg1 formattingManager:(id)arg2;	// IMP=0x00000000000347df
- (id)formattedAverageWorkoutDurationWithFormattingManager:(id)arg1;	// IMP=0x00000000000347c8
- (id)formattedTotalWorkoutDurationWithFormattingManager:(id)arg1;	// IMP=0x00000000000347b1
- (id)formattedSpeedWithFormattingManager:(id)arg1;	// IMP=0x0000000000034660
- (id)formattedPaceWithFormattingManager:(id)arg1;	// IMP=0x00000000000344e2
- (id)formattedCyclingDistanceWithFormattingManager:(id)arg1;	// IMP=0x00000000000343ce
- (id)formattedWalkRunDistanceWithFormattingManager:(id)arg1;	// IMP=0x00000000000342ba
- (id)formattedActiveEnergyBurnWithFormattingManager:(id)arg1;	// IMP=0x00000000000341a6
- (id)formattedWorkoutDurationWithFormattingManager:(id)arg1;	// IMP=0x0000000000034092
- (id)formattedMonth;	// IMP=0x0000000000034027

@end
