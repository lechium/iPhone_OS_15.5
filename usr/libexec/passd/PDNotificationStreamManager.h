//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PDNotificationStreamManager : NSObject
{
    _Bool _started;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_group;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_internalSerialQueue;	// 24 = 0x18
    struct os_unfair_lock_s _consumerLock;	// 32 = 0x20
    NSHashTable *_consumers;	// 40 = 0x28
    NSMapTable *_consumerRegistrationState;	// 48 = 0x30
    _Atomic _Bool _needsRegistrationUpdate;	// 56 = 0x38
    NSMutableDictionary *_registeredNotificationNames;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000002033e0
- (void)_queue_stopObservingNotification:(id)arg1 forStream:(long long)arg2;	// IMP=0x00100000002033da
- (void)_queue_startObservingNotification:(id)arg1 forStream:(long long)arg2;	// IMP=0x00100000002033d4
- (id)_notificationStreamNameForStream:(long long)arg1;	// IMP=0x00100000002033af
- (id)_notificationNameKeyForStream:(long long)arg1;	// IMP=0x001000000020338a
- (void)receivedXPCEvent:(id)arg1 forEventStream:(id)arg2;	// IMP=0x0010000000202d04
- (void)_queue_updateEventStreamRegistrationForStream:(long long)arg1;	// IMP=0x0010000000202880
- (void)_queue_updateEventStreamRegistration;	// IMP=0x0010000000202843
- (void)_scheduleEventStreamRegistrationUpdateWhileInternalQueue:(_Bool)arg1;	// IMP=0x00100000002027ab
- (void)start;	// IMP=0x0010000000202725
- (void)recalculateNotificationNames;	// IMP=0x0010000000202652
- (void)_unregisterConsumer:(id)arg1;	// IMP=0x00100000002025e5
- (void)_updateConsumers:(id)arg1 requiresRegistration:(_Bool)arg2;	// IMP=0x001000000020225b
- (void)unregisterConsumer:(id)arg1;	// IMP=0x0010000000202225
- (void)registerConsumer:(id)arg1;	// IMP=0x0010000000202159
- (id)init;	// IMP=0x001000000020204d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

