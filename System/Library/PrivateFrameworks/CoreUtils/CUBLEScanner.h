//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUtils/CBCentralManagerDelegate-Protocol.h>

@class CBCentralManager, CUSystemMonitor, NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CUBLEScanner : NSObject <CBCentralManagerDelegate>
{
    _Bool _activateCalled;	// 8 = 0x8
    CBCentralManager *_centralManager;	// 16 = 0x10
    _Bool _changesPending;	// 24 = 0x18
    NSMutableDictionary *_devices;	// 32 = 0x20
    _Bool _invalidateCalled;	// 40 = 0x28
    _Bool _invalidateDone;	// 41 = 0x29
    int _rssiThreshold;	// 44 = 0x2c
    NSDictionary *_scanParametersCurrent;	// 48 = 0x30
    _Bool _scannerStartCalled;	// 56 = 0x38
    CUSystemMonitor *_systemMonitor;	// 64 = 0x40
    struct LogCategory *_ucat;	// 72 = 0x48
    int _bluetoothState;	// 80 = 0x50
    unsigned int _changeFlags;	// 84 = 0x54
    unsigned int _scanFlags;	// 88 = 0x58
    int _scanRate;	// 92 = 0x5c
    CDUnknownBlockType _bluetoothStateChangedHandler;	// 96 = 0x60
    CDUnknownBlockType _deviceFoundHandler;	// 104 = 0x68
    CDUnknownBlockType _deviceLostHandler;	// 112 = 0x70
    CDUnknownBlockType _deviceChangedHandler;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 128 = 0x80
    CDUnknownBlockType _invalidationHandler;	// 136 = 0x88
    NSString *_label;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0000000000033700
@property(nonatomic) int scanRate; // @synthesize scanRate=_scanRate;
@property(nonatomic) unsigned int scanFlags; // @synthesize scanFlags=_scanFlags;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType deviceChangedHandler; // @synthesize deviceChangedHandler=_deviceChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceLostHandler; // @synthesize deviceLostHandler=_deviceLostHandler;
@property(copy, nonatomic) CDUnknownBlockType deviceFoundHandler; // @synthesize deviceFoundHandler=_deviceFoundHandler;
@property(nonatomic) unsigned int changeFlags; // @synthesize changeFlags=_changeFlags;
@property(copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler; // @synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler;
@property(nonatomic) int bluetoothState; // @synthesize bluetoothState=_bluetoothState;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;	// IMP=0x0000000000033310
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x00000000000331d3
- (void)_updateScanRules:(id *)arg1 payloadType:(unsigned char)arg2 rssiThreshold:(int)arg3;	// IMP=0x0000000000032f55
- (void)_stopScanIfNeededWithReason:(const char *)arg1;	// IMP=0x0000000000032e64
- (_Bool)_shouldScan;	// IMP=0x0000000000032e3d
- (id)_scanParametersSummary:(id)arg1;	// IMP=0x0000000000032a3b
- (id)_scanParameters;	// IMP=0x0000000000032735
- (void)_update;	// IMP=0x0000000000032149
- (void)_updateIfNeededWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000032088
- (void)_invalidated;	// IMP=0x0000000000031fba
- (void)_invalidate;	// IMP=0x0000000000031ee6
- (void)invalidate;	// IMP=0x0000000000031e98
- (void)activate;	// IMP=0x0000000000031e25
@property int rssiThreshold;
- (void)dealloc;	// IMP=0x0000000000031be3
- (id)init;	// IMP=0x0000000000031b61

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

