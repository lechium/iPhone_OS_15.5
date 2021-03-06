//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFScheduler-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface _SBFQueueScheduler : NSObject <SBFScheduler>
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000071877
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000071755
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000071655
- (id)performBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000007155c
- (id)initWithQueue:(id)arg1;	// IMP=0x00000000000714de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

