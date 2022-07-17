//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface SSXPCConnection : NSObject
{
    NSObject<OS_xpc_object> *_connection;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    CDUnknownBlockType _disconnectBlock;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_replyQueue;	// 32 = 0x20
    CDUnknownBlockType _messageBlock;	// 40 = 0x28
}

- (void)_reloadEventHandler;	// IMP=0x00000000000b495f
- (void)setReplyQueue:(id)arg1;	// IMP=0x00000000000b48c1
@property(copy) CDUnknownBlockType messageBlock;
@property(copy) CDUnknownBlockType disconnectBlock;
- (void)sendSynchronousMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b4748
- (void)sendMessage:(id)arg1 withReply:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b472d
- (void)sendMessage:(id)arg1;	// IMP=0x00000000000b471c
- (id)copyReplyQueue;	// IMP=0x00000000000b461f
- (id)createXPCEndpoint;	// IMP=0x00000000000b4413
- (void)dealloc;	// IMP=0x00000000000b439f
- (id)initWithXPCConnection:(id)arg1;	// IMP=0x00000000000b4353
- (id)initWithServiceName:(id)arg1;	// IMP=0x00000000000b42f5
- (id)init;	// IMP=0x00000000000b42e1
- (id)_initSSXPCConnection;	// IMP=0x00000000000b4293

@end
