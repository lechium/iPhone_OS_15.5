//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface LASerialSchedulerInternal : NSObject
{
    _Bool _running;	// 8 = 0x8
    _Bool _performingPendingOperations;	// 9 = 0x9
    NSMutableArray *_pendingOperations;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000001063d
- (void)_performPendingOperationsWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000103ac
- (void)_performPendingOperations;	// IMP=0x00100000000102d5
- (void)_run;	// IMP=0x00100000000102a9
- (void)_schedule:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010217
- (void)resume;	// IMP=0x001000000001015e
- (void)schedule:(CDUnknownBlockType)arg1;	// IMP=0x001000000001001e
- (id)initWithQueue:(id)arg1;	// IMP=0x001000000000ff91
- (id)init;	// IMP=0x001000000000ff10

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
