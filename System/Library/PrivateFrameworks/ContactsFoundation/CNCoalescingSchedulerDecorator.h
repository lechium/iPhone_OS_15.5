//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNScheduler-Protocol.h>

@class CNStack, NSString;
@protocol CNScheduler;

@interface CNCoalescingSchedulerDecorator : NSObject <CNScheduler>
{
    id <CNScheduler> _scheduler;	// 8 = 0x8
    double _coalescingWindow;	// 16 = 0x10
    unsigned long long _state;	// 24 = 0x18
    CNStack *_delayedBlocks;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004f1f5
@property(copy, nonatomic) CNStack *delayedBlocks; // @synthesize delayedBlocks=_delayedBlocks;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) double coalescingWindow; // @synthesize coalescingWindow=_coalescingWindow;
@property(readonly, nonatomic) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly) double timestamp;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;	// IMP=0x000000000004f05e
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004ef66
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x000000000004ea78
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004ea64
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x000000000004e96e
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004e883
- (void)removeDelayedBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004e7ce
- (void)flushDelayedBlock;	// IMP=0x000000000004e608
- (unsigned long long)getAndIncrementState;	// IMP=0x000000000004e591
- (id)initWithScheduler:(id)arg1 coalescingWindow:(double)arg2;	// IMP=0x000000000004e4e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

