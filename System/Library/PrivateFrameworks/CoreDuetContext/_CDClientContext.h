//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/_CDAsyncLocalContext-Protocol.h>
#import <CoreDuetContext/_CDAsyncUserContext-Protocol.h>
#import <CoreDuetContext/_CDUserContextServerMonitoring-Protocol.h>

@class NSCountedSet, NSMutableDictionary, NSString, NSXPCConnection, NSXPCListenerEndpoint;
@protocol OS_dispatch_queue, OS_os_log, _CDRemoteUserContextServer;

@interface _CDClientContext : NSObject <_CDAsyncUserContext, _CDAsyncLocalContext, _CDUserContextServerMonitoring>
{
    _Bool _interrupted;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_xpcEventQueue;	// 32 = 0x20
    NSXPCConnection *_xpcConnection;	// 40 = 0x28
    NSXPCListenerEndpoint *_endpoint;	// 48 = 0x30
    NSMutableDictionary *_keyPathToValues;	// 56 = 0x38
    NSMutableDictionary *_registrations;	// 64 = 0x40
    NSCountedSet *_keyPathsWithRegistrationsForAnyChange;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_registrationCallbackQueue;	// 80 = 0x50
    NSMutableDictionary *_openRegistrationTokens;	// 88 = 0x58
    NSObject<OS_os_log> *_log;	// 96 = 0x60
    id <_CDRemoteUserContextServer> _remoteUserContextProxy;	// 104 = 0x68
}

+ (id)userContextWithEndpoint:(id)arg1;	// IMP=0x000000000002389c
+ (id)userContext;	// IMP=0x000000000002382d
+ (id)clientInterface;	// IMP=0x0000000000022da3
+ (id)serverInterface;	// IMP=0x00000000000229c0
- (void).cxx_destruct;	// IMP=0x000000000002c42e
@property(retain, nonatomic) id <_CDRemoteUserContextServer> remoteUserContextProxy; // @synthesize remoteUserContextProxy=_remoteUserContextProxy;
@property(retain, nonatomic) NSObject<OS_os_log> *log; // @synthesize log=_log;
@property(retain, nonatomic) NSMutableDictionary *openRegistrationTokens; // @synthesize openRegistrationTokens=_openRegistrationTokens;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *registrationCallbackQueue; // @synthesize registrationCallbackQueue=_registrationCallbackQueue;
@property(retain, nonatomic) NSCountedSet *keyPathsWithRegistrationsForAnyChange; // @synthesize keyPathsWithRegistrationsForAnyChange=_keyPathsWithRegistrationsForAnyChange;
@property(retain, nonatomic) NSMutableDictionary *registrations; // @synthesize registrations=_registrations;
@property(retain, nonatomic) NSMutableDictionary *keyPathToValues; // @synthesize keyPathToValues=_keyPathToValues;
@property(nonatomic) _Bool interrupted; // @synthesize interrupted=_interrupted;
@property(retain, nonatomic) NSXPCListenerEndpoint *endpoint; // @synthesize endpoint=_endpoint;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *xpcEventQueue; // @synthesize xpcEventQueue=_xpcEventQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *xpcQueue; // @synthesize xpcQueue=_xpcQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)deactivateDevices:(id)arg1 remoteUserContextProxySourceDeviceUUID:(id)arg2;	// IMP=0x000000000002c0e4
- (void)activateDevices:(id)arg1 remoteUserContextProxySourceDeviceUUID:(id)arg2;	// IMP=0x000000000002bef0
- (_Bool)setObject:(id)arg1 lastModifiedDate:(id)arg2 forContextualKeyPath:(id)arg3;	// IMP=0x000000000002bba3
- (id)valuesForKeyPaths:(id)arg1 synchronous:(_Bool)arg2 responseQueue:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002b5c1
- (void)valuesForKeyPaths:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000002b424
- (id)valuesForKeyPaths:(id)arg1;	// IMP=0x000000000002b34c
- (id)valuesForKeyPaths:(id)arg1 inContextsMatchingPredicate:(id)arg2;	// IMP=0x000000000002b109
- (id)localContext;	// IMP=0x000000000002b100
- (_Bool)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 synchronous:(_Bool)arg4 responseQueue:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;	// IMP=0x000000000002aa93
- (void)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 responseQueue:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x000000000002a8be
- (_Bool)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3;	// IMP=0x000000000002a794
- (id)removeObjectsMatchingPredicate:(id)arg1 fromArrayAtKeyPath:(id)arg2 synchronous:(_Bool)arg3 responseQueue:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x000000000002a070
- (void)removeObjectsMatchingPredicate:(id)arg1 fromArrayAtKeyPath:(id)arg2 responseQueue:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000029f1d
- (id)removeObjectsMatchingPredicate:(id)arg1 fromArrayAtKeyPath:(id)arg2;	// IMP=0x0000000000029ed4
- (_Bool)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 synchronous:(_Bool)arg3 responseQueue:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000298e6
- (void)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2 responseQueue:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x000000000002973e
- (_Bool)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2;	// IMP=0x0000000000029654
- (_Bool)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2 synchronous:(_Bool)arg3 responseQueue:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x00000000000290c7
- (void)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2 responseQueue:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000028f1f
- (_Bool)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2;	// IMP=0x0000000000028e35
- (_Bool)setObject:(id)arg1 forContextualKeyPath:(id)arg2 synchronous:(_Bool)arg3 responseQueue:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000028738
- (void)setObject:(id)arg1 forContextualKeyPath:(id)arg2 responseQueue:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000285a4
- (_Bool)setObject:(id)arg1 forContextualKeyPath:(id)arg2;	// IMP=0x00000000000284ca
- (_Bool)setObject:(id)arg1 forKeyedSubscript:(id)arg2;	// IMP=0x00000000000284b8
- (void)handleRegistrationCompleted:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000028324
- (void)handleContextualChange:(id)arg1 info:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000027bb0
- (_Bool)evaluatePredicate:(id)arg1;	// IMP=0x000000000002792b
- (void)deregisterCallback:(id)arg1;	// IMP=0x0000000000027795
- (void)cleanupInternalReferencesToRegistration:(id)arg1;	// IMP=0x0000000000027605
- (void)registerCallback:(id)arg1;	// IMP=0x0000000000026e24
- (void)retryTimes:(int)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0000000000026dd4
- (void)clearCacheForKeyPathsWithFireOnChangeRegistrations:(id)arg1;	// IMP=0x0000000000026bbf
- (void)removeKeyPathsWithRegistrationsForAnyChangeFromRegistration:(id)arg1;	// IMP=0x00000000000268f2
- (void)addKeyPathsWithRegistrationsForAnyChangeFromRegistration:(id)arg1;	// IMP=0x00000000000266dd
- (id)lastModifiedDateForContextualKeyPath:(id)arg1 synchronous:(_Bool)arg2 responseQueue:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000025ed7
- (void)lastModifiedDateForContextualKeyPath:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000025da4
- (id)lastModifiedDateForContextualKeyPath:(id)arg1;	// IMP=0x0000000000025d6b
- (id)objectForKeyedSubscript:(id)arg1;	// IMP=0x0000000000025d59
- (id)objectForContextualKeyPath:(id)arg1 synchronous:(_Bool)arg2 responseQueue:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000025302
- (void)objectForContextualKeyPath:(id)arg1 responseQueue:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000251b8
- (id)objectForContextualKeyPath:(id)arg1;	// IMP=0x000000000002517f
- (void)setCachedValueIfClientHasRegistrations:(id)arg1 forKeyPath:(id)arg2;	// IMP=0x000000000002508f
- (id)cachedValueIfClientHasRegistrationsForKeyPath:(id)arg1;	// IMP=0x0000000000024fbc
- (_Bool)hasKnowledgeOfContextualKeyPath:(id)arg1;	// IMP=0x0000000000024d83
- (void)handleNotificationEvent:(id)arg1;	// IMP=0x0000000000024a9e
- (void)handleRequestActivateDevicesEvent:(id)arg1;	// IMP=0x0000000000024902
- (void)handleFetchProxySourceDeviceUUIDEvent:(id)arg1;	// IMP=0x000000000002473b
- (void)handleKeepAliveEvent:(id)arg1;	// IMP=0x000000000002450d
- (void)handleUnsubscribeFromContextValueNotificationsEvent:(id)arg1;	// IMP=0x0000000000024210
- (void)handleSubscribeToContextValueNotificationsEvent:(id)arg1;	// IMP=0x0000000000023f13
- (void)handleFetchPropertiesEvent:(id)arg1;	// IMP=0x0000000000023c7c
- (void)handleMDCSEvent:(id)arg1;	// IMP=0x0000000000023b89
- (void)subscribeToEventStreams;	// IMP=0x00000000000238ed
- (void)dealloc;	// IMP=0x00000000000237eb
- (id)initWithEndpoint:(id)arg1;	// IMP=0x000000000002351f
- (id)defaultCallbackQueue;	// IMP=0x000000000002349e
- (id)currentConnection;	// IMP=0x0000000000023380
- (void)unprotectedSetUpXPCConnectionWithEndpoint:(id)arg1;	// IMP=0x0000000000022f35

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
