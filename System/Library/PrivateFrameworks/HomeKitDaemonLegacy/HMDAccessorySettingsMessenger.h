//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFMessageReceiver-Protocol.h>

@class HMDAccessorySettingsLegacyMessageReceiver, HMDAccessorySettingsLocalMessageHandler, HMFMessageDispatcher, NSObject, NSString, NSUUID;
@protocol HMDMessageRouter, OS_dispatch_queue;

@interface HMDAccessorySettingsMessenger : HMFObject <HMFLogging, HMFMessageReceiver>
{
    NSUUID *_messageTargetUUID;	// 8 = 0x8
    HMFMessageDispatcher *_messageDispatcher;	// 16 = 0x10
    id <HMDMessageRouter> _messageRouter;	// 24 = 0x18
    HMDAccessorySettingsLocalMessageHandler *_messageHandler;	// 32 = 0x20
    HMDAccessorySettingsLegacyMessageReceiver *_legacyMessageReceiver;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00000000009550c4
- (void).cxx_destruct;	// IMP=0x0000000000954b46
@property(readonly) HMDAccessorySettingsLegacyMessageReceiver *legacyMessageReceiver; // @synthesize legacyMessageReceiver=_legacyMessageReceiver;
@property(readonly) HMDAccessorySettingsLocalMessageHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property(readonly) id <HMDMessageRouter> messageRouter; // @synthesize messageRouter=_messageRouter;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, nonatomic) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
- (id)legacyMessageForMessage:(id)arg1;	// IMP=0x0000000000954a09
- (void)routeAccessorySettingsUpdateRequestMessage:(id)arg1;	// IMP=0x000000000095486c
- (void)routeAccessorySettingsFetchRequestMessage:(id)arg1;	// IMP=0x00000000009546cf
- (id)logIdentifier;	// IMP=0x000000000095467f
- (void)sendUpdateAccessorySettingRequestWithAccessoryUUID:(id)arg1 keyPath:(id)arg2 settingValue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000009543b4
- (void)sendFetchAccessorySettingsRequestWithAccessoryUUID:(id)arg1 keyPaths:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000954106
- (void)registerForMessagesWithHome:(id)arg1;	// IMP=0x0000000000953e91
- (id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2 messageRouter:(id)arg3 messageHandler:(id)arg4 legacyMessageReceiver:(id)arg5;	// IMP=0x0000000000953d14

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly) Class superclass;

@end
