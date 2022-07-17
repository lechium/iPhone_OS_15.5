//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoordinationCore/NSXPCListenerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSString, NSXPCListener;
@protocol COServiceAddOnProvider, COServiceDelegate, COServiceListenerProvider, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface COService : NSObject <NSXPCListenerDelegate>
{
    id <COServiceListenerProvider> _listenerProvider;	// 8 = 0x8
    id <COServiceAddOnProvider> _addOnProvider;	// 16 = 0x10
    id <COServiceDelegate> _delegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    NSXPCListener *_listener;	// 40 = 0x28
    NSArray *_clients;	// 48 = 0x30
    NSDictionary *_meshes;	// 56 = 0x38
    NSDictionary *_addOns;	// 64 = 0x40
}

+ (_Bool)_isAllowedClient:(id)arg1;	// IMP=0x000000000004d51c
- (void).cxx_destruct;	// IMP=0x000000000004f70e
@property(copy, nonatomic) NSDictionary *addOns; // @synthesize addOns=_addOns;
@property(copy, nonatomic) NSDictionary *meshes; // @synthesize meshes=_meshes;
@property(copy, nonatomic) NSArray *clients; // @synthesize clients=_clients;
@property(readonly, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) __weak id <COServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) id <COServiceAddOnProvider> addOnProvider; // @synthesize addOnProvider=_addOnProvider;
@property(readonly, nonatomic) id <COServiceListenerProvider> listenerProvider; // @synthesize listenerProvider=_listenerProvider;
- (void)_addOnRemoved:(id)arg1;	// IMP=0x000000000004f650
- (void)_addOnAdded:(id)arg1;	// IMP=0x000000000004f61b
- (void)_clientLost:(id)arg1;	// IMP=0x000000000004f4c8
- (void)_configureServiceInterfacesOnConnection:(id)arg1;	// IMP=0x000000000004f493
- (id)_currentClient;	// IMP=0x000000000004f407
- (id)_clientForConnection:(id)arg1;	// IMP=0x000000000004f1f7
- (id)_addOnForCluster:(id)arg1;	// IMP=0x000000000004f14e
- (id)_clusterForAddOn:(id)arg1;	// IMP=0x000000000004ef33
- (void)_removeMeshForCluster:(id)arg1;	// IMP=0x000000000004ec7b
- (void)_addMesh:(id)arg1 forCluster:(id)arg2;	// IMP=0x000000000004e8c9
- (void)_addOnForCluster:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004e221
- (_Bool)_canRequestCreationOfCluster:(id)arg1;	// IMP=0x000000000004e219
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000004dd37
- (void)removeMeshForCluster:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000004dc30
- (void)addMesh:(id)arg1 forCluster:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000004daf7
- (void)_serviceReady;	// IMP=0x000000000004d506
- (id)initWithListenerProvider:(id)arg1 addOnProvider:(id)arg2 delegate:(id)arg3;	// IMP=0x000000000004d2d8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
