//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActivityAchievementsDaemon/NSCopying-Protocol.h>

@class ACHDataStoreActivityProperties, HKActivitySummary, HKQuantity;

@interface ACHActivityAwardingDataProvider : NSObject <NSCopying>
{
    HKActivitySummary *_todayActivitySummary;	// 8 = 0x8
    HKActivitySummary *_yesterdayActivitySummary;	// 16 = 0x10
    ACHDataStoreActivityProperties *_properties;	// 24 = 0x18
    long long _lastCheckedIndexForMove;	// 32 = 0x20
    HKQuantity *_lastProcessedTodayMoveValue;	// 40 = 0x28
    HKQuantity *_previousProcessedTodayMoveValue;	// 48 = 0x30
    HKQuantity *_lastTodayMoveGoal;	// 56 = 0x38
    HKQuantity *_lastProcessedTodayMoveTimeValue;	// 64 = 0x40
    HKQuantity *_previousProcessedTodayMoveTimeValue;	// 72 = 0x48
    HKQuantity *_lastTodayMoveTimeGoal;	// 80 = 0x50
    long long _lastCheckedIndexForExercise;	// 88 = 0x58
    HKQuantity *_lastProcessedTodayExerciseValue;	// 96 = 0x60
    HKQuantity *_previousProcessedTodayExerciseValue;	// 104 = 0x68
    HKQuantity *_lastTodayExerciseGoal;	// 112 = 0x70
    long long _lastCheckedIndexForStand;	// 120 = 0x78
    HKQuantity *_lastProcessedTodayStandValue;	// 128 = 0x80
    HKQuantity *_previousProcessedTodayStandValue;	// 136 = 0x88
    HKQuantity *_lastTodayStandGoal;	// 144 = 0x90
    long long _lastCheckedIndexForAllGoals;	// 152 = 0x98
    long long _lastCheckedIndexForDistance;	// 160 = 0xa0
    HKQuantity *_todayDistanceValue;	// 168 = 0xa8
    HKQuantity *_lastTodayDistanceValue;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000000000444ee
@property(retain, nonatomic) HKQuantity *lastTodayDistanceValue; // @synthesize lastTodayDistanceValue=_lastTodayDistanceValue;
@property(readonly, nonatomic) HKQuantity *todayDistanceValue; // @synthesize todayDistanceValue=_todayDistanceValue;
@property(nonatomic) long long lastCheckedIndexForDistance; // @synthesize lastCheckedIndexForDistance=_lastCheckedIndexForDistance;
@property(nonatomic) long long lastCheckedIndexForAllGoals; // @synthesize lastCheckedIndexForAllGoals=_lastCheckedIndexForAllGoals;
@property(retain, nonatomic) HKQuantity *lastTodayStandGoal; // @synthesize lastTodayStandGoal=_lastTodayStandGoal;
@property(retain, nonatomic) HKQuantity *previousProcessedTodayStandValue; // @synthesize previousProcessedTodayStandValue=_previousProcessedTodayStandValue;
@property(retain, nonatomic) HKQuantity *lastProcessedTodayStandValue; // @synthesize lastProcessedTodayStandValue=_lastProcessedTodayStandValue;
@property(nonatomic) long long lastCheckedIndexForStand; // @synthesize lastCheckedIndexForStand=_lastCheckedIndexForStand;
@property(retain, nonatomic) HKQuantity *lastTodayExerciseGoal; // @synthesize lastTodayExerciseGoal=_lastTodayExerciseGoal;
@property(retain, nonatomic) HKQuantity *previousProcessedTodayExerciseValue; // @synthesize previousProcessedTodayExerciseValue=_previousProcessedTodayExerciseValue;
@property(retain, nonatomic) HKQuantity *lastProcessedTodayExerciseValue; // @synthesize lastProcessedTodayExerciseValue=_lastProcessedTodayExerciseValue;
@property(nonatomic) long long lastCheckedIndexForExercise; // @synthesize lastCheckedIndexForExercise=_lastCheckedIndexForExercise;
@property(retain, nonatomic) HKQuantity *lastTodayMoveTimeGoal; // @synthesize lastTodayMoveTimeGoal=_lastTodayMoveTimeGoal;
@property(retain, nonatomic) HKQuantity *previousProcessedTodayMoveTimeValue; // @synthesize previousProcessedTodayMoveTimeValue=_previousProcessedTodayMoveTimeValue;
@property(retain, nonatomic) HKQuantity *lastProcessedTodayMoveTimeValue; // @synthesize lastProcessedTodayMoveTimeValue=_lastProcessedTodayMoveTimeValue;
@property(retain, nonatomic) HKQuantity *lastTodayMoveGoal; // @synthesize lastTodayMoveGoal=_lastTodayMoveGoal;
@property(retain, nonatomic) HKQuantity *previousProcessedTodayMoveValue; // @synthesize previousProcessedTodayMoveValue=_previousProcessedTodayMoveValue;
@property(retain, nonatomic) HKQuantity *lastProcessedTodayMoveValue; // @synthesize lastProcessedTodayMoveValue=_lastProcessedTodayMoveValue;
@property(nonatomic) long long lastCheckedIndexForMove; // @synthesize lastCheckedIndexForMove=_lastCheckedIndexForMove;
@property(readonly, nonatomic) ACHDataStoreActivityProperties *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) HKActivitySummary *yesterdayActivitySummary; // @synthesize yesterdayActivitySummary=_yesterdayActivitySummary;
@property(retain, nonatomic) HKActivitySummary *todayActivitySummary; // @synthesize todayActivitySummary=_todayActivitySummary;
@property(readonly, nonatomic) HKQuantity *yesterdayStandGoal;
@property(readonly, nonatomic) HKQuantity *todayStandGoal;
@property(readonly, nonatomic) HKQuantity *yesterdayStandValue;
@property(readonly, nonatomic) HKQuantity *todayStandValue;
@property(readonly, nonatomic) HKQuantity *yesterdayExerciseGoal;
@property(readonly, nonatomic) HKQuantity *todayExerciseGoal;
@property(readonly, nonatomic) HKQuantity *yesterdayExerciseValue;
@property(readonly, nonatomic) HKQuantity *todayExerciseValue;
@property(readonly, nonatomic) HKQuantity *yesterdayMoveTimeGoal;
@property(readonly, nonatomic) HKQuantity *todayMoveTimeGoal;
@property(readonly, nonatomic) HKQuantity *yesterdayMoveTimeValue;
@property(readonly, nonatomic) HKQuantity *todayMoveTimeValue;
@property(readonly, nonatomic) HKQuantity *yesterdayMoveGoal;
@property(readonly, nonatomic) HKQuantity *todayMoveGoal;
@property(readonly, nonatomic) HKQuantity *yesterdayMoveValue;
@property(readonly, nonatomic) HKQuantity *todayMoveValue;
- (_Bool)allGoalsMetToday;	// IMP=0x0000000000043b1a
- (void)setNewStandState:(CDStruct_bd1b3a42)arg1;	// IMP=0x00000000000438a6
- (void)setNewExerciseState:(CDStruct_bd1b3a42)arg1;	// IMP=0x000000000004365f
- (void)_setBaseMoveState:(CDStruct_bd1b3a42)arg1;	// IMP=0x00000000000434eb
- (void)setNewMoveTimeState:(CDStruct_bd1b3a42)arg1;	// IMP=0x0000000000043365
- (void)setNewMoveState:(CDStruct_bd1b3a42)arg1;	// IMP=0x00000000000431e2
- (CDStruct_bd1b3a42)currentStandState;	// IMP=0x0000000000042eca
- (CDStruct_bd1b3a42)currentExerciseState;	// IMP=0x0000000000042bf1
- (CDStruct_bd1b3a42)_baseMoveState;	// IMP=0x000000000004271a
- (CDStruct_bd1b3a42)currentMoveTimeState;	// IMP=0x0000000000042694
- (CDStruct_bd1b3a42)currentMoveState;	// IMP=0x000000000004260e
- (void)setNewState:(CDStruct_bd1b3a42)arg1 forGoalType:(long long)arg2;	// IMP=0x00000000000425ed
- (CDStruct_bd1b3a42)currentStateForGoalType:(long long)arg1;	// IMP=0x00000000000425be
@property(readonly, nonatomic) long long todayIndex;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000421f7
- (void)setLastCheckedIndex:(long long)arg1;	// IMP=0x000000000004218a
- (void)clearAllProperties;	// IMP=0x0000000000042031
- (void)updatePreviousPropertiesWithCurrentProperties;	// IMP=0x0000000000041f63
- (id)init;	// IMP=0x0000000000041f0d

@end
