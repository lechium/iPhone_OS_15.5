//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDevicePowerObserver-Protocol.h>
#import <HealthDaemon/HDDiagnosticObject-Protocol.h>
#import <HealthDaemon/HDProfileReadyObserver-Protocol.h>
#import <HealthDaemon/HDWorkoutDataAccumulatorObserver-Protocol.h>
#import <HealthDaemon/HDWorkoutSessionObserver-Protocol.h>

@class HDAlertSuppressor, HDAssertion, HDLocationManager, HDProfile, HDWatchAppStateMonitor, HDWorkoutLocationSmoother, HDWorkoutSessionServer, HKObserverSet, NSHashTable, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HDWorkoutManager : NSObject <HDDevicePowerObserver, HDDiagnosticObject, HDProfileReadyObserver, HDWorkoutDataAccumulatorObserver, HDWorkoutSessionObserver>
{
    HDWorkoutSessionServer *_currentWorkout;	// 8 = 0x8
    HDAssertion *_currentWorkoutAssertion;	// 16 = 0x10
    HDWorkoutSessionServer *_nextWorkout;	// 24 = 0x18
    NSMutableDictionary *_sessionServers;	// 32 = 0x20
    NSMutableDictionary *_sessionCreationHandlers;	// 40 = 0x28
    NSHashTable *_observerTable;	// 48 = 0x30
    HKObserverSet *_sessionObservers;	// 56 = 0x38
    HDLocationManager *_locationManager;	// 64 = 0x40
    HDWatchAppStateMonitor *_appStateMonitor;	// 72 = 0x48
    _Bool _hasPerformedPostLaunchSessionRecovery;	// 80 = 0x50
    NSMutableArray *_postLaunchRecoveryBlocks;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_postLaunchRecoveryCallbackQueue;	// 96 = 0x60
    HKObserverSet *_currentWorkoutObservers;	// 104 = 0x68
    HDProfile *_profile;	// 112 = 0x70
    HDAlertSuppressor *_alertSuppressor;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_queue;	// 128 = 0x80
    HDWorkoutLocationSmoother *_locationSmoother;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x000000000063198e
@property(retain, nonatomic) HDWorkoutLocationSmoother *locationSmoother; // @synthesize locationSmoother=_locationSmoother;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) HDLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(readonly, nonatomic) HDAlertSuppressor *alertSuppressor; // @synthesize alertSuppressor=_alertSuppressor;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (_Bool)isPowerSavingSupportedForCurrentActivity;	// IMP=0x00000000006316f2
- (void)endHeartRateRecovery;	// IMP=0x000000000063168a
@property(readonly, nonatomic) _Bool isInHeartRateRecovery;
- (void)workoutSession:(id)arg1 didUpdateControllerStateForRecoveryIdentifier:(id)arg2;	// IMP=0x000000000063140e
- (void)workoutSession:(id)arg1 didUpdateDataAccumulator:(id)arg2;	// IMP=0x00000000006312dd
- (void)workoutSession:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00000000006312d7
- (void)workoutSession:(id)arg1 didGenerateEvent:(id)arg2;	// IMP=0x00000000006312d1
- (void)workoutSession:(id)arg1 didChangeToState:(long long)arg2 fromState:(long long)arg3 date:(id)arg4;	// IMP=0x0000000000630c60
- (id)unitTest_currentWorkoutSession;	// IMP=0x0000000000630b86
- (void)unitTest_finishAllDetachedWorkoutBuilders;	// IMP=0x0000000000630b7c
- (void)unitTest_smoothRoute:(id)arg1 withSmoother:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000630a68
- (void)hk_fakeStopEventWithDate:(id)arg1;	// IMP=0x0000000000630903
- (void)hk_fakeLapEventWithDate:(id)arg1 strokeStyle:(long long)arg2;	// IMP=0x00000000006306e6
- (void)removeWorkoutSessionObserver:(id)arg1;	// IMP=0x00000000006306d0
- (void)addWorkoutSessionObserver:(id)arg1 queue:(id)arg2;	// IMP=0x00000000006306ba
- (void)removeWorkoutEventObserver:(id)arg1;	// IMP=0x00000000000665a8
- (void)addWorkoutEventObserver:(id)arg1;	// IMP=0x00000000000569ce
- (void)devicePowerMonitor:(id)arg1 primaryPowerSourceIsCharging:(_Bool)arg2;	// IMP=0x00000000006304fe
- (void)profileDidBecomeReady:(id)arg1;	// IMP=0x00000000006302aa
- (id)diagnosticDescription;	// IMP=0x00000000006300e0
- (void)pauseActiveWorkoutsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000630000
- (id)currentWorkoutSessionServer;	// IMP=0x000000000062ff26
- (void)unregisterCurrentWorkoutObserver:(id)arg1;	// IMP=0x000000000062ff10
- (void)registerCurrentWorkoutObserver:(id)arg1;	// IMP=0x000000000062fe3d
- (void)getCurrentWorkoutSnapshotWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000062fcf6
- (void)performWhenPostLaunchSessionRecoveryHasCompleted:(CDUnknownBlockType)arg1;	// IMP=0x000000000062fb8b
- (void)generatePauseOrResumeRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000062e7af
- (id)currentWorkoutClient;	// IMP=0x0000000000012284
- (long long)currentWorkoutLocationType;	// IMP=0x00000000000585c5
- (unsigned long long)currentWorkoutActivityType;	// IMP=0x000000000001f0b0
- (_Bool)hasAnyActiveWorkouts;	// IMP=0x000000000000c5d8
- (void)recoverWorkoutSessionForClient:(id)arg1 server:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000062e150
- (_Bool)finishAllWorkoutsForClient:(id)arg1 error:(id *)arg2;	// IMP=0x000000000062e09c
- (id)newBiomeInterface;	// IMP=0x000000000062e031
- (void)_sendStartWorkoutAppResponse:(CDUnknownBlockType)arg1 error:(id)arg2;	// IMP=0x000000000062df68
- (void)receivedStartWorkoutAppRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000062df56
- (void)startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000062df44
- (id)sessionServerWithConfiguration:(id)arg1 sessionUUID:(id)arg2 taskServer:(id)arg3 error:(id *)arg4;	// IMP=0x000000000062d651
- (void)sessionServerFromSessionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000062d497
- (id)recoveredWorkoutSessionServerWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000062cc63
- (void)dealloc;	// IMP=0x000000000062cc21
- (id)initWithProfile:(id)arg1;	// IMP=0x000000000062ca14
- (void)_receivedStartWorkoutAppRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000034cf6e
- (void)_startWatchAppWithWorkoutConfiguration:(id)arg1 client:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000034ca3c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

