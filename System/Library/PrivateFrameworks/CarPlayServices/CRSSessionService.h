//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarPlayServices/BSServiceConnectionListenerDelegate-Protocol.h>
#import <CarPlayServices/CRSSessionClientToServerInterface-Protocol.h>

@class BSServiceConnectionListener, NSHashTable, NSString;
@protocol BSInvalidatable, OS_dispatch_queue, OS_os_transaction;

@interface CRSSessionService : NSObject <CRSSessionClientToServerInterface, BSServiceConnectionListenerDelegate>
{
    BSServiceConnectionListener *_listener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 16 = 0x10
    NSHashTable *_connections;	// 24 = 0x18
    NSObject<OS_os_transaction> *_idleExitTransaction;	// 32 = 0x20
    id <BSInvalidatable> _watchdogMonitoringAssertion;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000000ad87
@property(retain, nonatomic) id <BSInvalidatable> watchdogMonitoringAssertion; // @synthesize watchdogMonitoringAssertion=_watchdogMonitoringAssertion;
@property(retain, nonatomic) NSObject<OS_os_transaction> *idleExitTransaction; // @synthesize idleExitTransaction=_idleExitTransaction;
@property(retain, nonatomic) NSHashTable *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(retain, nonatomic) BSServiceConnectionListener *listener; // @synthesize listener=_listener;
- (void)_connectionQueue_removeConnection:(id)arg1;	// IMP=0x000000000000aae5
- (void)_connectionQueue_addConnection:(id)arg1;	// IMP=0x000000000000a8df
- (void)listener:(id)arg1 didReceiveConnection:(id)arg2 withContext:(id)arg3;	// IMP=0x000000000000a4e9
- (id)init;	// IMP=0x000000000000a27d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

