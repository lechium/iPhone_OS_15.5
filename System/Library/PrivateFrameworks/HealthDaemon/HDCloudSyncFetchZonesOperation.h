//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDSynchronousTaskGroupDelegate-Protocol.h>

@class HDSynchronousTaskGroup, NSString;

@interface HDCloudSyncFetchZonesOperation <HDSynchronousTaskGroupDelegate>
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HDSynchronousTaskGroup *_taskGroup;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000006b8507
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(_Bool)arg2 errors:(id)arg3;	// IMP=0x00000000006b84b3
- (void)main;	// IMP=0x00000000006b6c4a
- (id)initWithConfiguration:(id)arg1 cloudState:(id)arg2;	// IMP=0x00000000006b6c08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
