//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SchoolTime/SCLSchedulingEngineDelegate-Protocol.h>
#import <SchoolTime/SCLSuppressSchoolModeAssertionManagerObserver-Protocol.h>

@class NSHashTable, NSString, SCLSchedulingEngine, SCLSchoolModeWakeScheduler, SCLState, SCLSuppressSchoolModeAssertionManager;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface SCLSchoolModeServer : NSObject <SCLSchedulingEngineDelegate, SCLSuppressSchoolModeAssertionManagerObserver>
{
    int _timeChangeToken;	// 8 = 0x8
    SCLSuppressSchoolModeAssertionManager *_suppressionManager;	// 16 = 0x10
    SCLSchoolModeWakeScheduler *_wakeScheduler;	// 24 = 0x18
    NSHashTable *_observers;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_targetQueue;	// 48 = 0x30
    SCLSchedulingEngine *_schedulingEngine;	// 56 = 0x38
    NSObject<OS_dispatch_source> *_timerSource;	// 64 = 0x40
    NSObject<OS_os_transaction> *_activeTransaction;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000001414a
@property(retain, nonatomic) NSObject<OS_os_transaction> *activeTransaction; // @synthesize activeTransaction=_activeTransaction;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timerSource; // @synthesize timerSource=_timerSource;
@property(retain) SCLSchedulingEngine *schedulingEngine; // @synthesize schedulingEngine=_schedulingEngine;
@property(nonatomic) int timeChangeToken; // @synthesize timeChangeToken=_timeChangeToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) SCLSchoolModeWakeScheduler *wakeScheduler; // @synthesize wakeScheduler=_wakeScheduler;
@property(readonly, nonatomic) SCLSuppressSchoolModeAssertionManager *suppressionManager; // @synthesize suppressionManager=_suppressionManager;
- (void)configureParameters:(id)arg1 forSuppressionStatus:(unsigned long long)arg2;	// IMP=0x000000000001406d
- (void)assertionManager:(id)arg1 didUpdateAssertionsStatus:(unsigned long long)arg2;	// IMP=0x0000000000013f28
- (void)schedulingEngine:(id)arg1 didUpdateState:(id)arg2 fromState:(id)arg3 nextEvaluationDate:(id)arg4;	// IMP=0x0000000000013ccc
- (void)_scheduleTimerForDate:(id)arg1;	// IMP=0x00000000000139bf
- (void)timerFired;	// IMP=0x0000000000013926
- (void)handleLocaleChange;	// IMP=0x00000000000137a7
- (void)handleSignificantTimeChange;	// IMP=0x0000000000013684
- (void)applySchedule:(id)arg1;	// IMP=0x0000000000013495
- (void)setActive:(_Bool)arg1;	// IMP=0x00000000000132f5
- (void)removeObserver:(id)arg1;	// IMP=0x000000000001325d
- (void)addObserver:(id)arg1;	// IMP=0x00000000000131c5
- (void)invalidate;	// IMP=0x00000000000130c2
- (void)startWithScheduleSettings:(id)arg1 shouldStartManuallyActive:(_Bool)arg2;	// IMP=0x0000000000012928
@property(readonly) SCLState *currentState;
- (id)initWithQueue:(id)arg1 suppressionManager:(id)arg2 wakeScheduler:(id)arg3;	// IMP=0x0000000000012784

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

