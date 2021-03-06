//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSMutableDictionary, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface JobManagerListener
{
    NSMapTable *_clients;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    NSMutableDictionary *_progress;	// 24 = 0x18
    _Bool _progressDirty;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001a5699
- (void)_notifyClientsOfStatesChanged:(id)arg1;	// IMP=0x00100000001a51e0
- (void)_notifyClientsOfProgressChanged:(id)arg1;	// IMP=0x00100000001a4e31
- (void)_notifyClientsOfJobCompleted:(id)arg1 finalPhase:(id)arg2 isPersistent:(_Bool)arg3;	// IMP=0x00100000001a4b20
- (void)_notifyClientsOfJobsChanged:(id)arg1;	// IMP=0x00100000001a4996
- (void)_initializeConnection:(id)arg1;	// IMP=0x00100000001a44c4
- (void)_handleDisconnect:(id)arg1;	// IMP=0x00100000001a4333
- (id)_getJobsWithIDs:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000001a424b
- (id)_getJobsWithExternalIDs:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000001a3c28
- (id)_getJobsForClient:(id)arg1;	// IMP=0x00100000001a3c11
- (long long)_externalPhaseForPhase:(long long)arg1;	// IMP=0x00100000001a3b8c
- (void)_enumerateInstallsWithJobIDs:(id)arg1 usingTransactionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a37b4
- (void)_enumerateClientsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a3641
- (id)_copyJobIDsForClient:(id)arg1;	// IMP=0x00100000001a335d
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x00100000001a30c4
- (void)_progressTimerFired;	// IMP=0x00100000001a2e30
- (void)_dirtyProgress:(id)arg1;	// IMP=0x00100000001a2c8a
- (void)_handleLegacyNotifications:(id)arg1;	// IMP=0x00100000001a27b5
- (void)resumeJobsWithIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a2526
- (void)registerJobManagerWithOptions:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a2142
- (void)pauseJobsWithIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a1eb3
- (void)getJobsWithIDs:(id)arg1 usingReplyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a1bf1
- (void)getJobsUsingReplyBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000001a19f8
- (void)finishJobsWithIDs:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a1769
- (void)cancelJobsWithIDs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a14d3
- (id)init;	// IMP=0x00100000001a13cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

