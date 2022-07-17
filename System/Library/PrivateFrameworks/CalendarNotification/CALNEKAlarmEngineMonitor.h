//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarNotification/CADModule-Protocol.h>
#import <CalendarNotification/CALNAlarmEngineMonitor-Protocol.h>

@class NSNotificationCenter, NSString, _EKAlarmEngine;

@interface CALNEKAlarmEngineMonitor : NSObject <CALNAlarmEngineMonitor, CADModule>
{
    _Bool _active;	// 8 = 0x8
    NSNotificationCenter *_notificationCenter;	// 16 = 0x10
    _EKAlarmEngine *_alarmEngine;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000276f2
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic) _EKAlarmEngine *alarmEngine; // @synthesize alarmEngine=_alarmEngine;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
- (void)removeAlarmsFiredObserver:(id)arg1;	// IMP=0x000000000002762c
- (void)addAlarmsFiredObserver:(id)arg1 selector:(SEL)arg2;	// IMP=0x0000000000027584
- (void)protectedDataDidBecomeAvailable;	// IMP=0x000000000002757e
- (void)receivedAlarmNamed:(id)arg1;	// IMP=0x00000000000274c6
- (void)didRegisterForAlarms;	// IMP=0x000000000002742a
- (void)receivedNotificationNamed:(id)arg1;	// IMP=0x0000000000027372
- (void)deactivate;	// IMP=0x000000000002735e
- (void)activate;	// IMP=0x0000000000027301
- (id)initWithAlarmEngine:(id)arg1 notificationCenter:(id)arg2;	// IMP=0x0000000000027268

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
