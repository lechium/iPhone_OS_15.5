//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface MailXPCServices : NSObject
{
    NSObject<OS_xpc_object> *_listener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableDictionary *_services;	// 24 = 0x18
    NSMutableArray *_connections;	// 32 = 0x20
    NSLock *_connectionsLock;	// 40 = 0x28
}

+ (id)sharedServer;	// IMP=0x004000000003f7d5
+ (id)log;	// IMP=0x001000000003f6f8
- (void).cxx_destruct;	// IMP=0x002000000004134a
- (void)_enumerateServiceClasses:(CDUnknownBlockType)arg1;	// IMP=0x0010000000041208
- (Class)_serviceClassForName:(id)arg1;	// IMP=0x001000000004107f
- (void)registerServiceClass:(Class)arg1;	// IMP=0x0010000000040e76
- (void)_dispatchMessage:(id)arg1 onQueue:(id)arg2 connectionState:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000040364
- (_Bool)_connection:(id)arg1 hasEntitlement:(id)arg2;	// IMP=0x001000000004035c
- (void)_registerConnection:(id)arg1;	// IMP=0x001000000003fdce
- (void)stop;	// IMP=0x001000000003fc5c
- (void)start;	// IMP=0x001000000003f9b9
- (void)dealloc;	// IMP=0x001000000003f93f
- (id)init;	// IMP=0x001000000003f85a

@end

