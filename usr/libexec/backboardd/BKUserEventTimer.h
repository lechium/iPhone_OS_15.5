//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSTimer, NSString;
@protocol BSInvalidatable, OS_dispatch_queue;

@interface BKUserEventTimer : NSObject
{
    double _currentTimeout;	// 8 = 0x8
    double _lastUserEvent;	// 16 = 0x10
    double _lastResetTimerRequest;	// 24 = 0x18
    BSTimer *_timer;	// 32 = 0x20
    _Bool _isIdle;	// 40 = 0x28
    int _currentMode;	// 44 = 0x2c
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    _Bool _shouldNotify;	// 56 = 0x38
    _Bool _safeToResetIdleTimer;	// 57 = 0x39
    id <BSInvalidatable> _stateCaptureAssertion;	// 64 = 0x40
    id <BSInvalidatable> _systemShellObserving;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x002000000002bab0
- (void).cxx_destruct;	// IMP=0x002000000002b624
- (void)_queue_clearTimer;	// IMP=0x001000000002b5f2
- (void)_queue_scheduleTimerWithTimeInterval:(double)arg1;	// IMP=0x001000000002b4dd
- (void)_queue_userEventOccurredInPresenceMode;	// IMP=0x001000000002b493
- (void)_queue_userEventOccurredInIdleMode;	// IMP=0x001000000002b450
- (void)_queue_postNotification:(struct __CFString *)arg1;	// IMP=0x001000000002b39f
- (_Bool)isSafeToResetIdleTimer;	// IMP=0x001000000002b396
- (void)notifyOnNextUserEvent;	// IMP=0x001000000002b34b
- (void)userEventOccurredOnDisplay:(id)arg1;	// IMP=0x001000000002b2ee
- (void)resetTimer:(double)arg1 mode:(int)arg2;	// IMP=0x001000000002b23a
- (double)lastUserEventTime;	// IMP=0x001000000002b1aa
- (void)systemShellDidFinishLaunching:(id)arg1;	// IMP=0x001000000002b14b
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x001000000002b017
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x001000000002afc7
- (id)succinctDescriptionBuilder;	// IMP=0x001000000002afab
- (id)succinctDescription;	// IMP=0x001000000002af5b
- (void)dealloc;	// IMP=0x001000000002aec2
- (id)init;	// IMP=0x001000000002ac4b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

