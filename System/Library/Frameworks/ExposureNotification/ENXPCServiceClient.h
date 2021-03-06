//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface ENXPCServiceClient : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSObject<OS_xpc_object> *_xpcConnection;	// 16 = 0x10
    _Bool _invalidated;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    NSObject<OS_xpc_object> *_testListenerEndpoint;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000002de46
@property(retain, nonatomic) NSObject<OS_xpc_object> *testListenerEndpoint; // @synthesize testListenerEndpoint=_testListenerEndpoint;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_xpcReceivedEvent:(id)arg1;	// IMP=0x000000000002dca0
- (id)_ensureXPCStartedAndReturnError:(id *)arg1;	// IMP=0x000000000002dae4
- (id)getXPCConnectionAndReturnError:(id *)arg1;	// IMP=0x000000000002da90
- (void)_invalidateForced:(_Bool)arg1;	// IMP=0x000000000002d9e2
- (void)invalidate;	// IMP=0x000000000002d9cb
- (void)dealloc;	// IMP=0x000000000002d988
- (id)init;	// IMP=0x000000000002d91a

@end

