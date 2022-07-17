//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDAWDHealthKitAchievementStatistics : PBCodable <NSCopying>
{
    long long _consecutiveBriskMinuteGoalsMet;	// 8 = 0x8
    long long _consecutiveCompleteDays;	// 16 = 0x10
    long long _consecutiveStandingHoursGoalsMet;	// 24 = 0x18
    long long _currentCalorieGoalConsecutiveCompleteDays;	// 32 = 0x20
    struct {
        unsigned int consecutiveBriskMinuteGoalsMet:1;
        unsigned int consecutiveCompleteDays:1;
        unsigned int consecutiveStandingHoursGoalsMet:1;
        unsigned int currentCalorieGoalConsecutiveCompleteDays:1;
    } _has;	// 40 = 0x28
}

@property(nonatomic) long long consecutiveCompleteDays; // @synthesize consecutiveCompleteDays=_consecutiveCompleteDays;
@property(nonatomic) long long currentCalorieGoalConsecutiveCompleteDays; // @synthesize currentCalorieGoalConsecutiveCompleteDays=_currentCalorieGoalConsecutiveCompleteDays;
@property(nonatomic) long long consecutiveBriskMinuteGoalsMet; // @synthesize consecutiveBriskMinuteGoalsMet=_consecutiveBriskMinuteGoalsMet;
@property(nonatomic) long long consecutiveStandingHoursGoalsMet; // @synthesize consecutiveStandingHoursGoalsMet=_consecutiveStandingHoursGoalsMet;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000281d6a
- (unsigned long long)hash;	// IMP=0x0000000000281cee
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000281bf7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000281b40
- (void)copyTo:(id)arg1;	// IMP=0x0000000000281aac
- (void)writeTo:(id)arg1;	// IMP=0x00000000002819f9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002819ec
- (id)dictionaryRepresentation;	// IMP=0x00000000002814a7
- (id)description;	// IMP=0x00000000002813f8
@property(nonatomic) _Bool hasConsecutiveCompleteDays;
@property(nonatomic) _Bool hasCurrentCalorieGoalConsecutiveCompleteDays;
@property(nonatomic) _Bool hasConsecutiveBriskMinuteGoalsMet;
@property(nonatomic) _Bool hasConsecutiveStandingHoursGoalsMet;

@end
