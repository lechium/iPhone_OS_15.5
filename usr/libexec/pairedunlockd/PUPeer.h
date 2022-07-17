//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSMutableDictionary, NSString, PUKeyStore;
@protocol OS_dispatch_queue, PUPeerDelegate;

@interface PUPeer : NSObject
{
    IDSService *_service;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_idsQueue;	// 16 = 0x10
    unsigned int _pairedDeviceVersion;	// 24 = 0x18
    _Bool _unlockEnabled;	// 28 = 0x1c
    id <PUPeerDelegate> _delegate;	// 32 = 0x20
    PUKeyStore *_keyStore;	// 40 = 0x28
    NSMutableDictionary *_responseHandlers;	// 48 = 0x30
    NSMutableDictionary *_errorHandlers;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_handlerManagementQueue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000000885d
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *handlerManagementQueue; // @synthesize handlerManagementQueue=_handlerManagementQueue;
- (void)setErrorHandlers:(id)arg1;	// IMP=0x0010000000008831
- (id)errorHandlers;	// IMP=0x0010000000008827
@property(retain, nonatomic) NSMutableDictionary *responseHandlers; // @synthesize responseHandlers=_responseHandlers;
@property(retain, nonatomic) PUKeyStore *keyStore; // @synthesize keyStore=_keyStore;
@property(nonatomic, getter=isUnlockEnabled) _Bool unlockEnabled; // @synthesize unlockEnabled=_unlockEnabled;
@property(nonatomic) id <PUPeerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_notifyPairResult:(_Bool)arg1 error:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000086c9
- (void)getPasscodeState:(id)arg1;	// IMP=0x00100000000085af
- (void)didGetPasscodeState:(id)arg1;	// IMP=0x0010000000008444
- (id)_convertRemotePasscodeStateToRemoteDeviceState:(id)arg1;	// IMP=0x001000000000820a
- (id)_convertToRemoteDeviceState:(id)arg1;	// IMP=0x001000000000815b
- (void)setShouldNotifyNextUnlock:(id)arg1;	// IMP=0x001000000000809d
- (void)didUnlock:(id)arg1;	// IMP=0x0010000000008056
- (void)removeLockout:(id)arg1;	// IMP=0x0010000000007f4a
- (void)disableOnlyRemoteUnlock:(id)arg1;	// IMP=0x0010000000007db3
- (void)startRemoteAction:(id)arg1;	// IMP=0x00100000000069be
- (void)_logResponse:(id)arg1;	// IMP=0x0010000000006917
- (void)_logProtobuf:(id)arg1;	// IMP=0x0010000000006813
- (void)notifyThisDeviceDidUnlock;	// IMP=0x0010000000006788
- (void)disableOnlyRemoteUnlockWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006433
- (void)_notifyCurrentStateReliably:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000632a
- (id)_retrieveUnlockOnlyPasscode;	// IMP=0x00100000000062c0
- (id)_passcodeStringFromPasscodeData:(id)arg1;	// IMP=0x001000000000624f
- (void)enableOnlyRemoteUnlockWithPasscode:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000060ab
- (void)enableWristDetectBeforeEnableOnlyRemoteUnlockWithPasscode:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005e8a
- (void)completeEnableOnlyRemoteUnlockWithPasscode:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005498
- (id)_createAndStoreNewPasscodeWithCurrentPasscode:(id)arg1;	// IMP=0x00100000000050da
- (void)notifyCurrentState;	// IMP=0x00100000000050c4
- (void)resetDeviceWristDetectionSetting:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004eb6
- (void)requestDeviceSetWristDetectionDisabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000004d1c
- (void)queryRemoteDeviceState:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004a62
- (void)unpairForUnlockWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000049d9
- (void)requestRemoteDeviceRemoveLockout:(CDUnknownBlockType)arg1;	// IMP=0x0010000000004934
- (void)requestRemoteDeviceDisableOnlyRemoteUnlock;	// IMP=0x0010000000004792
- (void)requestRemoteDeviceUnlockNotification;	// IMP=0x00100000000045de
- (void)requestRemoteDeviceRemoteAction:(long long)arg1 type:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000044a0
- (void)pairForUnlockWithPasscode:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000041fc
- (void)didCompleteRequest:(id)arg1;	// IMP=0x0010000000003de8
- (id)_sendProtobuf:(id)arg1 reliably:(_Bool)arg2 expectsResponse:(_Bool)arg3 responseIdentifier:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000003b6a
- (void)_sendResponse:(unsigned short)arg1 toRequestID:(id)arg2 data:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000003aae
- (id)_sendRequest:(unsigned short)arg1 data:(id)arg2 reliably:(_Bool)arg3 expectResponse:(_Bool)arg4 handler:(CDUnknownBlockType)arg5 error:(id *)arg6;	// IMP=0x0010000000003975
- (void)_sendResultOfMessage:(unsigned short)arg1 requestID:(id)arg2 success:(_Bool)arg3 error:(id)arg4;	// IMP=0x0010000000003699
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x0010000000003497
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x00100000000033bb
- (void)service:(id)arg1 account:(id)arg2 incomingUnhandledProtobuf:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0010000000003314
- (void)removeErrorHandlerForRequest:(id)arg1;	// IMP=0x0010000000003269
- (void)setErrorHandler:(CDUnknownBlockType)arg1 forRequest:(id)arg2;	// IMP=0x0010000000003126
- (CDUnknownBlockType)errorHandlerForRequest:(id)arg1;	// IMP=0x0010000000002fe3
- (void)removeResponseHandlerForRequestMessageID:(id)arg1;	// IMP=0x0010000000002eee
- (void)setResponseHandler:(id)arg1 forRequestMessageID:(id)arg2;	// IMP=0x0010000000002db4
- (id)responseHandlerForRequestMessageID:(id)arg1;	// IMP=0x0010000000002bce
- (void)setPairedDeviceVersion:(unsigned int)arg1;	// IMP=0x0010000000002bc5
- (unsigned int)pairedDeviceVersion;	// IMP=0x0010000000002bbc
- (id)init;	// IMP=0x00100000000028b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
