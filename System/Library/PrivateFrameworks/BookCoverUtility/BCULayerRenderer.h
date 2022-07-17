//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARenderer, NSHashTable;
@protocol MTLCommandQueue, MTLDevice, OS_dispatch_queue;

@interface BCULayerRenderer : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_renderQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_completionQueue;	// 24 = 0x18
    NSHashTable *_operations;	// 32 = 0x20
    CARenderer *_renderer;	// 40 = 0x28
    id <MTLDevice> _device;	// 48 = 0x30
    id <MTLCommandQueue> _queue;	// 56 = 0x38
    _Bool _suspended;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000003959
- (void)_disconnectLayer:(id)arg1;	// IMP=0x00000000000037d2
- (void)_processOperations;	// IMP=0x0000000000001b82
- (void)_startOperation:(id)arg1;	// IMP=0x0000000000001940
- (id)newOperationWithPriority:(float)arg1 renderLayer:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000018b9
- (id)newOperationWithPriority:(float)arg1 waitForCPUSynchronization:(_Bool)arg2 renderLayer:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000000182e
- (void)resume;	// IMP=0x00000000000017a5
- (void)suspend;	// IMP=0x000000000000172c
- (id)initWithSuspended:(_Bool)arg1;	// IMP=0x0000000000001611
- (id)init;	// IMP=0x00000000000015fd

@end
