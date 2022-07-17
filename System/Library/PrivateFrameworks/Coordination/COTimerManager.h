//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Coordination/COObservable-Protocol.h>
#import <Coordination/COTimerManagerClientInterface-Protocol.h>

@class COObserverSet, HMAccessory, NSString, NSUUID, NSXPCConnection;
@protocol COTimerManagerConnectionProvider;

@interface COTimerManager : NSObject <COTimerManagerClientInterface, COObservable>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMAccessory *_accessory;	// 16 = 0x10
    NSXPCConnection *_lastConnection;	// 24 = 0x18
    id <COTimerManagerConnectionProvider> _provider;	// 32 = 0x20
    COObserverSet *_observers;	// 40 = 0x28
    NSString *_cluster;	// 48 = 0x30
    NSUUID *_instanceID;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000227ce
@property(readonly, nonatomic) NSUUID *instanceID; // @synthesize instanceID=_instanceID;
@property(readonly, copy, nonatomic) NSString *cluster; // @synthesize cluster=_cluster;
@property(readonly, nonatomic) COObserverSet *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) id <COTimerManagerConnectionProvider> provider; // @synthesize provider=_provider;
@property(nonatomic) __weak NSXPCConnection *lastConnection; // @synthesize lastConnection=_lastConnection;
@property(readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
- (void)_registerObserverWithName:(id)arg1;	// IMP=0x0000000000022331
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000021f45
- (id)addObserverForName:(id)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000021d24
- (id)dismissTimerWithIdentifier:(id)arg1;	// IMP=0x0000000000021900
- (id)removeTimer:(id)arg1;	// IMP=0x0000000000021485
- (id)updateTimer:(id)arg1;	// IMP=0x000000000002100a
- (id)addTimer:(id)arg1;	// IMP=0x0000000000020a2b
- (id)timersForAccessory:(id)arg1;	// IMP=0x0000000000020958
- (id)timers;	// IMP=0x000000000002087a
- (void)postNotificationName:(id)arg1 withUserInfo:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x00000000000207b8
- (void)_handleNotification:(id)arg1;	// IMP=0x0000000000020665
- (_Bool)_canDispatchForAssociatedAccessory;	// IMP=0x000000000002030d
- (id)_timersForAccessoryUniqueIdentifier:(id)arg1;	// IMP=0x000000000001fec0
- (void)_lostConnectionToService;	// IMP=0x000000000001fcd8
- (id)_remoteInterfaceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f5d4
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001f597
- (void)dealloc;	// IMP=0x000000000001f47d
- (id)init;	// IMP=0x000000000001f43d
- (id)initForAccessory:(id)arg1 withConnectionProvider:(id)arg2;	// IMP=0x000000000001f27f
- (id)initWithConnectionProvider:(id)arg1;	// IMP=0x000000000001f0d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
