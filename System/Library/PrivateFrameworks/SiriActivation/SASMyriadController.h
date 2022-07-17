//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriActivation/AFMyriadDelegate-Protocol.h>
#import <SiriActivation/SASLockStateMonitorDelegate-Protocol.h>

@class AFMyriadCoordinator, CMMotionActivityManager, FBSDisplayLayoutMonitor, NSString, SASLockStateMonitor;
@protocol OS_dispatch_semaphore, SASMyriadControllerDelegate;

@interface SASMyriadController : NSObject <SASLockStateMonitorDelegate, AFMyriadDelegate>
{
    id <SASMyriadControllerDelegate> _delegate;	// 8 = 0x8
    AFMyriadCoordinator *_myriadCoordinator;	// 16 = 0x10
    _Bool _isLocked;	// 24 = 0x18
    NSObject<OS_dispatch_semaphore> *_myriadFinishedSemaphore;	// 32 = 0x20
    FBSDisplayLayoutMonitor *_displayMonitor;	// 40 = 0x28
    double _raiseToWakeTime;	// 48 = 0x30
    double _unlockTime;	// 56 = 0x38
    SASLockStateMonitor *_lockStateMonitor;	// 64 = 0x40
    _Bool _isStationary;	// 72 = 0x48
    double _liftEndTime;	// 80 = 0x50
    struct os_unfair_lock_s _activityManagerLock;	// 88 = 0x58
    CMMotionActivityManager *_activityManager;	// 96 = 0x60
    _Bool _canceledByMyriad;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000075fd
@property(nonatomic) _Bool canceledByMyriad; // @synthesize canceledByMyriad=_canceledByMyriad;
- (void)_configureMotionActivityManager;	// IMP=0x00000000000071c5
- (void)didChangeLockState:(unsigned long long)arg1 toState:(unsigned long long)arg2;	// IMP=0x00000000000070b6
- (void)shouldAbortAnotherDeviceBetter:(id)arg1;	// IMP=0x0000000000006f9e
- (void)shouldContinue:(id)arg1;	// IMP=0x0000000000006e8b
- (void)_updateRaiseToWakeTimeForTransition:(id)arg1;	// IMP=0x0000000000006c76
- (void)activateForInTaskRequest:(_Bool)arg1 isVisible:(_Bool)arg2;	// IMP=0x0000000000006b30
- (_Bool)activateForRequest:(id)arg1 visible:(_Bool)arg2;	// IMP=0x00000000000062ea
- (void)dealloc;	// IMP=0x00000000000061ec
- (id)initWithDelegate:(id)arg1;	// IMP=0x0000000000005f9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
