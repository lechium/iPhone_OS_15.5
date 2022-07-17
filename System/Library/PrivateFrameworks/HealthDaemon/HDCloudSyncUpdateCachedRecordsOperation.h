//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDSynchronousTaskGroupDelegate-Protocol.h>

@class HDSynchronousTaskGroup, NSArray, NSMutableSet, NSString;

@interface HDCloudSyncUpdateCachedRecordsOperation <HDSynchronousTaskGroupDelegate>
{
    HDSynchronousTaskGroup *_taskGroup;	// 8 = 0x8
    NSMutableSet *_invalidRecordIDs;	// 16 = 0x10
    struct os_unfair_lock_s _lock;	// 24 = 0x18
    NSArray *_zoneIdentifiersWithIdentityLost;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000010e0c6
@property(readonly, copy, nonatomic) NSArray *zoneIdentifiersWithIdentityLost; // @synthesize zoneIdentifiersWithIdentityLost=_zoneIdentifiersWithIdentityLost;
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(_Bool)arg2 errors:(id)arg3;	// IMP=0x000000000010e061
@property(readonly, copy, nonatomic) NSArray *invalidRecordIDs;
- (void)main;	// IMP=0x000000000010a200
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;	// IMP=0x000000000010a155

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
