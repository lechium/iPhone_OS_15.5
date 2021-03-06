//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoFoundation/PFDispatchQueueRunBlock-Protocol.h>

@class PFDispatchQueue, PFDispatchQueueExtensionManager, PFSerialQueue;

@interface PFExtendedDispatchQueue <PFDispatchQueueRunBlock>
{
    PFDispatchQueue *_queue;	// 8 = 0x8
    PFSerialQueue *_requestSerializer;	// 16 = 0x10
    PFDispatchQueueExtensionManager *_extensionManager;	// 24 = 0x18
    unsigned long long _suspendCount;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000c473
- (id)forwardingTargetForSelector:(SEL)arg1;	// IMP=0x000000000000c3c0
- (_Bool)assertNotOnQueue;	// IMP=0x000000000000c3a0
- (_Bool)assertQueueBarrier;	// IMP=0x000000000000c380
- (_Bool)assertOnQueue;	// IMP=0x000000000000c360
- (void)setTargetQueue:(id)arg1;	// IMP=0x000000000000c332
- (id)_dispatchQueueForSetTargetQueue;	// IMP=0x000000000000c315
- (unsigned int)qualityOfService;	// IMP=0x000000000000c2f8
- (void *)getSpecific:(void *)arg1;	// IMP=0x000000000000c2db
- (void)setSpecific:(void *)arg1 forKey:(void *)arg2;	// IMP=0x000000000000c2be
- (void)resume;	// IMP=0x000000000000c23e
- (void)suspend;	// IMP=0x000000000000c1b0
- (const char *)label;	// IMP=0x000000000000c193
- (void)dispatchGroup:(id)arg1 notify:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c07f
- (void)dispatchGroup:(id)arg1 async:(CDUnknownBlockType)arg2;	// IMP=0x000000000000bf6b
- (void)dispatchAfter:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000000be77
- (void)dispatchBarrierAsyncWithQOS:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000000bd7c
- (void)dispatchAsyncWithQOS:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000000bc81
- (void)dispatchBarrierAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000000000bb93
- (void)dispatchBarrierSync:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ba36
- (void)dispatchAsync:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b948
- (void)dispatchSync:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b7eb
- (void)_performAsyncNotify:(id)arg1 enqueueBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000b623
- (void)_invoke:(CDUnknownBlockType)arg1 extensionDataArray:(id)arg2;	// IMP=0x000000000000b4d5
- (id)extensionMatching:(CDUnknownBlockType)arg1;	// IMP=0x000000000000b4b8
- (void)disableExtension:(id)arg1;	// IMP=0x000000000000b49b
- (void)enableExtension:(id)arg1;	// IMP=0x000000000000b47e
- (void)resumeRequests;	// IMP=0x000000000000b461
- (void)suspendRequests;	// IMP=0x000000000000b444
- (id)_extensionManager;	// IMP=0x000000000000b42f
- (id)wrappedQueue;	// IMP=0x000000000000b41a
- (id)description;	// IMP=0x000000000000b210
- (void)addExtensions:(id)arg1;	// IMP=0x000000000000b1a3
- (id)initWithQueue:(id)arg1;	// IMP=0x000000000000b07b
- (id)_extensionsForTargetingQueue;	// IMP=0x000000000000b073
- (id)dispatchCancellableGroup:(id)arg1 notify:(CDUnknownBlockType)arg2;	// IMP=0x000000000000afe3
- (id)dispatchCancellableAfterInterval:(double)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000000afa7
- (id)dispatchCancellableAfterDelay:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000000af2c
- (id)dispatchCancellable:(CDUnknownBlockType)arg1;	// IMP=0x000000000000aec0
- (void)dispatchAfterInterval:(double)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ae67
- (void)dispatchAfterDelay:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000000ae18
- (void)removeAllQueuedBlocksAndWait;	// IMP=0x0000000000004e43
- (void)removeAllQueuedBlocks;	// IMP=0x0000000000004e25
- (void)runBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000017080
- (_Bool)onQueue;	// IMP=0x0000000000017026

@end

