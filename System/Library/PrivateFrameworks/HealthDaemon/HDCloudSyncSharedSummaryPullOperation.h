//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/HDSynchronousTaskGroupDelegate-Protocol.h>

@class HDSynchronousTaskGroup, NSString;

@interface HDCloudSyncSharedSummaryPullOperation <HDSynchronousTaskGroupDelegate>
{
    HDSynchronousTaskGroup *_taskGroup;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000189044
- (void)synchronousTaskGroup:(id)arg1 didFinishWithSuccess:(_Bool)arg2 errors:(id)arg3;	// IMP=0x0000000000188ff0
- (void)main;	// IMP=0x00000000001889a8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

