//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CBCentralManager, CBPeripheral, CBPeripheralManager, CBScalablePipeManager, IDSNanoRegistryPluginManager, NSMutableArray, NSMutableDictionary, NSString;
@protocol IDSBTLinkManagerDelegate, OS_dispatch_queue;

@interface IDSBTLinkManager : NSObject
{
    CBCentralManager *_centralManager;	// 8 = 0x8
    CBPeripheralManager *_peripheralManager;	// 16 = 0x10
    CBScalablePipeManager *_pipeManager;	// 24 = 0x18
    CBPeripheral *_pipePeripheral;	// 32 = 0x20
    NSMutableArray *_pendingPipes;	// 40 = 0x28
    NSString *_pipePeripheralUUIDString;	// 48 = 0x30
    _Bool _pipeRegistered;	// 56 = 0x38
    _Bool _isCentral;	// 57 = 0x39
    _Bool _useSkywalkChannel;	// 58 = 0x3a
    NSMutableDictionary *_linkIDToLink;	// 64 = 0x40
    NSMutableDictionary *_linkIDToDatagramLink;	// 72 = 0x48
    _Bool _isPipeConnectingOrConnected;	// 80 = 0x50
    _Bool _isAdvertising;	// 81 = 0x51
    NSObject<OS_dispatch_queue> *_managerQueue;	// 88 = 0x58
    id <IDSBTLinkManagerDelegate> _delegate;	// 96 = 0x60
    _Bool _isPoweredOn;	// 104 = 0x68
    NSMutableDictionary *_datagramPipeRegistration;	// 112 = 0x70
    IDSNanoRegistryPluginManager *_idsNRPluginManager;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x002000000046e9a0
@property(retain, nonatomic) IDSNanoRegistryPluginManager *idsNRPluginManager; // @synthesize idsNRPluginManager=_idsNRPluginManager;
@property(readonly, nonatomic) _Bool isPoweredOn; // @synthesize isPoweredOn=_isPoweredOn;
@property(readonly) NSString *pairedDevice; // @synthesize pairedDevice=_pipePeripheralUUIDString;
- (id)nanoRegistryPluginManager;	// IMP=0x001000000046e890
- (void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;	// IMP=0x001000000046d5d0
- (void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;	// IMP=0x001000000046b550
- (void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;	// IMP=0x001000000046ac00
- (void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;	// IMP=0x001000000046a790
- (void)scalablePipeManagerDidUpdateState:(id)arg1;	// IMP=0x0010000000469480
- (void)peripheralManagerDidStartAdvertising:(id)arg1 error:(id)arg2;	// IMP=0x0010000000469210
- (void)peripheralManagerDidUpdateState:(id)arg1;	// IMP=0x0010000000468da0
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x0010000000468920
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x00100000004684a0
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;	// IMP=0x0010000000468240
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x0010000000467dc0
- (void)stopDatagramLinkWithEndpointIdentifier:(id)arg1;	// IMP=0x0010000000467620
- (void)startDatagramLinkWithEndpointIdentifier:(id)arg1;	// IMP=0x0010000000466df0
- (void)stopDatagramLinkWithName:(id)arg1;	// IMP=0x0010000000466ca0
- (void)startDatagramLinkWithName:(id)arg1;	// IMP=0x0010000000466b50
- (void)stopDatagramLink;	// IMP=0x0010000000466a50
- (void)startDatagramLink;	// IMP=0x0010000000466950
- (void)setLinkPreferences:(id)arg1;	// IMP=0x0010000000466910
- (void)obliterateConnectionInfo;	// IMP=0x00100000004665c0
- (void)updatePairedDevice:(id)arg1;	// IMP=0x0010000000464be0
- (void)removeLink:(id)arg1;	// IMP=0x0010000000464860
- (void)connect;	// IMP=0x00100000004647a0
- (void)stop;	// IMP=0x0010000000464380
- (void)start;	// IMP=0x00100000004641f0
- (void)_connectNow;	// IMP=0x0010000000463840
- (void)_stopAdvertising;	// IMP=0x0010000000463600
- (void)_advertiseNow;	// IMP=0x0010000000463370
- (void)dealloc;	// IMP=0x0010000000463160
- (id)initWithDelegate:(id)arg1 pairedDevice:(id)arg2;	// IMP=0x0010000000462590

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

