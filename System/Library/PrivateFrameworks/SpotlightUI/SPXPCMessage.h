//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SPXPCConnection;
@protocol OS_os_transaction, OS_xpc_object;

@interface SPXPCMessage : NSObject
{
    SPXPCConnection *_receivingConnection;	// 8 = 0x8
    NSObject<OS_xpc_object> *_x_reply_connection;	// 16 = 0x10
    NSObject<OS_xpc_object> *_x_message;	// 24 = 0x18
    NSObject<OS_xpc_object> *_x_rootObject;	// 32 = 0x20
    NSObject<OS_xpc_object> *_x_Objects;	// 40 = 0x28
    NSObject<OS_xpc_object> *_x_reply;	// 48 = 0x30
    NSObject<OS_xpc_object> *_x_feedbackData;	// 56 = 0x38
    NSObject<OS_os_transaction> *_replyTransaction;	// 64 = 0x40
    struct os_unfair_lock_s _lock;	// 72 = 0x48
    NSString *_name;	// 80 = 0x50
    NSDictionary *_info;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000047cb
@property(copy, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)needsReply;	// IMP=0x000000000000478f
- (void)sendReply:(id)arg1;	// IMP=0x000000000000467a
- (id)_createXPCMessage;	// IMP=0x00000000000044a9
@property(readonly, nonatomic) NSObject<OS_xpc_object> *feedbackData;
- (void)setRootObjectForFeedback:(id)arg1;	// IMP=0x00000000000043ab
- (id)rootObjectOfClassesForFeedback:(id)arg1;	// IMP=0x00000000000042b4
- (void)setRootObject:(id)arg1;	// IMP=0x00000000000041c4
- (void)setObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000004067
- (id)objectsOfClasses:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000000003f0c
- (id)rootObjectOfClasses:(id)arg1;	// IMP=0x0000000000003e15
- (id)_initWithXPCMessage:(id)arg1 onConnection:(id)arg2;	// IMP=0x0000000000003adb
- (id)initWithName:(id)arg1 batchSize:(unsigned long long)arg2;	// IMP=0x0000000000003a5e
- (id)initWithName:(id)arg1;	// IMP=0x0000000000003a01
- (id)init;	// IMP=0x00000000000039c6

@end

