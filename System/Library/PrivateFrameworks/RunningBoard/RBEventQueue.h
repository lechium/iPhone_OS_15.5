//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, RBEventQueueEvent;
@protocol OS_dispatch_queue, RBTimeProviding;

@interface RBEventQueue : NSObject
{
    NSMutableArray *_eventQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    id <RBTimeProviding> _timeProvider;	// 24 = 0x18
    double _nextFireTime;	// 32 = 0x20
    _Bool _isTimerRunning;	// 40 = 0x28
    _Bool _isProcessingEvents;	// 41 = 0x29
    _Bool _inModifyBlock;	// 42 = 0x2a
    _Bool _dirtyDuringModify;	// 43 = 0x2b
}

- (void).cxx_destruct;	// IMP=0x00000000000195ff
@property(readonly, nonatomic) NSArray *events; // @synthesize events=_eventQueue;
- (id)description;	// IMP=0x0000000000019250
- (void)removeEvents:(id)arg1;	// IMP=0x0000000000019180
- (void)removeEvent:(id)arg1;	// IMP=0x00000000000190d6
- (void)addEvents:(id)arg1;	// IMP=0x0000000000019006
- (void)addEvent:(id)arg1;	// IMP=0x0000000000018f5c
- (void)batchModify:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018b88
@property(readonly, nonatomic) RBEventQueueEvent *nextEvent;
@property(readonly, nonatomic) unsigned long long count;
- (id)initWithQueue:(id)arg1 timeProvider:(id)arg2;	// IMP=0x0000000000018a6f

@end

