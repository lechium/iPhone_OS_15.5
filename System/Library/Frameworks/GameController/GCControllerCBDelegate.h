//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/CBCentralManagerDelegate-Protocol.h>
#import <GameController/CBPeripheralDelegate-Protocol.h>

@class CBCentralManager, NSMutableArray, NSString;

@interface GCControllerCBDelegate : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>
{
    NSMutableArray *_foundPeripherals;	// 8 = 0x8
    NSMutableArray *_connectedPeripherals;	// 16 = 0x10
    CBCentralManager *_centralManager;	// 24 = 0x18
    CDUnknownBlockType _completionHandler;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000ab8b7
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) CBCentralManager *centralManager; // @synthesize centralManager=_centralManager;
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x00000000000ab78f
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x00000000000ab69b
- (void)peripheral:(id)arg1 didUpdateValueForDescriptor:(id)arg2 error:(id)arg3;	// IMP=0x00000000000ab2bd
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x00000000000aaf00
- (void)peripheral:(id)arg1 didDiscoverDescriptorsForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x00000000000aacfa
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;	// IMP=0x00000000000aa314
- (void)peripheral:(id)arg1 didDiscoverIncludedServicesForService:(id)arg2 error:(id)arg3;	// IMP=0x00000000000aa108
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;	// IMP=0x00000000000a9ed3
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;	// IMP=0x00000000000a9cf3
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;	// IMP=0x00000000000a9b3e
- (void)centralManager:(id)arg1 didRetrieveConnectedPeripherals:(id)arg2;	// IMP=0x00000000000a9a93
- (void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2;	// IMP=0x00000000000a99e8
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x00000000000a97be
- (void)startScanWithTimeout:(double)arg1;	// IMP=0x00000000000a940a
- (void)startScan;	// IMP=0x00000000000a93f0
- (void)stopScan;	// IMP=0x00000000000a936b
- (void)fireCompletionHandler;	// IMP=0x00000000000a92ba
- (id)init;	// IMP=0x00000000000a9245

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

