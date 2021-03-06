//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDWorkoutSessionController-Protocol.h>
#import <HealthDaemon/HDWorkoutSessionStateController-Protocol.h>

@class HDDefaultWorkoutSessionController;
@protocol HDWorkoutDataAccumulator, HDWorkoutSessionStateController;

@interface HDFirstPartyWorkoutSessionController : NSObject <HDWorkoutSessionController, HDWorkoutSessionStateController>
{
    id <HDWorkoutSessionStateController> _sessionStateController;	// 8 = 0x8
    HDDefaultWorkoutSessionController *_defaultSessionController;	// 16 = 0x10
    long long _currentState;	// 24 = 0x18
}

+ (void)willFinishSessionWithRecoveryData:(id)arg1 profile:(id)arg2;	// IMP=0x00000000006f2bff
+ (id)recoveryIdentifier;	// IMP=0x00000000006f2bdc
- (void).cxx_destruct;	// IMP=0x00000000006f31e6
@property(readonly, nonatomic) id <HDWorkoutDataAccumulator> workoutDataAccumulator;
- (_Bool)storeSessionControllerState:(id)arg1 forRecoveryIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000006f311d
- (void)generateConfigurationUpdate:(id)arg1;	// IMP=0x00000000006f30c3
- (void)generateMetadata:(id)arg1;	// IMP=0x00000000006f3069
- (void)generateError:(id)arg1;	// IMP=0x00000000006f300f
- (void)generateEvent:(id)arg1;	// IMP=0x00000000006f2fb5
- (void)finishAggregationWithDate:(id)arg1;	// IMP=0x00000000006f2f5b
- (void)finish;	// IMP=0x00000000006f2f2a
- (void)endHeartRateRecovery;	// IMP=0x00000000006f2ef9
- (void)autoResumeWithDate:(id)arg1;	// IMP=0x00000000006f2e8d
- (void)autoPauseWithDate:(id)arg1;	// IMP=0x00000000006f2dea
- (_Bool)resumeWithError:(id *)arg1;	// IMP=0x00000000006f2dad
- (_Bool)pauseWithError:(id *)arg1;	// IMP=0x00000000006f2d70
- (_Bool)endWithError:(id *)arg1;	// IMP=0x00000000006f2d33
- (_Bool)stopActivityWithDate:(id)arg1 error:(id *)arg2;	// IMP=0x00000000006f2ccf
- (_Bool)startActivityWithDate:(id)arg1 error:(id *)arg2;	// IMP=0x00000000006f2c6b
- (_Bool)prepareWithError:(id *)arg1;	// IMP=0x00000000006f2c2e
- (void)unitTest_setCMWorkoutManager:(id)arg1;	// IMP=0x00000000006f2c18
- (void)hktest_setStateTransitionCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000006f2be9
- (void)workoutSessionServer:(id)arg1 accumulatorDidChange:(id)arg2;	// IMP=0x00000000006f2bc6
- (void)workoutSessionServer:(id)arg1 didTransitionFromState:(long long)arg2 toState:(long long)arg3 date:(id)arg4;	// IMP=0x00000000006f2bac
- (void)workoutSessionServer:(id)arg1 didChangeConfiguration:(id)arg2;	// IMP=0x00000000006f2b96
- (id)initWithProfile:(id)arg1 sessionConfiguration:(id)arg2 sessionStateController:(id)arg3 recoveryState:(id)arg4;	// IMP=0x00000000006f2aa7

@end

