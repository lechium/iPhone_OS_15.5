//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Catalyst/CATTransportDelegate-Protocol.h>

@class CATStateMachine, CATTransport, NSDictionary, NSHashTable, NSMapTable, NSMutableArray, NSMutableSet, NSString, NSUUID;
@protocol CATTaskClientDelegate, OS_dispatch_group;

@interface CATTaskClient : NSObject <CATTransportDelegate>
{
    CATStateMachine *mFSM;	// 8 = 0x8
    CATTransport *mTransport;	// 16 = 0x10
    NSMutableSet *mActiveRemoteTaskOperations;	// 24 = 0x18
    NSMapTable *mRemoteTaskByUUID;	// 32 = 0x20
    NSMutableArray *mEnqueuedMessages;	// 40 = 0x28
    NSMutableArray *mEnqueuedTaskUUIDs;	// 48 = 0x30
    NSHashTable *mOrphanedTransports;	// 56 = 0x38
    CATTaskClient *mStrongSelf;	// 64 = 0x40
    NSObject<OS_dispatch_group> *mSessionDidInvalidateGroup;	// 72 = 0x48
    _Bool mIsStarting;	// 80 = 0x50
    NSUUID *_sessionUUID;	// 88 = 0x58
    id <CATTaskClientDelegate> _delegate;	// 96 = 0x60
    NSDictionary *_userInfo;	// 104 = 0x68
    NSDictionary *_serverUserInfo;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000003005e
@property(copy, nonatomic) NSDictionary *serverUserInfo; // @synthesize serverUserInfo=_serverUserInfo;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) __weak id <CATTaskClientDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
@property(readonly, nonatomic) CATTransport *transport; // @synthesize transport=mTransport;
- (void)delegateDidInvalidate;	// IMP=0x000000000002ff1d
- (void)delegateWillInvalidate;	// IMP=0x000000000002fe5a
- (void)delegateDidDisconnect;	// IMP=0x000000000002fd97
- (void)delegateDidInterruptWithError:(id)arg1;	// IMP=0x000000000002fcca
- (void)delegateDidConnect;	// IMP=0x000000000002fc07
- (void)delegatedidReceiveNotificationWithName:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000002fb14
- (void)processNotificationMessage:(id)arg1;	// IMP=0x000000000002f830
- (void)processTaskMessage:(id)arg1;	// IMP=0x000000000002f51b
- (void)processSessionMessage:(id)arg1;	// IMP=0x000000000002f1ca
- (void)transportDidInvalidate:(id)arg1;	// IMP=0x000000000002f120
- (void)transport:(id)arg1 didInterruptWithError:(id)arg2;	// IMP=0x000000000002f0be
- (void)transport:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x000000000002ef23
- (void)transport:(id)arg1 didFailToSendMessage:(id)arg2 error:(id)arg3;	// IMP=0x000000000002ee9e
- (void)transport:(id)arg1 didSendMessage:(id)arg2;	// IMP=0x000000000002ee19
- (void)transportDidResume:(id)arg1;	// IMP=0x000000000002ed6f
- (void)activeOperationDidFinish:(id)arg1;	// IMP=0x000000000002eced
- (void)remoteTaskOperation:(id)arg1 preparedMessage:(id)arg2;	// IMP=0x000000000002ebcf
- (void)delegateDidInvalidateAndFinalize;	// IMP=0x000000000002ea5c
- (void)enqueueMessage:(id)arg1;	// IMP=0x000000000002e9f9
- (void)sendMessageThroughTransport:(id)arg1;	// IMP=0x000000000002e900
- (void)resumeSession;	// IMP=0x000000000002e82f
- (void)sendMessage:(id)arg1;	// IMP=0x000000000002e76f
- (void)clearQueuedMessagesAndCancelAllOperationsWithError:(id)arg1;	// IMP=0x000000000002e6a1
- (void)abandonTransportClearQueuedMessagesAndCancelAllOperationsWithError:(id)arg1;	// IMP=0x000000000002e630
- (void)sessionDidInvalidate;	// IMP=0x000000000002e586
- (void)delegateWillInvalidateAndInvalidateSessionWithError:(id)arg1;	// IMP=0x000000000002e45f
- (void)resumeWithTaskUUIDs:(id)arg1;	// IMP=0x000000000002e03e
- (void)sessionResumedWithTaskUUIDs:(id)arg1;	// IMP=0x000000000002df7e
- (void)abandonTransport;	// IMP=0x000000000002de97
- (void)resumeTransport:(id)arg1;	// IMP=0x000000000002dd77
- (id)captureTransport;	// IMP=0x000000000002dc41
- (void)resumeCapturedTransportFromTaskClient:(id)arg1;	// IMP=0x000000000002dab1
- (void)taskOperationDidFailWithInvalidTaskClient:(id)arg1;	// IMP=0x000000000002da34
- (void)trackTaskOperation:(id)arg1;	// IMP=0x000000000002d9a0
- (void)enqueueTaskOperation:(id)arg1;	// IMP=0x000000000002d8fc
- (void)didPrepareTaskOperation:(id)arg1;	// IMP=0x000000000002d83c
- (void)invalidateWithError:(id)arg1;	// IMP=0x000000000002d6c4
- (void)invalidate;	// IMP=0x000000000002d683
- (void)disconnect;	// IMP=0x000000000002d5b9
- (void)connectWithTransportFromTaskClient:(id)arg1;	// IMP=0x000000000002d441
- (void)connectWithTransport:(id)arg1;	// IMP=0x000000000002d2c9
- (void)postNotificationWithName:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000002d0e4
- (id)prepareTaskOperationForRequest:(id)arg1;	// IMP=0x000000000002cf96
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000000002c790
- (void)dealloc;	// IMP=0x000000000002c681

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
