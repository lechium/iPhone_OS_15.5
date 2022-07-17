//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFSafetyBlock, CBCentralManager, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface ADCoreBluetoothManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_group> *_group;	// 16 = 0x10
    CBCentralManager *_cbManager;	// 24 = 0x18
    _Bool _invalidated;	// 32 = 0x20
    NSMutableDictionary *_peripheralsPendingRSSI;	// 40 = 0x28
    NSMutableArray *_peripheralsWithRSSIRead;	// 48 = 0x30
    NSArray *_servicesToScan;	// 56 = 0x38
    AFSafetyBlock *_completionWrapper;	// 64 = 0x40
    unsigned long long _counter;	// 72 = 0x48
}

+ (void)fetchCBUUIDForConnectedDeviceWithAddress:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0020000000206a71
+ (void)retrieveConnectedDevicesInfoOnDoAPServiceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000206973
+ (void)retrieveConnectedDevicesInfoWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000002068fb
- (void).cxx_destruct;	// IMP=0x0020000000208038
- (void)peripheral:(id)arg1 didReadRSSI:(id)arg2 error:(id)arg3;	// IMP=0x0010000000207dc5
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x0010000000207cbd
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;	// IMP=0x0010000000207b90
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x001000000020798f
- (void)_didReadRSSI:(id)arg1 forPeripheral:(id)arg2;	// IMP=0x00100000002078bf
- (void)_connectToPeripherals:(id)arg1;	// IMP=0x0010000000207563
- (id)_adCoreBluetoothDeviceForPeripheral:(id)arg1 RSSI:(id)arg2;	// IMP=0x0010000000207408
- (id)_getPeripheralStateDescriptionFromState:(long long)arg1;	// IMP=0x00100000002073b3
- (void)_retrieveConnectedDevicesInfoOnServices:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000206e04
- (id)_init;	// IMP=0x0010000000206c4d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
