//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/HMFDumpState-Protocol.h>
#import <HomeKitDaemonLegacy/HMFHTTPServerDelegate-Protocol.h>
#import <HomeKitDaemonLegacy/HMFTimerDelegate-Protocol.h>

@class HMFHTTPServer, HMFUnfairLock, NSArray, NSDictionary, NSMutableArray, NSString, NSUUID;
@protocol HMDHTTPServerMessageTransportDelegate;

@interface HMDHTTPServerMessageTransport : HMFObject <HMFHTTPServerDelegate, HMFTimerDelegate, HMFDumpState>
{
    HMFUnfairLock *_lock;	// 8 = 0x8
    NSMutableArray *_clientConnections;	// 16 = 0x10
    HMFHTTPServer *_server;	// 24 = 0x18
    id <HMDHTTPServerMessageTransportDelegate> _delegate;	// 32 = 0x20
    NSUUID *_identifier;	// 40 = 0x28
}

+ (id)shortDescription;	// IMP=0x000000000065e69d
+ (id)maximumSupportedProtocolVersion;	// IMP=0x000000000065e66d
- (void).cxx_destruct;	// IMP=0x000000000065c3f8
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDHTTPServerMessageTransportDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HMFHTTPServer *server; // @synthesize server=_server;
- (id)dumpState;	// IMP=0x000000000065c0ec
- (void)timerDidFire:(id)arg1;	// IMP=0x000000000065bdce
- (void)server:(id)arg1 didCloseConnection:(id)arg2;	// IMP=0x000000000065bafb
- (void)server:(id)arg1 didOpenConnection:(id)arg2;	// IMP=0x000000000065b9ed
- (_Bool)server:(id)arg1 shouldAcceptConnection:(id)arg2;	// IMP=0x000000000065b9e5
- (void)server:(id)arg1 didStopWithError:(id)arg2;	// IMP=0x000000000065b9d0
- (void)__registerPingHandler;	// IMP=0x000000000065b859
- (void)__registerSendMessageHandler;	// IMP=0x000000000065b6e2
- (void)__registerSendResponseHandler;	// IMP=0x000000000065b56b
- (void)__registerReceiveMessageHandler;	// IMP=0x000000000065b3f4
- (id)_clientConnectionForDevice:(id)arg1;	// IMP=0x000000000065b221
- (void)sendMessage:(id)arg1 toDevices:(id)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000065b00b
- (void)confirmDevice:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000065ae5b
- (void)_stopWithError:(id)arg1;	// IMP=0x000000000065adae
- (void)stop;	// IMP=0x000000000065ad9a
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000065ab72
- (void)removeTXTRecordValueForKey:(id)arg1;	// IMP=0x000000000065aae2
- (void)setTXTRecordValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000065aa3c
@property(readonly, copy, nonatomic) NSDictionary *TXTRecord;
- (void)removeAllClientConnections;	// IMP=0x000000000065a7ca
- (void)removeClientConnection:(id)arg1;	// IMP=0x000000000065a714
- (void)addClientConnection:(id)arg1;	// IMP=0x000000000065a676
@property(readonly, nonatomic) NSArray *clientConnections;
@property(readonly, copy, nonatomic) NSArray *devices;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;	// IMP=0x000000000065a21a
- (id)shortDescription;	// IMP=0x000000000065a158
- (id)initWithServerIdentifier:(id)arg1;	// IMP=0x0000000000659d19
- (id)init;	// IMP=0x0000000000659c71

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
