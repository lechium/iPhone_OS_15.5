//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNScheduler-Protocol.h>

@class CNSuspendableSchedulerDecorator, NSString;

__attribute__((visibility("hidden")))
@interface CNUIAfterCACommitScheduler : NSObject <CNScheduler>
{
    CNSuspendableSchedulerDecorator *_scheduler;	// 8 = 0x8
    struct __CFRunLoopObserver *_runLoopObserver;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000133e31
@property(readonly, nonatomic) struct __CFRunLoopObserver *runLoopObserver; // @synthesize runLoopObserver=_runLoopObserver;
@property(readonly, nonatomic) CNSuspendableSchedulerDecorator *scheduler; // @synthesize scheduler=_scheduler;
@property(readonly) double timestamp;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;	// IMP=0x0000000000133ced
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000133c12
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x0000000000133b3c
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000133a6b
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;	// IMP=0x00000000001339a7
- (void)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001338e8
- (void)dealloc;	// IMP=0x0000000000133884
- (id)initWithSchedulerProvider:(id)arg1;	// IMP=0x0000000000133768
- (id)init;	// IMP=0x000000000013370e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

