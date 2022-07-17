//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface GEOComposedRouteEVChargingStationInfo : NSObject <NSSecureCoding>
{
    unsigned long long _muid;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    double _chargingTime;	// 24 = 0x18
    double _batteryChargeAfterCharging;	// 32 = 0x20
    double _batteryPercentageAfterCharging;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000009cfa13
- (void).cxx_destruct;	// IMP=0x00000000009cfc1c
@property(readonly, nonatomic) double batteryPercentageAfterCharging; // @synthesize batteryPercentageAfterCharging=_batteryPercentageAfterCharging;
@property(readonly, nonatomic) double batteryChargeAfterCharging; // @synthesize batteryChargeAfterCharging=_batteryChargeAfterCharging;
@property(readonly, nonatomic) double chargingTime; // @synthesize chargingTime=_chargingTime;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) unsigned long long muid; // @synthesize muid=_muid;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009cfb2d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009cfa1b
- (id)description;	// IMP=0x00000000009cf9d7
- (id)initWithGeoEVChargingInfo:(id)arg1 muid:(unsigned long long)arg2 name:(id)arg3;	// IMP=0x00000000009cf8e2
- (id)init;	// IMP=0x00000000009cf8b8

@end
