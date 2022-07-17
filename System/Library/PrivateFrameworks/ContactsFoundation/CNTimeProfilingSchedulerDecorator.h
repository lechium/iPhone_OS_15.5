//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNScheduler-Protocol.h>

@class NSString;
@protocol CNScheduler;

@interface CNTimeProfilingSchedulerDecorator : NSObject <CNScheduler>
{
    id <CNScheduler> _scheduler;	// 8 = 0x8
    unsigned long long _blockCounter;	// 16 = 0x10
}

+ (id)os_log;	// IMP=0x00000000000474aa
- (void).cxx_destruct;	// IMP=0x0000000000048c07
@property(readonly, nonatomic) unsigned long long blockCounter; // @synthesize blockCounter=_blockCounter;
@property(readonly, nonatomic) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly) double timestamp;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;	// IMP=0x0000000000048813
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000004848f
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x00000000000480e6
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000047d46
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x00000000000479d7
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000004766f
- (unsigned long long)nextBlockNumber;	// IMP=0x0000000000047632
@property(readonly, copy) NSString *description;
- (id)initWithScheduler:(id)arg1;	// IMP=0x0000000000047506

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
