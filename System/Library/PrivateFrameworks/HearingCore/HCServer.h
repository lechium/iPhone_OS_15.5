//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol AXHeardServerDelegate, AXHeardServerMessageDelegate, OS_dispatch_queue, OS_xpc_object;

@interface HCServer : NSObject
{
    _Bool _deadConnection;	// 8 = 0x8
    id <AXHeardServerDelegate> _delegate;	// 16 = 0x10
    id <AXHeardServerMessageDelegate> _messageDelegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 32 = 0x20
    NSObject<OS_xpc_object> *_xpcConnection;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000005044
@property(nonatomic) _Bool deadConnection; // @synthesize deadConnection=_deadConnection;
@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(nonatomic) __weak id <AXHeardServerMessageDelegate> messageDelegate; // @synthesize messageDelegate=_messageDelegate;
@property(nonatomic) __weak id <AXHeardServerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleMessageError:(id)arg1 destructive:(_Bool)arg2;	// IMP=0x0000000000004f00
- (void)handleMessageWithPayload:(id)arg1 forIdentifier:(unsigned long long)arg2;	// IMP=0x0000000000004e51
- (void)sendMessageWithPayload:(id)arg1 andIdentifier:(unsigned long long)arg2;	// IMP=0x0000000000004cf3
- (void)sendSynchronousMessageWithPayload:(id)arg1 andIdentifier:(unsigned long long)arg2;	// IMP=0x0000000000004b22
- (id)setupServerIfNecessary;	// IMP=0x0000000000004754
- (void)handleReply:(id)arg1;	// IMP=0x0000000000004185
@property(readonly, nonatomic) _Bool isConnected;
- (_Bool)shouldRestartOnInterruption;	// IMP=0x000000000000414a
- (void)resetConnection;	// IMP=0x0000000000004001
- (void)terminateConnectionAndNotify:(_Bool)arg1;	// IMP=0x0000000000003dac
- (void)startServerWithDelegate:(id)arg1;	// IMP=0x0000000000003d9a
- (void)dealloc;	// IMP=0x0000000000003d57
- (id)init;	// IMP=0x0000000000003cbe

@end
