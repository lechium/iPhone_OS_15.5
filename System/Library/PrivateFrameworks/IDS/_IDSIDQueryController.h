//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonListenerProtocol-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface _IDSIDQueryController : NSObject <IDSDaemonListenerProtocol>
{
    NSMutableDictionary *_listeners;	// 8 = 0x8
    NSMutableDictionary *_idStatusCache;	// 16 = 0x10
    NSMutableDictionary *_transactionIDToBlockMap;	// 24 = 0x18
    NSObject<OS_xpc_object> *_connection;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    NSString *_serviceToken;	// 56 = 0x38
    NSMapTable *_delegateToInfo;	// 64 = 0x40
    NSMutableDictionary *_listenerIDToServicesMap;	// 72 = 0x48
    id _delegateContext;	// 80 = 0x50
}

+ (id)_createXPCConnectionOnQueue:(id)arg1;	// IMP=0x00000000000ca41e
+ (void)initialize;	// IMP=0x00000000000c7647
- (void).cxx_destruct;	// IMP=0x00000000000dafc0
- (void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3;	// IMP=0x00000000000dac87
- (void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(id)arg4;	// IMP=0x00000000000da87d
- (_Bool)_flushQueryCacheForService:(id)arg1;	// IMP=0x00000000000da737
- (_Bool)_warmupQueryCacheForService:(id)arg1;	// IMP=0x00000000000da49a
- (long long)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3;	// IMP=0x00000000000da456
- (_Bool)_hasCacheForService:(id)arg1;	// IMP=0x00000000000da448
- (_Bool)currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000da42c
- (_Bool)_currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 waitForReply:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000d9aab
- (_Bool)currentIDStatusForDestination:(id)arg1 service:(id)arg2 respectExpiry:(_Bool)arg3 listenerID:(id)arg4 queue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000d98fb
- (_Bool)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 respectExpiry:(_Bool)arg3 listenerID:(id)arg4 queue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000d97b6
- (_Bool)requiredIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000d94ce
- (_Bool)requiredIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000d9499
- (_Bool)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000d91ae
- (_Bool)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 forceRefresh:(_Bool)arg4 queue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000d916e
- (_Bool)_sync_currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d914e
- (_Bool)_sync_currentIDStatusForDestinations:(id)arg1 service:(id)arg2 respectExpiry:(_Bool)arg3 listenerID:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000d9009
- (_Bool)_sync_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d8fd5
- (_Bool)_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRefresh:(_Bool)arg4 respectExpiry:(_Bool)arg5 waitForReply:(_Bool)arg6 forceRefresh:(_Bool)arg7 bypassLimit:(_Bool)arg8 queue:(id)arg9 completionBlock:(CDUnknownBlockType)arg10;	// IMP=0x00000000000d8c1a
- (void)_idStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 allowRenew:(_Bool)arg4 respectExpiry:(_Bool)arg5 waitForReply:(_Bool)arg6 forceRefresh:(_Bool)arg7 bypassLimit:(_Bool)arg8 completionBlock:(CDUnknownBlockType)arg9;	// IMP=0x00000000000d806d
- (void)_setCurrentIDStatus:(long long)arg1 forDestination:(id)arg2 service:(id)arg3;	// IMP=0x00000000000d7ea5
- (id)_delegateMapForListenerID:(id)arg1 service:(id)arg2;	// IMP=0x00000000000d7de3
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1 delegateMap:(id)arg2;	// IMP=0x00000000000d7b7d
- (void)_purgeIDStatusCache;	// IMP=0x00000000000d7aa5
- (void)_purgeIDStatusCacheAfter:(double)arg1;	// IMP=0x00000000000d7937
- (void)_updateCacheWithDictionary:(id)arg1 service:(id)arg2;	// IMP=0x00000000000d76fa
- (id)_cachedStatusForDestination:(id)arg1 service:(id)arg2;	// IMP=0x00000000000d762d
- (id)_cacheForService:(id)arg1;	// IMP=0x00000000000d7617
- (_Bool)_isListenerWithID:(id)arg1 listeningToService:(id)arg2;	// IMP=0x00000000000d74f2
- (void)dealloc;	// IMP=0x00000000000d749f
- (id)initWithDelegateContext:(id)arg1 queueController:(id)arg2;	// IMP=0x00000000000d7387
- (id)init;	// IMP=0x00000000000d72cb
- (_Bool)removeListenerID:(id)arg1 forService:(id)arg2;	// IMP=0x000000000003c92d
- (void)addListenerID:(id)arg1 forService:(id)arg2;	// IMP=0x000000000003c5d5
- (void)daemonDisconnected;	// IMP=0x000000000003c5c3
- (void)IDQueryCompletedWithFromURI:(id)arg1 idStatusUpdates:(id)arg2 service:(id)arg3 success:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000000003c0c1
- (void)_connect;	// IMP=0x000000000003c073
- (void)_callDelegatesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003bdfb
- (void)removeDelegate:(id)arg1;	// IMP=0x000000000003bd84
- (void)addDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000003bc79
- (void)___oldDealloc;	// IMP=0x000000000003bc17
- (id)__sendMessage:(id)arg1 queue:(id)arg2 reply:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4 waitForReply:(_Bool)arg5;	// IMP=0x00000000000c9e2f
- (void)_requestRemoteDevicesForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 waitForReply:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000000c936a
- (void)_requestStatusForDestinations:(id)arg1 service:(id)arg2 waitForReply:(_Bool)arg3 forceRefresh:(_Bool)arg4 bypassLimit:(_Bool)arg5 listenerID:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;	// IMP=0x00000000000c8940
- (void)_requestCachedStatusForDestinations:(id)arg1 service:(id)arg2 waitForReply:(_Bool)arg3 respectExpiry:(_Bool)arg4 listenerID:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;	// IMP=0x00000000000c7fd4
- (void)_requestCacheForService:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000c77d9
- (void)_disconnectFromQueryService;	// IMP=0x00000000000c76d2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
