//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXDispatchTimer, AXIPCClient, AXIPCServer, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface AXServer : NSObject
{
    _Bool _shouldRegisterClientCallbackSourceOnMainRunloop;	// 8 = 0x8
    AXIPCServer *_server;	// 16 = 0x10
    AXIPCClient *_client;	// 24 = 0x18
    NSString *_serverIdentifier;	// 32 = 0x20
    NSMutableArray *_assertionWorkBacklog;	// 40 = 0x28
    AXDispatchTimer *_assertionRetryTimer;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_assertionWorkQueue;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000262b3
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *assertionWorkQueue; // @synthesize assertionWorkQueue=_assertionWorkQueue;
@property(retain, nonatomic) AXDispatchTimer *assertionRetryTimer; // @synthesize assertionRetryTimer=_assertionRetryTimer;
@property(retain, nonatomic) NSMutableArray *assertionWorkBacklog; // @synthesize assertionWorkBacklog=_assertionWorkBacklog;
@property(nonatomic) _Bool shouldRegisterClientCallbackSourceOnMainRunloop; // @synthesize shouldRegisterClientCallbackSourceOnMainRunloop=_shouldRegisterClientCallbackSourceOnMainRunloop;
@property(copy, nonatomic) NSString *serverIdentifier; // @synthesize serverIdentifier=_serverIdentifier;
@property(retain, nonatomic) AXIPCClient *client; // @synthesize client=_client;
@property(retain, nonatomic) AXIPCServer *server; // @synthesize server=_server;
- (id)_serviceName;	// IMP=0x00000000000c15ce
- (void)_ensureAssertionsHaveBeenProcessedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000261ab
- (_Bool)_connectServerIfNecessary;	// IMP=0x0000000000025eae
- (_Bool)_connectIfNecessary;	// IMP=0x0000000000025aba
- (void)_willClearServer;	// IMP=0x0000000000025ab4
- (void)_didConnectToServer;	// IMP=0x0000000000025aae
- (void)_wasDisconnectedFromClient;	// IMP=0x0000000000025aa8
- (void)_didConnectToClient;	// IMP=0x0000000000025aa2
- (void)relinquishAssertionWithType:(id)arg1 identifier:(id)arg2;	// IMP=0x0000000000025914
- (void)acquireAssertionWithType:(id)arg1 identifier:(id)arg2;	// IMP=0x0000000000025783
- (void)_initializeAssertionBookkeeping;	// IMP=0x0000000000025652
- (void)_processAssertionBacklog;	// IMP=0x0000000000024efd
- (void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024d90
- (void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 objectResultHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024be6
- (void)sendAsynchronousMessage:(id)arg1 replyOnQueue:(id)arg2 boolResultHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024b1c
- (id)_sendMessage:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000024a7d
- (id)sendMessage:(id)arg1;	// IMP=0x0000000000024a69
- (id)sendSimpleMessageWithObjectResult:(id)arg1;	// IMP=0x0000000000024994
- (_Bool)sendSimpleMessageWithResult:(id)arg1;	// IMP=0x00000000000248da
- (_Bool)sendSimpleMessage:(id)arg1 enqueueError:(id *)arg2;	// IMP=0x0000000000024850
- (void)sendSimpleMessage:(id)arg1;	// IMP=0x000000000002483c
- (void)dealloc;	// IMP=0x0000000000024741
- (id)init;	// IMP=0x00000000000246d4

@end

