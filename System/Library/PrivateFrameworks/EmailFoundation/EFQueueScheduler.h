//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFAssertableScheduler-Protocol.h>
#import <EmailFoundation/EFSuspendableScheduler-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface EFQueueScheduler : NSObject <EFSuspendableScheduler, EFAssertableScheduler>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000031021
- (void)resume;	// IMP=0x0000000000031013
- (void)suspend;	// IMP=0x0000000000031005
- (void)assertIsExecuting:(_Bool)arg1;	// IMP=0x0000000000030fed
- (id)performWithObject:(id)arg1;	// IMP=0x0000000000030f78
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000030d83
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030c3a
- (void)performVoucherPreservingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030b3c
- (void)performSyncBarrierBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000309dc
- (void)performSyncBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000003087c
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000307a8
@property(readonly) _Bool prefersImmediateExecution;
- (id)initWithQueue:(id)arg1;	// IMP=0x0000000000030721
- (id)init;	// IMP=0x00000000000306c5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
