//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;

@interface CDMServiceGraphRunner : NSObject
{
    NSOperationQueue *_queue;	// 8 = 0x8
    NSMutableDictionary *_callbackMap;	// 16 = 0x10
    NSMutableDictionary *_operationMap;	// 24 = 0x18
    NSMutableDictionary *_handlerMap;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000024e8e
- (id)getServiceGraphNodeQueue;	// IMP=0x0000000000024e78
- (void)dumpServiceGraphNodeQueue;	// IMP=0x0000000000024874
- (id)getOperationState:(id)arg1;	// IMP=0x00000000000247f2
- (void)waitAll;	// IMP=0x00000000000247dc
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000244fc
- (void)finishHandlerById:(id)arg1;	// IMP=0x00000000000242ee
- (void)cancelHandlerById:(id)arg1 causeByError:(_Bool)arg2;	// IMP=0x0000000000023f16
- (void)cancelHandlerById:(id)arg1;	// IMP=0x0000000000023f02
- (void)cancelHandler:(id)arg1;	// IMP=0x0000000000023eb3
- (void)cancelAllHandlers;	// IMP=0x0000000000023d05
- (void)runHandlerAsync:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023afe
- (void)runHandlerSync:(id)arg1;	// IMP=0x000000000002395d
- (void)resume;	// IMP=0x0000000000023945
- (void)suspend;	// IMP=0x000000000002392a
- (void)dealloc;	// IMP=0x00000000000238fb
- (id)initWithMaxConcurrentCount:(int)arg1;	// IMP=0x00000000000237e4
- (id)init;	// IMP=0x000000000002371f

@end

