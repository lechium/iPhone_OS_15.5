//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSXPCConnection.h>

@class EFPromise, NSLock, NSObject, NSXPCInterface, Protocol;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MSXPCConnection : NSXPCConnection
{
    NSLock *_lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    EFPromise *_connectionPromise;	// 24 = 0x18
    NSXPCInterface *_remoteObjectInterface;	// 32 = 0x20
    NSXPCInterface *_exportedInterface;	// 40 = 0x28
    id _exportedObject;	// 48 = 0x30
    CDUnknownBlockType _interruptionHandler;	// 56 = 0x38
    CDUnknownBlockType _invalidationHandler;	// 64 = 0x40
    long long _resumeCount;	// 72 = 0x48
    _Atomic _Bool _locallyInvalidated;	// 80 = 0x50
    _Bool _shouldLaunchMobileMail;	// 81 = 0x51
    Protocol *_protocol;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000000ff8e
@property(nonatomic) _Bool shouldLaunchMobileMail; // @synthesize shouldLaunchMobileMail=_shouldLaunchMobileMail;
@property(readonly, retain, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;
- (void)_sendInvocation:(id)arg1 remoteInterface:(id)arg2 remoteProxy:(id)arg3 errorHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000f345
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f2d6
- (id)remoteObjectProxy;	// IMP=0x000000000000f292
- (unsigned int)effectiveGroupIdentifier;	// IMP=0x000000000000f23a
- (unsigned int)effectiveUserIdentifier;	// IMP=0x000000000000f1e2
- (int)processIdentifier;	// IMP=0x000000000000f18a
- (int)auditSessionIdentifier;	// IMP=0x000000000000f132
- (id)_connection;	// IMP=0x000000000000f0a8
- (void)invalidate;	// IMP=0x000000000000f02f
- (void)suspend;	// IMP=0x000000000000ef94
- (void)resume;	// IMP=0x000000000000eef9
- (void)setInvalidationHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ee73
- (CDUnknownBlockType)invalidationHandler;	// IMP=0x000000000000eded
- (void)setInterruptionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ecb9
- (CDUnknownBlockType)interruptionHandler;	// IMP=0x000000000000ec33
- (void)_queue_invokeInvalidationHandler;	// IMP=0x000000000000eae9
- (void)_invokeInterruptionHandlerForPromise:(id)arg1;	// IMP=0x000000000000e99f
- (CDUnknownBlockType)_nts_wrappedInterruptionHandler;	// IMP=0x000000000000e7db
- (void)_finishPromise:(id)arg1 withConnection:(id)arg2 error:(id)arg3;	// IMP=0x000000000000e730
- (void)_invalidatePromise:(id)arg1;	// IMP=0x000000000000e672
- (id)_connectionForPromise:(id)arg1;	// IMP=0x000000000000e609
- (void)setExportedObject:(id)arg1;	// IMP=0x000000000000e534
- (id)exportedObject;	// IMP=0x000000000000e4c4
- (void)setExportedInterface:(id)arg1;	// IMP=0x000000000000e3ef
- (id)exportedInterface;	// IMP=0x000000000000e37f
- (void)setRemoteObjectInterface:(id)arg1;	// IMP=0x000000000000e2aa
- (id)remoteObjectInterface;	// IMP=0x000000000000e23a
- (id)description;	// IMP=0x000000000000e1de
- (void)dealloc;	// IMP=0x000000000000e163
- (id)initWithProtocol:(id)arg1;	// IMP=0x000000000000dfa7

@end

