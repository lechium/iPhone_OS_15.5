//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivityAchievements/NSCopying-Protocol.h>

@class NSData, NSString;

@interface ACHCodableLegacyAchievement : PBCodable <NSCopying>
{
    long long _achievementType;	// 8 = 0x8
    double _completedDate;	// 16 = 0x10
    double _doubleValue;	// 24 = 0x18
    long long _intValue;	// 32 = 0x20
    long long _workoutActivityType;	// 40 = 0x28
    NSString *_definitionIdentifier;	// 48 = 0x30
    NSData *_uuid;	// 56 = 0x38
    _Bool _alerted;	// 64 = 0x40
    struct {
        unsigned int achievementType:1;
        unsigned int completedDate:1;
        unsigned int doubleValue:1;
        unsigned int intValue:1;
        unsigned int workoutActivityType:1;
        unsigned int alerted:1;
    } _has;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x0000000000020c2a
@property(nonatomic) long long workoutActivityType; // @synthesize workoutActivityType=_workoutActivityType;
@property(retain, nonatomic) NSString *definitionIdentifier; // @synthesize definitionIdentifier=_definitionIdentifier;
@property(nonatomic) _Bool alerted; // @synthesize alerted=_alerted;
@property(nonatomic) long long intValue; // @synthesize intValue=_intValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(nonatomic) double completedDate; // @synthesize completedDate=_completedDate;
@property(nonatomic) long long achievementType; // @synthesize achievementType=_achievementType;
@property(retain, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000020a5a
- (unsigned long long)hash;	// IMP=0x0000000000020762
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002056e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002041a
- (void)copyTo:(id)arg1;	// IMP=0x00000000000202fb
- (void)writeTo:(id)arg1;	// IMP=0x00000000000201cd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000201c0
- (id)dictionaryRepresentation;	// IMP=0x000000000001fa66
- (id)description;	// IMP=0x000000000001f9b7
@property(nonatomic) _Bool hasWorkoutActivityType;
@property(readonly, nonatomic) _Bool hasDefinitionIdentifier;
@property(nonatomic) _Bool hasAlerted;
@property(nonatomic) _Bool hasIntValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(nonatomic) _Bool hasCompletedDate;
@property(nonatomic) _Bool hasAchievementType;
@property(readonly, nonatomic) _Bool hasUuid;

@end

