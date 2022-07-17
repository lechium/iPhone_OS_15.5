//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXDispatchTimer, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AXRedirectedEventDetector : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableArray *_recentEvents;	// 16 = 0x10
    AXDispatchTimer *_flushEventsTimer;	// 24 = 0x18
}

+ (void)setFlushEventsTimerDelay:(double)arg1;	// IMP=0x00000000000226d6
+ (void)flushEvents;	// IMP=0x00000000000226c9
- (void).cxx_destruct;	// IMP=0x0000000000022696
@property(retain, nonatomic) AXDispatchTimer *flushEventsTimer; // @synthesize flushEventsTimer=_flushEventsTimer;
@property(retain, nonatomic) NSMutableArray *recentEvents; // @synthesize recentEvents=_recentEvents;
- (double)_elapsedTimeFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x00000000000225fd
- (_Bool)isRedirectedEvent:(id)arg1;	// IMP=0x00000000000222a3
- (void)addEvent:(id)arg1;	// IMP=0x000000000002208d
- (void)_flushEventsIfNecessary;	// IMP=0x000000000002203f
- (id)init;	// IMP=0x0000000000021f82

@end
