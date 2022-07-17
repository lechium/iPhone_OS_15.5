//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDActivityAWDActivityExerciseMinuteHour : PBCodable <NSCopying>
{
    long long _exerciseMinutes;	// 8 = 0x8
    long long _hourSinceMidnight;	// 16 = 0x10
    struct {
        unsigned int exerciseMinutes:1;
        unsigned int hourSinceMidnight:1;
    } _has;	// 24 = 0x18
}

@property(nonatomic) long long exerciseMinutes; // @synthesize exerciseMinutes=_exerciseMinutes;
@property(nonatomic) long long hourSinceMidnight; // @synthesize hourSinceMidnight=_hourSinceMidnight;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002ed76d
- (unsigned long long)hash;	// IMP=0x00000000002ed728
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002ed675
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002ed5f4
- (void)copyTo:(id)arg1;	// IMP=0x00000000002ed596
- (void)writeTo:(id)arg1;	// IMP=0x00000000002ed523
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002ed516
- (id)dictionaryRepresentation;	// IMP=0x00000000002ed1a1
- (id)description;	// IMP=0x00000000002ed0f2
@property(nonatomic) _Bool hasExerciseMinutes;
@property(nonatomic) _Bool hasHourSinceMidnight;

@end
