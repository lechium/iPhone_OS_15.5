//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TURepeatingAction;
@protocol OS_dispatch_queue;

@interface TURepeatingActor : NSObject
{
    _Bool _stopped;	// 8 = 0x8
    _Bool _currentlyPerformingAction;	// 9 = 0x9
    struct os_unfair_lock_s _accessorLock;	// 12 = 0xc
    TURepeatingAction *_currentRepeatingAction;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    TURepeatingAction *_pendingRepeatingAction;	// 32 = 0x20
    CDUnknownBlockType _attemptNextIterationBlock;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000022500
@property(copy, nonatomic) CDUnknownBlockType attemptNextIterationBlock; // @synthesize attemptNextIterationBlock=_attemptNextIterationBlock;
@property(retain, nonatomic) TURepeatingAction *pendingRepeatingAction; // @synthesize pendingRepeatingAction=_pendingRepeatingAction;
@property(nonatomic, getter=isCurrentlyPerformingAction) _Bool currentlyPerformingAction; // @synthesize currentlyPerformingAction=_currentlyPerformingAction;
@property(nonatomic, getter=isStopped) _Bool stopped; // @synthesize stopped=_stopped;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) struct os_unfair_lock_s accessorLock; // @synthesize accessorLock=_accessorLock;
- (void)_completeWithDidFinish:(_Bool)arg1;	// IMP=0x0000000000022308
- (void)_stopWithDidFinish:(_Bool)arg1;	// IMP=0x0000000000022205
- (_Bool)_hasIterationsRemaining;	// IMP=0x000000000002214d
- (void)_attemptNextIteration;	// IMP=0x0000000000021ca2
- (void)_beginRepeatingAction:(id)arg1;	// IMP=0x0000000000021bc5
- (void)stop;	// IMP=0x0000000000021b3c
- (void)beginRepeatingAction:(CDUnknownBlockType)arg1 iterations:(unsigned long long)arg2 pauseDurationBetweenIterations:(double)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000021976
- (void)beginRepeatingAction:(CDUnknownBlockType)arg1 iterations:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000021961
@property(readonly, nonatomic, getter=isRunning) _Bool running;
@property(retain, nonatomic) TURepeatingAction *currentRepeatingAction; // @synthesize currentRepeatingAction=_currentRepeatingAction;
- (id)init;	// IMP=0x0000000000021810

@end
