//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CXCallObserver, NSDate, NSTimer, RadiosPreferences;
@protocol CARDNDStateDelegate;

@interface CARDNDStateObserver : NSObject
{
    _Bool _connected;	// 8 = 0x8
    Class _vehicleStateClass;	// 16 = 0x10
    RadiosPreferences *_radiosPreferences;	// 24 = 0x18
    id <CARDNDStateDelegate> _delegate;	// 32 = 0x20
    CXCallObserver *_callObserver;	// 40 = 0x28
    NSTimer *_vehicleStateCheckTimer;	// 48 = 0x30
}

+ (_Bool)observesVehicularReports;	// IMP=0x002000000000ad93
- (void).cxx_destruct;	// IMP=0x002000000000b6ae
@property(retain, nonatomic) NSTimer *vehicleStateCheckTimer; // @synthesize vehicleStateCheckTimer=_vehicleStateCheckTimer;
@property(retain, nonatomic) CXCallObserver *callObserver; // @synthesize callObserver=_callObserver;
@property(nonatomic) _Bool connected; // @synthesize connected=_connected;
@property(nonatomic) __weak id <CARDNDStateDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) RadiosPreferences *radiosPreferences; // @synthesize radiosPreferences=_radiosPreferences;
@property(readonly, nonatomic) __weak Class vehicleStateClass; // @synthesize vehicleStateClass=_vehicleStateClass;
- (void)_checkVehicleState;	// IMP=0x001000000000b27e
- (void)airplaneModeChanged;	// IMP=0x001000000000b14d
- (void)scheduleVehicleStateCheckWithDelay:(double)arg1;	// IMP=0x001000000000af7a
@property(readonly, nonatomic) NSDate *mostRecentVehicleBTConnectionDate;
@property(readonly, nonatomic, getter=isInLostMode) _Bool lostMode;
@property(readonly, nonatomic, getter=isInAirplaneMode) _Bool airplaneMode;
- (void)dealloc;	// IMP=0x001000000000acf5
- (id)initWithRadiosPreferences:(id)arg1 vehicleStateClass:(Class)arg2;	// IMP=0x001000000000a91f

@end
