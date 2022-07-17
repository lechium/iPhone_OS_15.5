//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKitDaemon/CKDSystemAvailabilityWatcher-Protocol.h>
#import <CloudKitDaemon/CKDXPCConnectionMuxer-Protocol.h>

@class CKCoalescer, CKDProcessScopedClientProxy, NSArray, NSHashTable, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSPointerArray, NSString, NSXPCConnection;

@interface CKDXPCConnection : NSObject <CKDSystemAvailabilityWatcher, CKDXPCConnectionMuxer>
{
    NSXPCConnection *_xpcConnection;	// 8 = 0x8
    NSHashTable *_sharedContainers;	// 16 = 0x10
    unsigned long long _keepAlive;	// 24 = 0x18
    CKCoalescer *_activityCoalescer;	// 32 = 0x20
    CKDProcessScopedClientProxy *_processScopedClientProxy;	// 40 = 0x28
    NSMutableDictionary *_logicalDeviceScopedClientProxiesByDeviceReference;	// 48 = 0x30
    NSMutableSet *_allDeviceContexts;	// 56 = 0x38
    NSPointerArray *_allContainerPointers;	// 64 = 0x40
    NSOperationQueue *_systemAvailableQueue;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000001ed87d
@property(retain, nonatomic) NSOperationQueue *systemAvailableQueue; // @synthesize systemAvailableQueue=_systemAvailableQueue;
@property(retain, nonatomic) NSPointerArray *allContainerPointers; // @synthesize allContainerPointers=_allContainerPointers;
@property(retain, nonatomic) NSMutableSet *allDeviceContexts; // @synthesize allDeviceContexts=_allDeviceContexts;
@property(retain, nonatomic) NSMutableDictionary *logicalDeviceScopedClientProxiesByDeviceReference; // @synthesize logicalDeviceScopedClientProxiesByDeviceReference=_logicalDeviceScopedClientProxiesByDeviceReference;
@property(retain, nonatomic) CKDProcessScopedClientProxy *processScopedClientProxy; // @synthesize processScopedClientProxy=_processScopedClientProxy;
@property(readonly, nonatomic) CKCoalescer *activityCoalescer; // @synthesize activityCoalescer=_activityCoalescer;
@property(nonatomic) unsigned long long keepAlive; // @synthesize keepAlive=_keepAlive;
@property(retain, nonatomic) NSHashTable *sharedContainers; // @synthesize sharedContainers=_sharedContainers;
@property(retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)getLogicalDeviceScopedClientProxyCreatorForTestDeviceReference:(id)arg1 synchronous:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ed65d
- (void)getProcessScopedClientProxyCreatorSynchronous:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ed3d5
- (void)tearDown;	// IMP=0x00000000001ed1b1
@property(readonly, nonatomic) NSArray *allContainers;
- (id)logicalDeviceScopedClientProxyForDeviceContext:(id)arg1;	// IMP=0x00000000001ece18
- (void)getTestAdminDaemonProxyCreatorWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ecc54
- (void)getProcessScopedDaemonProxyCreatorWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ecb58
- (void)getLogicalDeviceScopedDaemonProxyCreatorForTestDeviceReference:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ec972
- (void)getContainerScopedDaemonProxyCreatorForSetupInfo:(id)arg1 containerScopedClientProxy:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001ec747
- (void)noteClientProcessScopedMetadata:(id)arg1;	// IMP=0x00000000001ec4f6
- (_Bool)systemAvailabilityChanged:(unsigned long long)arg1;	// IMP=0x00000000001ec295
- (_Bool)canRunGivenAvailabilityState:(unsigned long long)arg1;	// IMP=0x00000000001ec017
- (id)containerFromSetupInfo:(id)arg1 containerScopedClientProxy:(id)arg2 outError:(id *)arg3;	// IMP=0x00000000001eaca2
- (void)allowToClose;	// IMP=0x00000000001eaaa1
- (void)keepOpen;	// IMP=0x00000000001ea930
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(_Bool)arg3;	// IMP=0x00000000001ea8de
- (void)dealloc;	// IMP=0x00000000001ea89a
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00000000001ea192

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
