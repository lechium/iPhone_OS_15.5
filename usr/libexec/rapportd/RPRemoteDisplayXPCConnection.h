//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSXPCConnection, RPConnection, RPRemoteDisplayDaemon, RPRemoteDisplayDiscovery, RPRemoteDisplayServer, RPRemoteDisplaySession;
@protocol OS_dispatch_queue;

@interface RPRemoteDisplayXPCConnection : NSObject
{
    _Bool _entitled;	// 8 = 0x8
    unsigned int _xpcID;	// 12 = 0xc
    RPRemoteDisplayDiscovery *_activatedDiscovery;	// 16 = 0x10
    RPConnection *_activeNetCnx;	// 24 = 0x18
    RPRemoteDisplayServer *_activatedServer;	// 32 = 0x20
    RPRemoteDisplaySession *_activatedSession;	// 40 = 0x28
    RPConnection *_clientNetCnx;	// 48 = 0x30
    RPRemoteDisplayDaemon *_daemon;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 64 = 0x40
    NSMutableSet *_serverNetCnxs;	// 72 = 0x48
    NSXPCConnection *_xpcCnx;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000072176
@property(nonatomic) unsigned int xpcID; // @synthesize xpcID=_xpcID;
@property(readonly, nonatomic) NSXPCConnection *xpcCnx; // @synthesize xpcCnx=_xpcCnx;
@property(retain, nonatomic) NSMutableSet *serverNetCnxs; // @synthesize serverNetCnxs=_serverNetCnxs;
@property(readonly, nonatomic) _Bool entitled; // @synthesize entitled=_entitled;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) RPRemoteDisplayDaemon *daemon; // @synthesize daemon=_daemon;
@property(retain, nonatomic) RPConnection *clientNetCnx; // @synthesize clientNetCnx=_clientNetCnx;
@property(readonly, nonatomic) RPRemoteDisplaySession *activatedSession; // @synthesize activatedSession=_activatedSession;
@property(readonly, nonatomic) RPRemoteDisplayServer *activatedServer; // @synthesize activatedServer=_activatedServer;
@property(retain, nonatomic) RPConnection *activeNetCnx; // @synthesize activeNetCnx=_activeNetCnx;
@property(readonly, nonatomic) RPRemoteDisplayDiscovery *activatedDiscovery; // @synthesize activatedDiscovery=_activatedDiscovery;
- (void)remoteDisplayTryPassword:(id)arg1;	// IMP=0x0010000000071fb6
- (void)remoteDisplaySendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000071e84
- (void)remoteDisplaySendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000071d42
- (void)remoteDisplayInvalidateSessionID:(id)arg1;	// IMP=0x0010000000071c67
- (void)remoteDisplayActivateSession:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000714b1
- (void)remoteDisplayActivateServer:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000710f4
- (void)remoteDisplayActivateDiscovery:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000070e10
- (void)updateErrorFlags:(unsigned long long)arg1;	// IMP=0x0010000000070d01
- (void)_promptForPasswordWithFlags:(unsigned int)arg1 throttleSeconds:(int)arg2;	// IMP=0x0010000000070c4b
- (void)hidePasswordWithFlags:(unsigned int)arg1;	// IMP=0x0010000000070ba6
- (void)showPassword:(id)arg1 flags:(unsigned int)arg2;	// IMP=0x0010000000070ae7
- (void)_authCompletion:(id)arg1;	// IMP=0x0010000000070a34
- (void)_receivedRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4 sessionID:(id)arg5;	// IMP=0x0010000000070775
- (void)_receivedEventID:(id)arg1 event:(id)arg2 options:(id)arg3 sessionID:(id)arg4;	// IMP=0x0010000000070677
- (void)sessionEndedWithID:(id)arg1 netCnx:(id)arg2;	// IMP=0x0010000000070442
- (void)sessionStartWithID:(id)arg1 netCnx:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000007004f
- (_Bool)netConnectionStartWithDevice:(id)arg1 session:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006fa71
- (_Bool)_entitledAndReturnError:(id *)arg1;	// IMP=0x001000000006f94c
- (void)connectionInvalidated;	// IMP=0x001000000006f5a9
- (id)initWithDaemon:(id)arg1 xpcCnx:(id)arg2;	// IMP=0x001000000006f510

@end
