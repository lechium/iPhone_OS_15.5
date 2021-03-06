//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallKit/CXActionDelegate-Protocol.h>
#import <CallKit/CXProviderVendorProtocol-Protocol.h>

@class CXProviderConfiguration, NSArray, NSMutableArray, NSString;
@protocol CXProviderDelegate, CXProviderDelegatePrivate, CXProviderHostProtocol, OS_dispatch_queue;

@interface CXProvider : NSObject <CXActionDelegate, CXProviderVendorProtocol>
{
    CXProviderConfiguration *_configuration;	// 8 = 0x8
    id <CXProviderDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_completionQueue;	// 32 = 0x20
    NSMutableArray *_mutablePendingTransactions;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
}

+ (void)reportNewIncomingVoIPPushPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003e8c9
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000039349
- (void).cxx_destruct;	// IMP=0x000000000003e9cc
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableArray *mutablePendingTransactions; // @synthesize mutablePendingTransactions=_mutablePendingTransactions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue; // @synthesize completionQueue=_completionQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <CXProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleMediaServicesWereResetNotification:(id)arg1;	// IMP=0x000000000003e80d
- (oneway void)handleAudioSessionActivationStateChangedTo:(_Bool)arg1;	// IMP=0x000000000003e483
- (oneway void)handleActionTimeout:(id)arg1;	// IMP=0x000000000003e158
- (void)_performAction:(id)arg1;	// IMP=0x000000000003d474
- (oneway void)commitTransaction:(id)arg1;	// IMP=0x000000000003ce87
- (void)actionCompleted:(id)arg1;	// IMP=0x000000000003cb83
- (void)_performDelegateCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000003ca80
- (id)_pendingActionWithUUID:(id)arg1;	// IMP=0x000000000003c725
- (void)_updatePendingTransactions;	// IMP=0x000000000003c49d
- (void)handleConnectionInterruption;	// IMP=0x000000000003c332
- (void)sendProviderDidBegin;	// IMP=0x000000000003c241
- (void)performCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003c130
- (void)registerCurrentConfiguration;	// IMP=0x000000000003bf66
- (void)performDelegateCallback:(CDUnknownBlockType)arg1;	// IMP=0x000000000003be98
- (void)invalidate;	// IMP=0x000000000003be0a
- (void)requestTransaction:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003bbbf
- (void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2;	// IMP=0x000000000003b978
- (void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2;	// IMP=0x000000000003b731
- (void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3;	// IMP=0x000000000003b48b
- (void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3;	// IMP=0x000000000003b31e
- (void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3;	// IMP=0x000000000003b190
- (void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2;	// IMP=0x000000000003af49
- (void)reportAudioFinishedForCallWithUUID:(id)arg1;	// IMP=0x000000000003ad4b
- (void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4;	// IMP=0x000000000003aab1
- (void)reportCallWithUUID:(id)arg1 failedAtDate:(id)arg2 withContext:(id)arg3;	// IMP=0x000000000003a8ea
- (void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3;	// IMP=0x000000000003a76d
- (void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 reason:(long long)arg3;	// IMP=0x000000000003a5e3
- (void)reportCallWithUUID:(id)arg1 updated:(id)arg2;	// IMP=0x000000000003a362
- (void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000039f15
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000039ddd
- (id)pendingCallActionsOfClass:(Class)arg1 withCallUUID:(id)arg2;	// IMP=0x0000000000039a5a
@property(readonly, copy, nonatomic) NSArray *pendingTransactions;
@property(copy, nonatomic) CXProviderConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) id <CXProviderDelegatePrivate> privateDelegate;
@property(readonly, nonatomic) _Bool requiresProxyingAVAudioSessionState;
@property(readonly, nonatomic) id <CXProviderHostProtocol> hostProtocolDelegate;
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00000000000393c2
- (id)init;	// IMP=0x00000000000393b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

