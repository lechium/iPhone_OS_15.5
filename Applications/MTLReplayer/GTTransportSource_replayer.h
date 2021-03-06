//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTTransport_replayer;
@protocol OS_dispatch_queue;

@interface GTTransportSource_replayer : NSObject
{
    CDUnknownBlockType _messageHandler;	// 8 = 0x8
    CDUnknownBlockType _cancellationHandler;	// 16 = 0x10
    CDUnknownBlockType _registrationHandler;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_mqueue;	// 40 = 0x28
    GTTransport_replayer *_transport;	// 48 = 0x30
    struct atomic<int> _state;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x002000000007a81c
- (void)_dispatch:(id)arg1;	// IMP=0x001000000007a7a1
- (void)_cancel;	// IMP=0x001000000007a702
- (void)_callCancellationHandler;	// IMP=0x001000000007a6c2
- (void)_register;	// IMP=0x001000000007a625
- (void)_callRegistrationHandler;	// IMP=0x001000000007a5f0
@property(copy, nonatomic) CDUnknownBlockType registrationHandler;
- (void)setCancellationHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000007a411
- (CDUnknownBlockType)cancellationHandler;	// IMP=0x001000000007a407
@property(copy, nonatomic) CDUnknownBlockType messageHandler;
- (_Bool)cancelled;	// IMP=0x001000000007a339
- (void)cancel;	// IMP=0x001000000007a2a3
- (void)suspend;	// IMP=0x001000000007a295
- (void)resume;	// IMP=0x001000000007a287
- (void)dealloc;	// IMP=0x001000000007a1ff
- (id)_initWithQueue:(id)arg1 transport:(id)arg2;	// IMP=0x001000000007a00f
- (id)init;	// IMP=0x0010000000079fe4

@end

