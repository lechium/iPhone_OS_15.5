//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface REOpportunisticTrainingScheduler
{
    NSObject<OS_xpc_object> *_criteria;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSMutableArray *_blocks;	// 24 = 0x18
    _Bool _scheduled;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000e4ebe
- (void)cancelPendindTasks;	// IMP=0x00000000000e4e56
- (void)_queue_unschedule;	// IMP=0x00000000000e4e28
- (void)_performAllTasks;	// IMP=0x00000000000e4cf0
- (void)performTask:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e485c
- (void)dealloc;	// IMP=0x00000000000e481e
- (id)init;	// IMP=0x00000000000e46b4

@end

