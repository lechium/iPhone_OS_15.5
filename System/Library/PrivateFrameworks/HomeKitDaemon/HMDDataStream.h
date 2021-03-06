//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HAPSecuritySessionEncryption, HMDDataStreamControlProtocol, HMFTimer, NSMapTable, NSMutableArray, NSMutableSet, NSString;
@protocol HMDDataStreamDelegate, HMDDataStreamTransport, OS_dispatch_queue;

@interface HMDDataStream : NSObject <HMFLogging, HMFTimerDelegate>
{
    _Bool _active;	// 8 = 0x8
    _Bool _firstMessageReceived;	// 9 = 0x9
    id <HMDDataStreamDelegate> _delegate;	// 16 = 0x10
    NSString *_logIdentifier;	// 24 = 0x18
    id <HMDDataStreamTransport> _transport;	// 32 = 0x20
    HAPSecuritySessionEncryption *_sessionEncryption;	// 40 = 0x28
    NSMapTable *_protocols;	// 48 = 0x30
    HMDDataStreamControlProtocol *_controlProtocol;	// 56 = 0x38
    HMFTimer *_helloMessageResponseTimer;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_workQueue;	// 72 = 0x48
    unsigned long long _nextRequestIdentifier;	// 80 = 0x50
    NSMutableSet *_pendingRequests;	// 88 = 0x58
    NSMutableArray *_pendingEvents;	// 96 = 0x60
}

+ (id)logCategory;	// IMP=0x0000000000319a96
- (void).cxx_destruct;	// IMP=0x0000000000318fe1
@property(readonly, nonatomic) NSMutableArray *pendingEvents; // @synthesize pendingEvents=_pendingEvents;
@property(readonly, nonatomic) NSMutableSet *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property(nonatomic) unsigned long long nextRequestIdentifier; // @synthesize nextRequestIdentifier=_nextRequestIdentifier;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) HMFTimer *helloMessageResponseTimer; // @synthesize helloMessageResponseTimer=_helloMessageResponseTimer;
@property(nonatomic) _Bool firstMessageReceived; // @synthesize firstMessageReceived=_firstMessageReceived;
@property(retain, nonatomic) HMDDataStreamControlProtocol *controlProtocol; // @synthesize controlProtocol=_controlProtocol;
@property(retain, nonatomic) NSMapTable *protocols; // @synthesize protocols=_protocols;
@property(retain, nonatomic) HAPSecuritySessionEncryption *sessionEncryption; // @synthesize sessionEncryption=_sessionEncryption;
@property(retain, nonatomic) id <HMDDataStreamTransport> transport; // @synthesize transport=_transport;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property(nonatomic) __weak id <HMDDataStreamDelegate> delegate; // @synthesize delegate=_delegate;
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000318dac
- (void)transport:(id)arg1 didReceiveRawFrame:(id)arg2;	// IMP=0x0000000000317025
- (void)transportDidOpen:(id)arg1;	// IMP=0x0000000000316c58
- (void)transportDidClose:(id)arg1;	// IMP=0x0000000000316986
- (void)transport:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000031667c
- (void)setTrafficClass:(unsigned long long)arg1;	// IMP=0x000000000031656e
- (void)protocolDidUpdateActiveStatus:(id)arg1;	// IMP=0x0000000000316564
- (void)sendRequestForProtocol:(id)arg1 topic:(id)arg2 payload:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000316264
- (void)sendRequestForProtocol:(id)arg1 topic:(id)arg2 identifier:(unsigned long long)arg3 payload:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000316168
- (void)sendResponseForRequestHeader:(id)arg1 payload:(id)arg2 status:(unsigned short)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000003160cd
- (void)sendEventForProtocol:(id)arg1 topic:(id)arg2 payload:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000315ef6
- (id)protocolDelegateHandle;	// IMP=0x0000000000315eed
- (id)protocolWithName:(id)arg1;	// IMP=0x0000000000315e44
- (void)addProtocol:(id)arg1 name:(id)arg2;	// IMP=0x0000000000315db8
- (void)close;	// IMP=0x0000000000315b9e
- (void)connect;	// IMP=0x0000000000315aa5
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (id)initWithTransport:(id)arg1 sessionEncryption:(id)arg2 workQueue:(id)arg3 logIdentifier:(id)arg4;	// IMP=0x00000000003157a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

