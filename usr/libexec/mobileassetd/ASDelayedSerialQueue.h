//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ASDelayedSerialQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_source> *_timer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_sourceQueue;	// 24 = 0x18
    _Bool _draining;	// 32 = 0x20
}

- (void)drainAndExecuteOnQueue:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x0020000000033d71
- (void)resumeAfterDelay:(int)arg1;	// IMP=0x0010000000033cdd
- (void)suspend;	// IMP=0x0010000000033b73
- (void)dealloc;	// IMP=0x0010000000033b26
- (id)initWithQueue:(id)arg1;	// IMP=0x0010000000033ac1

@end

