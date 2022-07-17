//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SSPromise;
@protocol OS_dispatch_queue;

@interface SSUniqueExecutionQueue : NSObject
{
    CDUnknownBlockType _block;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callBlockQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_executeBlockQueue;	// 24 = 0x18
    SSPromise *_promise;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_promiseAccessQueue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000295f7
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *promiseAccessQueue; // @synthesize promiseAccessQueue=_promiseAccessQueue;
@property(retain, nonatomic) SSPromise *promise; // @synthesize promise=_promise;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *executeBlockQueue; // @synthesize executeBlockQueue=_executeBlockQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callBlockQueue; // @synthesize callBlockQueue=_callBlockQueue;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028a2e
- (id)initWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000028963

@end
