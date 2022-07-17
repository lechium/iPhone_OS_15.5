//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDRemoteEventRouterAssertionClient-Protocol.h>
#import <HomeKitDaemonLegacy/HMEMessageDatagramClientDataSource-Protocol.h>
#import <HomeKitDaemonLegacy/HMEMessageDatagramClientDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFMessageReceiver-Protocol.h>

@class HMEMessageDatagramClient, HMFMessageDispatcher, NSNotificationCenter, NSString, NSUUID;
@protocol HMDRemoteEventRouterClientDataSource, HMMLogEventSubmitting, OS_dispatch_queue, OS_os_log;

@interface HMDRemoteEventRouterClient : NSObject <HMFMessageReceiver, HMFLogging, HMEMessageDatagramClientDataSource, HMEMessageDatagramClientDelegate, HMDRemoteEventRouterAssertionClient>
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    _Bool _isPrimaryResident;	// 16 = 0x10
    _Bool _isConnected;	// 17 = 0x11
    _Bool _isNetworkAvailable;	// 18 = 0x12
    HMFMessageDispatcher *_messageDispatcher;	// 24 = 0x18
    NSString *_requestMessageName;	// 32 = 0x20
    NSString *_updateMessageName;	// 40 = 0x28
    NSNotificationCenter *_notificationCenter;	// 48 = 0x30
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 56 = 0x38
    NSUUID *_identifier;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_workQueue;	// 72 = 0x48
    id <HMDRemoteEventRouterClientDataSource> _dataSource;	// 80 = 0x50
    HMEMessageDatagramClient *_eventRouterClient;	// 88 = 0x58
}

+ (id)logCategory;	// IMP=0x00000000001ea721
- (void).cxx_destruct;	// IMP=0x00000000001e94a4
@property(readonly) HMEMessageDatagramClient *eventRouterClient; // @synthesize eventRouterClient=_eventRouterClient;
@property(readonly) __weak id <HMDRemoteEventRouterClientDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property(readonly) __weak id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(nonatomic) _Bool isNetworkAvailable; // @synthesize isNetworkAvailable=_isNetworkAvailable;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, copy) NSString *updateMessageName; // @synthesize updateMessageName=_updateMessageName;
@property(readonly, copy) NSString *requestMessageName; // @synthesize requestMessageName=_requestMessageName;
@property(readonly) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
- (id)dumpStateDescription;	// IMP=0x00000000001e930f
- (void)didChangeFetchAvailableCondition:(_Bool)arg1;	// IMP=0x00000000001e9293
- (void)didChangeHasForegroundClient:(_Bool)arg1;	// IMP=0x00000000001e9217
- (void)networkAvailabilityDidChange:(_Bool)arg1;	// IMP=0x00000000001e919b
- (id)eventRouter;	// IMP=0x00000000001e9189
- (void)configureIsPrimaryResident:(_Bool)arg1 networkAvailable:(_Bool)arg2 additionalPolicies:(id)arg3;	// IMP=0x00000000001e904f
- (void)sendMessageWithPayloadMessage:(id)arg1 messageType:(long long)arg2 destination:(id)arg3 serverIdentifier:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000001e8c55
- (void)sendMessageWithPayloadMessage:(id)arg1 client:(id)arg2 messageType:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001e8a98
- (void)clientDidDisconnect:(id)arg1;	// IMP=0x00000000001e8921
- (void)clientDidConnect:(id)arg1 serverIdentifier:(id)arg2;	// IMP=0x00000000001e8781
- (void)client:(id)arg1 fetchWithFilters:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e84e0
- (void)sendDisconnectForClient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e832e
- (void)sendKeepAliveForClient:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000001e817c
- (void)client:(id)arg1 sendConnectWithAddedFilters:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e7f49
- (void)client:(id)arg1 sendChangeRegistrationsWithAddedFilters:(id)arg2 removedFilters:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001e7f2b
- (void)sendChangeRegistrationsMessageWithAddedFilters:(id)arg1 removedFilters:(id)arg2 client:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000001e7c61
- (void)sendChangeRegistrationsMessageWithAddedFilters:(id)arg1 removedFilters:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e7bbd
- (_Bool)client:(id)arg1 isConnectionTerminatingError:(id)arg2;	// IMP=0x00000000001e79fe
- (_Bool)clientIsEnabled:(id)arg1;	// IMP=0x00000000001e7948
- (id)_underlyingMessageDataFromFragmentMessageData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001e781c
- (void)_handleEventUpdateMessage:(id)arg1 fromServer:(id)arg2 events:(id)arg3;	// IMP=0x00000000001e7704
- (void)_handleUpdatedEventsRequest:(id)arg1 originalMessage:(id)arg2;	// IMP=0x00000000001e74d0
- (void)_handleUpdateMessage:(id)arg1;	// IMP=0x00000000001e70d0
- (void)handleUpdatedPrimaryResidentNotification:(id)arg1;	// IMP=0x00000000001e6f80
- (void)_registerForMessages:(id)arg1;	// IMP=0x00000000001e6dbf
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (id)logIdentifier;	// IMP=0x00000000001e6d4b
@property(readonly) _Bool isPrimaryResident;
- (id)initWithMessageTargetUUID:(id)arg1 queue:(id)arg2 dataSource:(id)arg3 messageDispatcher:(id)arg4 notificationCenter:(id)arg5 requestMessageName:(id)arg6 updateMessageName:(id)arg7 logCategory:(const char *)arg8 logEventSubmitter:(id)arg9 eventRouterClientFactory:(CDUnknownBlockType)arg10;	// IMP=0x00000000001e6b19
- (id)initWithMessageTargetUUID:(id)arg1 queue:(id)arg2 dataSource:(id)arg3 messageDispatcher:(id)arg4 notificationCenter:(id)arg5 requestMessageName:(id)arg6 updateMessageName:(id)arg7 storeReadHandle:(id)arg8 storeWriteHandle:(id)arg9 logCategory:(const char *)arg10;	// IMP=0x00000000001e693c
- (id)initWithMessageTargetUUID:(id)arg1 queue:(id)arg2 dataSource:(id)arg3 messageDispatcher:(id)arg4 notificationCenter:(id)arg5 requestMessageName:(id)arg6 updateMessageName:(id)arg7 storeReadHandle:(id)arg8 storeWriteHandle:(id)arg9;	// IMP=0x00000000001e66e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
