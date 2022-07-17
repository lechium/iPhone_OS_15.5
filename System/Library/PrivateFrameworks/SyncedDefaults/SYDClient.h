//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface SYDClient : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_xpc_object> *_connection;	// 16 = 0x10
    NSString *_bundleIdentifier;	// 24 = 0x18
    NSString *_storeIdentifier;	// 32 = 0x20
    _Bool _additionalSource;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000023e6
- (void)sendMessageWithName:(id)arg1 userInfo:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000000236e
- (void)sendMessageWithName:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000022f9
- (id)sendMessageWithName:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000002282
- (void)sendMessageWithName:(id)arg1;	// IMP=0x000000000000223c
- (void)_sendMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000001c51
- (void)_sendMessageNoReply:(id)arg1;	// IMP=0x0000000000001a78
- (id)_sendMessageWithReplySync:(id)arg1;	// IMP=0x00000000000015b8
- (id)_newMessageWithName:(id)arg1 userInfo:(id)arg2;	// IMP=0x0000000000001467
- (void)shutdown;	// IMP=0x00000000000013e8
- (void)_resetConnection;	// IMP=0x00000000000013b2
- (void)_createConnectionIfNecessary;	// IMP=0x000000000000116e
- (id)initWithQueue:(id)arg1 bundleIdentifier:(struct __CFString *)arg2 storeIdentifier:(struct __CFString *)arg3;	// IMP=0x0000000000001159
- (id)initWithQueue:(id)arg1 bundleIdentifier:(struct __CFString *)arg2 storeIdentifier:(struct __CFString *)arg3 additionalSource:(_Bool)arg4;	// IMP=0x0000000000001075

@end
