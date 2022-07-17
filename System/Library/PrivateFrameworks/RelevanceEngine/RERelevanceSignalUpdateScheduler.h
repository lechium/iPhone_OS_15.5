//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSMutableDictionary, NSObject, REUpNextTimer;
@protocol OS_dispatch_queue;

@interface RERelevanceSignalUpdateScheduler
{
    NSMutableDictionary *_updateBlocks;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    REUpNextTimer *_timer;	// 24 = 0x18
    NSDate *_lastFireDate;	// 32 = 0x20
    _Bool _alreadyScheduled;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003c1e9
- (void)_queue_updateBlocks;	// IMP=0x000000000003c010
- (void)_updateBlocks;	// IMP=0x000000000003bfa8
- (void)_rescheduleTimer;	// IMP=0x000000000003bb80
- (void)unscheduleEventWithIdentifier:(id)arg1;	// IMP=0x000000000003ba9d
- (void)scheduleEventWithIdentifier:(id)arg1 updateFrequency:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003b841
- (void)dealloc;	// IMP=0x000000000003b7cc
- (id)_init;	// IMP=0x000000000003b6c3

@end
