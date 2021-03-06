//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXEventProcessor;
@protocol BSInvalidatable, XADEventManagerDelegate;

@interface XADEventManager : NSObject
{
    _Bool _snarfingEvents;	// 8 = 0x8
    _Bool _stopSnarfingOnTouchUp;	// 9 = 0x9
    _Bool __registeredForNotifications;	// 10 = 0xa
    id <XADEventManagerDelegate> _delegate;	// 16 = 0x10
    struct __AXObserver *__axEventObserver;	// 24 = 0x18
    AXEventProcessor *__eventProcessor;	// 32 = 0x20
    id <BSInvalidatable> __disableIdleTimerAssertion;	// 40 = 0x28
}

+ (id)sharedManager;	// IMP=0x0040000000001548
- (void).cxx_destruct;	// IMP=0x002000000000281a
@property(retain, nonatomic) id <BSInvalidatable> _disableIdleTimerAssertion; // @synthesize _disableIdleTimerAssertion=__disableIdleTimerAssertion;
@property(nonatomic) _Bool _registeredForNotifications; // @synthesize _registeredForNotifications=__registeredForNotifications;
@property(retain, nonatomic) AXEventProcessor *_eventProcessor; // @synthesize _eventProcessor=__eventProcessor;
@property(nonatomic) struct __AXObserver *_axEventObserver; // @synthesize _axEventObserver=__axEventObserver;
@property(nonatomic) _Bool stopSnarfingOnTouchUp; // @synthesize stopSnarfingOnTouchUp=_stopSnarfingOnTouchUp;
@property(nonatomic) _Bool snarfingEvents; // @synthesize snarfingEvents=_snarfingEvents;
@property(nonatomic) __weak id <XADEventManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_localizedNotificationString:(int)arg1;	// IMP=0x0010000000002711
- (void)_handleAccessibilityNotification:(int)arg1;	// IMP=0x0010000000002691
- (void)_handleNativeFocusItemChangedNotification:(struct __CFData *)arg1;	// IMP=0x001000000000261b
- (void)_handleFocusMovedToElement:(id)arg1;	// IMP=0x00100000000025a6
- (id)_elementWithNativeFocus;	// IMP=0x0010000000002531
- (void)_registerForAXNotifications:(_Bool)arg1;	// IMP=0x0010000000002333
- (id)_accessibilityNotificationsToObserve;	// IMP=0x0010000000002326
- (_Bool)_initializeAXObserverIfNeeded;	// IMP=0x0010000000002197
- (void)_registerForNotifications:(_Bool)arg1;	// IMP=0x0010000000002133
- (void)_startListening;	// IMP=0x0010000000001ebf
- (void)connectionInterrupted;	// IMP=0x0010000000001e64
- (void)_stopListening;	// IMP=0x0010000000001dd8
- (_Bool)_iosEventFilter:(id)arg1;	// IMP=0x0010000000001bdd
- (id)_preprocessEventForSimulator:(id)arg1;	// IMP=0x0010000000001ac4
- (void)_handleIOHIDEvent:(id)arg1;	// IMP=0x0010000000001871
- (void)_setLockScreenDimTimerEnabled:(_Bool)arg1;	// IMP=0x0010000000001759
- (void)_touchedElementAtPoint:(struct CGPoint)arg1;	// IMP=0x00100000000016f6
- (void)dealloc;	// IMP=0x00100000000016b4
- (id)init;	// IMP=0x00100000000015d9

@end

