//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSMonotonicReferenceTime, NSMutableArray, NSOperationQueue, SBBootDefaults;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface SBSynchronizeCloudCriticalDataOperation : NSObject
{
    _Bool _needsSync;	// 8 = 0x8
    SBBootDefaults *_queue_bootDefaults;	// 16 = 0x10
    NSOperationQueue *_operationQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
    NSObject<OS_dispatch_group> *_queue_operationGroup;	// 40 = 0x28
    unsigned long long _queue_operationCount;	// 48 = 0x30
    _Bool _queue_isComplete;	// 56 = 0x38
    BSMonotonicReferenceTime *_queue_cloudSyncStartReferenceTime;	// 64 = 0x40
    NSMutableArray *_blockingTestOperations;	// 72 = 0x48
    NSMutableArray *_nonblockingTestOperations;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000005a151f
- (id)_queue_migrateSoundPreferencesOperation;	// IMP=0x00000000005a14b0
- (void)_fetchDomains:(id)arg1 fromIndex:(long long)arg2 queue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000005a0f2e
- (id)_queue_fetchCloudDefaultsOperation;	// IMP=0x00000000005a0c12
- (id)_queue_fetchMDMProfilesOperation;	// IMP=0x00000000005a0ba7
- (id)_queue_fetchCloudAccountOperation;	// IMP=0x00000000005a0b3c
- (void)_queue_startFetchingCloudCriticalData;	// IMP=0x00000000005a08e0
- (_Bool)_queue_isComplete;	// IMP=0x00000000005a08c4
- (void)_queue_addOperation:(id)arg1 shouldBlock:(_Bool)arg2;	// IMP=0x00000000005a06af
- (void)_addTestOperation:(id)arg1 shouldBlock:(_Bool)arg2;	// IMP=0x00000000005a058d
- (unsigned long long)_pendingOperationCount;	// IMP=0x00000000005a04d0
- (_Bool)waitForSynchronizeToCompleteWithTimeout:(double)arg1;	// IMP=0x00000000005a0487
- (void)startSynchronize;	// IMP=0x00000000005a0420
@property(readonly, nonatomic, getter=isComplete) _Bool complete; // @dynamic complete;
- (id)initWithDefaults:(id)arg1 userManager:(id)arg2;	// IMP=0x00000000005a0133
- (id)init;	// IMP=0x00000000005a008a

@end

