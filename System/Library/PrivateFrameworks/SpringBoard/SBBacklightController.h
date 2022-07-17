//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, SBHIDUILockAssertion, SBIdleTimerDefaults;

@interface SBBacklightController : NSObject
{
    SBIdleTimerDefaults *_idleTimerDefaults;	// 8 = 0x8
    _Bool _isPendingScreenUnblankAfterCACommit;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    NSHashTable *_informers;	// 32 = 0x20
    long long _lastBacklightChangeSource;	// 40 = 0x28
    SBHIDUILockAssertion *_currentHIDUILockAssertion;	// 48 = 0x30
}

+ (id)sharedInstanceIfExists;	// IMP=0x00000000000cbc97
+ (id)sharedInstance;	// IMP=0x000000000002dfad
+ (id)_sharedInstanceCreateIfNeeded:(_Bool)arg1;	// IMP=0x000000000002dfc4
- (void).cxx_destruct;	// IMP=0x0000000000692f6e
@property(retain, nonatomic) SBHIDUILockAssertion *currentHIDUILockAssertion; // @synthesize currentHIDUILockAssertion=_currentHIDUILockAssertion;
@property(readonly, nonatomic) long long lastBacklightChangeSource; // @synthesize lastBacklightChangeSource=_lastBacklightChangeSource;
@property(readonly, nonatomic) _Bool isPendingScreenUnblankAfterCACommit; // @synthesize isPendingScreenUnblankAfterCACommit=_isPendingScreenUnblankAfterCACommit;
- (double)defaultLockScreenDimIntervalWhenNotificationsPresent;	// IMP=0x0000000000692f3b
- (double)defaultLockScreenDimInterval;	// IMP=0x0000000000692f2d
- (void)preventIdleSleepForNumberOfSeconds:(float)arg1;	// IMP=0x00000000000c785a
- (void)preventIdleSleep;	// IMP=0x00000000000c792d
- (void)allowIdleSleep;	// IMP=0x00000000000d4df3
- (void)unregisterInformer:(id)arg1;	// IMP=0x0000000000692f17
- (void)registerInformer:(id)arg1;	// IMP=0x0000000000692f01
- (void)_notifyObserversDidAnimateToFactor:(float)arg1 source:(long long)arg2;	// IMP=0x00000000000c8ed1
- (void)_notifyObserversWillAnimateToFactor:(float)arg1 source:(long long)arg2;	// IMP=0x00000000000c6a4b
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000692eb2
- (void)addObserver:(id)arg1;	// IMP=0x0000000000692e2b
- (void)_startFadeOutAnimationFromLockSource:(int)arg1;	// IMP=0x0000000000692cb0
- (void)reloadDefaults;	// IMP=0x0000000000692c93
- (void)_animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(long long)arg3 silently:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000009a027
- (void)_suspendProxAndMultitouch:(_Bool)arg1 source:(long long)arg2;	// IMP=0x000000000009a72a
- (void)animateBacklightToFactor:(float)arg1 duration:(double)arg2 source:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000009a00d
- (void)setBacklightFactor:(float)arg1 source:(long long)arg2;	// IMP=0x0000000000099ff6
- (_Bool)shouldTurnOnScreenForBacklightSource:(long long)arg1;	// IMP=0x000000000009991c
- (void)setBacklightFactorPending:(float)arg1;	// IMP=0x00000000000caf94
@property(readonly, nonatomic) _Bool screenIsDim;
@property(readonly, nonatomic) _Bool screenIsOn;
- (void)_deferredScreenUnblankDone;	// IMP=0x00000000000c899d
- (void)turnOnScreenFullyWithBacklightSource:(long long)arg1;	// IMP=0x0000000000099d44
- (void)_performDeferredBacklightRampWorkWithInfo:(id)arg1;	// IMP=0x00000000000ccfb8
@property(readonly, nonatomic) double backlightFactor;
- (void)_undimFromSource:(long long)arg1;	// IMP=0x00000000000ca2f5
- (id)init;	// IMP=0x0000000000692809

@end
