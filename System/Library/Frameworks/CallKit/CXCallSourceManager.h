//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallKit/CXCallSourceDelegate-Protocol.h>
#import <CallKit/CXTransactionManagerDelegate-Protocol.h>
#import <CallKit/NSXPCListenerDelegate-Protocol.h>

@class CXTransactionGroup, CXTransactionManager, NSArray, NSMutableDictionary, NSString, NSXPCListener;
@protocol CXCallSourceManagerDelegate, OS_dispatch_queue;

@interface CXCallSourceManager : NSObject <NSXPCListenerDelegate, CXCallSourceDelegate, CXTransactionManagerDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <CXCallSourceManagerDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    NSMutableDictionary *_identifierToCallSource;	// 32 = 0x20
    CXTransactionManager *_transactionManager;	// 40 = 0x28
    CXTransactionGroup *_uncommittedTransactionGroup;	// 48 = 0x30
    NSXPCListener *_xpcListener;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000001410c
@property(readonly, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;
@property(retain, nonatomic) CXTransactionGroup *uncommittedTransactionGroup; // @synthesize uncommittedTransactionGroup=_uncommittedTransactionGroup;
@property(readonly, nonatomic) CXTransactionManager *transactionManager; // @synthesize transactionManager=_transactionManager;
@property(readonly, nonatomic) NSMutableDictionary *identifierToCallSource; // @synthesize identifierToCallSource=_identifierToCallSource;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) __weak id <CXCallSourceManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)transactionManager:(id)arg1 transactionGroupCompleted:(id)arg2;	// IMP=0x0000000000013f46
- (void)transactionManager:(id)arg1 actionTimedOut:(id)arg2 forCallSource:(id)arg3;	// IMP=0x0000000000013e69
- (void)callSource:(id)arg1 actionCompleted:(id)arg2;	// IMP=0x0000000000013b84
- (void)callSource:(id)arg1 requestedTransaction:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000013a46
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 crossDeviceIdentifier:(id)arg3 changedBytesOfDataUsed:(long long)arg4;	// IMP=0x00000000000138f8
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 changedMeterLevel:(float)arg3 forDirection:(long long)arg4;	// IMP=0x00000000000137c9
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 changedFrequencyData:(id)arg3 forDirection:(long long)arg4;	// IMP=0x000000000001367b
- (void)callSource:(id)arg1 reportedAudioFinishedForCallWithUUID:(id)arg2;	// IMP=0x000000000001356b
- (void)callSource:(id)arg1 reportedOutgoingCallWithUUID:(id)arg2 connectedAtDate:(id)arg3;	// IMP=0x000000000001342d
- (void)callSource:(id)arg1 reportedOutgoingCallWithUUID:(id)arg2 startedConnectingAtDate:(id)arg3;	// IMP=0x00000000000132ef
- (void)callSource:(id)arg1 reportedOutgoingCallWithUUID:(id)arg2 sentInvitationAtDate:(id)arg3;	// IMP=0x00000000000131b1
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 endedAtDate:(id)arg3 privateReason:(long long)arg4 failureContext:(id)arg5;	// IMP=0x0000000000012ff4
- (void)callSource:(id)arg1 reportedCallWithUUID:(id)arg2 updated:(id)arg3;	// IMP=0x0000000000012e83
- (void)callSource:(id)arg1 reportedNewIncomingCallWithUUID:(id)arg2 update:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000012c82
- (void)callSource:(id)arg1 registeredWithConfiguration:(id)arg2;	// IMP=0x0000000000012b72
- (void)callSourceInvalidated:(id)arg1;	// IMP=0x0000000000012ab3
- (void)callSourceConnectionEnded:(id)arg1;	// IMP=0x0000000000012a0e
- (void)callSourceConnectionStarted:(id)arg1;	// IMP=0x0000000000012969
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00000000000127f8
- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012774
- (void)performDelegateCallback:(CDUnknownBlockType)arg1;	// IMP=0x00000000000126a6
- (void)failOutstandingActionsForCallWithUUID:(id)arg1;	// IMP=0x00000000000125a4
- (void)commitUncommittedTransactions;	// IMP=0x000000000001221c
- (void)addAction:(id)arg1 toUncommittedTransactionForCallSource:(id)arg2;	// IMP=0x0000000000011ee0
- (void)commitTransaction:(id)arg1 toCallSource:(id)arg2;	// IMP=0x0000000000011be0
- (void)removeCallSource:(id)arg1;	// IMP=0x0000000000011926
- (id)callSourceWithIdentifier:(id)arg1;	// IMP=0x0000000000011701
- (void)addCallSource:(id)arg1;	// IMP=0x00000000000114a8
@property(readonly, nonatomic) NSArray *callSources;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000011132
- (id)init;	// IMP=0x0000000000011124

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

