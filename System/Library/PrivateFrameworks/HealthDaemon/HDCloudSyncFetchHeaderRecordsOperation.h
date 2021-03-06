//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDSynchronousTaskGroupDelegate-Protocol.h>

@class HDSynchronousTaskGroup, NSArray, NSMutableDictionary, NSMutableSet, NSString;

@interface HDCloudSyncFetchHeaderRecordsOperation <HDSynchronousTaskGroupDelegate>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSMutableDictionary *_fetchedRecordIDsByContainerID;	// 16 = 0x10
    NSMutableSet *_invalidRecordIDs;	// 24 = 0x18
    HDSynchronousTaskGroup *_taskGroup;	// 32 = 0x20
    _Bool _fetchSubscriptions;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000006cfcb0
@property(nonatomic) _Bool fetchSubscriptions; // @synthesize fetchSubscriptions=_fetchSubscriptions;
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(_Bool)arg2 errors:(id)arg3;	// IMP=0x00000000006cf6c1
- (void)main;	// IMP=0x00000000006cca32
@property(readonly, copy, nonatomic) NSArray *invalidRecordIDs;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;	// IMP=0x00000000006cc94e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

