//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSAction;
@protocol OS_dispatch_queue;

@interface BSBlockSentinel : NSObject
{
    BSAction *_sentinelAction;	// 8 = 0x8
    CDUnknownBlockType _handler;	// 16 = 0x10
    unsigned long long _count;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_internalQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_explicitQueue;	// 40 = 0x28
}

+ (id)sentinelWithSignalCount:(unsigned long long)arg1 exceptionReason:(id)arg2;	// IMP=0x0000000000050c5e
+ (id)sentinelWithExceptionReason:(id)arg1;	// IMP=0x0000000000050c34
+ (id)sentinelWithQueue:(id)arg1 signalCount:(unsigned long long)arg2 signalHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000050ba1
+ (id)sentinelWithQueue:(id)arg1 signalHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000050b77
+ (id)sentinelWithQueue:(id)arg1 signalCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000506c1
+ (id)sentinelWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000050697
- (void).cxx_destruct;	// IMP=0x00000000000511af
- (_Bool)signalWithContext:(id)arg1;	// IMP=0x0000000000050f3d
- (_Bool)signal;	// IMP=0x0000000000050f29

@end

