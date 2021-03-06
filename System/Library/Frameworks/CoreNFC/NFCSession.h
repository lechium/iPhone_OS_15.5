//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSString, NSXPCConnection, NSXPCInterface;
@protocol NFCSessionCallbacks, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NFCSession : NSObject
{
    NSLock *_connectionLock;	// 8 = 0x8
    NSXPCConnection *_connection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_xpcQueue;	// 24 = 0x18
    NSXPCInterface *_remoteObjectInterface;	// 32 = 0x20
    NSXPCInterface *_exportedObjectInterface;	// 40 = 0x28
    NSString *_machServiceName;	// 48 = 0x30
    id _exportedObject;	// 56 = 0x38
    id <NFCSessionCallbacks> _delegate;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000000f188
- (void)_invalidate;	// IMP=0x000000000000f105
- (_Bool)_connectIfNeeded;	// IMP=0x000000000000eb27
- (id)_exportedObjectClassName;	// IMP=0x000000000000eacb
- (id)_connectionLock;	// IMP=0x000000000000eabd
- (void)_setConnection:(id)arg1;	// IMP=0x000000000000eaac
- (id)_connection;	// IMP=0x000000000000ea87
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ea04
- (void)dealloc;	// IMP=0x000000000000e9c6
- (id)initWithMachServiceName:(id)arg1 remoteObjectInterface:(id)arg2 exportedObjectInterface:(id)arg3 exportedObject:(id)arg4 delegate:(id)arg5;	// IMP=0x000000000000e860

@end

