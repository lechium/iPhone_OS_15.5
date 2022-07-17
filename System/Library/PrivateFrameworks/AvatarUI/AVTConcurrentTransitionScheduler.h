//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTTransitionScheduler-Protocol.h>

@class NSTimer;

@interface AVTConcurrentTransitionScheduler : NSObject <AVTTransitionScheduler>
{
    CDUnknownBlockType _eventHandler;	// 8 = 0x8
    NSTimer *_transitionTimer;	// 16 = 0x10
    double _delay;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000ce60e
@property(readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property(retain, nonatomic) NSTimer *transitionTimer; // @synthesize transitionTimer=_transitionTimer;
@property(readonly, copy, nonatomic) CDUnknownBlockType eventHandler; // @synthesize eventHandler=_eventHandler;
- (void)scheduleTransitionTimer;	// IMP=0x00000000000ce3d6
- (void)didCompleteEvent;	// IMP=0x00000000000ce3d0
- (void)stop;	// IMP=0x00000000000ce376
- (void)scheduleEvent;	// IMP=0x00000000000ce304
- (id)initWithEventHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000ce2ef
- (id)initWithEventHandler:(CDUnknownBlockType)arg1 delay:(double)arg2;	// IMP=0x00000000000ce26d

@end
