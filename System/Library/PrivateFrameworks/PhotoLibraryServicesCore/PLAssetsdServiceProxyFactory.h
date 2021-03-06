//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServicesCore/PLXPCAsyncProxyCreating-Protocol.h>
#import <PhotoLibraryServicesCore/PLXPCProxyCreating-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue, PLXPCProxyCreating;

@interface PLAssetsdServiceProxyFactory : NSObject <PLXPCProxyCreating, PLXPCAsyncProxyCreating>
{
    SEL _proxyGetterSelector;	// 8 = 0x8
    id <PLXPCProxyCreating> _serviceProxy;	// 16 = 0x10
    id <PLXPCProxyCreating> _proxyCreating;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000065034
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)addBarrierBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000064f75
- (id)_unboostingRemoteObjectProxy;	// IMP=0x0000000000064f1e
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000064ea1
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000064e24
- (void)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000064d6b
- (id)serviceProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000064c70
- (void)_logReplyError:(id)arg1 withCallStackSymbols:(id)arg2;	// IMP=0x0000000000064ad2
- (id)_inq_createServiceProxyWithCallStackSymbols:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000006441c
- (id)_inq_createServiceProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000064405
- (id)initWithQueue:(id)arg1 proxyCreating:(id)arg2 proxyGetter:(SEL)arg3;	// IMP=0x0000000000064360

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

