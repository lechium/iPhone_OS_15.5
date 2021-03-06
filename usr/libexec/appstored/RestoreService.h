//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AppInstallsDatabaseStore, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface RestoreService : NSObject
{
    AppInstallsDatabaseStore *_database;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    unsigned char _queue_restoreState;	// 24 = 0x18
    NSMutableArray *_queue_parkedDownloadSizeHandlers;	// 32 = 0x20
}

+ (unsigned long long)_readTotalPendingDownloadSizeFromDatabase:(id)arg1;	// IMP=0x00200000000e827c
+ (id)defaultService;	// IMP=0x00100000000e78b4
- (void).cxx_destruct;	// IMP=0x00200000000e8515
- (void)_queue_dispatchParkedDownloadSizeHandlers;	// IMP=0x00100000000e8366
- (void)prioritizeBundleIDs:(id)arg1 userInitiated:(_Bool)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e7fec
- (void)estimateTotalDownloadSizeWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e7e95
- (void)clearFollowupsForAccountID:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e7df6
- (void)restoreRunning;	// IMP=0x00100000000e7d1f
- (void)restorePreparing;	// IMP=0x00100000000e7c63
- (void)restoreCompletedIfUnknown;	// IMP=0x00100000000e7b86
- (void)restoreCompleted;	// IMP=0x00100000000e7aaf
- (id)_initWithDatabase:(id)arg1;	// IMP=0x00100000000e7987
- (id)init;	// IMP=0x00100000000e792d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

