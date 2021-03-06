//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IMRemoteObjectBroadcaster : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

+ (id)defaultBroadcaster;	// IMP=0x00000000000280fd
- (void)flushProxy:(id)arg1;	// IMP=0x0000000000028504
- (void)blockUntilSendQueueIsEmpty;	// IMP=0x000000000002834e
- (id)broadcastProxyForTargets:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3;	// IMP=0x00000000000282df
- (id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 priority:(int)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000028245
- (id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3 priority:(int)arg4;	// IMP=0x0000000000028222
- (id)broadcastProxyForTarget:(id)arg1 messageContext:(id)arg2 protocol:(id)arg3;	// IMP=0x000000000002820d
- (id)_queue;	// IMP=0x0000000000028203
- (void)dealloc;	// IMP=0x00000000000281bc
- (id)init;	// IMP=0x0000000000028142

@end

