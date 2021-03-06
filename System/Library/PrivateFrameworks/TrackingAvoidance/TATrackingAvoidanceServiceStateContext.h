//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TATrackingAvoidanceServiceStateContext : NSObject
{
    _Bool _serviceEnabled;	// 8 = 0x8
    _Bool _highThermalState;	// 9 = 0x9
    _Bool _airplaneMode;	// 10 = 0xa
    _Bool _batterySaverMode;	// 11 = 0xb
    _Bool _locationServicesEnabled;	// 12 = 0xc
    _Bool _restartRequired;	// 13 = 0xd
    _Bool _locationSimulationInProgress;	// 14 = 0xe
    _Bool _allowSimulatedEvents;	// 15 = 0xf
    _Bool _deviceUnlockedSinceBoot;	// 16 = 0x10
    _Bool _hasKoreaCountryCode;	// 17 = 0x11
    _Bool _userLocationInsideKorea;	// 18 = 0x12
}

@property _Bool userLocationInsideKorea; // @synthesize userLocationInsideKorea=_userLocationInsideKorea;
@property _Bool hasKoreaCountryCode; // @synthesize hasKoreaCountryCode=_hasKoreaCountryCode;
@property _Bool deviceUnlockedSinceBoot; // @synthesize deviceUnlockedSinceBoot=_deviceUnlockedSinceBoot;
@property _Bool allowSimulatedEvents; // @synthesize allowSimulatedEvents=_allowSimulatedEvents;
@property _Bool locationSimulationInProgress; // @synthesize locationSimulationInProgress=_locationSimulationInProgress;
@property _Bool restartRequired; // @synthesize restartRequired=_restartRequired;
@property _Bool locationServicesEnabled; // @synthesize locationServicesEnabled=_locationServicesEnabled;
@property _Bool batterySaverMode; // @synthesize batterySaverMode=_batterySaverMode;
@property _Bool airplaneMode; // @synthesize airplaneMode=_airplaneMode;
@property _Bool highThermalState; // @synthesize highThermalState=_highThermalState;
@property _Bool serviceEnabled; // @synthesize serviceEnabled=_serviceEnabled;
- (id)init;	// IMP=0x000000000002c8e5

@end

