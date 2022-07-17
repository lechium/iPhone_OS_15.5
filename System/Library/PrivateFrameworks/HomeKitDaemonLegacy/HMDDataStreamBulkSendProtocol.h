//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/HMDDataStreamProtocol-Protocol.h>
#import <HomeKitDaemonLegacy/HMFLogging-Protocol.h>
#import <HomeKitDaemonLegacy/HMFTimerDelegate-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString;
@protocol HMDDataStreamProtocolDelegate, OS_dispatch_queue;

@interface HMDDataStreamBulkSendProtocol : NSObject <HMFLogging, HMDDataStreamProtocol, HMFTimerDelegate>
{
    _Bool _isConnected;	// 8 = 0x8
    unsigned int _nextSessionIdentifier;	// 12 = 0xc
    id <HMDDataStreamProtocolDelegate> _dataStream;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    id _accessory;	// 32 = 0x20
    NSMapTable *_listeners;	// 40 = 0x28
    NSString *_logIdentifier;	// 48 = 0x30
    NSMapTable *_activeBulkSendSessions;	// 56 = 0x38
    NSMutableDictionary *_pendingBulkSendSessionContextBySessionIdentifier;	// 64 = 0x40
    CDUnknownBlockType _bulkSendSessionContextFactory;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x00000000007389d9
+ (id)protocolName;	// IMP=0x00000000007389ba
- (void).cxx_destruct;	// IMP=0x000000000073803e
@property(readonly) CDUnknownBlockType bulkSendSessionContextFactory; // @synthesize bulkSendSessionContextFactory=_bulkSendSessionContextFactory;
@property(readonly) NSMutableDictionary *pendingBulkSendSessionContextBySessionIdentifier; // @synthesize pendingBulkSendSessionContextBySessionIdentifier=_pendingBulkSendSessionContextBySessionIdentifier;
@property(readonly) NSMapTable *activeBulkSendSessions; // @synthesize activeBulkSendSessions=_activeBulkSendSessions;
@property unsigned int nextSessionIdentifier; // @synthesize nextSessionIdentifier=_nextSessionIdentifier;
@property(readonly, copy, nonatomic) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(nonatomic) _Bool isConnected; // @synthesize isConnected=_isConnected;
@property(retain, nonatomic) NSMapTable *listeners; // @synthesize listeners=_listeners;
@property(nonatomic) __weak id accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <HMDDataStreamProtocolDelegate> dataStream; // @synthesize dataStream=_dataStream;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000007378d3
- (void)_openSessionForFileType:(id)arg1 reason:(id)arg2 metadata:(id)arg3 queue:(id)arg4 callback:(CDUnknownBlockType)arg5;	// IMP=0x000000000073732b
- (void)openSessionForFileType:(id)arg1 reason:(id)arg2 metadata:(id)arg3 queue:(id)arg4 callback:(CDUnknownBlockType)arg5;	// IMP=0x00000000007371c3
- (void)_sendAckMessageWithIdentifier:(id)arg1;	// IMP=0x000000000073701f
- (void)_sendCloseMessageWithIdentifier:(id)arg1 reason:(unsigned short)arg2;	// IMP=0x0000000000736e34
- (void)_cancelSessionWithIdentifier:(id)arg1 reason:(unsigned short)arg2 hadReceivedEof:(_Bool)arg3;	// IMP=0x0000000000736dad
- (void)_pumpReceiveFailure:(id)arg1 session:(id)arg2;	// IMP=0x0000000000736d28
- (void)_pumpMessage:(id)arg1 session:(id)arg2;	// IMP=0x0000000000736af3
- (void)_handleDataMessage:(id)arg1;	// IMP=0x00000000007368cc
- (void)_handleCloseMessage:(id)arg1;	// IMP=0x0000000000736511
- (void)_maybeSubmitMetricForDroppedOpenRequestOfType:(id)arg1;	// IMP=0x000000000073650b
- (void)_handleOpenWithRequestHeader:(id)arg1 payload:(id)arg2;	// IMP=0x0000000000736077
- (void)_removeBulkSendSessionForSessionIdentifier:(id)arg1;	// IMP=0x0000000000736005
- (id)_getBulkSendSessionForSessionIdentifier:(id)arg1;	// IMP=0x0000000000735f82
- (void)_rejectSessionCandidate:(id)arg1 status:(unsigned short)arg2;	// IMP=0x0000000000735f2e
- (void)_startSessionCandidate:(id)arg1 queue:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x0000000000735c7e
- (id)_createSessionIdentifier;	// IMP=0x0000000000735c2d
- (void)_sendOpenResponseWithRequestHeader:(id)arg1 status:(unsigned short)arg2;	// IMP=0x0000000000735bad
- (void)_sendOpenResponseWithRequestHeader:(id)arg1 bulkSendStatus:(unsigned short)arg2;	// IMP=0x0000000000735a89
- (void)_sendOpenResponseWithRequestHeader:(id)arg1 streamIdentifier:(id)arg2;	// IMP=0x000000000073598f
- (id)_createSessionFromCandidate:(id)arg1 queue:(id)arg2;	// IMP=0x0000000000735782
- (id)_createSessionCandidateWithRequestHeader:(id)arg1 metadata:(id)arg2;	// IMP=0x000000000073564e
- (void)asyncBulkSendSessionDidCancelSessionWithIdentifier:(id)arg1 reason:(unsigned short)arg2 hadReceivedEof:(_Bool)arg3;	// IMP=0x000000000073558e
- (void)asyncBulkSendSessionCandidate:(id)arg1 didRejectWithStatus:(unsigned short)arg2;	// IMP=0x00000000007354d6
- (void)asyncBulkSendSessionCandidate:(id)arg1 didAcceptOnQueue:(id)arg2 callback:(CDUnknownBlockType)arg3;	// IMP=0x00000000007353cc
- (void)dataStream:(id)arg1 didReceiveResponse:(id)arg2 header:(id)arg3 payload:(id)arg4;	// IMP=0x00000000007353c6
- (void)dataStream:(id)arg1 didReceiveRequest:(id)arg2 header:(id)arg3 payload:(id)arg4;	// IMP=0x0000000000735255
- (void)dataStream:(id)arg1 didReceiveEvent:(id)arg2 header:(id)arg3 payload:(id)arg4;	// IMP=0x000000000073505b
- (void)dataStreamDidOpen:(id)arg1;	// IMP=0x0000000000734df5
- (void)dataStreamDidClose:(id)arg1;	// IMP=0x0000000000734d1c
- (void)dataStreamInitiatedClose:(id)arg1;	// IMP=0x0000000000734c55
- (void)dataStream:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000734b53
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (void)_closeAllSessionsWithError:(id)arg1;	// IMP=0x000000000073460e
- (void)_notifyActiveStatusChangedFromPreviousValue:(_Bool)arg1;	// IMP=0x00000000007344b6
- (void)removeListener:(id)arg1;	// IMP=0x0000000000734213
- (void)addListener:(id)arg1 fileType:(id)arg2;	// IMP=0x0000000000733fe6
- (id)initWithQueue:(id)arg1 accessory:(id)arg2 logIdentifier:(id)arg3 bulkSendSessionContextFactory:(CDUnknownBlockType)arg4;	// IMP=0x0000000000733e79
- (id)initWithQueue:(id)arg1 accessory:(id)arg2 logIdentifier:(id)arg3;	// IMP=0x0000000000733e60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
