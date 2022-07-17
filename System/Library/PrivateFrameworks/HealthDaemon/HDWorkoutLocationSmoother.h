//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/CLLocationSmootherDelegate-Protocol.h>
#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDForegroundClientProcessObserver-Protocol.h>
#import <HealthDaemon/HDHealthDaemonReadyObserver-Protocol.h>

@class CLLocationSmoother, HDProfile, HDSmoothingTask, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface HDWorkoutLocationSmoother : NSObject <CLLocationSmootherDelegate, HDDatabaseProtectedDataObserver, HDForegroundClientProcessObserver, HDDataObserver, HDHealthDaemonReadyObserver>
{
    CLLocationSmoother *_smoother;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    HDProfile *_profile;	// 24 = 0x18
    NSMutableArray *_pendingSmoothingTasks;	// 32 = 0x20
    HDSmoothingTask *_currentSmoothingTask;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_timeoutSource;	// 48 = 0x30
    double _smoothingTaskTimeout;	// 56 = 0x38
    _Bool _needToCheckForLocationSeriesOnUnlock;	// 64 = 0x40
    _Bool _isFirstLaunchAndNotYetSmoothed;	// 65 = 0x41
    CDUnknownBlockType _didCompleteAllPendingSmoothingTasksHandler;	// 72 = 0x48
    CDUnknownBlockType _unitTest_wilTriggerSmoothing;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000243542
@property(copy, nonatomic) CDUnknownBlockType unitTest_wilTriggerSmoothing; // @synthesize unitTest_wilTriggerSmoothing=_unitTest_wilTriggerSmoothing;
@property(copy, nonatomic) CDUnknownBlockType didCompleteAllPendingSmoothingTasksHandler; // @synthesize didCompleteAllPendingSmoothingTasksHandler=_didCompleteAllPendingSmoothingTasksHandler;
- (void)unitTest_smoothRouteSample:(id)arg1 withSmoother:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002432dd
- (void)smoothRouteWithWorkoutUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000242d2e
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;	// IMP=0x0000000000242bdc
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;	// IMP=0x00000000002406e6
- (void)foregroundClientProcessesDidChange:(id)arg1 previouslyForegroundBundleIdentifiers:(id)arg2;	// IMP=0x00000000002405ae
- (void)daemonReady:(id)arg1;	// IMP=0x0000000000240168
- (void)_associationsSyncedForWorkout:(id)arg1;	// IMP=0x000000000023f269
- (void)dealloc;	// IMP=0x000000000023efb6
- (id)initWithProfile:(id)arg1;	// IMP=0x000000000023ee93

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
