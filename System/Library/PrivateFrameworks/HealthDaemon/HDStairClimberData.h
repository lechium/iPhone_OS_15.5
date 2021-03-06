//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDDatumRendering-Protocol.h>

@class HDFitnessMachineCharacteristicUInt16Field, HDFitnessMachineCharacteristicUInt8Field, NSDate;

@interface HDStairClimberData <HDDatumRendering>
{
    HDFitnessMachineCharacteristicUInt16Field *_floorsField;	// 8 = 0x8
    HDFitnessMachineCharacteristicUInt16Field *_stepsPerMinuteField;	// 16 = 0x10
    HDFitnessMachineCharacteristicUInt16Field *_averageStepRateField;	// 24 = 0x18
    HDFitnessMachineCharacteristicUInt16Field *_positiveElevationGainField;	// 32 = 0x20
    HDFitnessMachineCharacteristicUInt16Field *_stepCountField;	// 40 = 0x28
    HDFitnessMachineCharacteristicUInt16Field *_totalEnergyField;	// 48 = 0x30
    HDFitnessMachineCharacteristicUInt16Field *_energyPerHourField;	// 56 = 0x38
    HDFitnessMachineCharacteristicUInt8Field *_energyPerMinuteField;	// 64 = 0x40
    HDFitnessMachineCharacteristicUInt8Field *_heartRateField;	// 72 = 0x48
    HDFitnessMachineCharacteristicUInt8Field *_metabolicEquivalentField;	// 80 = 0x50
    HDFitnessMachineCharacteristicUInt16Field *_elapsedTimeField;	// 88 = 0x58
    HDFitnessMachineCharacteristicUInt16Field *_remainingTimeField;	// 96 = 0x60
}

+ (unsigned char)flagFieldLength;	// IMP=0x00000000001d82eb
+ (id)uuid;	// IMP=0x00000000001d82c8
- (void).cxx_destruct;	// IMP=0x00000000001d8e14
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
@property(readonly, nonatomic) unsigned short stepCount;
@property(readonly, nonatomic) _Bool stepCountIsSet;
@property(readonly, nonatomic) unsigned short positiveElevationGain;
@property(readonly, nonatomic) _Bool positiveElevationGainIsSet;
@property(readonly, nonatomic) unsigned short averageStepRate;
@property(readonly, nonatomic) _Bool averageStepRateIsSet;
@property(readonly, nonatomic) unsigned short stepsPerMinute;
@property(readonly, nonatomic) _Bool stepsPerMinuteIsSet;
@property(readonly, nonatomic) unsigned short floors;
@property(readonly, nonatomic) _Bool floorsIsSet;
- (id)description;	// IMP=0x00000000001d85ff
- (id)_init;	// IMP=0x00000000001d82f6
- (id)allFields;	// IMP=0x00000000001d81b8
- (id)generateDatums:(id)arg1;	// IMP=0x000000000031732c

// Remaining properties
@property(readonly, nonatomic) NSDate *updateTime;

@end

