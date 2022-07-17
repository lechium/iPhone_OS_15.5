//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CLBarometerCalibrationContextClient, CLIntersiloUniverse;

@interface CLBarometerCalibrationBiasEstimator : NSObject
{
    id <CLBarometerCalibrationContextClient> _delegate;	// 8 = 0x8
    id <CLIntersiloUniverse> _universe;	// 16 = 0x10
    void *_dataBuffers;	// 24 = 0x18
    double _weatherEstimateInMeter;	// 32 = 0x20
    double _biasTimestamp;	// 40 = 0x28
    double _previousBiasTimestamp;	// 48 = 0x30
    double _bias;	// 56 = 0x38
    double _biasPressure;	// 64 = 0x40
    double _biasUncertainty;	// 72 = 0x48
    double _biasUncertaintyTimestamp;	// 80 = 0x50
    double _biasUncertaintyAtRebase;	// 88 = 0x58
    double _pressureUncertainty;	// 96 = 0x60
    double _distanceTraveled;	// 104 = 0x68
    double _distanceSinceLastRebase;	// 112 = 0x70
    struct unique_ptr<CLSignificantElevationEstimator, std::default_delete<CLSignificantElevationEstimator>> _fSignificantElevationEstimatorRebase;	// 120 = 0x78
    unsigned int _offSetAscendedDelta;	// 128 = 0x80
    unsigned int _offSetDescendedDelta;	// 132 = 0x84
    double _previousCumulativeDeltaIOSTime;	// 136 = 0x88
    struct BiasEstimatorLocation _biasLocation;	// 144 = 0x90
    _Bool _inVisitStatus;	// 160 = 0xa0
    double _lastVisitEntryTime;	// 168 = 0xa8
    double _locationdStartTime;	// 176 = 0xb0
    double _lastForcedGpsTime;	// 184 = 0xb8
    double _uncertaintyAtVisitEntry;	// 192 = 0xc0
    struct RebaseEvent _firstRebaseEventInVisit;	// 200 = 0xc8
    double _lastTimestampSavedRecovery;	// 416 = 0x1a0
}

+ (void)getLocationSampleAltitudeAndUncertainty:(void *)arg1 andRefAltitude:(double *)arg2 andRefUncertainty:(double *)arg3;	// IMP=0x004000000022a6e4
- (id).cxx_construct;	// IMP=0x0020000000231295
- (void).cxx_destruct;	// IMP=0x0010000000231256
- (_Bool)isIHAAuthorized;	// IMP=0x001000000023120a
- (void)retrieveBiasInfo;	// IMP=0x0010000000230e29
- (void)saveBiasInfo;	// IMP=0x0010000000230b81
- (void)announceMostRecentForcedGPS:(double)arg1;	// IMP=0x0010000000230b73
- (void)sendVisitExitAnalyticsWithDuration:(double)arg1 andRebaseEvent:(void *)arg2 andUncertaintyAtEntry:(double)arg3;	// IMP=0x001000000023012c
- (void)sendRebaseAnalyticsWithAltitudeError:(double)arg1 andUncertainty:(double)arg2 andRefUncertainty:(double)arg3 andDemAvailable:(_Bool)arg4 andWorkout:(_Bool)arg5 andReferenceSource:(int)arg6 andCorrection:(double)arg7 andDistance:(double)arg8;	// IMP=0x001000000022f34f
- (void)updateVisitState:(_Bool)arg1 arrivalTime:(double)arg2 departureTime:(double)arg3;	// IMP=0x001000000022f1a7
- (void)rebaseSignificantElevationWithEndTime:(double)arg1;	// IMP=0x001000000022ef93
- (void)updateBiasUncertaintyWithAbsSigElevation:(double)arg1 withCompanion:(_Bool)arg2;	// IMP=0x001000000022ecb3
- (void)updateElevationBiasBetweenStartTime:(double)arg1 andEndTime:(double)arg2;	// IMP=0x001000000022c269
- (_Bool)updateElevationBiasFromDEMBetweenBetweenStartTime:(double)arg1 andEndTime:(double)arg2;	// IMP=0x001000000022b7dc
- (void)updateBiasUncertaintyWithPressure:(double)arg1 andTime:(double)arg2 andLat:(double)arg3 andLon:(double)arg4;	// IMP=0x001000000022b12c
- (void)updatePressureUncertaintyWithTime:(double)arg1 andLat:(double)arg2 andLon:(double)arg3;	// IMP=0x001000000022aa6e
- (struct BiasEstimatorLocation)centroidOfLocationVector:(const void *)arg1;	// IMP=0x001000000022a8ad
- (void)cumulateReference:(void *)arg1 andRefAltitude:(double)arg2 andRefVariance:(double)arg3 andBaroElevation:(double)arg4 andType:(int)arg5;	// IMP=0x001000000022a724
- (double)crossEntropyOfreference:(struct ReferencePairedWithPressure)arg1;	// IMP=0x001000000022a687
- (double)dElevationDPressureSA:(double)arg1;	// IMP=0x001000000022a664
- (double)slopeDiffDElevationDPressureSA:(double)arg1;	// IMP=0x001000000022a641
- (void)updateEstimatedWeatherWithCumulativeAscendingDelta:(unsigned int)arg1 andDescendingDelta:(unsigned int)arg2 andIosTimestamp:(double)arg3;	// IMP=0x001000000022a384
- (double)getAbsoluteAltitudeUncertainty;	// IMP=0x001000000022a371
- (id)copyCurrentBias;	// IMP=0x001000000022a29b
- (void)dealloc;	// IMP=0x001000000022a265
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2 buffers:(void *)arg3;	// IMP=0x001000000022a0eb

@end
