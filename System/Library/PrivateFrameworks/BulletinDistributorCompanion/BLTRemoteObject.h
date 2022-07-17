//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BulletinDistributorCompanion/IDSServiceDelegate-Protocol.h>

@class BLTPBProtobufSequenceNumberManager, BLTSimpleCache, NSLock, NSMutableDictionary, NSString;
@protocol BLTAbstractIDSDevice, BLTAbstractIDSService, OS_dispatch_queue;

@interface BLTRemoteObject : NSObject <IDSServiceDelegate>
{
    NSMutableDictionary *_idsSendIDToCompletionHandler;	// 8 = 0x8
    NSMutableDictionary *_idsSendIDToResponseHandler;	// 16 = 0x10
    NSMutableDictionary *_idsFileIDToResponseHandler;	// 24 = 0x18
    NSString *_serviceName;	// 32 = 0x20
    _Bool _full;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_idsQueue;	// 48 = 0x30
    id <BLTAbstractIDSDevice> _defaultPairedDevice;	// 56 = 0x38
    NSMutableDictionary *_idsRequestMessageTypeToSelector;	// 64 = 0x40
    NSLock *_sequenceNumberSendLock;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_connectionStatusQueue;	// 80 = 0x50
    unsigned long long _stateHandler;	// 88 = 0x58
    unsigned long long _simConnectionState;	// 96 = 0x60
    id _simConnectionStateHandlerToken;	// 104 = 0x68
    _Bool _pairedDeviceReady;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_clientQueue;	// 120 = 0x78
    unsigned long long _lastKnownConnectionStatus;	// 128 = 0x80
    id <BLTAbstractIDSService> _service;	// 136 = 0x88
    BLTPBProtobufSequenceNumberManager *_sequenceNumberManager;	// 144 = 0x90
    BLTSimpleCache *_mruCacheOfSends;	// 152 = 0x98
    BLTSimpleCache *_mruCacheOfReceives;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000000866e
@property(retain, nonatomic) BLTSimpleCache *mruCacheOfReceives; // @synthesize mruCacheOfReceives=_mruCacheOfReceives;
@property(retain, nonatomic) BLTSimpleCache *mruCacheOfSends; // @synthesize mruCacheOfSends=_mruCacheOfSends;
@property(readonly, nonatomic) BLTPBProtobufSequenceNumberManager *sequenceNumberManager; // @synthesize sequenceNumberManager=_sequenceNumberManager;
@property(readonly, nonatomic) id <BLTAbstractIDSService> service; // @synthesize service=_service;
@property(getter=isPairedDeviceReady) _Bool pairedDeviceReady; // @synthesize pairedDeviceReady=_pairedDeviceReady;
@property(nonatomic) unsigned long long lastKnownConnectionStatus; // @synthesize lastKnownConnectionStatus=_lastKnownConnectionStatus;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
- (void)handleFileURL:(id)arg1 extraMetadata:(id)arg2;	// IMP=0x00000000000085c3
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x0000000000007dca
- (_Bool)_callSendCompletionHandlerWithSuccess:(_Bool)arg1 identifier:(id)arg2 error:(id)arg3;	// IMP=0x0000000000007c04
- (_Bool)_idsQueueCallSendCompletionHandlerWithSuccess:(_Bool)arg1 identifier:(id)arg2 error:(id)arg3;	// IMP=0x0000000000007a3c
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x00000000000077af
- (void)_removeAndHandleResponseHandler:(id)arg1;	// IMP=0x00000000000076d7
- (void)_deviceConnectionStatusChanged:(id)arg1;	// IMP=0x0000000000007661
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x00000000000075e6
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x000000000000756b
- (void)sendFileURL:(id)arg1 withTimeout:(id)arg2 extraMetadata:(id)arg3 responseHandlers:(id)arg4 didSend:(CDUnknownBlockType)arg5 didQueue:(CDUnknownBlockType)arg6;	// IMP=0x0000000000006ee3
- (void)_queueSendRequest:(id)arg1;	// IMP=0x0000000000006907
- (id)_wrapError:(id)arg1 identifier:(id)arg2;	// IMP=0x00000000000067eb
- (void)_queuePerformSend:(CDUnknownBlockType)arg1 responseToRequest:(id)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 shortDescription:(id)arg5 onlyOneFor:(id)arg6 allowCloudDelivery:(_Bool)arg7 nonWaking:(_Bool)arg8 didSend:(CDUnknownBlockType)arg9 andResponse:(CDUnknownBlockType)arg10;	// IMP=0x0000000000005b52
- (void)sendRequest:(id)arg1;	// IMP=0x0000000000005a96
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 didSend:(CDUnknownBlockType)arg4 didQueue:(CDUnknownBlockType)arg5;	// IMP=0x00000000000059b2
- (void)sendResponse:(id)arg1 type:(unsigned short)arg2 withRequest:(id)arg3 withTimeout:(id)arg4 withDescription:(id)arg5 onlyOneFor:(id)arg6 didSend:(CDUnknownBlockType)arg7;	// IMP=0x000000000000587c
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 onlyOneFor:(id)arg5 didSend:(CDUnknownBlockType)arg6 andResponse:(CDUnknownBlockType)arg7;	// IMP=0x0000000000005746
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 didSend:(CDUnknownBlockType)arg5;	// IMP=0x0000000000005724
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 didSend:(CDUnknownBlockType)arg4;	// IMP=0x0000000000005702
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2 didSend:(CDUnknownBlockType)arg3;	// IMP=0x00000000000056ea
- (void)sendRequest:(id)arg1 type:(unsigned short)arg2;	// IMP=0x00000000000056d5
- (void)_setStandaloneTestModeEnabled:(_Bool)arg1;	// IMP=0x0000000000005521
- (void)disableStandaloneTestMode;	// IMP=0x000000000000550d
- (void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4;	// IMP=0x0000000000005469
- (void)registerProtobufHandlers;	// IMP=0x0000000000005463
- (void)_queueUpdateConnectionStatusWithResetDefaulteDevice:(_Bool)arg1;	// IMP=0x0000000000005341
- (void)_updateConnectionStatusWithResetDefaulteDevice:(_Bool)arg1;	// IMP=0x00000000000052d6
- (void)_updateConnectionStatus;	// IMP=0x00000000000052c2
- (unsigned long long)connectionStatus;	// IMP=0x000000000000524d
- (void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;	// IMP=0x00000000000051c5
- (void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;	// IMP=0x000000000000515f
- (void)_storeProtobufAction:(SEL)arg1 messageType:(unsigned short)arg2 messageSendType:(long long)arg3;	// IMP=0x00000000000050a2
- (void)handleAckInitialSequenceNumberRequest:(id)arg1;	// IMP=0x0000000000004e26
- (void)_sendAckInitialSequenceNumberForSession:(id)arg1 withAssert:(_Bool)arg2 sessionState:(unsigned long long *)arg3;	// IMP=0x0000000000004cca
- (void)_sendAckInitialSequenceNumberForSession:(id)arg1 sessionState:(unsigned long long)arg2;	// IMP=0x0000000000004ca6
- (void)_sendAssertForSession;	// IMP=0x0000000000004c8a
- (void)handleIncomingMessage:(id)arg1;	// IMP=0x00000000000048c4
- (void)_queueHandleIDSProtobuf:(id)arg1;	// IMP=0x0000000000004285
- (void)handleIDSProtobuf:(id)arg1;	// IMP=0x000000000000411a
- (_Bool)_sequenceErrorDidHappenAndHandled:(long long)arg1 service:(id)arg2 incomingIdentifier:(id)arg3;	// IMP=0x0000000000004016
- (void)_handleNewSessionState:(unsigned long long)arg1;	// IMP=0x0000000000003f92
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0000000000003deb
- (id)initWithServiceName:(id)arg1 idsQueueName:(char *)arg2 andClientQueue:(id)arg3;	// IMP=0x0000000000003798
- (id)initWithServiceName:(id)arg1 idsQueueName:(char *)arg2;	// IMP=0x0000000000003783

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
