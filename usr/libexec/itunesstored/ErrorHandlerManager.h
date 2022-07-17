//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ErrorHandlerManager : NSObject
{
    NSMutableArray *_clients;	// 8 = 0x8
    NSMutableDictionary *_completionBlocks;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_completionQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
}

+ (void)resolveSessionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00400000001b1de1
+ (void)connectHandlerWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001b1da1
+ (void)observeXPCServer:(id)arg1;	// IMP=0x00100000001b1d46
+ (id)errorHandlerManager;	// IMP=0x00100000001b180e
- (void)_resolveSessionWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00200000001b31f9
- (void)_handleMessage:(id)arg1 connection:(id)arg2 withReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b30d7
- (void)_handleMessage:(id)arg1 connection:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001b2fd7
- (void)_connectHandlerWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000001b2524
- (id)_clientForConnection:(id)arg1;	// IMP=0x00100000001b23d6
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x00100000001b1e21
- (void)openSession:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001b188b
- (void)dealloc;	// IMP=0x00100000001b1773
- (id)init;	// IMP=0x00100000001b164f

@end
