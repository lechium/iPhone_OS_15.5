//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLBarometerCalibrationAbsoluteAltitude, CLBarometerCalibrationBiasEstimator, CLBarometerCalibrationSourceAggregator, NSString;

@interface CLBarometerCalibrationSim : NSObject
{
    array_c6ef73e3 fDataBuffers;	// 8 = 0x8
    struct array<CLBarometerCalibrationContextManager *, 7UL> _contextManagers;	// 344 = 0x158
    CLBarometerCalibrationSourceAggregator *_sourceAggregator;	// 400 = 0x190
    CLBarometerCalibrationBiasEstimator *_biasEstimator;	// 408 = 0x198
    CLBarometerCalibrationAbsoluteAltitude *_latestAbsoluteAltitude;	// 416 = 0x1a0
    unsigned int _prevElevationAscended;	// 424 = 0x1a8
    unsigned int _prevElevationDescended;	// 428 = 0x1ac
    int _sameElevationCounter;	// 432 = 0x1b0
    double _lastEstimatedBias;	// 440 = 0x1b8
    double _lastEstimatedBiasTimestamp;	// 448 = 0x1c0
    _Bool _currentUnderDEM;	// 456 = 0x1c8
    _Bool _inVisit;	// 457 = 0x1c9
    _Bool _inOutdoorWorkout;	// 458 = 0x1ca
    double _lastAltitude;	// 464 = 0x1d0
    double _lastAltitudeAccuracy;	// 472 = 0x1d8
    double _lastAltitudeTime;	// 480 = 0x1e0
}

- (id).cxx_construct;	// IMP=0x00100000008820c9
- (void).cxx_destruct;	// IMP=0x00100000008820a2
@property(nonatomic, getter=getLastAltitudeTime) double lastAltitudeTime; // @synthesize lastAltitudeTime=_lastAltitudeTime;
@property(nonatomic, getter=getLastAltitudeAccuracy) double lastAltitudeAccuracy; // @synthesize lastAltitudeAccuracy=_lastAltitudeAccuracy;
@property(nonatomic, getter=getLastAltitude) double lastAltitude; // @synthesize lastAltitude=_lastAltitude;
@property(nonatomic, getter=isInOutdoorWorkout) _Bool inOutdoorWorkout; // @synthesize inOutdoorWorkout=_inOutdoorWorkout;
- (void)announceMostRecentForcedGPS:(double)arg1;	// IMP=0x001000000088201d
- (id)latestAbsoluteAltitude;	// IMP=0x0010000000882010
- (_Bool)isInVisit;	// IMP=0x0010000000882004
- (void)feedLoiData:(struct RoutineVisit)arg1;	// IMP=0x0010000000881de9
- (_Bool)inOutdoorWorkout;	// IMP=0x0010000000881de1
- (void)updateCompanionConnected:(_Bool)arg1;	// IMP=0x0010000000881ddb
- (void)dealloc;	// IMP=0x0010000000881d4f
- (void)releaseAndClearManager:(id *)arg1;	// IMP=0x0010000000881d1a
- (void)releaseContextManagersForNotification:(unsigned long long)arg1;	// IMP=0x0010000000881ceb
- (void)initContextManagersForNotification:(unsigned long long)arg1;	// IMP=0x0010000000881c73
- (void)updateEstimatedWeatherWithCumulativeAscendingDelta:(unsigned int)arg1 andDescendingDelta:(unsigned int)arg2 andIosTimestamp:(double)arg3;	// IMP=0x0010000000881c5a
- (void)updateBiasUncertaintyWithPressure:(double)arg1 andTime:(double)arg2 andLat:(double)arg3 andLon:(double)arg4;	// IMP=0x0010000000881c41
- (id)copyCurrentBias;	// IMP=0x0010000000881c28
- (void)absoluteAltitudeUpdate:(id)arg1;	// IMP=0x0010000000881bf2
- (void)stopTrack:(id)arg1;	// IMP=0x0010000000881b7a
- (void)startTrack:(id)arg1;	// IMP=0x0010000000881b74
- (void)didUpdateDataBuffer:(unsigned long long)arg1;	// IMP=0x0010000000881b25
- (void)feedPrefilteredLocationData:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x0010000000881972
- (void)feedLocationData:(int)arg1 data:(struct NotificationData)arg2;	// IMP=0x0010000000881482
- (void)feedCumulativeAscendingDelta:(unsigned int)arg1 andDescendingDelta:(unsigned int)arg2 andIosTimestamp:(double)arg3;	// IMP=0x0010000000881371
- (void)feedPressureData:(const Sample_b71dd899 *)arg1;	// IMP=0x001000000088121f
- (id)init;	// IMP=0x00100000008810d0
- (void)updateElevationBiasBetweenStartTime:(double)arg1 andEndTime:(double)arg2;	// IMP=0x00100000007728cc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

