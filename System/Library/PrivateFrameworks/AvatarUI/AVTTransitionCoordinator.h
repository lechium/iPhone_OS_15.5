//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol AVTTransitionScheduler;

@interface AVTTransitionCoordinator : NSObject
{
    double _delay;	// 8 = 0x8
    id <AVTTransitionScheduler> _scheduler;	// 16 = 0x10
    NSMutableArray *_pendingTransitions;	// 24 = 0x18
    NSMutableArray *_runningTransitions;	// 32 = 0x20
}

+ (CDUnknownBlockType)eventHandlerForCoordinator:(id)arg1;	// IMP=0x00000000000a9ded
+ (id)concurrentTransitionCoordinatorWithDelay:(double)arg1;	// IMP=0x00000000000a9d46
+ (id)synchronousTransitionCoordinator;	// IMP=0x00000000000a9ca9
- (void).cxx_destruct;	// IMP=0x00000000000aa84b
@property(readonly, nonatomic) NSMutableArray *runningTransitions; // @synthesize runningTransitions=_runningTransitions;
@property(readonly, nonatomic) NSMutableArray *pendingTransitions; // @synthesize pendingTransitions=_pendingTransitions;
@property(retain, nonatomic) id <AVTTransitionScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
- (void)cancelAllTransitions;	// IMP=0x00000000000aa5ff
- (void)cancelTransitionsMatchingModel:(id)arg1;	// IMP=0x00000000000aa567
- (id)allTransitions;	// IMP=0x00000000000aa4e7
- (id)transitionsMatchingModel:(id)arg1;	// IMP=0x00000000000aa3a7
- (void)startNextTransition;	// IMP=0x00000000000aa132
- (void)didCompleteRunningTransition:(id)arg1;	// IMP=0x00000000000aa05e
- (void)addTransition:(id)arg1;	// IMP=0x00000000000a9fc1
- (void)dealloc;	// IMP=0x00000000000a9f56
- (id)init;	// IMP=0x00000000000a9eb9

@end

