//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthUI/NSCopying-Protocol.h>

@class HKCodableQuantity;

@interface HKCodableSummaryActivityRingsValue : PBCodable <NSCopying>
{
    long long _activityMoveMode;	// 8 = 0x8
    double _creationDate;	// 16 = 0x10
    double _dateData;	// 24 = 0x18
    double _endDate;	// 32 = 0x20
    double _startDate;	// 40 = 0x28
    HKCodableQuantity *_activeEnergyBurned;	// 48 = 0x30
    HKCodableQuantity *_activeEnergyBurnedGoal;	// 56 = 0x38
    HKCodableQuantity *_appleExerciseTime;	// 64 = 0x40
    HKCodableQuantity *_appleExerciseTimeGoal;	// 72 = 0x48
    HKCodableQuantity *_appleMoveTime;	// 80 = 0x50
    HKCodableQuantity *_appleMoveTimeGoal;	// 88 = 0x58
    HKCodableQuantity *_appleStandHours;	// 96 = 0x60
    HKCodableQuantity *_appleStandHoursGoal;	// 104 = 0x68
    struct {
        unsigned int activityMoveMode:1;
        unsigned int creationDate:1;
        unsigned int dateData:1;
        unsigned int endDate:1;
        unsigned int startDate:1;
    } _has;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000022dc24
@property(nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
@property(nonatomic) double endDate; // @synthesize endDate=_endDate;
@property(nonatomic) double startDate; // @synthesize startDate=_startDate;
@property(retain, nonatomic) HKCodableQuantity *appleStandHoursGoal; // @synthesize appleStandHoursGoal=_appleStandHoursGoal;
@property(retain, nonatomic) HKCodableQuantity *appleStandHours; // @synthesize appleStandHours=_appleStandHours;
@property(retain, nonatomic) HKCodableQuantity *appleExerciseTimeGoal; // @synthesize appleExerciseTimeGoal=_appleExerciseTimeGoal;
@property(retain, nonatomic) HKCodableQuantity *appleExerciseTime; // @synthesize appleExerciseTime=_appleExerciseTime;
@property(retain, nonatomic) HKCodableQuantity *appleMoveTimeGoal; // @synthesize appleMoveTimeGoal=_appleMoveTimeGoal;
@property(retain, nonatomic) HKCodableQuantity *appleMoveTime; // @synthesize appleMoveTime=_appleMoveTime;
@property(retain, nonatomic) HKCodableQuantity *activeEnergyBurnedGoal; // @synthesize activeEnergyBurnedGoal=_activeEnergyBurnedGoal;
@property(retain, nonatomic) HKCodableQuantity *activeEnergyBurned; // @synthesize activeEnergyBurned=_activeEnergyBurned;
@property(nonatomic) long long activityMoveMode; // @synthesize activityMoveMode=_activityMoveMode;
@property(nonatomic) double dateData; // @synthesize dateData=_dateData;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000022d820
- (unsigned long long)hash;	// IMP=0x000000000022d2db
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022cfee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022cdb3
- (void)copyTo:(id)arg1;	// IMP=0x000000000022cbe8
- (void)writeTo:(id)arg1;	// IMP=0x000000000022ca29
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000022ca1c
- (id)dictionaryRepresentation;	// IMP=0x000000000022c0f3
- (id)description;	// IMP=0x000000000022c044
@property(nonatomic) _Bool hasCreationDate;
@property(nonatomic) _Bool hasEndDate;
@property(nonatomic) _Bool hasStartDate;
@property(readonly, nonatomic) _Bool hasAppleStandHoursGoal;
@property(readonly, nonatomic) _Bool hasAppleStandHours;
@property(readonly, nonatomic) _Bool hasAppleExerciseTimeGoal;
@property(readonly, nonatomic) _Bool hasAppleExerciseTime;
@property(readonly, nonatomic) _Bool hasAppleMoveTimeGoal;
@property(readonly, nonatomic) _Bool hasAppleMoveTime;
@property(readonly, nonatomic) _Bool hasActiveEnergyBurnedGoal;
@property(readonly, nonatomic) _Bool hasActiveEnergyBurned;
@property(nonatomic) _Bool hasActivityMoveMode;
@property(nonatomic) _Bool hasDateData;

@end

