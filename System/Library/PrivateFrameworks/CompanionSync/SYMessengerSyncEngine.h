//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CompanionSync/NMSMessageCenterDelegate-Protocol.h>

@class NMSMessageCenter, NSDictionary, NSMapTable, NSObject, NSString, SYDevice;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface SYMessengerSyncEngine <NMSMessageCenterDelegate>
{
    NMSMessageCenter *_messageCenter;	// 8 = 0x8
    NSObject<OS_dispatch_semaphore> *_lookupLock;	// 16 = 0x10
    NSMapTable *_requestLookup;	// 24 = 0x18
    NSMapTable *_callbackLookup;	// 32 = 0x20
    SYDevice *_activeDevice;	// 40 = 0x28
    NSString *_sessionDeviceID;	// 48 = 0x30
    NSDictionary *_customIDSOptions;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_idsQueue;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000007584e
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *idsQueue; // @synthesize idsQueue=_idsQueue;
@property(copy, nonatomic) NSDictionary *customIDSOptions; // @synthesize customIDSOptions=_customIDSOptions;
- (void)messageCenter:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x00000000000755ce
- (void)messageCenter:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x00000000000753ac
- (void)messageCenter:(id)arg1 activeDeviceChanged:(id)arg2 acknowledgement:(CDUnknownBlockType)arg3;	// IMP=0x000000000007526f
- (void)messageCenter:(id)arg1 failedToSendMessageWithIdentifier:(id)arg2 error:(id)arg3 userInfo:(id)arg4;	// IMP=0x0000000000074fca
- (void)messageCenter:(id)arg1 didSuccessfullyDeliverRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;	// IMP=0x0000000000074d60
- (void)messageCenter:(id)arg1 didSuccessfullySendRequestWithIdentifier:(id)arg2 userInfo:(id)arg3;	// IMP=0x0000000000074af6
- (void)messageCenter:(id)arg1 didResolveIDSIdentifier:(id)arg2 forFileTransfer:(id)arg3;	// IMP=0x0000000000074a1d
- (void)messageCenter:(id)arg1 didResolveIDSIdentifier:(id)arg2 forResponse:(id)arg3;	// IMP=0x00000000000748ac
- (void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2;	// IMP=0x0000000000074689
- (void)messageCenter:(id)arg1 didReceiveIncomingFileTransfer:(id)arg2;	// IMP=0x0000000000074502
- (void)messageCenter:(id)arg1 didReceiveUnknownRequest:(id)arg2;	// IMP=0x0000000000074473
- (id)_wrapMessage:(id)arg1 ofType:(unsigned short)arg2 userInfo:(id)arg3;	// IMP=0x000000000007415a
- (void)_handleError:(id)arg1 forMessageID:(unsigned short)arg2;	// IMP=0x000000000007401b
- (void)_recordLastSeqNo:(id)arg1;	// IMP=0x0000000000073e94
- (_Bool)_checkMessageHeader:(id)arg1 messageID:(id)arg2;	// IMP=0x0000000000073e09
- (id)_getResponseHeader:(id)arg1;	// IMP=0x0000000000073db6
- (id)_getRequestHeader:(id)arg1;	// IMP=0x0000000000073d63
- (void)_hookupMessageHandler;	// IMP=0x0000000000072299
- (void)_resumeIncomingMessages;	// IMP=0x000000000007227c
- (void)_suspendIncomingMessages;	// IMP=0x000000000007225f
- (void)_updateMessageCenterPrefs:(id)arg1;	// IMP=0x00000000000720a1
- (id)_fileTransferHeader;	// IMP=0x0000000000071edd
- (id)stateForLogging;	// IMP=0x0000000000071e3e
- (id)cancelMessagesReturningFailures:(id)arg1;	// IMP=0x0000000000071b3e
- (id)outputStreamWithMetadata:(id)arg1 priority:(long long)arg2 options:(id)arg3 context:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000714bb
- (void)enqueueSyncRequest:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(CDUnknownBlockType)arg6;	// IMP=0x0000000000071097
- (void)beginSession;	// IMP=0x0000000000070fa0
- (void)suspend;	// IMP=0x0000000000070f68
- (_Bool)resume:(id *)arg1;	// IMP=0x0000000000070eb7
- (_Bool)targetConnected;	// IMP=0x0000000000070cab
- (_Bool)targetIsNearby;	// IMP=0x0000000000070a9f
- (id)messageCenter;	// IMP=0x0000000000070a8a
- (id)initWithService:(id)arg1 queue:(id)arg2;	// IMP=0x000000000007083d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

