//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTTaskScheduler-Protocol.h>

@class NSMutableArray, NSString;
@protocol AVTTaskScheduler, OS_dispatch_queue;

@interface AVTCoalescingInvertingTaskScheduler : NSObject <AVTTaskScheduler>
{
    NSMutableArray *_tasks;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_coalescingQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_stateLock;	// 24 = 0x18
    id <AVTTaskScheduler> _backingScheduler;	// 32 = 0x20
    double _coalesingDelay;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000001c375
@property(readonly, nonatomic) double coalesingDelay; // @synthesize coalesingDelay=_coalesingDelay;
@property(readonly, nonatomic) id <AVTTaskScheduler> backingScheduler; // @synthesize backingScheduler=_backingScheduler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock; // @synthesize stateLock=_stateLock;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *coalescingQueue; // @synthesize coalescingQueue=_coalescingQueue;
@property(readonly, nonatomic) NSMutableArray *tasks; // @synthesize tasks=_tasks;
- (void)lowerTaskPriority:(CDUnknownBlockType)arg1;	// IMP=0x000000000001c33c
- (void)cancelTask:(CDUnknownBlockType)arg1;	// IMP=0x000000000001c310
- (void)cancelAllTasks;	// IMP=0x000000000001c2a7
- (void)startTasksFrom:(CDUnknownBlockType)arg1;	// IMP=0x000000000001bf42
- (void)scheduleTask:(CDUnknownBlockType)arg1;	// IMP=0x000000000001bd6d
- (void)performStateWork:(CDUnknownBlockType)arg1;	// IMP=0x000000000001bc7d
- (id)initWithBackingScheduler:(id)arg1 coalescingQueue:(id)arg2 delay:(double)arg3 environment:(id)arg4;	// IMP=0x000000000001bb46

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

