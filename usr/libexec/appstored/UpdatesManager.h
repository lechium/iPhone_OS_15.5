//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSNumber, NSRecursiveLock, NSSet, NSString, TaskQueue;
@protocol OS_dispatch_queue;

@interface UpdatesManager : NSObject
{
    _Bool _automaticDownloadsAreDisabled;	// 8 = 0x8
    NSNumber *_currentAccountDSID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_badgeQueue;	// 40 = 0x28
    _Bool _hasLoadedTVProviderApps;	// 48 = 0x30
    NSSet *_tvProviderApps;	// 56 = 0x38
    NSRecursiveLock *_DSIDLessAppsLock;	// 64 = 0x40
    TaskQueue *_taskQueue;	// 72 = 0x48
    _Bool _agentRequestedUpdateAll;	// 80 = 0x50
    NSArray *_provisionedApps;	// 88 = 0x58
}

+ (id)sharedManager;	// IMP=0x00200000001abe79
- (void).cxx_destruct;	// IMP=0x00200000001aca13
@property(retain, nonatomic) NSArray *provisionedApps; // @synthesize provisionedApps=_provisionedApps;
@property _Bool agentRequestedUpdateAll; // @synthesize agentRequestedUpdateAll=_agentRequestedUpdateAll;
- (void)_validateUpdatesState;	// IMP=0x00100000001ac73c
- (_Bool)_updateIsStale:(id)arg1;	// IMP=0x00100000001ac6e1
- (void)verifyUpdatesForRemovedBundleIDs:(id)arg1;	// IMP=0x00100000001ac579
- (void)verifyUpdatesFollowingExternalAppInstall:(id)arg1;	// IMP=0x00100000001ac573
- (void)verifyPendingUpdates:(id)arg1;	// IMP=0x00100000001ac56d
- (void)verifyAllPendingUpdates;	// IMP=0x00100000001ac567
- (void)updateAllWithOrder:(id)arg1 requestToken:(id)arg2 replyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ac4f7
- (void)showPendingUpdatesBadge;	// IMP=0x00100000001ac4f1
- (void)setupFollowingMigration;	// IMP=0x00100000001ac4eb
- (void)setAutoUpdateEnabled:(_Bool)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ac406
- (void)reloadUpdatesWithContext:(id)arg1;	// IMP=0x00100000001ac354
- (void)reloadManagedUpdatesWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ac2e6
- (void)reloadFromServerWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ac27d
- (void)reloadFromServerInBackgroundWithToken:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ac20f
- (void)refreshUpdateCountWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ac1a6
- (void)reloadApplicationBadgeWithReason:(id)arg1;	// IMP=0x00100000001ac1a0
- (void)performPostRestoreUpdatesCheck;	// IMP=0x00100000001ac19a
- (void)performBackgroundSoftwareUpdateCheck;	// IMP=0x00100000001ac194
- (void)postProcessBackgroundUpdateMetrics;	// IMP=0x00100000001ac18e
- (void)noteUpdatesStateChangedWithReason:(id)arg1 logKey:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000001ac183
- (void)noteUpdatesStateChanged:(id)arg1 logKey:(id)arg2;	// IMP=0x00100000001ac16e
- (void)hidePendingUpdatesBadge;	// IMP=0x00100000001ac168
- (void)getUpdatesWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ac153
- (void)getUpdatesWithContext:(id)arg1;	// IMP=0x00100000001ac0a1
- (void)getManagedUpdatesWithRequestToken:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001ac033
- (void)confirmAgentRequestedUpdateAll:(CDUnknownBlockType)arg1;	// IMP=0x00100000001ac01d
- (void)autoUpdateEnabled:(CDUnknownBlockType)arg1;	// IMP=0x00100000001abfcd
- (_Bool)isTVProviderApp:(id)arg1;	// IMP=0x00100000001abfc5
- (id)init;	// IMP=0x00100000001abece

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

