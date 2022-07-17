//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDCAMDEmbeddedDeviceClientProxy-Protocol.h>
#import <HomeKitDaemon/HMDCAMDEmbeddedDeviceServerProxy-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCAMDBlockManager, NSString, NSXPCConnection;

@interface HMDCAMDEmbeddedDeviceService <HMDCAMDEmbeddedDeviceServerProxy, HMDCAMDEmbeddedDeviceClientProxy, HMFLogging>
{
    NSXPCConnection *_connection;	// 16 = 0x10
    unsigned long long _backoffTimer;	// 24 = 0x18
    _Bool _isRoot;	// 32 = 0x20
    _Bool _isValid;	// 33 = 0x21
    _Bool _directInvocations;	// 34 = 0x22
    unsigned long long _requestTimeout;	// 40 = 0x28
    CDUnknownBlockType _interruptionHandler;	// 48 = 0x30
    CDUnknownBlockType _invalidationHandler;	// 56 = 0x38
    HMDCAMDBlockManager *_blockInvoker;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x000000000058f706
+ (void)confirmSemaphoreAndSignal:(id)arg1;	// IMP=0x000000000058f5c5
- (void).cxx_destruct;	// IMP=0x000000000058e806
@property(readonly) HMDCAMDBlockManager *blockInvoker; // @synthesize blockInvoker=_blockInvoker;
@property(copy) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property unsigned long long requestTimeout; // @synthesize requestTimeout=_requestTimeout;
@property _Bool directInvocations; // @synthesize directInvocations=_directInvocations;
@property(readonly) _Bool isValid; // @synthesize isValid=_isValid;
@property(readonly) _Bool isRoot; // @synthesize isRoot=_isRoot;
- (id)logIdentifier;	// IMP=0x000000000058e72d
- (void)_testCommunication:(CDUnknownBlockType)arg1;	// IMP=0x000000000058e71a
- (void)_performCommandFromClass:(id)arg1 method:(id)arg2 arguments:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000058e447
- (void)_removeActualBlockForKey:(id)arg1;	// IMP=0x000000000058e31d
- (void)_fireActualBlockWithArguments:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000058e1fa
- (_Bool)testCommunication;	// IMP=0x000000000058e02a
- (id)performCommandFromClass:(id)arg1 method:(id)arg2 arguments:(id)arg3 error:(id *)arg4;	// IMP=0x000000000058dc42
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000058db93
- (id)remoteObjectProxy;	// IMP=0x000000000058db7f
- (void)resetConnection;	// IMP=0x000000000058d9f8
- (void)start;	// IMP=0x000000000058d5b5
- (void)blockReleased:(id)arg1;	// IMP=0x000000000058d501
- (void)dealloc;	// IMP=0x000000000058d457
- (id)initAsMobile;	// IMP=0x000000000058d445
- (id)initAsRoot;	// IMP=0x000000000058d42e
- (id)init;	// IMP=0x000000000058d41a
- (id)_initAsRoot:(_Bool)arg1;	// IMP=0x000000000058d30d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
