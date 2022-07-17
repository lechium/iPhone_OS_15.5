//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Coordination/COAlarmManagerClientInterface-Protocol.h>
#import <Coordination/COObservable-Protocol.h>

@class COObserverSet, HMAccessory, NSString, NSUUID, NSXPCConnection;
@protocol COAlarmManagerConnectionProvider;

@interface COAlarmManager : NSObject <COAlarmManagerClientInterface, COObservable>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMAccessory *_accessory;	// 16 = 0x10
    NSXPCConnection *_lastConnection;	// 24 = 0x18
    id <COAlarmManagerConnectionProvider> _provider;	// 32 = 0x20
    COObserverSet *_observers;	// 40 = 0x28
    NSString *_cluster;	// 48 = 0x30
    NSUUID *_instanceID;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000000ddf1
@property(readonly, nonatomic) NSUUID *instanceID; // @synthesize instanceID=_instanceID;
@property(readonly, copy, nonatomic) NSString *cluster; // @synthesize cluster=_cluster;
@property(readonly, nonatomic) COObserverSet *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) id <COAlarmManagerConnectionProvider> provider; // @synthesize provider=_provider;
@property(nonatomic) __weak NSXPCConnection *lastConnection; // @synthesize lastConnection=_lastConnection;
@property(readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
- (void)_registerObserverWithName:(id)arg1;	// IMP=0x000000000000d95d
- (void)removeObserver:(id)arg1;	// IMP=0x000000000000d57d
- (id)addObserverForName:(id)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000000d362
- (id)dismissAlarmWithIdentifier:(id)arg1;	// IMP=0x000000000000cf47
- (id)snoozeAlarmWithIdentifier:(id)arg1;	// IMP=0x000000000000cb2c
- (id)removeAlarm:(id)arg1;	// IMP=0x000000000000c621
- (id)updateAlarm:(id)arg1;	// IMP=0x000000000000c116
- (id)addAlarm:(id)arg1;	// IMP=0x000000000000baaa
- (_Bool)_canDispatchForAssociatedAccessory;	// IMP=0x000000000000b73a
- (id)alarmsForAccessory:(id)arg1;	// IMP=0x000000000000b616
- (id)alarmsIncludingSleepAlarm:(_Bool)arg1;	// IMP=0x000000000000b4ff
- (id)alarms;	// IMP=0x000000000000b3ec
- (void)postNotificationName:(id)arg1 withUserInfo:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x000000000000b32a
- (void)_handleNotification:(id)arg1;	// IMP=0x000000000000b1da
- (id)_alarmsForAccessoryUniqueIdentifier:(id)arg1 categoryType:(id)arg2 includingSleepAlarm:(_Bool)arg3;	// IMP=0x000000000000acea
- (void)_lostConnectionToService;	// IMP=0x000000000000ab05
- (id)_remoteInterfaceWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a407
- (id)_categoryTypeForAlarm:(id)arg1;	// IMP=0x000000000000a2c1
- (void)_withLock:(CDUnknownBlockType)arg1;	// IMP=0x000000000000a284
- (void)dealloc;	// IMP=0x000000000000a16a
- (id)initForAccessory:(id)arg1 withConnectionProvider:(id)arg2;	// IMP=0x0000000000009faf
- (id)init;	// IMP=0x0000000000009f6f
- (id)initWithConnectionProvider:(id)arg1;	// IMP=0x0000000000009dcc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
