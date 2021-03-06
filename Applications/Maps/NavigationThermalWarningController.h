//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol BSInvalidatable;

__attribute__((visibility("hidden")))
@interface NavigationThermalWarningController : NSObject
{
    id <BSInvalidatable> _idleTimerAssertion;	// 8 = 0x8
    struct __CFUserNotification *_notification;	// 16 = 0x10
    _Bool _active;	// 24 = 0x18
    CDUnknownBlockType _changeHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000fa3dc
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(copy, nonatomic) CDUnknownBlockType changeHandler; // @synthesize changeHandler=_changeHandler;
- (void)screenLayoutDidChange;	// IMP=0x00100000000fa1ab
- (id)_localizedTitle;	// IMP=0x00100000000fa143
- (id)_localizedMessage;	// IMP=0x00100000000fa059
- (void)_tearDownNotificationIfNeeded;	// IMP=0x00100000000f9f12
- (void)_clearIdleTimerIfNeeded;	// IMP=0x00100000000f9e3c
- (void)_sendNotification;	// IMP=0x00100000000f9b2f
- (void)_lockAndStartIdleTimer;	// IMP=0x00100000000f98c9
- (void)_checkThermalLevel;	// IMP=0x00100000000f97f0
@property(readonly, nonatomic, getter=isDeviceMelting) _Bool deviceMelting;
- (void)dealloc;	// IMP=0x00100000000f94e4
- (id)init;	// IMP=0x00100000000f92b8

@end

