//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RTVehicleEvent;

@interface RTSourceCoreRoutineVehicleEvent
{
    RTVehicleEvent *_vehicleEvent;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002a2a1
- (void).cxx_destruct;	// IMP=0x000000000002a680
@property(readonly, nonatomic) RTVehicleEvent *vehicleEvent; // @synthesize vehicleEvent=_vehicleEvent;
- (id)description;	// IMP=0x000000000002a5d9
- (unsigned long long)hash;	// IMP=0x000000000002a558
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002a411
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002a3c1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002a344
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002a2a9
- (id)initWithVehicleEvent:(id)arg1;	// IMP=0x000000000002a233

@end

