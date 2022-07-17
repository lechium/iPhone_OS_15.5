//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface SKXPCConnection : NSObject
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    CDUnknownBlockType _disconnectBlock;	// 24 = 0x18
    CDUnknownBlockType _messageBlock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001e1943
- (void)_reloadEventHandler;	// IMP=0x00100000001e16c6
@property(copy) CDUnknownBlockType messageBlock;
@property(copy) CDUnknownBlockType disconnectBlock;
- (void)sendSynchronousMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e140a
- (void)sendMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00100000001e13bf
- (void)sendMessage:(id)arg1;	// IMP=0x00100000001e13ae
- (id)createXPCEndpoint;	// IMP=0x00100000001e11a0
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00100000001e112d
- (id)initWithServiceName:(id)arg1;	// IMP=0x00100000001e10c6
- (id)init;	// IMP=0x00100000001e10b2
- (id)_initSKXPCConnection;	// IMP=0x00100000001e105a

@end
