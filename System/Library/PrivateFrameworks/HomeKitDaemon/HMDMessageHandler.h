//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDMessageHandlerQueuedMessageDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDAppleAccountManager, HMDMessageHandlerMetricsDispatcher, HMFMessageDispatcher, HMFUnfairLock, NSArray, NSDictionary, NSMutableDictionary, NSNotificationCenter, NSObject, NSString, NSUUID;
@protocol HMDMessageHandlerDataSource, OS_dispatch_queue;

@interface HMDMessageHandler : HMFObject <HMDMessageHandlerQueuedMessageDelegate, HMFLogging, HMFMessageReceiver>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    NSMutableDictionary *_messageNameToQueuedIncomingMessages;	// 16 = 0x10
    NSMutableDictionary *_messageNameToQueuedOutgoingMessage;	// 24 = 0x18
    NSMutableDictionary *_deviceIdentifierToQueuedOutgoingMessageNames;	// 32 = 0x20
    NSUUID *_messageTargetUUID;	// 40 = 0x28
    NSArray *_ownerPrivateRemoteMessages;	// 48 = 0x30
    NSArray *_adminPrivateRemoteMessages;	// 56 = 0x38
    NSArray *_internalMessages;	// 64 = 0x40
    NSArray *_notifications;	// 72 = 0x48
    NSDictionary *_notificationsToObject;	// 80 = 0x50
    HMFMessageDispatcher *_messageDispatcher;	// 88 = 0x58
    NSNotificationCenter *_notificationCenter;	// 96 = 0x60
    HMDMessageHandlerMetricsDispatcher *_metricsDispatcher;	// 104 = 0x68
    HMDAppleAccountManager *_appleAccountManager;	// 112 = 0x70
    id <HMDMessageHandlerDataSource> _dataSource;	// 120 = 0x78
}

+ (id)logCategory;	// IMP=0x0000000000abbd31
- (void).cxx_destruct;	// IMP=0x0000000000abb92a
@property __weak id <HMDMessageHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) HMDAppleAccountManager *appleAccountManager; // @synthesize appleAccountManager=_appleAccountManager;
@property(readonly) HMDMessageHandlerMetricsDispatcher *metricsDispatcher; // @synthesize metricsDispatcher=_metricsDispatcher;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(readonly, copy) NSDictionary *notificationsToObject; // @synthesize notificationsToObject=_notificationsToObject;
@property(readonly, copy) NSArray *notifications; // @synthesize notifications=_notifications;
@property(readonly, copy) NSArray *internalMessages; // @synthesize internalMessages=_internalMessages;
@property(readonly, copy) NSArray *adminPrivateRemoteMessages; // @synthesize adminPrivateRemoteMessages=_adminPrivateRemoteMessages;
@property(readonly, copy) NSArray *ownerPrivateRemoteMessages; // @synthesize ownerPrivateRemoteMessages=_ownerPrivateRemoteMessages;
@property(readonly, nonatomic) NSUUID *messageTargetUUID; // @synthesize messageTargetUUID=_messageTargetUUID;
- (id)logIdentifier;	// IMP=0x0000000000abb7d6
- (id)attributeDescriptions;	// IMP=0x0000000000abb70a
- (id)privateDescription;	// IMP=0x0000000000abb6f8
- (void)didTriggerQueuedOutgoingMessage:(id)arg1;	// IMP=0x0000000000abb514
- (void)didTriggerQueuedIncomingMessage:(id)arg1;	// IMP=0x0000000000abb330
- (void)didTriggerMessageHandlerQueuedMessage:(id)arg1;	// IMP=0x0000000000abb1a1
- (void)triggerQueuedIncomingMessagesTimeouts;	// IMP=0x0000000000abafa7
- (void)triggerQueuedOutgoingMessagesTimeouts;	// IMP=0x0000000000abadad
- (void)handleAccountAddedDeviceNotification:(id)arg1;	// IMP=0x0000000000abaaa7
- (_Bool)isReadyForOutgoingMessaging;	// IMP=0x0000000000aba972
- (id)currentAccountDevice;	// IMP=0x0000000000aba922
- (_Bool)reachableForMessage:(id)arg1;	// IMP=0x0000000000aba7ee
- (id)deviceForMessage:(id)arg1;	// IMP=0x0000000000aba6ae
- (SEL)selectorForName:(id)arg1;	// IMP=0x0000000000aba06a
- (void)routeQueuedIncomingMessages;	// IMP=0x0000000000ab9e7d
- (void)sendQueuedOutgoingMessages:(id)arg1;	// IMP=0x0000000000ab9c99
- (void)sendQueuedOutgoingMessagesForDevice:(id)arg1;	// IMP=0x0000000000ab9c4d
- (void)sendQueuedOutgoingMessages;	// IMP=0x0000000000ab9c01
- (_Bool)hasQueuedOutgoingMessagesForDevice:(id)arg1;	// IMP=0x0000000000ab9b06
@property(readonly) _Bool hasQueuedOutgoingMessages;
- (_Bool)shouldRelayIncomingMessage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000ab98e1
- (_Bool)isReadyForIncomingMessage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000ab9758
- (void)relayMessage:(id)arg1 shouldQueue:(_Bool)arg2;	// IMP=0x0000000000ab90a1
- (void)relayMessage:(id)arg1;	// IMP=0x0000000000ab908a
- (void)routeMessage:(id)arg1 shouldQueue:(_Bool)arg2;	// IMP=0x0000000000ab8a6c
- (void)routeMessage:(id)arg1;	// IMP=0x0000000000ab8a55
- (id)queuedOutgoingMessagesForDevice:(id)arg1;	// IMP=0x0000000000ab88ed
- (id)queuedOutgoingMessages;	// IMP=0x0000000000ab883a
- (_Bool)hasQueuedOutgoingMessage:(id)arg1;	// IMP=0x0000000000ab8718
- (void)_cleanUpDeviceMappingsForMessage:(id)arg1;	// IMP=0x0000000000ab8498
- (id)dequeueOutgoingMessage:(id)arg1;	// IMP=0x0000000000ab8215
- (void)associateDevice:(id)arg1 withOutgoingMessage:(id)arg2;	// IMP=0x0000000000ab7ff5
- (void)queueOutgoingMessage:(id)arg1;	// IMP=0x0000000000ab7c66
- (_Bool)hasQueuedIncomingMessage:(id)arg1;	// IMP=0x0000000000ab7b44
- (id)dequeueQueuedIncomingMessages;	// IMP=0x0000000000ab7998
- (id)dequeueIncomingMessage:(id)arg1;	// IMP=0x0000000000ab7728
- (void)queueIncomingMessage:(id)arg1;	// IMP=0x0000000000ab7391
- (id)queuedIncomingMessages;	// IMP=0x0000000000ab72de
@property(readonly) _Bool hasQueuedIncomingMessages;
- (void)registerForNotifications;	// IMP=0x0000000000ab6f06
- (void)registerForSPIRemoteMessages:(id)arg1 home:(id)arg2 userPrivilege:(unsigned long long)arg3 internalBuildOnly:(_Bool)arg4;	// IMP=0x0000000000ab6b35
- (void)registerForMessagesWithHome:(id)arg1;	// IMP=0x0000000000ab695a
- (void)configureWithHome:(id)arg1;	// IMP=0x0000000000ab6855
- (id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 ownerPrivateRemoteMessages:(id)arg4 adminPrivateRemoteMessages:(id)arg5 internalMessages:(id)arg6 notifications:(id)arg7 notificationsToObject:(id)arg8 appleAccountManager:(id)arg9 metricsDispatcher:(id)arg10;	// IMP=0x0000000000ab64a4
- (id)initWithMessageTargetUUID:(id)arg1 messageDispatcher:(id)arg2 notificationCenter:(id)arg3 ownerPrivateRemoteMessages:(id)arg4 adminPrivateRemoteMessages:(id)arg5 internalMessages:(id)arg6 notifications:(id)arg7 notificationsToObject:(id)arg8;	// IMP=0x0000000000ab630b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly) Class superclass;

@end
