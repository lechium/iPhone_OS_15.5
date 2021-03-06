//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Rapport/NSSecureCoding-Protocol.h>

@class CUTCPServer, CUWiFiManager, NSData, NSString, NSUUID, RPConnection;
@protocol OS_dispatch_queue, OS_nw_listener, OS_nw_path_evaluator, RPMessageable;

@interface RPStreamSession : NSObject <NSSecureCoding>
{
    _Bool _invalidateCalled;	// 8 = 0x8
    _Bool _invalidateDone;	// 9 = 0x9
    NSObject<OS_nw_listener> *_nwListener;	// 16 = 0x10
    NSObject<OS_nw_path_evaluator> *_nwPathEvaluator;	// 24 = 0x18
    unsigned char _ourCurveSK[32];	// 32 = 0x20
    CDUnion_fab80606 _peerIP;	// 64 = 0x40
    int _peerPort;	// 92 = 0x5c
    _Bool _prepareOnly;	// 96 = 0x60
    RPConnection *_rpCnx;	// 104 = 0x68
    CUTCPServer *_tcpServer;	// 112 = 0x70
    _Bool _trafficRegistrationCalled;	// 120 = 0x78
    CUWiFiManager *_wifiManager;	// 128 = 0x80
    _Bool _serverMode;	// 136 = 0x88
    unsigned int _streamFlags;	// 140 = 0x8c
    int _streamSocket;	// 144 = 0x90
    int _streamType;	// 148 = 0x94
    int _streamQoS;	// 152 = 0x98
    unsigned int _trafficFlags;	// 156 = 0x9c
    unsigned long long _delegatedProcessUPID;	// 160 = 0xa0
    CDUnknownBlockType _disconnectHandler;	// 168 = 0xa8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 176 = 0xb0
    CDUnknownBlockType _flowControlWriteChangedHandler;	// 184 = 0xb8
    CDUnknownBlockType _invalidationHandler;	// 192 = 0xc0
    id <RPMessageable> _messenger;	// 200 = 0xc8
    NSUUID *_nwClientID;	// 208 = 0xd0
    CDUnknownBlockType _receivedEventHandler;	// 216 = 0xd8
    CDUnknownBlockType _receivedRequestHandler;	// 224 = 0xe0
    CDUnknownBlockType _connectionReadyHandler;	// 232 = 0xe8
    NSString *_serviceType;	// 240 = 0xf0
    CDUnknownBlockType _statusChangedHandler;	// 248 = 0xf8
    unsigned long long _statusFlags;	// 256 = 0x100
    NSString *_streamID;	// 264 = 0x108
    NSData *_streamKey;	// 272 = 0x110
    NSString *_trafficSessionID;	// 280 = 0x118
    NSString *_destinationString;	// 288 = 0x120
    NSData *_pskData;	// 296 = 0x128
    CDUnknownBlockType _streamAcceptHandler;	// 304 = 0x130
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005afe0
- (void).cxx_destruct;	// IMP=0x0000000000064374
@property(copy, nonatomic) CDUnknownBlockType streamAcceptHandler; // @synthesize streamAcceptHandler=_streamAcceptHandler;
@property(nonatomic) _Bool serverMode; // @synthesize serverMode=_serverMode;
@property(copy, nonatomic) NSData *pskData; // @synthesize pskData=_pskData;
@property(copy, nonatomic) NSString *destinationString; // @synthesize destinationString=_destinationString;
@property(copy, nonatomic) NSString *trafficSessionID; // @synthesize trafficSessionID=_trafficSessionID;
@property(nonatomic) unsigned int trafficFlags; // @synthesize trafficFlags=_trafficFlags;
@property(nonatomic) int streamQoS; // @synthesize streamQoS=_streamQoS;
@property(nonatomic) int streamType; // @synthesize streamType=_streamType;
@property(nonatomic) int streamSocket; // @synthesize streamSocket=_streamSocket;
@property(copy, nonatomic) NSData *streamKey; // @synthesize streamKey=_streamKey;
@property(copy, nonatomic) NSString *streamID; // @synthesize streamID=_streamID;
@property(nonatomic) unsigned int streamFlags; // @synthesize streamFlags=_streamFlags;
@property(readonly, nonatomic) unsigned long long statusFlags; // @synthesize statusFlags=_statusFlags;
@property(copy, nonatomic) CDUnknownBlockType statusChangedHandler; // @synthesize statusChangedHandler=_statusChangedHandler;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(copy, nonatomic) CDUnknownBlockType connectionReadyHandler; // @synthesize connectionReadyHandler=_connectionReadyHandler;
@property(copy, nonatomic) CDUnknownBlockType receivedRequestHandler; // @synthesize receivedRequestHandler=_receivedRequestHandler;
@property(copy, nonatomic) CDUnknownBlockType receivedEventHandler; // @synthesize receivedEventHandler=_receivedEventHandler;
@property(copy, nonatomic) NSUUID *nwClientID; // @synthesize nwClientID=_nwClientID;
@property(retain, nonatomic) id <RPMessageable> messenger; // @synthesize messenger=_messenger;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy, nonatomic) CDUnknownBlockType flowControlWriteChangedHandler; // @synthesize flowControlWriteChangedHandler=_flowControlWriteChangedHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(copy, nonatomic) CDUnknownBlockType disconnectHandler; // @synthesize disconnectHandler=_disconnectHandler;
@property(nonatomic) unsigned long long delegatedProcessUPID; // @synthesize delegatedProcessUPID=_delegatedProcessUPID;
@property(readonly, nonatomic) int flowControlWriteState;
- (void)_updateTrafficRegistrationForDestination:(id)arg1;	// IMP=0x0000000000063fda
- (void)_updateTrafficRegistrationForIP:(const CDUnion_fab80606 *)arg1;	// IMP=0x0000000000063c8e
- (void)_updateTrafficRegistration;	// IMP=0x0000000000063bdc
- (void)sendRequestID:(id)arg1 request:(id)arg2 options:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000639e2
- (void)sendEventID:(id)arg1 event:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000637aa
- (id)_lowLatencySelfAddressString:(id *)arg1;	// IMP=0x00000000000636a0
- (unsigned int)_getSockAddrInterfaceType:(const void *)arg1;	// IMP=0x0000000000063402
- (void)_serverRPConnectionHandleConnectionStarted:(id)arg1;	// IMP=0x0000000000062dfc
- (void)_serverRPConnectionHandleConnectionAccepted:(int)arg1;	// IMP=0x0000000000062cb3
- (void)_serverRPConnectionStartRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000623bb
- (void)_clientRPConnectionStartWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000061d6d
- (void)_clientRPConnectionPrepareResponse:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000006179d
- (void)_clientRPConnectionPrepareWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000613d8
- (void)_serverUDPSocketStartRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000060ccd
- (void)_clientUDPSocketStartResponse:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000060802
- (void)_clientUDPSocketStartWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000602be
- (void)_serverUDPNWPathNextWithEndpoint:(id)arg1 nwInterface:(id)arg2 selfMACData:(id)arg3 peerIP:(CDUnion_fab80606)arg4 peerMACData:(id)arg5 usb:(_Bool)arg6 responseHandler:(CDUnknownBlockType)arg7;	// IMP=0x000000000005fac4
- (void)_serverUDPNWPathStartRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005ec82
- (void)_clientUDPNWPathStartResponse:(id)arg1 options:(id)arg2 localEndpoint:(id)arg3 nwInterface:(id)arg4 selfIPString:(id)arg5 usb:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x000000000005e369
- (void)_clientUDPNWPathNextWithEndpoint:(id)arg1 nwInterface:(id)arg2 selfMACData:(id)arg3 usb:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000005dc5b
- (void)_clientUDPNWPathStartWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000005d238
- (void)_invalidated;	// IMP=0x000000000005d0cc
- (void)_invalidate;	// IMP=0x000000000005cf13
- (void)invalidate;	// IMP=0x000000000005ceaf
- (_Bool)_startServerConnectionAndReturnError:(id *)arg1;	// IMP=0x000000000005c69d
- (void)startServerConnectionWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000005c5b9
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000005c405
- (void)activateForServerRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005c17a
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000005be30
- (void)acceptedByServer;	// IMP=0x000000000005bdcc
- (void)setStreamQoSOnSocket:(int)arg1;	// IMP=0x000000000005bcbc
- (id)descriptionWithLevel:(int)arg1;	// IMP=0x000000000005b6f7
- (id)description;	// IMP=0x000000000005b6e0
- (void)dealloc;	// IMP=0x000000000005b65e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000005b466
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000005b065
- (id)init;	// IMP=0x000000000005afe8

@end

