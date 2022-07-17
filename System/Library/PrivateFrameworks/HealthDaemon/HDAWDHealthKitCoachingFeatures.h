//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDAWDHealthKitCoachingFeatures : PBCodable <NSCopying>
{
    unsigned int _activeCalories;	// 8 = 0x8
    unsigned int _automotive;	// 12 = 0xc
    unsigned int _briskMinutes;	// 16 = 0x10
    unsigned int _cycling;	// 20 = 0x14
    unsigned int _duration;	// 24 = 0x18
    unsigned int _heartRate;	// 28 = 0x1c
    unsigned int _other;	// 32 = 0x20
    unsigned int _running;	// 36 = 0x24
    unsigned int _unknown;	// 40 = 0x28
    unsigned int _walking;	// 44 = 0x2c
    unsigned int _workout;	// 48 = 0x30
    struct {
        unsigned int activeCalories:1;
        unsigned int automotive:1;
        unsigned int briskMinutes:1;
        unsigned int cycling:1;
        unsigned int duration:1;
        unsigned int heartRate:1;
        unsigned int other:1;
        unsigned int running:1;
        unsigned int unknown:1;
        unsigned int walking:1;
        unsigned int workout:1;
    } _has;	// 52 = 0x34
}

@property(nonatomic) unsigned int unknown; // @synthesize unknown=_unknown;
@property(nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property(nonatomic) unsigned int briskMinutes; // @synthesize briskMinutes=_briskMinutes;
@property(nonatomic) unsigned int activeCalories; // @synthesize activeCalories=_activeCalories;
@property(nonatomic) unsigned int heartRate; // @synthesize heartRate=_heartRate;
@property(nonatomic) unsigned int workout; // @synthesize workout=_workout;
@property(nonatomic) unsigned int other; // @synthesize other=_other;
@property(nonatomic) unsigned int running; // @synthesize running=_running;
@property(nonatomic) unsigned int cycling; // @synthesize cycling=_cycling;
@property(nonatomic) unsigned int automotive; // @synthesize automotive=_automotive;
@property(nonatomic) unsigned int walking; // @synthesize walking=_walking;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000006fbf24
- (unsigned long long)hash;	// IMP=0x00000000006fbdcf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006fbb9c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006fba2f
- (void)copyTo:(id)arg1;	// IMP=0x00000000006fb8e5
- (void)writeTo:(id)arg1;	// IMP=0x00000000006fb74d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000006fb740
- (id)dictionaryRepresentation;	// IMP=0x00000000006fabc6
- (id)description;	// IMP=0x00000000006fab17
@property(nonatomic) _Bool hasUnknown;
@property(nonatomic) _Bool hasDuration;
@property(nonatomic) _Bool hasBriskMinutes;
@property(nonatomic) _Bool hasActiveCalories;
@property(nonatomic) _Bool hasHeartRate;
@property(nonatomic) _Bool hasWorkout;
@property(nonatomic) _Bool hasOther;
@property(nonatomic) _Bool hasRunning;
@property(nonatomic) _Bool hasCycling;
@property(nonatomic) _Bool hasAutomotive;
@property(nonatomic) _Bool hasWalking;

@end
