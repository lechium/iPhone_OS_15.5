//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperationQueue;

@interface OperationQueueInvocationTrampoline
{
    NSOperationQueue *_queue;	// 16 = 0x10
    long long _priority;	// 24 = 0x18
}

- (void)forwardInvocation:(id)arg1;	// IMP=0x00000000000180f6
- (void)dealloc;	// IMP=0x00000000000180b4
- (id)initWithTarget:(id)arg1 operationQueue:(id)arg2 priority:(long long)arg3;	// IMP=0x0000000000018031

@end

