//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, NSXPCConnection, NSXPCInterface;

@interface PREXPCClientHelpers : NSObject
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _connLock;	// 8 = 0x8
    NSXPCConnection *_conn;	// 72 = 0x48
    NSString *_serviceName;	// 80 = 0x50
    NSXPCInterface *_whitelistedServerInterface;	// 88 = 0x58
    id _clientExportedObject;	// 96 = 0x60
    CDUnknownBlockType _interruptionHandler;	// 104 = 0x68
    CDUnknownBlockType _invalidationHandler;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000000f63f
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000f5c8
- (id)remoteObjectProxy;	// IMP=0x000000000000f568
- (void)_locked_establishConnection;	// IMP=0x000000000000f352
- (void)dealloc;	// IMP=0x000000000000f318
- (id)initWithServiceName:(id)arg1 whitelistedServerInterface:(id)arg2 clientExportedObject:(id)arg3 interruptionHandler:(CDUnknownBlockType)arg4 invalidationHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000f1f6

@end

