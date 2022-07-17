//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBWellnessUnitType-Protocol.h>

@class NSString;

@interface _INPBWellnessUnitType : PBCodable <_INPBWellnessUnitType, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int bloodGlucoseUnit:1;
        unsigned int bloodPressureUnit:1;
        unsigned int energyUnit:1;
        unsigned int heartRateUnit:1;
        unsigned int lengthUnit:1;
        unsigned int massUnit:1;
        unsigned int respiratoryRateUnit:1;
        unsigned int temperatureUnit:1;
        unsigned int timeUnit:1;
        unsigned int volumeUnit:1;
    } _has;	// 8 = 0x8
    int _bloodGlucoseUnit;	// 12 = 0xc
    int _bloodPressureUnit;	// 16 = 0x10
    int _energyUnit;	// 20 = 0x14
    int _heartRateUnit;	// 24 = 0x18
    int _lengthUnit;	// 28 = 0x1c
    int _massUnit;	// 32 = 0x20
    int _respiratoryRateUnit;	// 36 = 0x24
    int _temperatureUnit;	// 40 = 0x28
    int _timeUnit;	// 44 = 0x2c
    int _volumeUnit;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001d30f4
@property(nonatomic) int volumeUnit; // @synthesize volumeUnit=_volumeUnit;
@property(nonatomic) int timeUnit; // @synthesize timeUnit=_timeUnit;
@property(nonatomic) int temperatureUnit; // @synthesize temperatureUnit=_temperatureUnit;
@property(nonatomic) int respiratoryRateUnit; // @synthesize respiratoryRateUnit=_respiratoryRateUnit;
@property(nonatomic) int massUnit; // @synthesize massUnit=_massUnit;
@property(nonatomic) int lengthUnit; // @synthesize lengthUnit=_lengthUnit;
@property(nonatomic) int heartRateUnit; // @synthesize heartRateUnit=_heartRateUnit;
@property(nonatomic) int energyUnit; // @synthesize energyUnit=_energyUnit;
@property(nonatomic) int bloodPressureUnit; // @synthesize bloodPressureUnit=_bloodPressureUnit;
@property(nonatomic) int bloodGlucoseUnit; // @synthesize bloodGlucoseUnit=_bloodGlucoseUnit;
- (id)dictionaryRepresentation;	// IMP=0x00000000001d1f42
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001d18f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001d16d0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001d163e
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001d153f
- (void)writeTo:(id)arg1;	// IMP=0x00000000001d136e
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001d1361
- (int)StringAsVolumeUnit:(id)arg1;	// IMP=0x00000000001d0f74
- (id)volumeUnitAsString:(int)arg1;	// IMP=0x00000000001d0d88
@property(nonatomic) _Bool hasVolumeUnit;
- (int)StringAsTimeUnit:(id)arg1;	// IMP=0x00000000001d0be4
- (id)timeUnitAsString:(int)arg1;	// IMP=0x00000000001d0b31
@property(nonatomic) _Bool hasTimeUnit;
- (int)StringAsTemperatureUnit:(id)arg1;	// IMP=0x00000000001d0a2a
- (id)temperatureUnitAsString:(int)arg1;	// IMP=0x00000000001d09c3
@property(nonatomic) _Bool hasTemperatureUnit;
- (int)StringAsRespiratoryRateUnit:(id)arg1;	// IMP=0x00000000001d08f7
- (id)respiratoryRateUnitAsString:(int)arg1;	// IMP=0x00000000001d08a2
@property(nonatomic) _Bool hasRespiratoryRateUnit;
- (int)StringAsMassUnit:(id)arg1;	// IMP=0x00000000001d05e0
- (id)massUnitAsString:(int)arg1;	// IMP=0x00000000001d04b3
@property(nonatomic) _Bool hasMassUnit;
- (int)StringAsLengthUnit:(id)arg1;	// IMP=0x00000000001d0140
- (id)lengthUnitAsString:(int)arg1;	// IMP=0x00000000001cffc2
@property(nonatomic) _Bool hasLengthUnit;
- (int)StringAsHeartRateUnit:(id)arg1;	// IMP=0x00000000001cfef9
- (id)heartRateUnitAsString:(int)arg1;	// IMP=0x00000000001cfea4
@property(nonatomic) _Bool hasHeartRateUnit;
- (int)StringAsEnergyUnit:(id)arg1;	// IMP=0x00000000001cfd50
- (id)energyUnitAsString:(int)arg1;	// IMP=0x00000000001cfcb6
@property(nonatomic) _Bool hasEnergyUnit;
- (int)StringAsBloodPressureUnit:(id)arg1;	// IMP=0x00000000001cfbef
- (id)bloodPressureUnitAsString:(int)arg1;	// IMP=0x00000000001cfb9a
@property(nonatomic) _Bool hasBloodPressureUnit;
- (int)StringAsBloodGlucoseUnit:(id)arg1;	// IMP=0x00000000001cfaa4
- (id)bloodGlucoseUnitAsString:(int)arg1;	// IMP=0x00000000001cfa3e
@property(nonatomic) _Bool hasBloodGlucoseUnit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
