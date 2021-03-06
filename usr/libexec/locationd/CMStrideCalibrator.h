//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLTimer, CMStrideCalLocationFSM, CMStrideCalibrationActivityBuffer, CMStrideCalibrationDatabase, CMStrideCalibrationElevationBuffer, CMStrideCalibrationStats, CMStrideCalibrationStepCountBuffer, NSMutableArray, NSString;
@protocol CLClientAuthorizationCacheProtocol, CLIntersiloUniverse, CLStreamingAwareLocationProviderProtocol;

@interface CMStrideCalibrator : NSObject
{
    struct unique_ptr<CLOdometerNotifier_Type::Client, std::default_delete<CLOdometerNotifier_Type::Client>> fOdometerClient;	// 8 = 0x8
    void *fServiceLocationProvider;	// 16 = 0x10
    struct unique_ptr<CLServiceLocationProvider_Type::Client, std::default_delete<CLServiceLocationProvider_Type::Client>> fServiceLocationClient;	// 24 = 0x18
    id <CLClientAuthorizationCacheProtocol> fClientAuthorizationCache;	// 32 = 0x20
    struct unique_ptr<CLStreamingAwareLocationProvider_Type::Client, std::default_delete<CLStreamingAwareLocationProvider_Type::Client>> fStreamingAwareLocationClient;	// 40 = 0x28
    id <CLStreamingAwareLocationProviderProtocol> fStreamingAwareProxy;	// 48 = 0x30
    struct unique_ptr<CLStepCountNotifier_Type::Client, std::default_delete<CLStepCountNotifier_Type::Client>> fStepCountClient;	// 56 = 0x38
    struct unique_ptr<CLMotionState_Type::Client, std::default_delete<CLMotionState_Type::Client>> fMotionStateClient;	// 64 = 0x40
    struct unique_ptr<CLCompanionNotifier_Type::Client, std::default_delete<CLCompanionNotifier_Type::Client>> fCompanionClient;	// 72 = 0x48
    struct unique_ptr<CLMotionStateMediator_Type::Client, std::default_delete<CLMotionStateMediator_Type::Client>> fMotionStateMediatorClient;	// 80 = 0x50
    id <CLIntersiloUniverse> fUniverse;	// 88 = 0x58
    CLTimer *fStopOpportunisticCalibrationTimer;	// 96 = 0x60
    CMStrideCalibrationActivityBuffer *fActivityBuffer;	// 104 = 0x68
    CMStrideCalibrationElevationBuffer *fElevationBuffer;	// 112 = 0x70
    CMStrideCalibrationStepCountBuffer *fStepsBuffer;	// 120 = 0x78
    CMStrideCalibrationStats *fStats;	// 128 = 0x80
    CMStrideCalibrationDatabase *fDatabase;	// 136 = 0x88
    CMStrideCalLocationFSM *fStrideCalLocationFSM;	// 144 = 0x90
    NSMutableArray *fLatestCalDataArray;	// 152 = 0x98
    shared_ptr_a3117978 fStepCountDb;	// 160 = 0xa0
    double fLastGoodLocFix;	// 176 = 0xb0
    long long fCurrentSession;	// 184 = 0xb8
}

- (id).cxx_construct;	// IMP=0x001000000032ee01
- (void).cxx_destruct;	// IMP=0x001000000032ed3e
- (id)copyHistory;	// IMP=0x001000000032ed25
- (void)updateUserHeight:(long long)arg1;	// IMP=0x001000000032ed0c
- (void)updateCalibrationBins:(double)arg1;	// IMP=0x001000000032e260
- (_Bool)checkValidTrack:(id)arg1 associatedEntry:(const struct CLStepDistance *)arg2;	// IMP=0x001000000032db10
- (void)fsm:(id)arg1 didUpdateSource:(int)arg2;	// IMP=0x001000000032db0a
- (void)fsm:(id)arg1 didUpdateLocationAtTime:(double)arg2;	// IMP=0x001000000032d72f
- (void)fsm:(id)arg1 didYieldTrack:(id)arg2;	// IMP=0x001000000032d696
- (void)fsm:(id)arg1 didTransitionFromState:(int)arg2 toState:(int)arg3;	// IMP=0x001000000032d496
- (void)strideCalibrationDatabase:(id)arg1 didInsertEntry:(CDStruct_9878d8f4)arg2;	// IMP=0x001000000032d425
- (void)quitForcedLocationState;	// IMP=0x001000000032d312
- (void)attemptForcedLocation;	// IMP=0x001000000032cee6
- (void)checkForLocationStateTransition;	// IMP=0x001000000032cac6
- (_Bool)outOfSession;	// IMP=0x001000000032cab5
- (_Bool)inOutdoorPedestrianSession;	// IMP=0x001000000032ca90
- (long long)currentSession;	// IMP=0x001000000032ca83
- (void)tick:(double)arg1;	// IMP=0x001000000032ca55
- (void)addLatestCalData:(id)arg1;	// IMP=0x001000000032c904
- (_Bool)isCalibrationConvergedMedianForSpeed:(double)arg1;	// IMP=0x001000000032c8eb
- (void)setSession:(long long)arg1;	// IMP=0x001000000032c793
- (void)dealloc;	// IMP=0x001000000032c6a5
- (id)initInUniverse:(id)arg1 stepCountDb:(shared_ptr_a3117978)arg2;	// IMP=0x001000000032c21e
- (void)authorizeLocationInReplay;	// IMP=0x00100000005a15cd
- (void)onLocationNotification:(const int *)arg1 data:(const void *)arg2;	// IMP=0x00100000005a1450
- (void)onOdometerNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x00100000005a13de
- (void)onMotionStateNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x00100000005a13b4
- (void)onStepCountNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x00100000005a1338
- (_Bool)isAuthorizedForLocation;	// IMP=0x00100000008553db
- (void);	// IMP=0x00100000008552b7
- (void)tickleArrow;	// IMP=0x001000000085529f
- (void)stopLeechingLocation;	// IMP=0x0010000000855272
- (void)startLeechingLocation;	// IMP=0x0010000000855242
- (void)stopLocationUpdates;	// IMP=0x00100000008551e7
- (void)startLocationUpdates;	// IMP=0x0010000000855181
- (void)stopGpsOdometerUpdates;	// IMP=0x0010000000855154
- (void)startGpsOdometerUpdates;	// IMP=0x0010000000855124
- (void)stopGpsOdometerSpectatorUpdates;	// IMP=0x00100000008550f7
- (void)startGpsOdometerSpectatorUpdates;	// IMP=0x00100000008550c7
- (void)stopElevationSpectatorUpdates;	// IMP=0x001000000085509a
- (void)startElevationSpectatorUpdates;	// IMP=0x001000000085506a
- (void)stopElevationUpdates;	// IMP=0x001000000085503d
- (void)startElevationUpdates;	// IMP=0x001000000085500d
- (void)teardownCLNotifiers;	// IMP=0x0010000000854f8a
- (void)setupCLNotifiers;	// IMP=0x00100000008549ae
- (void)onMotionStateMediatorNotification:(const int *)arg1 data:(const union NotificationData *)arg2;	// IMP=0x001000000085557b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

