//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSInvalidatable-Protocol.h>
#import <SpringBoard/CSExternalEventHandling-Protocol.h>
#import <SpringBoard/SBLiftToWakeObserver-Protocol.h>

@class NSString, SBBacklightController, SBIdleTimerGlobalCoordinator, SBLiftToWakeController, SBLockScreenManager, SBMainDisplayPolicyAggregator;

@interface SBLiftToWakeManager : NSObject <CSExternalEventHandling, SBLiftToWakeObserver, BSInvalidatable>
{
    SBLiftToWakeController *_liftToWakeController;	// 8 = 0x8
    SBLockScreenManager *_accessor_lockScreenManager;	// 16 = 0x10
    SBBacklightController *_accessor_backlightController;	// 24 = 0x18
    SBMainDisplayPolicyAggregator *_accessor_policyAggregator;	// 32 = 0x20
    SBIdleTimerGlobalCoordinator *_accessor_idleTimerCoordinator;	// 40 = 0x28
    _Bool _gestureWokeScreen;	// 48 = 0x30
    _Bool _observing;	// 49 = 0x31
    _Bool _significantUserInteractionOccuredSinceWake;	// 50 = 0x32
    _Bool _invalidated;	// 51 = 0x33
}

- (void).cxx_destruct;	// IMP=0x000000000061f894
@property(retain, nonatomic, getter=_liftToWakeController, setter=_setLiftToWakeController:) SBLiftToWakeController *liftToWakeController; // @synthesize liftToWakeController=_liftToWakeController;
@property(nonatomic, getter=_gestureWokeScreen, setter=_setGestureWokeScreen:) _Bool gestureWokeScreen; // @synthesize gestureWokeScreen=_gestureWokeScreen;
@property(retain, nonatomic, getter=_idleTimerCoordinator, setter=_setIdleTimerCoordinator:) SBIdleTimerGlobalCoordinator *idleTimerCoordinator; // @synthesize idleTimerCoordinator=_accessor_idleTimerCoordinator;
@property(retain, nonatomic, getter=_backlightController, setter=_setBacklightController:) SBBacklightController *backlightController; // @synthesize backlightController=_accessor_backlightController;
@property(retain, nonatomic, getter=_lockScreenManager, setter=_setLockScreenManager:) SBLockScreenManager *lockScreenManager; // @synthesize lockScreenManager=_accessor_lockScreenManager;
@property(retain, nonatomic, getter=_policyAggregator, setter=_setPolicyAggregator:) SBMainDisplayPolicyAggregator *policyAggregator; // @synthesize policyAggregator=_accessor_policyAggregator;
- (_Bool)wouldHandleButtonEvent:(id)arg1;	// IMP=0x000000000061f823
- (_Bool)handleEvent:(id)arg1;	// IMP=0x000000000061f7a9
@property(readonly, nonatomic) long long participantState;
@property(readonly, copy, nonatomic) NSString *coverSheetIdentifier;
- (void)conformsToCSEventHandling;	// IMP=0x000000000061f774
- (void)liftToWakeController:(id)arg1 didObserveTransition:(long long)arg2 deviceOrientation:(long long)arg3;	// IMP=0x000000000061ee41
- (void)invalidate;	// IMP=0x000000000061edac
- (_Bool)_isLockScreenMainPageVisible;	// IMP=0x000000000061ecf0
- (void)_ignoredTransition:(long long)arg1;	// IMP=0x000000000061ecea
- (void)_backlightWillTurnOn:(id)arg1;	// IMP=0x00000000000cd376
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000061eac2
- (id)_initWithLiftToWakeController:(id)arg1;	// IMP=0x000000000061e9f2
- (id)init;	// IMP=0x000000000061e998

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
