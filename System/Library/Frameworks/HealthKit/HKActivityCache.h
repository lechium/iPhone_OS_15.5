//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthKit/NSCopying-Protocol.h>

@class HKQuantity, NSArray, NSDate, NSDateComponents;

@interface HKActivityCache <NSCopying>
{
    long long _cacheIndex;	// 8 = 0x8
    NSDateComponents *_dateComponents;	// 16 = 0x10
    long long _stepCount;	// 24 = 0x18
    long long _pushCount;	// 32 = 0x20
    long long _wheelchairUse;	// 40 = 0x28
    double _deepBreathingDuration;	// 48 = 0x30
    HKQuantity *_energyBurned;	// 56 = 0x38
    double _moveMinutes;	// 64 = 0x40
    double _briskMinutes;	// 72 = 0x48
    double _activeHours;	// 80 = 0x50
    HKQuantity *_energyBurnedGoal;	// 88 = 0x58
    NSDate *_energyBurnedGoalDate;	// 96 = 0x60
    double _moveMinutesGoal;	// 104 = 0x68
    NSDate *_moveMinutesGoalDate;	// 112 = 0x70
    double _briskMinutesGoal;	// 120 = 0x78
    NSDate *_briskMinutesGoalDate;	// 128 = 0x80
    double _activeHoursGoal;	// 136 = 0x88
    NSDate *_activeHoursGoalDate;	// 144 = 0x90
    HKQuantity *_walkingAndRunningDistance;	// 152 = 0x98
    long long _flightsClimbed;	// 160 = 0xa0
    NSArray *_dailyEnergyBurnedStatistics;	// 168 = 0xa8
    NSArray *_dailyMoveMinutesStatistics;	// 176 = 0xb0
    NSArray *_dailyBriskMinutesStatistics;	// 184 = 0xb8
    long long _activityMoveMode;	// 192 = 0xc0
    unsigned long long _knownFields;	// 200 = 0xc8
    long long _sequence;	// 208 = 0xd0
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000014bbdc
+ (_Bool)_isConcreteObjectClass;	// IMP=0x000000000014b12d
+ (id)_activityCacheWithUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 dateComponents:(id)arg4 sequence:(long long)arg5;	// IMP=0x000000000014ae91
+ (id)_activityCacheWithStartDate:(id)arg1 endDate:(id)arg2 dateComponents:(id)arg3 sequence:(long long)arg4 metadata:(id)arg5;	// IMP=0x000000000014ac10
+ (id)_activityCacheWithStartDate:(id)arg1 endDate:(id)arg2 dateComponents:(id)arg3 sequence:(long long)arg4 energyBurned:(id)arg5 energyBurnedGoal:(id)arg6 walkingAndRunningDistance:(id)arg7 metadata:(id)arg8;	// IMP=0x000000000014ab24
- (void).cxx_destruct;	// IMP=0x0000000000012578
@property(readonly) NSDate *activeHoursGoalDate; // @synthesize activeHoursGoalDate=_activeHoursGoalDate;
@property(readonly) NSDate *briskMinutesGoalDate; // @synthesize briskMinutesGoalDate=_briskMinutesGoalDate;
@property(setter=_setSequence:) long long sequence; // @synthesize sequence=_sequence;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000009a57
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000014bbe4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000a292
- (double)_walkingAndRunningDistanceInMeters;	// IMP=0x0000000000012176
- (double)_energyBurnedGoalInKilocalories;	// IMP=0x0000000000012110
- (double)_energyBurnedInKilocalories;	// IMP=0x00000000000120aa
- (void)reset;	// IMP=0x000000000014ba85
@property(readonly) unsigned long long knownFields;
@property(setter=_setActivityMoveMode:) long long activityMoveMode;
@property(copy, setter=_setDailyBriskMinutesStatistics:) NSArray *dailyBriskMinutesStatistics;
@property(readonly) _Bool hasDailyBriskMinutesStatistics;
@property(copy, setter=_setDailyMoveMinutesStatistics:) NSArray *dailyMoveMinutesStatistics;
@property(readonly) _Bool hasDailyMoveMinutesStatistics;
@property(copy, setter=_setDailyEnergyBurnedStatistics:) NSArray *dailyEnergyBurnedStatistics;
@property(readonly) _Bool hasDailyEnergyBurnedStatistics;
@property(readonly) _Bool hasFlightsClimbed;
@property(setter=_setFlightsClimbed:) long long flightsClimbed;
@property(readonly) _Bool hasWalkingAndRunningDistance;
@property(retain, setter=_setWalkingAndRunningDistance:) HKQuantity *walkingAndRunningDistance;
@property(readonly) _Bool hasDeepBreathingDuration;
@property(setter=_setDeepBreathingDuration:) double deepBreathingDuration;
@property(readonly) _Bool hasWheelchairUse;
@property(setter=_setWheelchairUse:) long long wheelchairUse;
@property(readonly) _Bool hasPushCount;
@property(setter=_setPushCount:) long long pushCount;
@property(readonly) _Bool hasStepCount;
@property(setter=_setStepCount:) long long stepCount;
@property(readonly) _Bool hasDateComponents;
@property(readonly) NSDateComponents *dateComponents;
@property(setter=_setCacheIndex:) long long cacheIndex;
- (double)activeHoursGoalPercentage;	// IMP=0x000000000014b7ef
- (double)briskMinutesGoalPercentage;	// IMP=0x000000000014b7b6
- (double)moveMinutesGoalPercentage;	// IMP=0x000000000014b78a
- (double)energyBurnedGoalPercentage;	// IMP=0x000000000014b745
@property(readonly) _Bool hasActiveHoursGoalDate;
@property(readonly) _Bool hasActiveHoursGoal;
- (void)_setActiveHoursGoalDateOnly:(id)arg1;	// IMP=0x000000000014b71c
- (void)_setActiveHoursGoalOnly:(double)arg1;	// IMP=0x000000000014b70a
- (void)_setActiveHoursGoal:(double)arg1 date:(id)arg2;	// IMP=0x000000000014b5b9
@property(setter=_setActiveHoursGoal:) double activeHoursGoal;
@property(readonly) _Bool hasBriskMinutesGoalDate;
@property(readonly) _Bool hasBriskMinutesGoal;
- (void)_setBriskMinutesGoalDateOnly:(id)arg1;	// IMP=0x000000000014b4de
- (void)_setBriskMinutesGoalOnly:(double)arg1;	// IMP=0x000000000014b4cc
- (void)_setBriskMinutesGoal:(double)arg1 date:(id)arg2;	// IMP=0x000000000014b37b
@property(setter=_setBriskMinutesGoal:) double briskMinutesGoal;
@property(readonly) _Bool hasMoveMinutesGoal;
- (void)_setMoveMinutesGoalDateOnly:(id)arg1;	// IMP=0x000000000014b296
- (void)_setMoveMinutesGoalOnly:(double)arg1;	// IMP=0x000000000014b284
- (void)_setMoveMinutesGoal:(double)arg1 date:(id)arg2;	// IMP=0x000000000014b1b6
@property(setter=_setMoveMinutesGoal:) double moveMinutesGoal;
@property(readonly) NSDate *moveMinutesGoalDate;
@property(readonly) _Bool hasEnergyBurnedGoal;
- (void)_setEnergyBurnedGoalDateOnly:(id)arg1;	// IMP=0x0000000000011857
- (void)_setEnergyBurnedGoalOnly:(id)arg1;	// IMP=0x0000000000015372
- (void)_setEnergyBurnedGoal:(id)arg1 date:(id)arg2;	// IMP=0x000000000000b28d
@property(retain, setter=_setEnergyBurnedGoal:) HKQuantity *energyBurnedGoal;
@property(readonly) NSDate *energyBurnedGoalDate;
@property(readonly) _Bool hasActiveHours;
@property(setter=_setActiveHours:) double activeHours;
@property(readonly) _Bool hasBriskMinutes;
@property(setter=_setBriskMinutes:) double briskMinutes;
@property(readonly) _Bool hasMoveMinutes;
@property(setter=_setMoveMinutes:) double moveMinutes;
@property(readonly) _Bool hasEnergyBurned;
@property(retain, setter=_setEnergyBurned:) HKQuantity *energyBurned;
- (_Bool)_isEqualToActivityCache:(id)arg1;	// IMP=0x000000000000b486
- (id)_valueDescription;	// IMP=0x0000000000011b0f

@end
