//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CLBarometerCalibrationSourcePressure
{
    struct unique_ptr<CLMotionNotifier::SiloDispatcher<CLBarometerCalibration_Types::CMKFFilteredPressureSample>, std::default_delete<CLMotionNotifier::SiloDispatcher<CLBarometerCalibration_Types::CMKFFilteredPressureSample>>> _kfFilteredPressureDispatcher;	// 32 = 0x20
    double _lastPressureBufferTimestamp;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x0020000000a2de54
- (void).cxx_destruct;	// IMP=0x0010000000a2de2c
- (void)onKFFilteredPressure:(const struct CMKFFilteredPressureSample *)arg1;	// IMP=0x0010000000a2d9fb
- (void)disableSource;	// IMP=0x0010000000a2d9ab
- (void)enableSource;	// IMP=0x0010000000a2d953
- (void)dealloc;	// IMP=0x0010000000a2d904
- (id)initWithUniverse:(id)arg1 delegate:(id)arg2;	// IMP=0x0010000000a2d820

@end

