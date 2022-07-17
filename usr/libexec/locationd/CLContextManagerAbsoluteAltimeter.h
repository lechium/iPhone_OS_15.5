//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLTimer, MISSING_TYPE;

@interface CLContextManagerAbsoluteAltimeter
{
    struct unique_ptr<CLLocationController_Type::Client, std::default_delete<CLLocationController_Type::Client>> _locationControllerClient;	// 40 = 0x28
    double _lastForcedWifiTime;	// 48 = 0x30
    MISSING_TYPE *_lastForcedGPSTime;	// 56 = 0x38
    double _lastAltitudeSentTimestamp;	// 64 = 0x40
    _Bool _wifiInProgress;	// 72 = 0x48
    _Bool _GPSInProgress;	// 73 = 0x49
    _Bool _isCompanionConnected;	// 74 = 0x4a
    _Bool _doesCompanionHavePressureSensor;	// 75 = 0x4b
    double _lastDefaultLevelLogTimestamp;	// 80 = 0x50
    CLTimer *_forceWifiTimer;	// 88 = 0x58
    CLTimer *_forceGPSTimer;	// 96 = 0x60
    struct unique_ptr<CLPowerAssertion, std::default_delete<CLPowerAssertion>> _powerAssertionWifi;	// 104 = 0x68
    struct unique_ptr<CLPowerAssertion, std::default_delete<CLPowerAssertion>> _powerAssertionGPS;	// 112 = 0x70
    struct unique_ptr<CLCompanionNotifier_Type::Client, std::default_delete<CLCompanionNotifier_Type::Client>> fCompanionClient;	// 120 = 0x78
    unsigned long long _currentWetState;	// 128 = 0x80
    unsigned long long _currentStatusInfo;	// 136 = 0x88
    _Bool _userUnderground;	// 144 = 0x90
}

- (id).cxx_construct;	// IMP=0x0020000000627539
- (void).cxx_destruct;	// IMP=0x00100000006274ab
- (void)onCompanionConnectionNotification:(int)arg1 data:(union NotificationData)arg2;	// IMP=0x0010000000627346
- (void)chooseUncertaintyDuringWorkout:(double *)arg1 withAltitude:(double)arg2 atTime:(double)arg3;	// IMP=0x0010000000626fa7
- (void)calculateAndSendAltitudeFromBaro;	// IMP=0x00100000006263da
- (void)wetStateUpdated:(unsigned long long)arg1;	// IMP=0x00100000006261e5
- (void)filteredElevation:(double *)arg1 withTimestamp:(double *)arg2;	// IMP=0x0010000000625d6c
- (double)capAccuracy:(double)arg1;	// IMP=0x0010000000625d56
- (void)forceLocationAtTime:(double)arg1;	// IMP=0x00100000006258f2
- (void)setTimerForGPSOff;	// IMP=0x00100000006258cd
- (void)setTimerForWifiOff;	// IMP=0x00100000006258a8
- (_Bool)shouldEnableGPSAtTime:(double)arg1;	// IMP=0x0010000000625865
- (_Bool)shouldEnableWifiAtTime:(double)arg1;	// IMP=0x0010000000625822
- (void)onForcedLocationNotification:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x001000000062581c
- (void)calculateAndSendAltitudeFromLocation;	// IMP=0x0010000000624088
- (void)calculateAndSendAltitudeFromCompanion;	// IMP=0x0010000000623a8a
- (void)forceGPSIfUnderground;	// IMP=0x001000000062352e
- (void)sourceUpdated:(unsigned long long)arg1;	// IMP=0x00100000006231b0
- (void)dealloc;	// IMP=0x0010000000623138
- (void)releasePowerAssertions;	// IMP=0x00100000006230b9
- (void)teardownTimers;	// IMP=0x0010000000623048
- (void)setupTimers;	// IMP=0x0010000000622d3b
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2 withBuffer:(void *)arg3 withSourceAggregator:(id)arg4;	// IMP=0x001000000062298a

@end
