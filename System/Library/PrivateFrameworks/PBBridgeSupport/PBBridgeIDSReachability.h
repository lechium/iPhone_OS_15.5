//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PBBridgeSupport/IDSServiceDelegate-Protocol.h>

@class IDSService, NSMutableOrderedSet, NSString, PBBridgeIDSReachabilityStatusObject;
@protocol OS_dispatch_queue;

@interface PBBridgeIDSReachability : NSObject <IDSServiceDelegate>
{
    NSMutableOrderedSet *_observers;	// 8 = 0x8
    IDSService *_reachabilityService;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    struct os_unfair_lock_s _lock;	// 32 = 0x20
    PBBridgeIDSReachabilityStatusObject *_activeDeviceStatus;	// 40 = 0x28
}

+ (id)nrDevices;	// IMP=0x000000000001ecd9
+ (id)deviceStatusFromIDSDevices:(id)arg1 nrDevices:(id)arg2;	// IMP=0x000000000001e74e
+ (id)sharedInstance;	// IMP=0x000000000001e6bd
- (void).cxx_destruct;	// IMP=0x000000000001fad6
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x000000000001f9ea
- (void)service:(id)arg1 linkedDevicesChanged:(id)arg2;	// IMP=0x000000000001f8fe
- (void)service:(id)arg1 activeAccountsChanged:(id)arg2;	// IMP=0x000000000001f812
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x000000000001f726
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x000000000001f63a
- (void)removeObserver:(id)arg1;	// IMP=0x000000000001f3c8
- (void)addObserver:(id)arg1;	// IMP=0x000000000001f15b
- (void)_processDevices:(id)arg1;	// IMP=0x000000000001eeee
- (unsigned long long)reachabilityForDevice:(id)arg1;	// IMP=0x000000000001ec0f
- (id)getDeviceStatusChangeFromIDSDevices:(id)arg1 nrDevices:(id)arg2;	// IMP=0x000000000001e9df
- (id)init;	// IMP=0x000000000001e4b9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
