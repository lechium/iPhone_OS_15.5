//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemonFoundation/HDDiagnosticObject-Protocol.h>

@class NSMapTable, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface HDXPCAlarmScheduler : NSObject <HDDiagnosticObject>
{
    NSMapTable *_alarms;	// 8 = 0x8
    NSMutableSet *_pendingEvents;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    CDUnknownBlockType _unitTest_schedulerObserver;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000b5b6
@property(copy, nonatomic) CDUnknownBlockType unitTest_schedulerObserver; // @synthesize unitTest_schedulerObserver=_unitTest_schedulerObserver;
- (id)diagnosticDescription;	// IMP=0x000000000000b103
- (void)unscheduleEventWithName:(id)arg1;	// IMP=0x000000000000af96
- (void)scheduleEvent:(id)arg1;	// IMP=0x000000000000ae29
- (void)removeAlarm:(id)arg1;	// IMP=0x000000000000ac8f
- (void)addAlarm:(id)arg1;	// IMP=0x000000000000aade
- (void)_queue_notifyAlarmsOfPendingEvents;	// IMP=0x000000000000a78d
- (void)_queue_handleEvent:(id)arg1;	// IMP=0x000000000000a72e
- (void)unittest_fireEvent:(id)arg1;	// IMP=0x000000000000a684
- (void)_queue_unscheduleEventWithName:(id)arg1;	// IMP=0x000000000000a5d5
- (void)_queue_scheduleEvent:(id)arg1;	// IMP=0x000000000000a4d3
- (void)_queue_handleXPCEvent:(id)arg1;	// IMP=0x000000000000a2c9
- (id)init;	// IMP=0x000000000000a0c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
