//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNScheduler-Protocol.h>

@class NSString;
@protocol CNScheduler;

@interface CNCallStackRecordingSchedulerDecorator : NSObject <CNScheduler>
{
    id <CNScheduler> _scheduler;	// 8 = 0x8
}

+ (id)os_log;	// IMP=0x000000000001a0f6
- (void).cxx_destruct;	// IMP=0x000000000001a8d5
@property(readonly, nonatomic) id <CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property(readonly) double timestamp;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;	// IMP=0x000000000001a789
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000001a69f
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x000000000001a5b4
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a4d1
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x000000000001a3f8
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001a327
- (void)blockBecamePending;	// IMP=0x000000000001a276
@property(readonly, copy) NSString *description;
- (id)initWithScheduler:(id)arg1;	// IMP=0x000000000001a152

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
