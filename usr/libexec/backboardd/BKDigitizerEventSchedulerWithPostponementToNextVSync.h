//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

@interface BKDigitizerEventSchedulerWithPostponementToNextVSync
{
    NSMutableArray *_blocks;	// 8 = 0x8
    _Bool _dispatchingTouchesOnDisplayLink;	// 16 = 0x10
    double _currentTime;	// 24 = 0x18
}

@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
- (void)_thread_scheduleEventWithBlock:(CDUnknownBlockType)arg1 event:(struct __IOHIDEvent *)arg2 clientTaskPort:(unsigned int)arg3;	// IMP=0x0010000000008e3f
- (void)_thread_displayLinkFired:(id)arg1;	// IMP=0x0010000000008e2d
- (void)_thread_dispatchEventBlockImmediately:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008dd1
- (void)_thread_dispatchPendingEvents:(id)arg1;	// IMP=0x0010000000008c94
- (void)_thread_dispatchEventBlockAtNextVSync:(CDUnknownBlockType)arg1;	// IMP=0x0010000000008c3e
- (_Bool)_thread_shouldDispatchUsingDisplayLinkAtTime:(double)arg1;	// IMP=0x0010000000008be1
- (double)_thread_positionWithinCurrentFrameAtTime:(double)arg1 duration:(double *)arg2;	// IMP=0x0010000000008b55
- (void)dealloc;	// IMP=0x0010000000008aef
- (id)init;	// IMP=0x0010000000008a9c

@end

