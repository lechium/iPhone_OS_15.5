//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreAudioKit/CBCentralManagerDelegate-Protocol.h>
#import <CoreAudioKit/CBPeripheralDelegate-Protocol.h>

@class CBCentralManager, NSMutableArray, NSString, NSTimer;
@protocol BTLEConnectionTable;

__attribute__((visibility("hidden")))
@interface AMSBTLEConnectionManager : NSObject <CBCentralManagerDelegate, CBPeripheralDelegate>
{
    CBCentralManager *centralManager;	// 8 = 0x8
    NSMutableArray *peripheralList;	// 16 = 0x10
    NSMutableArray *connectedBTPeripherals;	// 24 = 0x18
    NSMutableArray *connectedAMSPeripherals;	// 32 = 0x20
    NSTimer *refreshTimer;	// 40 = 0x28
    NSTimer *connectionTimer;	// 48 = 0x30
    id <BTLEConnectionTable> controller;	// 56 = 0x38
    long long centralState;	// 64 = 0x40
    _Bool isAdvertising;	// 72 = 0x48
}

@property(readonly) NSMutableArray *peripheralList; // @synthesize peripheralList;
- (_Bool)peripheralIsConnectedCentral:(id)arg1;	// IMP=0x000000000000b469
- (unsigned int)midiDeviceForUUID:(id)arg1;	// IMP=0x000000000000b320
- (void)removeAMSPeripheralForCBPeripheral:(id)arg1;	// IMP=0x000000000000b283
- (id)amsPeripheralForCBPeripheral:(id)arg1;	// IMP=0x000000000000b0f9
- (void)peripheral:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 error:(id)arg3;	// IMP=0x000000000000accb
- (void)peripheral:(id)arg1 didDiscoverCharacteristicsForService:(id)arg2 error:(id)arg3;	// IMP=0x000000000000aa5d
- (void)peripheral:(id)arg1 didDiscoverServices:(id)arg2;	// IMP=0x000000000000a7cd
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x000000000000a77c
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x000000000000a57a
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;	// IMP=0x000000000000a302
- (void)centralManager:(id)arg1 didRetrievePeripherals:(id)arg2;	// IMP=0x000000000000a2fc
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;	// IMP=0x000000000000a04f
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x0000000000009fbf
- (void)startTimer;	// IMP=0x0000000000009e47
- (void)killTimer;	// IMP=0x0000000000009de7
- (void)stopScan;	// IMP=0x0000000000009dc2
- (void)startScan;	// IMP=0x0000000000009cea
- (long long)bluetoothState;	// IMP=0x0000000000009cd4
- (_Bool)isLECapableHardware;	// IMP=0x0000000000009c43
- (void)connectionTimerFired:(id)arg1;	// IMP=0x0000000000009c31
- (void)timerFired:(id)arg1;	// IMP=0x000000000000999e
- (void)checkAlreadyConnectedPeripherals;	// IMP=0x0000000000009374
- (void)createPeripheralList;	// IMP=0x0000000000009070
- (void)setUIController:(id)arg1;	// IMP=0x0000000000009066
- (void)updateAdvertisingState:(id)arg1;	// IMP=0x0000000000009021
- (void)dealloc;	// IMP=0x0000000000008f69
- (id)initWithUIController:(id)arg1;	// IMP=0x0000000000008ad8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
