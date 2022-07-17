//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFCore/AVDelegateStorage-Protocol.h>

@class AVWeakReference, NSString;
@protocol OS_dispatch_queue;

@interface AVWeakReferencingDelegateStorage : NSObject <AVDelegateStorage>
{
    NSObject<OS_dispatch_queue> *_delegateReadWriteQueue;	// 8 = 0x8
    struct OpaqueConcurrentAccessDetector *_detectorForWeakReferenceToDelegate;	// 16 = 0x10
    AVWeakReference *_weakReferenceToDelegate;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 32 = 0x20
}

+ (void)initialize;	// IMP=0x00000000000e0293
- (void)invokeDelegateCallbackWithBlock:(CDUnknownBlockType)arg1 synchronouslyIfDelegateQueueIsQueue:(id)arg2;	// IMP=0x00000000000e0866
- (void)invokeDelegateCallbackWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e0852
- (void)setDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x00000000000e06f0
- (void)getRetainedDelegate:(id *)arg1 retainedDelegateQueue:(id *)arg2;	// IMP=0x00000000000e0509
- (void)_setDelegateViaWeakReference:(id)arg1;	// IMP=0x00000000000e04a3
- (id)_delegate;	// IMP=0x00000000000e0444
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property(readonly, nonatomic) id delegate;
- (void)dealloc;	// IMP=0x00000000000e0380
- (void)_collectUncollectables;	// IMP=0x00000000000e0344
- (id)init;	// IMP=0x00000000000e02a4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
