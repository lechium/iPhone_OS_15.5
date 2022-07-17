//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADMobileBluetoothWirelessSplitterSessionProxy, NSArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface ADMobileBluetoothDeviceDataSource : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    struct BTSessionImpl *_session;	// 16 = 0x10
    struct BTLocalDeviceImpl *_localDevice;	// 24 = 0x18
    struct BTAccessoryManagerImpl *_accessoryManager;	// 32 = 0x20
    _Bool _attachingToSession;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_sessionSetupGroup;	// 48 = 0x30
    struct os_unfair_lock_s _deviceProxiesLock;	// 56 = 0x38
    NSMutableDictionary *_deviceProxiesByAddress;	// 64 = 0x40
    NSMutableDictionary *_deviceProxiesByDeviceUID;	// 72 = 0x48
    struct os_unfair_lock_s _wirelessSplitterSessionProxyLock;	// 80 = 0x50
    ADMobileBluetoothWirelessSplitterSessionProxy *_wirelessSplitterSessionProxy;	// 88 = 0x58
    NSArray *_connectedDeviceAddresses;	// 96 = 0x60
    NSArray *_pairedDeviceAddresses;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00200000000d02a2
- (id)_pairedDeviceProxies;	// IMP=0x00100000000d0072
- (id)_fetchPairedDeviceAddresses;	// IMP=0x00100000000cfcda
- (void)_resetPairedDeviceAddresses;	// IMP=0x00100000000cfc2d
- (id)_connectedDeviceProxies;	// IMP=0x00100000000cf9fd
- (id)_fetchConnectedDeviceAddresses;	// IMP=0x00100000000cf665
- (void)_resetConnectedDeviceAddresses;	// IMP=0x00100000000cf5c7
- (id)_deviceProxyWithUID:(id)arg1 createsIfAbsent:(_Bool)arg2;	// IMP=0x00100000000cf527
- (id)_deviceProxyWithAddress:(id)arg1 createsIfAbsent:(_Bool)arg2;	// IMP=0x00100000000cf487
- (id)wirelessSplitterSession;	// IMP=0x00100000000cf3e4
- (void)getPairedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cf193
- (void)getConnectedDevicesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000cef42
- (id)deviceWithUID:(id)arg1;	// IMP=0x00100000000ceed7
- (id)deviceWithAddress:(id)arg1;	// IMP=0x00100000000cee6c
- (void)getBTLocalDeviceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000ced16
- (void)getBTDeviceWithDeviceUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ceab0
- (void)getBTDeviceWithAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000ce806
- (id)_deviceProxies;	// IMP=0x00100000000ce727
- (void)_handleListeningModeChangedForBTDevice:(struct BTDeviceImpl *)arg1 fromAccessoryManager:(struct BTAccessoryManagerImpl *)arg2;	// IMP=0x00100000000ce27c
- (void)_handleInEarStatusChangedForBTDevice:(struct BTDeviceImpl *)arg1 fromAccessoryManager:(struct BTAccessoryManagerImpl *)arg2;	// IMP=0x00100000000cddf9
- (void)_reloadForDevice:(struct BTDeviceImpl *)arg1;	// IMP=0x00100000000cda8f
- (void)accessoryManager:(struct BTAccessoryManagerImpl *)arg1 event:(int)arg2 device:(struct BTDeviceImpl *)arg3 state:(int)arg4;	// IMP=0x00100000000cd8d1
- (void)_tearDownAccessoryManager;	// IMP=0x00100000000cd8a4
- (void)_setUpAccessoryManager;	// IMP=0x00100000000cd74b
- (void)localDevice:(struct BTLocalDeviceImpl *)arg1 event:(int)arg2 result:(int)arg3;	// IMP=0x00100000000cd5d5
- (void)_tearDownLocalDevice;	// IMP=0x00100000000cd5a8
- (void)_setUpLocalDevice;	// IMP=0x00100000000cd44f
- (void)device:(struct BTDeviceImpl *)arg1 serviceMask:(unsigned int)arg2 serviceEventType:(int)arg3 serviceSpecificEvent:(unsigned int)arg4 result:(int)arg5;	// IMP=0x00100000000cd3e2
- (void)_sessionTerminated:(struct BTSessionImpl *)arg1;	// IMP=0x00100000000cd2f2
- (void)_sessionDetached:(struct BTSessionImpl *)arg1;	// IMP=0x00100000000cd1fa
- (void)_sessionAttached:(struct BTSessionImpl *)arg1 result:(int)arg2;	// IMP=0x00100000000ccfd2
- (void)_attachToSession;	// IMP=0x00100000000cceb9
- (void)_detachFromSession;	// IMP=0x00100000000ccda7
- (void)_cleanUpWirelessSplitterProxy;	// IMP=0x00100000000cccd1
- (void)_cleanUpDeviceProxies;	// IMP=0x00100000000cc9fa
- (void)invalidate;	// IMP=0x00100000000cc96e
- (id)init;	// IMP=0x00100000000cc6cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
