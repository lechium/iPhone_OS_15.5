//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDHomeManager, HMDMessageDispatcher, NSMutableDictionary, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDUserDeviceCapabilitiesRequestManager <HMFMessageReceiver>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMDHomeManager *_homeManager;	// 16 = 0x10
    HMDMessageDispatcher *_messageDispatcher;	// 24 = 0x18
    NSMutableDictionary *_requestContexts;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0000000000638d2a
- (void).cxx_destruct;	// IMP=0x0000000000638ae0
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)_handleRequestCapabilitiesXPCRequest:(id)arg1;	// IMP=0x0000000000638629
- (void)_completeWithResponse:(id)arg1 error:(id)arg2 context:(id)arg3;	// IMP=0x000000000063807e
- (id)_selectBestResponseForContext:(id)arg1;	// IMP=0x0000000000637f9e
- (void)_handleResponsePayload:(id)arg1 error:(id)arg2 transactionID:(id)arg3;	// IMP=0x00000000006377b8
- (CDUnknownBlockType)_responseHandlerForTransactionID:(id)arg1;	// IMP=0x00000000006376f5
- (id)_updateDeviceCapabilities:(id)arg1 withDestination:(id)arg2;	// IMP=0x00000000006375af
- (void)electDeviceForUserID:(id)arg1 destination:(id)arg2 deviceCapabilities:(id)arg3 responseTimeout:(double)arg4 responseQueue:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000636eb5
- (void)registerForMessages;	// IMP=0x0000000000636dad
- (id)initWithHomeManager:(id)arg1 accountRegistry:(id)arg2 messageDispatcher:(id)arg3;	// IMP=0x0000000000636ce2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly) Class superclass;

@end
