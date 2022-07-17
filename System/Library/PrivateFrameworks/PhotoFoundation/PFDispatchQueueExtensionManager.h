//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoFoundation/PFDispatchQueueExtending-Protocol.h>

@class NSString, PFDispatchQueueExtension;

@interface PFDispatchQueueExtensionManager : NSObject <PFDispatchQueueExtending>
{
    _Atomic unsigned long long _enabledExtensionCount;	// 8 = 0x8
    PFDispatchQueueExtension *_extensions[4];	// 16 = 0x10
    _Atomic _Bool _extensionEnabled[4];	// 48 = 0x30
    unsigned long long _suspendCount;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000002e65e
- (void)queueWillResume:(id)arg1;	// IMP=0x000000000002e602
- (void)queueDidSuspend:(id)arg1;	// IMP=0x000000000002e5a6
- (void)queue:(id)arg1 skippedExecuting:(id)arg2;	// IMP=0x000000000002e50e
- (void)queue:(id)arg1 didExecute:(id)arg2;	// IMP=0x000000000002e476
- (void)queue:(id)arg1 willExecute:(id)arg2;	// IMP=0x000000000002e3de
- (void)queue:(id)arg1 didDequeue:(id)arg2 skipExecution:(CDUnknownBlockType)arg3;	// IMP=0x000000000002e31f
- (void)queue:(id)arg1 willEnqueueAsync:(id)arg2 when:(CDUnknownBlockType)arg3;	// IMP=0x000000000002e260
- (void)queue:(id)arg1 willEnqueueSync:(id)arg2;	// IMP=0x000000000002e1c8
- (id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 notify:(CDUnknownBlockType)arg3;	// IMP=0x000000000002e0d2
- (id)queue:(id)arg1 receivedDispatchGroup:(id)arg2 async:(CDUnknownBlockType)arg3;	// IMP=0x000000000002dfdc
- (id)queue:(id)arg1 receivedDispatchAfter:(CDUnknownBlockType)arg2;	// IMP=0x000000000002df0e
- (id)queue:(id)arg1 receivedDispatchBarrierAsync:(CDUnknownBlockType)arg2;	// IMP=0x000000000002de40
- (id)queue:(id)arg1 receivedDispatchAsync:(CDUnknownBlockType)arg2;	// IMP=0x000000000002dd72
- (id)queue:(id)arg1 receivedDispatchBarrierSync:(CDUnknownBlockType)arg2;	// IMP=0x000000000002dca4
- (id)queue:(id)arg1 receivedDispatchSync:(CDUnknownBlockType)arg2;	// IMP=0x000000000002dbd6
- (void)messageExtensions:(id)arg1 messageBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002dafe
- (id)announce:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d9b0
- (id)extensionMatching:(CDUnknownBlockType)arg1;	// IMP=0x000000000002d93c
- (void)disableExtension:(id)arg1;	// IMP=0x000000000002d8c2
- (void)enableExtension:(id)arg1;	// IMP=0x000000000002d848
- (id)extensions;	// IMP=0x000000000002d80f
- (void)addExtensions:(id)arg1 queue:(id)arg2;	// IMP=0x000000000002d5f2
- (id)queue:(id)arg1 willTargetQueue:(id)arg2;	// IMP=0x000000000002d593
- (void)installOnQueue:(id)arg1;	// IMP=0x000000000002d545
- (id)init;	// IMP=0x000000000002d4fa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
