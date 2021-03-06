//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface NUScheduledQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
    NSMutableArray *_items;	// 24 = 0x18
    double _timerLeeway;	// 32 = 0x20
    double _timerCoalesce;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001fbcdb
@property double timerCoalesce; // @synthesize timerCoalesce=_timerCoalesce;
@property double timerLeeway; // @synthesize timerLeeway=_timerLeeway;
- (void)dispatchAt:(unsigned long long)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000001fb596
- (void)dispatchAfter:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000001fb521
- (void)_dispatchItemsThrough:(unsigned long long)arg1;	// IMP=0x00000000001fb38e
- (void)_timerFired;	// IMP=0x00000000001fb358
- (void)_stopTimer;	// IMP=0x00000000001fb34a
- (void)_startTimer;	// IMP=0x00000000001fb33c
- (void)_scheduleTimer:(unsigned long long)arg1;	// IMP=0x00000000001fb2e9
- (void)dealloc;	// IMP=0x00000000001fb299
- (id)init;	// IMP=0x00000000001fb16b

@end

