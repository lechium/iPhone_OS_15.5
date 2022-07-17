//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/EFScheduler-Protocol.h>

@class EDMessagePersistence, NSString;
@protocol EFScheduler;

@interface _MFMessageContentRequestScheduler : NSObject <EFScheduler>
{
    unsigned long long _requestID;	// 8 = 0x8
    id <EFScheduler> _scheduler;	// 16 = 0x10
    EDMessagePersistence *_messagePersistence;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001279b9
@property(retain, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
@property(retain, nonatomic) id <EFScheduler> scheduler; // @synthesize scheduler=_scheduler;
- (void)performBlockWithActivity:(CDUnknownBlockType)arg1 requestID:(unsigned long long)arg2;	// IMP=0x0000000000127827
- (id)performWithObject:(id)arg1;	// IMP=0x00000000001277b2
- (void)performVoucherPreservingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000127634
- (void)performSyncBarrierBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001274b6
- (void)performSyncBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000127338
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000126fa1
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000126e23
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000126c87
- (id)initWithScheduler:(id)arg1 requestID:(unsigned long long)arg2 messagePersistence:(id)arg3;	// IMP=0x0000000000126bc3
- (id)initWithScheduler:(id)arg1 messagePersistence:(id)arg2;	// IMP=0x0000000000126bab

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
