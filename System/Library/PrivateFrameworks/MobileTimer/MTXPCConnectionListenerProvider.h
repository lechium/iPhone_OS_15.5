//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MobileTimer/NSXPCListenerDelegate-Protocol.h>

@class MTXPCConnectionInfo, NSArray, NSMutableSet, NSString, NSXPCListener;
@protocol NAScheduler;

@interface MTXPCConnectionListenerProvider : NSObject <NSXPCListenerDelegate>
{
    MTXPCConnectionInfo *_info;	// 8 = 0x8
    id <NAScheduler> _serializer;	// 16 = 0x10
    NSString *_requiredEntitlement;	// 24 = 0x18
    CDUnknownBlockType _errorHandler;	// 32 = 0x20
    NSMutableSet *_clients;	// 40 = 0x28
    NSXPCListener *_connectionListener;	// 48 = 0x30
}

+ (id)providerWithConnectionInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007bc0c
- (void).cxx_destruct;	// IMP=0x000000000007df5a
@property(retain, nonatomic) NSXPCListener *connectionListener; // @synthesize connectionListener=_connectionListener;
@property(retain, nonatomic) NSMutableSet *clients; // @synthesize clients=_clients;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) NSString *requiredEntitlement; // @synthesize requiredEntitlement=_requiredEntitlement;
@property(retain, nonatomic) id <NAScheduler> serializer; // @synthesize serializer=_serializer;
@property(retain, nonatomic) MTXPCConnectionInfo *info; // @synthesize info=_info;
- (void)dealloc;	// IMP=0x000000000007de50
@property(readonly, copy) NSString *description;
- (void)stopListening;	// IMP=0x000000000007dd8b
- (void)_performBlockOnClientInfos:(CDUnknownBlockType)arg1 excludingClient:(id)arg2;	// IMP=0x000000000007dbea
- (void)performBlockOnAllClients:(CDUnknownBlockType)arg1 excludingClient:(id)arg2;	// IMP=0x000000000007da48
- (void)performBlockOnClientInfos:(CDUnknownBlockType)arg1 excludeCurrent:(_Bool)arg2;	// IMP=0x000000000007d8f1
- (void)performBlockOnAllClients:(CDUnknownBlockType)arg1 excludingCurrent:(_Bool)arg2;	// IMP=0x000000000007d819
- (void)performBlockOnAllClients:(CDUnknownBlockType)arg1;	// IMP=0x000000000007d805
- (void)performBlockOnCurrentClient:(CDUnknownBlockType)arg1;	// IMP=0x000000000007d69c
- (id)_currentClientForConnection:(id)arg1;	// IMP=0x000000000007d4ee
- (id)currentClient;	// IMP=0x000000000007d318
- (id)_connectedClients;	// IMP=0x000000000007d2c8
@property(readonly, nonatomic) NSArray *connectedClients;
- (void)removeClientConnection:(id)arg1;	// IMP=0x000000000007cd09
- (void)addClientConnection:(id)arg1 clientLink:(id)arg2;	// IMP=0x000000000007c8d3
- (void)_didInvalidateConnection:(id)arg1;	// IMP=0x000000000007c7c5
- (void)_didInterruptConnection;	// IMP=0x000000000007c6c6
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000007c073
- (void)startListening;	// IMP=0x000000000007beb4
- (id)initWithConnectionInfo:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000007bc82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

