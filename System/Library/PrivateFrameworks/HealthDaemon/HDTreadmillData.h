//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDDatumRendering-Protocol.h>

@class HDFitnessMachineCharacteristicDoubleField, HDFitnessMachineCharacteristicUInt16Field, HDFitnessMachineCharacteristicUInt24Field, HDFitnessMachineCharacteristicUInt8Field, NSDate;

@interface HDTreadmillData <HDDatumRendering>
{
    HDFitnessMachineCharacteristicDoubleField *_instantaneousSpeedField;	// 8 = 0x8
    HDFitnessMachineCharacteristicDoubleField *_averageSpeedField;	// 16 = 0x10
    HDFitnessMachineCharacteristicUInt24Field *_totalDistanceField;	// 24 = 0x18
    HDFitnessMachineCharacteristicDoubleField *_inclinationField;	// 32 = 0x20
    HDFitnessMachineCharacteristicDoubleField *_rampSettingField;	// 40 = 0x28
    HDFitnessMachineCharacteristicDoubleField *_positiveElevationGainField;	// 48 = 0x30
    HDFitnessMachineCharacteristicDoubleField *_negativeElevationGainField;	// 56 = 0x38
    HDFitnessMachineCharacteristicDoubleField *_instantaneousPaceField;	// 64 = 0x40
    HDFitnessMachineCharacteristicDoubleField *_averagePaceField;	// 72 = 0x48
    HDFitnessMachineCharacteristicUInt16Field *_totalEnergyField;	// 80 = 0x50
    HDFitnessMachineCharacteristicUInt16Field *_energyPerHourField;	// 88 = 0x58
    HDFitnessMachineCharacteristicUInt8Field *_energyPerMinuteField;	// 96 = 0x60
    HDFitnessMachineCharacteristicUInt8Field *_heartRateField;	// 104 = 0x68
    HDFitnessMachineCharacteristicUInt8Field *_metabolicEquivalentField;	// 112 = 0x70
    HDFitnessMachineCharacteristicUInt16Field *_elapsedTimeField;	// 120 = 0x78
    HDFitnessMachineCharacteristicUInt16Field *_remainingTimeField;	// 128 = 0x80
    HDFitnessMachineCharacteristicUInt16Field *_forceOnBeltField;	// 136 = 0x88
    HDFitnessMachineCharacteristicUInt16Field *_powerOutputField;	// 144 = 0x90
}

+ (id)unitTest_fakeTreadmillDataForDistance:(unsigned int)arg1 energy:(unsigned short)arg2 elapsedTime:(unsigned short)arg3;	// IMP=0x000000000023dd7d
+ (unsigned char)flagFieldLength;	// IMP=0x000000000023ccc4
+ (id)uuid;	// IMP=0x000000000023cca1
- (void).cxx_destruct;	// IMP=0x000000000023de5a
@property(readonly, nonatomic) unsigned short powerOutput;
@property(readonly, nonatomic) _Bool powerOutputIsSet;
@property(readonly, nonatomic) unsigned short forceOnBelt;
@property(readonly, nonatomic) _Bool forceOnBeltIsSet;
@property(readonly, nonatomic) unsigned short remainingTime;
@property(readonly, nonatomic) _Bool remainingTimeIsSet;
@property(readonly, nonatomic) unsigned short elapsedTime;
@property(readonly, nonatomic) _Bool elapsedTimeIsSet;
@property(readonly, nonatomic) unsigned char metabolicEquivalent;
@property(readonly, nonatomic) _Bool metabolicEquivalentIsSet;
@property(readonly, nonatomic) unsigned char heartRate;
@property(readonly, nonatomic) _Bool heartRateIsSet;
@property(readonly, nonatomic) unsigned char energyPerMinute;
@property(readonly, nonatomic) _Bool energyPerMinuteIsSet;
@property(readonly, nonatomic) unsigned short energyPerHour;
@property(readonly, nonatomic) _Bool energyPerHourIsSet;
@property(readonly, nonatomic) unsigned short totalEnergy;
@property(readonly, nonatomic) _Bool totalEnergyIsSet;
@property(readonly, nonatomic) double averagePace;
@property(readonly, nonatomic) _Bool averagePaceIsSet;
@property(readonly, nonatomic) double instantaneousPace;
@property(readonly, nonatomic) _Bool instantaneousPaceIsSet;
@property(readonly, nonatomic) double negativeElevationGain;
@property(readonly, nonatomic) _Bool negativeElevationGainIsSet;
@property(readonly, nonatomic) double positiveElevationGain;
@property(readonly, nonatomic) _Bool positiveElevationGainIsSet;
@property(readonly, nonatomic) double rampSetting;
@property(readonly, nonatomic) _Bool rampSettingIsSet;
@property(readonly, nonatomic) double inclination;
@property(readonly, nonatomic) _Bool inclinationIsSet;
@property(readonly, nonatomic) unsigned int totalDistance;
@property(readonly, nonatomic) _Bool totalDistanceIsSet;
@property(readonly, nonatomic) double averageSpeed;
@property(readonly, nonatomic) _Bool averageSpeedIsSet;
@property(readonly, nonatomic) double instantaneousSpeed;
@property(readonly, nonatomic) _Bool instantaneousSpeedIsSet;
- (id)description;	// IMP=0x000000000023d14e
- (id)_init;	// IMP=0x000000000023cccf
- (id)allFields;	// IMP=0x000000000023cb28
- (id)generateDatums:(id)arg1;	// IMP=0x00000000001f575c

// Remaining properties
@property(readonly, nonatomic) NSDate *updateTime;

@end

