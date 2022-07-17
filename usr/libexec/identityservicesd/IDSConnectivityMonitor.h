//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSNRDeviceMonitor, NSDate, NSString, NSTimer;

@interface IDSConnectivityMonitor : NSObject
{
    _Bool _isNearby;	// 8 = 0x8
    _Bool _isConnected;	// 9 = 0x9
    NSTimer *_monitorTimer;	// 16 = 0x10
    IDSNRDeviceMonitor *_deviceMonitor;	// 24 = 0x18
    NSString *_cbuuidString;	// 32 = 0x20
    NSString *_pairedDeviceCBUUIDString;	// 40 = 0x28
    double _timeConnected;	// 48 = 0x30
    double _timeDisconnected;	// 56 = 0x38
    NSDate *_lastConnection;	// 64 = 0x40
    NSDate *_lastDisconnection;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000001c9830
@property(retain, nonatomic) NSDate *lastDisconnection; // @synthesize lastDisconnection=_lastDisconnection;
@property(retain, nonatomic) NSDate *lastConnection; // @synthesize lastConnection=_lastConnection;
@property(nonatomic) double timeDisconnected; // @synthesize timeDisconnected=_timeDisconnected;
@property(nonatomic) double timeConnected; // @synthesize timeConnected=_timeConnected;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(nonatomic) _Bool isNearby; // @synthesize isNearby=_isNearby;
@property(retain, nonatomic) NSString *pairedDeviceCBUUIDString; // @synthesize pairedDeviceCBUUIDString=_pairedDeviceCBUUIDString;
@property(retain, nonatomic) NSString *cbuuidString; // @synthesize cbuuidString=_cbuuidString;
@property(retain, nonatomic) IDSNRDeviceMonitor *deviceMonitor; // @synthesize deviceMonitor=_deviceMonitor;
@property(retain, nonatomic) NSTimer *monitorTimer; // @synthesize monitorTimer=_monitorTimer;
- (void)deliveryController:(id)arg1 uniqueID:(id)arg2 isConnected:(_Bool)arg3;	// IMP=0x00100000001c9420
- (void)sendMonitorMessage;	// IMP=0x00100000001c8ad0
- (void)checkConnectivityState:(id)arg1;	// IMP=0x00100000001c86d0
- (id)init;	// IMP=0x00100000001c8640

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
