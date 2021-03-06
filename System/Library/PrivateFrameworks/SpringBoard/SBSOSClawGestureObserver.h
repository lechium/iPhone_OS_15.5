//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBVolumePressBandit-Protocol.h>
#import <SpringBoard/SOSManagerClientObserver-Protocol.h>

@class BSTimer, NSMutableSet, NSString, SBClawGestureLogger, SBMainWorkspace, SBSOSDefaults, SOSManager;
@protocol SBSOSClawGestureObserverDelegate;

@interface SBSOSClawGestureObserver : NSObject <SOSManagerClientObserver, SBVolumePressBandit>
{
    SOSManager *_sosManager;	// 8 = 0x8
    SBMainWorkspace *_workspace;	// 16 = 0x10
    _Bool _sosEnabled;	// 24 = 0x18
    _Bool _wasSOSTiggeredByClaw;	// 25 = 0x19
    NSMutableSet *_activePressTypes;	// 32 = 0x20
    SBClawGestureLogger *_clawGestureLogger;	// 40 = 0x28
    id <SBSOSClawGestureObserverDelegate> _delegate;	// 48 = 0x30
    SBSOSDefaults *_sosDefaults;	// 56 = 0x38
    BSTimer *_sosTriggerTimer;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000020e655
@property(nonatomic, getter=_wasSOSTriggeredByClaw, setter=_setWasSOSTriggeredByClaw:) _Bool wasSOSTiggeredByClaw; // @synthesize wasSOSTiggeredByClaw=_wasSOSTiggeredByClaw;
@property(retain, nonatomic) BSTimer *sosTriggerTimer; // @synthesize sosTriggerTimer=_sosTriggerTimer;
@property(nonatomic, getter=isSOSEnabled, setter=setSOSEnabled:) _Bool sosEnabled; // @synthesize sosEnabled=_sosEnabled;
@property(retain, nonatomic, setter=_setSOSDefaults:) SBSOSDefaults *sosDefaults; // @synthesize sosDefaults=_sosDefaults;
@property(nonatomic) __weak id <SBSOSClawGestureObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SBClawGestureLogger *clawGestureLogger; // @synthesize clawGestureLogger=_clawGestureLogger;
@property(retain, nonatomic) NSMutableSet *activePressTypes; // @synthesize activePressTypes=_activePressTypes;
- (void)handleVolumeDecrease;	// IMP=0x000000000020e5b4
- (void)handleVolumeIncrease;	// IMP=0x000000000020e5ae
- (void)didUpdateCurrentSOSInitiationState:(long long)arg1;	// IMP=0x000000000020e473
@property(readonly, nonatomic, getter=_isSOSActivated) _Bool sosActivated;
@property(readonly, nonatomic, getter=_isAutomaticCallCountdownEnabled) _Bool autoCallCountdownEnabled;
- (void)_presentSOSInterface;	// IMP=0x000000000020e177
- (void)_cancelSOSActivity;	// IMP=0x000000000020dfca
@property(readonly, nonatomic, getter=_isClawGestureActive) _Bool clawGestureActive;
@property(readonly, nonatomic, getter=isClawActivated) _Bool clawActivated;
@property(nonatomic, getter=isGestureLoggingEnabled) _Bool gestureLoggingEnabled;
- (void)noteGestureReset;	// IMP=0x000000000020dcb6
- (void)noteButtonPress:(long long)arg1 isDown:(_Bool)arg2;	// IMP=0x000000000020d60d
- (void)dealloc;	// IMP=0x000000000020d5c2
- (id)_initWithSOSManager:(id)arg1 workspace:(id)arg2;	// IMP=0x000000000020d3e6
- (id)init;	// IMP=0x000000000020d35c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

