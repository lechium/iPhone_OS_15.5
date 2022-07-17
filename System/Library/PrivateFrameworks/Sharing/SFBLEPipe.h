//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/CBCentralManagerDelegate-Protocol.h>
#import <Sharing/CBScalablePipeManagerDelegate-Protocol.h>

@class CBCentralManager, CBScalablePipe, CBScalablePipeManager, NSData, NSDate, NSMutableArray, NSMutableData, NSMutableDictionary, NSString, SFBLEData;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SFBLEPipe : NSObject <CBCentralManagerDelegate, CBScalablePipeManagerDelegate>
{
    _Bool _activateCalled;	// 8 = 0x8
    CBCentralManager *_btCentral;	// 16 = 0x10
    struct channel *_btChannel;	// 24 = 0x18
    _Bool _btConnected;	// 32 = 0x20
    _Bool _btConnecting;	// 33 = 0x21
    _Bool _btEndpointRegistering;	// 34 = 0x22
    _Bool _btEndpointRegistered;	// 35 = 0x23
    int _btFD;	// 36 = 0x24
    unsigned char _btReadHeader[4];	// 40 = 0x28
    NSMutableData *_btReadPayload;	// 48 = 0x30
    unsigned long long _btReadLen;	// 56 = 0x38
    unsigned long long _btReadOffset;	// 64 = 0x40
    struct channel_ring_desc *_btReadRing;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_btReadSource;	// 80 = 0x50
    NSData *_btWriteData;	// 88 = 0x58
    SFBLEData *_btWriteItem;	// 96 = 0x60
    unsigned long long _btWriteLen;	// 104 = 0x68
    unsigned long long _btWriteOffset;	// 112 = 0x70
    const char *_btWritePtr;	// 120 = 0x78
    NSMutableArray *_btWriteQueue;	// 128 = 0x80
    struct channel_ring_desc *_btWriteRing;	// 136 = 0x88
    NSObject<OS_dispatch_source> *_btWriteSource;	// 144 = 0x90
    _Bool _btWriteSuspended;	// 152 = 0x98
    CBScalablePipe *_btPipe;	// 160 = 0xa0
    long long _btPipePriority;	// 168 = 0xa8
    CBScalablePipeManager *_btPipeManager;	// 176 = 0xb0
    NSMutableDictionary *_frameHandlers;	// 184 = 0xb8
    _Bool _invalidateCalled;	// 192 = 0xc0
    NSDate *_lastDisconnectDate;	// 200 = 0xc8
    struct LogCategory *_ucat;	// 208 = 0xd0
    _Bool _manualConnect;	// 216 = 0xd8
    CDUnknownBlockType _bluetoothStateChangedHandler;	// 224 = 0xe0
    CDUnknownBlockType _connectionStateChangedHandler;	// 232 = 0xe8
    CDUnknownBlockType _frameHandler;	// 240 = 0xf0
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 248 = 0xf8
    NSString *_identifier;	// 256 = 0x100
    CDUnknownBlockType _invalidationHandler;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x000000000008262a
@property(nonatomic) _Bool manualConnect; // @synthesize manualConnect=_manualConnect;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType frameHandler; // @synthesize frameHandler=_frameHandler;
@property(copy, nonatomic) CDUnknownBlockType connectionStateChangedHandler; // @synthesize connectionStateChangedHandler=_connectionStateChangedHandler;
@property(copy, nonatomic) CDUnknownBlockType bluetoothStateChangedHandler; // @synthesize bluetoothStateChangedHandler=_bluetoothStateChangedHandler;
- (void)scalablePipeManager:(id)arg1 pipeDidDisconnect:(id)arg2 error:(id)arg3;	// IMP=0x000000000008235b
- (void)scalablePipeManager:(id)arg1 pipeDidConnect:(id)arg2;	// IMP=0x000000000008218e
- (void)scalablePipeManager:(id)arg1 didUnregisterEndpoint:(id)arg2;	// IMP=0x00000000000820c7
- (void)scalablePipeManager:(id)arg1 didRegisterEndpoint:(id)arg2 error:(id)arg3;	// IMP=0x0000000000081f78
- (void)scalablePipeManagerDidUpdateState:(id)arg1;	// IMP=0x00000000000819e8
- (void)centralManager:(id)arg1 didDisconnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x00000000000818ec
- (void)centralManager:(id)arg1 didFailToConnectPeripheral:(id)arg2 error:(id)arg3;	// IMP=0x00000000000817fb
- (void)centralManager:(id)arg1 didConnectPeripheral:(id)arg2;	// IMP=0x0000000000081748
- (void)centralManagerDidUpdateState:(id)arg1;	// IMP=0x0000000000081624
- (id)_defaultPairedDeviceBluetoothIdentifier;	// IMP=0x000000000008145a
- (void)_frameHandler:(unsigned char)arg1 data:(id)arg2;	// IMP=0x0000000000081367
- (void)_writeHandler;	// IMP=0x0000000000080f88
- (void)_readHandler;	// IMP=0x0000000000080cbc
- (void)_tearDownPipe;	// IMP=0x0000000000080a0b
- (void)_setupPipe:(id)arg1;	// IMP=0x000000000008055e
- (void)_setupIfNeeded;	// IMP=0x000000000008013f
- (void)_sendFrameType:(unsigned char)arg1 payload:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000007fd74
- (void)sendFrameTypeDirect:(unsigned char)arg1 payload:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000007fd62
- (void)sendFrameType:(unsigned char)arg1 payload:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000007fc7a
- (void)removeFrameHandlerForType:(unsigned char)arg1;	// IMP=0x000000000007fbe6
- (void)addFrameHandlerForType:(unsigned char)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007faed
- (void)_invalidate;	// IMP=0x000000000007f600
- (void)invalidate;	// IMP=0x000000000007f59c
- (void)_activate;	// IMP=0x000000000007f46f
- (void)activate;	// IMP=0x000000000007f3e4
- (id)getPeerUUID;	// IMP=0x000000000007f215
@property(readonly, nonatomic) long long connectionState;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000007f160
- (id)initWithPriority:(long long)arg1;	// IMP=0x000000000007f0e7
- (id)init;	// IMP=0x000000000007f0d0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
