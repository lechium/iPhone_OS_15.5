//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CMAttitude;

@interface CMDeviceMotion
{
    id _internal;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000d1e06
@property(readonly, nonatomic) long long sensorLocation;
@property(readonly, nonatomic) _Bool usingVisionCorrections;
@property(readonly, nonatomic) _Bool fusedWithVision;
@property(readonly, nonatomic) double headingAccuracy;
@property(readonly, nonatomic) double heading;
@property(readonly, nonatomic) _Bool doingBiasEstimation;
@property(readonly, nonatomic) _Bool doingYawCorrection;
@property(readonly, nonatomic) int magneticFieldCalibrationLevel;
@property(readonly, nonatomic) CDStruct_27fd20ed magneticField;
@property(readonly, nonatomic) CDStruct_31142d93 userAcceleration;
@property(readonly, nonatomic) CDStruct_31142d93 gravity;
@property(readonly, nonatomic) CDStruct_31142d93 rotationRate;
@property(readonly, nonatomic) CMAttitude *attitude;
- (id)description;	// IMP=0x00000000000d25ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d2535
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d24c8
- (void)dealloc;	// IMP=0x00000000000d2486
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d221d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d1e0e
- (id)initWithDeviceMotion:(CDStruct_227c825c)arg1 internal:(CDStruct_37a3040a)arg2 timestamp:(double)arg3;	// IMP=0x00000000000d1d55

@end
