//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLTimer;

@interface CLDrivingRecorderTrigger
{
    struct unique_ptr<CLMotionStateObserver_Type::Client, std::default_delete<CLMotionStateObserver_Type::Client>> _motionStateObserverClient;	// 8 = 0x8
    _Bool _enableVehicularNotifications;	// 16 = 0x10
    CLTimer *_deferredStartTimer;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x0020000000b44e66
- (void).cxx_destruct;	// IMP=0x0010000000b44e3e
- (void)onDeferredStopTimerShouldPublish:(_Bool)arg1;	// IMP=0x0010000000b44de5
- (void)onDeferredStartTimerSpecifyTriggerDelay:(double)arg1;	// IMP=0x0010000000b44d0f
- (void)onMotionStateObserverNotification:(const int *)arg1 data:(const NotificationData_913f635f *)arg2;	// IMP=0x0010000000b44b0e
- (void)teardownListeners;	// IMP=0x0010000000b44a34
- (void)cancelDeferredStartTimer;	// IMP=0x0010000000b449fb
- (void)scheduleStart;	// IMP=0x0010000000b44699
- (void)setupListeners;	// IMP=0x0010000000b444ee
- (void)dealloc;	// IMP=0x0010000000b4449b
- (id)initWithDelegate:(id)arg1 andUniverse:(id)arg2;	// IMP=0x0010000000b442a0

@end
