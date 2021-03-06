//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDSynchronousTaskGroupDelegate-Protocol.h>

@class HDSynchronousTaskGroup, NSArray, NSString;

@interface HDCloudSyncDeleteZonesOperation <HDSynchronousTaskGroupDelegate>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HDSynchronousTaskGroup *_taskGroup;	// 16 = 0x10
    NSArray *_zonesToDelete;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000f9504
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(_Bool)arg2 errors:(id)arg3;	// IMP=0x00000000000f94b0
- (void)main;	// IMP=0x00000000000f8c41
@property(copy) NSArray *zonesToDelete;
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;	// IMP=0x00000000000f8a5e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

