//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADMobileBluetoothDeviceDataSource, AFBluetoothWirelessSplitterSessionInfo, AFBluetoothWirelessSplitterSessionStateObserver, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface ADMobileBluetoothWirelessSplitterSessionProxy : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ADMobileBluetoothDeviceDataSource *_dataSource;	// 16 = 0x10
    NSHashTable *_observers;	// 24 = 0x18
    AFBluetoothWirelessSplitterSessionInfo *_wirelessSplitterSessionInfo;	// 32 = 0x20
    AFBluetoothWirelessSplitterSessionStateObserver *_observer;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000d5d3f
- (void)_enumerateObserversUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d5c71
- (void)_invalidate;	// IMP=0x00100000000d5b0a
- (void)_accessBTLocalDeviceUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d5860
- (void)_fetchWirelessSplitterSessionInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d534c
- (void)_updateWirelessSplitterSessionInfo:(id)arg1;	// IMP=0x00100000000d50e7
- (void)_getWirelessSplitterSessionInfo:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d4ff6
- (void)_reload:(_Bool)arg1;	// IMP=0x00100000000d4e3c
- (void)invalidate;	// IMP=0x00100000000d4ddb
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000d4d2d
- (void)addObserver:(id)arg1;	// IMP=0x00100000000d4c3c
- (void)getSessionInfo:(CDUnknownBlockType)arg1;	// IMP=0x00100000000d4b8f
- (void)bluetoothWirelessSplitterSessionStateObserver:(id)arg1 didChangeStateFrom:(long long)arg2 to:(long long)arg3;	// IMP=0x00100000000d49de
- (void)reload;	// IMP=0x00100000000d4978
- (void)updateWirelessSplitterSessionInfo:(id)arg1;	// IMP=0x00100000000d48d0
- (id)initWithDataSource:(id)arg1 queue:(id)arg2;	// IMP=0x00100000000d455b
- (void)dealloc;	// IMP=0x00100000000d44a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
