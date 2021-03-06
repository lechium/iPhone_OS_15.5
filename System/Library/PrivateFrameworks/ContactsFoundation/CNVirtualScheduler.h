//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNScheduler-Protocol.h>

@class CNQueue, NSString;

@interface CNVirtualScheduler : NSObject <CNScheduler>
{
    unsigned long long _clock;	// 8 = 0x8
    unsigned long long _nextSchedulableTick;	// 16 = 0x10
    unsigned long long _stopTime;	// 24 = 0x18
    CNQueue *_queue;	// 32 = 0x20
    _Bool _isStarted;	// 40 = 0x28
    _Bool _isPerforming;	// 41 = 0x29
}

+ (unsigned long long)timeWithDelay:(double)arg1 fromClock:(unsigned long long)arg2;	// IMP=0x0000000000012a98
+ (id)providerWithScheduler:(id)arg1;	// IMP=0x0000000000012133
- (void).cxx_destruct;	// IMP=0x0000000000012def
@property(readonly, nonatomic) _Bool isPerforming; // @synthesize isPerforming=_isPerforming;
@property(readonly, nonatomic) _Bool isStarted; // @synthesize isStarted=_isStarted;
@property(readonly, nonatomic) CNQueue *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) unsigned long long stopTime; // @synthesize stopTime=_stopTime;
@property(readonly, nonatomic) unsigned long long nextSchedulableTick; // @synthesize nextSchedulableTick=_nextSchedulableTick;
@property(readonly) unsigned long long clock; // @synthesize clock=_clock;
- (_Bool)hasJobsScheduled;	// IMP=0x0000000000012d98
- (void)stop;	// IMP=0x0000000000012d8e
- (_Bool)_performJobs;	// IMP=0x0000000000012bc8
- (void)advanceTo:(unsigned long long)arg1;	// IMP=0x0000000000012b99
- (void)advanceBy:(unsigned long long)arg1;	// IMP=0x0000000000012b83
- (void)start;	// IMP=0x0000000000012b6d
- (unsigned long long)_nextSchedulableTick;	// IMP=0x0000000000012b5c
- (id)_scheduleBlock:(CDUnknownBlockType)arg1 atTime:(unsigned long long)arg2;	// IMP=0x0000000000012b00
@property(readonly) double timestamp;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;	// IMP=0x00000000000128c5
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000128b1
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x0000000000012602
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000125ee
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x0000000000012577
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012563
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000000001229c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

