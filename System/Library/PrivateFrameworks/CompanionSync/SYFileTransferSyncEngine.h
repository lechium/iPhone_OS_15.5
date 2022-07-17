//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CompanionSync/IDSServiceDelegate-Protocol.h>

@class IDSMessageContext, IDSService, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableIndexSet, NSMutableSet, NSObject, NSString, NSURL, SYDevice, SYStartSyncSession, _SYInputStreamer, _SYOutputStreamer;
@protocol OS_dispatch_queue, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface SYFileTransferSyncEngine <IDSServiceDelegate>
{
    _Bool _inSession;	// 8 = 0x8
    _Bool _sessionCanceled;	// 9 = 0x9
    SYStartSyncSession *_sessionStartMessage;	// 16 = 0x10
    NSURL *_outputFileURL;	// 24 = 0x18
    _SYOutputStreamer *_outputStream;	// 32 = 0x20
    NSURL *_inputFileURL;	// 40 = 0x28
    _SYInputStreamer *_inputStream;	// 48 = 0x30
    IDSMessageContext *_inputPriorityBoostContext;	// 56 = 0x38
    NSURL *_responseFileURL;	// 64 = 0x40
    _SYOutputStreamer *_responseStream;	// 72 = 0x48
    _Bool _responsesCanceled;	// 80 = 0x50
    IDSService *_idsService;	// 88 = 0x58
    SYDevice *_activeDevice;	// 96 = 0x60
    SYDevice *_sessionDevice;	// 104 = 0x68
    SYDevice *_responseDevice;	// 112 = 0x70
    struct os_unfair_lock_s _idsQueueLock;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_idsQueue;	// 128 = 0x80
    _Bool _idsQueueIsSuspended;	// 136 = 0x88
    _Bool _idsQueueResumedLock;	// 137 = 0x89
    NSMutableIndexSet *_messageRows;	// 144 = 0x90
    NSMutableIndexSet *_responseMessageRows;	// 152 = 0x98
    NSMutableArray *_deferredIncomingSessions;	// 160 = 0xa0
    NSMutableSet *_singleMessageUUIDs;	// 168 = 0xa8
    struct os_unfair_lock_s _messageMapLock;	// 176 = 0xb0
    NSMutableDictionary *_messageIDsToSessionIDs;	// 184 = 0xb8
    NSObject<OS_os_transaction> *_closureTransaction;	// 192 = 0xc0
    NSObject<OS_os_transaction> *_responseSessionTransaction;	// 200 = 0xc8
    NSDictionary *_customIDSOptions;	// 208 = 0xd0
}

- (void).cxx_destruct;	// IMP=0x0000000000095445
@property(copy, nonatomic) NSDictionary *customIDSOptions; // @synthesize customIDSOptions=_customIDSOptions;
- (unsigned long long)_crcChecksum:(id)arg1;	// IMP=0x000000000009535d
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x0000000000095110
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x0000000000094eee
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000094caa
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 hasBeenDeliveredWithContext:(id)arg4;	// IMP=0x00000000000949c4
- (void)_handleError:(id)arg1 messageID:(id)arg2 streamer:(id)arg3;	// IMP=0x0000000000094768
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x000000000009426d
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x0000000000092e76
- (void)service:(id)arg1 account:(id)arg2 incomingResourceAtURL:(id)arg3 metadata:(id)arg4 fromID:(id)arg5 context:(id)arg6;	// IMP=0x0000000000092871
- (void)_processNMSMessageData:(id)arg1 context:(id)arg2;	// IMP=0x0000000000092308
- (void)_handleIncomingSessionFileAtURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 idsContext:(id)arg4;	// IMP=0x0000000000091d1f
- (void)_handleIncomingSessionFileAtOwnedURL:(id)arg1 metadata:(id)arg2 identifier:(id)arg3 idsContext:(id)arg4;	// IMP=0x00000000000916aa
- (void)_handleIncomingStreamDataWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000009130c
- (void)_handleProtobuf:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3 isResponse:(_Bool)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x000000000009050e
- (void)_consumeRemainingStreamDataWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000090265
- (_Bool)_shouldTreatAsSessionEnd:(id)arg1;	// IMP=0x00000000000901a1
- (void)_recordLastSeqNo:(id)arg1;	// IMP=0x000000000009001e
- (void)_readNextProtobuf:(CDUnknownBlockType)arg1;	// IMP=0x000000000008f6da
- (id)_assumeOwnershipOfURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000008f460
- (id)_wrapIncomingResponse:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3;	// IMP=0x000000000008f3c1
- (id)_wrapIncomingMessage:(id)arg1 ofType:(unsigned short)arg2 identifier:(id)arg3;	// IMP=0x000000000008f2bb
- (id)_wrapResponse:(id)arg1 toRequest:(id)arg2 ofType:(unsigned short)arg3;	// IMP=0x000000000008f229
- (id)_wrapMessage:(id)arg1 ofType:(unsigned short)arg2 userInfo:(id)arg3;	// IMP=0x000000000008f08d
- (id)_fileTransferHeader;	// IMP=0x000000000008eec9
- (id)idsOptions:(id)arg1 forFileTransfer:(_Bool)arg2;	// IMP=0x000000000008ec07
- (id)idsOptions:(id)arg1;	// IMP=0x000000000008ebf0
- (void)_reallyHandleSessionRestart:(id)arg1 priority:(long long)arg2 options:(id)arg3 userContext:(id)arg4 callback:(CDUnknownBlockType)arg5;	// IMP=0x000000000008e926
- (void)_handleSessionRestart:(id)arg1 priority:(long long)arg2 options:(id)arg3 userContext:(id)arg4 callback:(CDUnknownBlockType)arg5;	// IMP=0x000000000008e743
- (void)_cancelResponses;	// IMP=0x000000000008e6bb
- (void)_cancelSession;	// IMP=0x000000000008e633
- (id)stateForLogging;	// IMP=0x000000000008e594
- (id)cancelMessagesReturningFailures:(id)arg1;	// IMP=0x000000000008e296
- (id)outputStreamWithMetadata:(id)arg1 priority:(long long)arg2 options:(id)arg3 context:(id)arg4 error:(id *)arg5;	// IMP=0x000000000008d763
- (void)enqueueSyncRequest:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(CDUnknownBlockType)arg6;	// IMP=0x000000000008cb7f
- (void)_enqueueSingleMessage:(id)arg1 withMessageID:(unsigned short)arg2 priority:(long long)arg3 options:(id)arg4 userContext:(id)arg5 callback:(CDUnknownBlockType)arg6;	// IMP=0x000000000008c15a
- (_Bool)_sessionDeviceCanUseSingleMessages;	// IMP=0x000000000008c099
- (_Bool)targetIsNearby;	// IMP=0x000000000008beb6
- (_Bool)buffersHandshake;	// IMP=0x000000000008bea1
- (_Bool)buffersSessions;	// IMP=0x000000000008be99
- (_Bool)isInSession;	// IMP=0x000000000008be89
- (void)endSession;	// IMP=0x000000000008bc76
- (void)beginSession;	// IMP=0x000000000008b98b
- (void)endResponseSession;	// IMP=0x000000000008b7b6
- (void)beginResponseSession;	// IMP=0x000000000008b4f4
- (void)endFileTransferForStream:(id)arg1 atURL:(id)arg2 target:(id)arg3 wasCancelled:(_Bool)arg4 messageRows:(id)arg5;	// IMP=0x000000000008a53a
- (void)suspend;	// IMP=0x000000000008a4ff
- (_Bool)resume:(id *)arg1;	// IMP=0x000000000008a419
- (void)dealloc;	// IMP=0x000000000008a379
- (void)_resumeIdsQueue;	// IMP=0x000000000008a32e
- (void)_suspendIdsQueue;	// IMP=0x000000000008a2d5
- (id)initWithService:(id)arg1 queue:(id)arg2;	// IMP=0x000000000008a03a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
