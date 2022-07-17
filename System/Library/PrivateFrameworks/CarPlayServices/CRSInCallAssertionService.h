//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarPlayServices/BSServiceConnectionListenerDelegate-Protocol.h>
#import <CarPlayServices/CRSInCallClientToServerInterface-Protocol.h>

@class BSServiceConnectionListener, CARObserverHashTable, NSHashTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface CRSInCallAssertionService : NSObject <BSServiceConnectionListenerDelegate, CRSInCallClientToServerInterface>
{
    CARObserverHashTable *_observers;	// 8 = 0x8
    BSServiceConnectionListener *_listener;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 24 = 0x18
    NSMutableDictionary *_connections;	// 32 = 0x20
    NSHashTable *_activatedConnections;	// 40 = 0x28
    NSHashTable *_bannersAllowedConnections;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x000000000000639f
- (void).cxx_destruct;	// IMP=0x00000000000078da
@property(retain, nonatomic) NSHashTable *bannersAllowedConnections; // @synthesize bannersAllowedConnections=_bannersAllowedConnections;
@property(retain, nonatomic) NSHashTable *activatedConnections; // @synthesize activatedConnections=_activatedConnections;
@property(retain, nonatomic) NSMutableDictionary *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) BSServiceConnectionListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) CARObserverHashTable *observers; // @synthesize observers=_observers;
- (void)_connectionQueue_removeConnection:(id)arg1;	// IMP=0x0000000000007458
- (void)_connectionQueue_addConnection:(id)arg1;	// IMP=0x00000000000072e1
- (oneway void)setAllowsBanners:(id)arg1;	// IMP=0x0000000000006f09
- (oneway void)presentInCallService;	// IMP=0x0000000000006c52
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x0000000000006821
- (void)removeObserver:(id)arg1;	// IMP=0x0000000000006804
- (void)addObserver:(id)arg1 notifyIfNeeded:(_Bool)arg2;	// IMP=0x00000000000066c7
- (void)addObserver:(id)arg1;	// IMP=0x00000000000066b3
- (id)_init;	// IMP=0x0000000000006404

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
