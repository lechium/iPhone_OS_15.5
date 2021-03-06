//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface IXSAppInstallObserverManager : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;	// 8 = 0x8
    NSMutableDictionary *_clientToObserverServiceNameMap;	// 16 = 0x10
    NSMutableDictionary *_serviceRespondsToMap;	// 24 = 0x18
    NSMutableDictionary *_serviceToConnectionMap;	// 32 = 0x20
    NSMutableDictionary *_clientToObserverEndpointMap;	// 40 = 0x28
    NSMutableDictionary *_listenerRespondsToMap;	// 48 = 0x30
    NSHashTable *_clientConnections;	// 56 = 0x38
}

+ (id)sharedInstance;	// IMP=0x004000000001d506
- (void).cxx_destruct;	// IMP=0x0020000000022666
@property(readonly, nonatomic) NSHashTable *clientConnections; // @synthesize clientConnections=_clientConnections;
@property(readonly, nonatomic) NSMutableDictionary *listenerRespondsToMap; // @synthesize listenerRespondsToMap=_listenerRespondsToMap;
@property(readonly, nonatomic) NSMutableDictionary *clientToObserverEndpointMap; // @synthesize clientToObserverEndpointMap=_clientToObserverEndpointMap;
@property(readonly, nonatomic) NSMutableDictionary *serviceToConnectionMap; // @synthesize serviceToConnectionMap=_serviceToConnectionMap;
@property(readonly, nonatomic) NSMutableDictionary *serviceRespondsToMap; // @synthesize serviceRespondsToMap=_serviceRespondsToMap;
@property(readonly, nonatomic) NSMutableDictionary *clientToObserverServiceNameMap; // @synthesize clientToObserverServiceNameMap=_clientToObserverServiceNameMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void)promise:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x0010000000022521
- (void)promiseDidCompleteSuccessfully:(id)arg1;	// IMP=0x0010000000022464
- (void)coordinator:(id)arg1 didUpdateProgress:(double)arg2 forPhase:(unsigned long long)arg3 overallProgress:(double)arg4;	// IMP=0x0010000000022374
- (void)coordinator:(id)arg1 canceledWithReason:(id)arg2 client:(unsigned long long)arg3;	// IMP=0x001000000002209a
- (void)coordinatorDidCompleteSuccessfully:(id)arg1 forRecordPromise:(id)arg2;	// IMP=0x0010000000021de5
- (void)coordinatorDidInstallPlaceholder:(id)arg1 forRecordPromise:(id)arg2;	// IMP=0x0010000000021b30
- (void)coordinatorShouldBeginRestoringUserData:(id)arg1;	// IMP=0x0010000000021911
- (void)coordinator:(id)arg1 configuredPromiseDidBeginFulfillment:(unsigned long long)arg2;	// IMP=0x0010000000021693
- (void)coordinatorShouldPause:(id)arg1;	// IMP=0x0010000000021434
- (void)coordinatorShouldResume:(id)arg1;	// IMP=0x00100000000211d5
- (void)shouldPrioritizeAppWithBundleID:(id)arg1 forClientIDs:(id)arg2;	// IMP=0x001000000002111c
- (void)coordinatorShouldPrioritize:(id)arg1;	// IMP=0x0010000000020ebd
- (void)_callHandlerForClientConnections:(CDUnknownBlockType)arg1;	// IMP=0x0010000000020ced
- (void)_messageInterestedServicesForClientIDs:(id)arg1 forMethod:(unsigned long long)arg2 callMethodOnProxy:(CDUnknownBlockType)arg3;	// IMP=0x001000000001ffd9
- (void)_onQueue_callRemoteObjectProxyForServiceEndpoint:(id)arg1 errorHandler:(CDUnknownBlockType)arg2 callHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001fe89
- (id)_onQueue_connectionForObserverEndpoint:(id)arg1;	// IMP=0x001000000001fb7e
- (void)_onQueue_callRemoteObjectProxyForServiceName:(id)arg1 errorHandler:(CDUnknownBlockType)arg2 callHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000001fa3e
- (id)_onQueue_connectionForServiceName:(id)arg1;	// IMP=0x001000000001f42a
- (void)unregisterClientConnection:(id)arg1;	// IMP=0x001000000001f288
- (void)registerClientConnection:(id)arg1;	// IMP=0x001000000001f0e5
- (void)registerListenerEndpoint:(id)arg1 forClientIDs:(id)arg2 respondingToSelectors:(unsigned long long)arg3;	// IMP=0x001000000001ec94
- (void)registerMachServiceName:(id)arg1 forClientIDs:(id)arg2 respondingToSelectors:(unsigned long long)arg3;	// IMP=0x001000000001e7a1
- (void)_saveMapping;	// IMP=0x001000000001e4b4
- (id)init;	// IMP=0x001000000001d61d
@property(readonly, nonatomic) NSURL *saveURL; // @dynamic saveURL;

@end

