//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUtils/NSXPCListenerDelegate-Protocol.h>

@class CUMessageSession, NSMutableSet, NSString, NSXPCListener, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue;

@interface CUMessageSessionServer : NSObject <NSXPCListenerDelegate>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    CDUnknownBlockType _registerRequestHandler;	// 16 = 0x10
    CDUnknownBlockType _deregisterRequestHandler;	// 24 = 0x18
    CDUnknownBlockType _sendRequestHandler;	// 32 = 0x20
    NSMutableSet *_xpcConnections;	// 40 = 0x28
    NSXPCListenerEndpoint *_xpcEndpoint;	// 48 = 0x30
    NSXPCListener *_xpcListener;	// 56 = 0x38
    CDUnknownBlockType _invalidationHandler;	// 64 = 0x40
    CUMessageSession *_templateSession;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000007109d
@property(retain, nonatomic) CUMessageSession *templateSession; // @synthesize templateSession=_templateSession;
@property(copy, nonatomic) CDUnknownBlockType sendRequestHandler; // @synthesize sendRequestHandler=_sendRequestHandler;
@property(copy, nonatomic) CDUnknownBlockType deregisterRequestHandler; // @synthesize deregisterRequestHandler=_deregisterRequestHandler;
@property(copy, nonatomic) CDUnknownBlockType registerRequestHandler; // @synthesize registerRequestHandler=_registerRequestHandler;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_connectionInvalidated:(id)arg1;	// IMP=0x0000000000070fa6
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0000000000070d84
- (void)invalidate;	// IMP=0x0000000000070b88
- (void)activate;	// IMP=0x00000000000709ef
- (id)init;	// IMP=0x0000000000070981

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

