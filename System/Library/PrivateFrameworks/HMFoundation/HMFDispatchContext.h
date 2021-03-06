//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HMFoundation/HMFAsyncContext-Protocol.h>

@protocol OS_dispatch_queue;

@interface HMFDispatchContext : NSObject <HMFAsyncContext>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _alwaysDispatch;	// 16 = 0x10
}

+ (void)blessWithImplicitContext:(id)arg1;	// IMP=0x000000000002ef9a
- (void).cxx_destruct;	// IMP=0x000000000002f0a2
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ee1b
@property(readonly) NSObject<OS_dispatch_queue> *queue;
- (void)assertIsExecuting;	// IMP=0x000000000002ede2
- (void)dealloc;	// IMP=0x000000000002eda1
- (id)initWithQueue:(id)arg1 alwaysDispatch:(_Bool)arg2;	// IMP=0x000000000002ed1b
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000002ed07

@end

