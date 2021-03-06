//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSNumber, NSString, NSTimer, SBKAsynchronousTask, SBKRequestHandler;
@protocol OS_dispatch_queue, SBKUniversalPlaybackPositionDataSource;

@interface SBKUniversalPlaybackPositionStore : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    _Bool _isActive;	// 16 = 0x10
    _Bool _hasLocalChangesToSync;	// 17 = 0x11
    NSMutableArray *_pendingTaskBlocks;	// 24 = 0x18
    NSString *_domain;	// 32 = 0x20
    NSNumber *_accountIdentifier;	// 40 = 0x28
    unsigned long long _automaticSynchronizeOptions;	// 48 = 0x30
    double _initialAutosyncInterval;	// 56 = 0x38
    double _pollingLimitFromBag;	// 64 = 0x40
    double _autorefreshInterval;	// 72 = 0x48
    _Bool _refreshTimerActive;	// 80 = 0x50
    id _accountsObserver;	// 88 = 0x58
    id _prefsObserver;	// 96 = 0x60
    id <SBKUniversalPlaybackPositionDataSource> _dataSource;	// 104 = 0x68
    SBKAsynchronousTask *_currentTask;	// 112 = 0x70
    SBKAsynchronousTask *_lookupDomainVersionTask;	// 120 = 0x78
    SBKAsynchronousTask *_bagLookupTask;	// 128 = 0x80
    SBKRequestHandler *_currentTaskRequestHandler;	// 136 = 0x88
    NSDate *_dateToFireNextTimer;	// 144 = 0x90
    NSTimer *_timer;	// 152 = 0x98
}

+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;	// IMP=0x00000000000196bf
- (void).cxx_destruct;	// IMP=0x00000000000172f2
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSDate *dateToFireNextTimer; // @synthesize dateToFireNextTimer=_dateToFireNextTimer;
@property(retain, nonatomic) SBKRequestHandler *currentTaskRequestHandler; // @synthesize currentTaskRequestHandler=_currentTaskRequestHandler;
@property(retain, nonatomic) SBKAsynchronousTask *bagLookupTask; // @synthesize bagLookupTask=_bagLookupTask;
@property(retain, nonatomic) SBKAsynchronousTask *lookupDomainVersionTask; // @synthesize lookupDomainVersionTask=_lookupDomainVersionTask;
@property(retain, nonatomic) SBKAsynchronousTask *currentTask; // @synthesize currentTask=_currentTask;
@property(readonly, nonatomic) __weak id <SBKUniversalPlaybackPositionDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_onQueueStartNewTimerWithTimeIntervalSinceNow:(double)arg1;	// IMP=0x0000000000017163
- (void)_onQueueStartNewTimer;	// IMP=0x000000000001713b
- (void)_onQueueStopTimer;	// IMP=0x00000000000170d9
- (void)_onQueueResumeTimer;	// IMP=0x0000000000017093
- (void)_onQueueSuspendTimer;	// IMP=0x0000000000017008
- (void)_onQueueScheduleTimer;	// IMP=0x0000000000016f56
- (_Bool)_timerIsStopped;	// IMP=0x0000000000016ee1
- (void)_timerFired:(id)arg1;	// IMP=0x0000000000016e96
- (void)_updateAutorefreshRateSettingAndRestartTimer:(_Bool)arg1;	// IMP=0x0000000000016e48
- (double)_effectiveAutorefreshRate;	// IMP=0x0000000000016d09
- (void)_updateForStoreAccountsChange;	// IMP=0x0000000000016c82
- (void)_onQueueLoadBagContextWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001679a
- (void)_updateSettingsFromLoadedBagContext:(id)arg1;	// IMP=0x00000000000166fd
- (id)_accountForSyncing;	// IMP=0x0000000000016696
- (void)_onQueuePullMetadataItemWithItemIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016513
- (void)_onQueuePushMetadataItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000016390
- (void)_onQueueSynchronizeImmediatelyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000016276
- (void)_onQueueRunTaskWithName:(id)arg1 taskCompletionHandler:(CDUnknownBlockType)arg2 runTaskBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000015db5
- (void)_onQueueRunNextPendingTaskBlock;	// IMP=0x0000000000015d64
- (void)_onQueueLoadRemoteDomainVersionWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015b48
- (void)_onQueueSynchronizeWithAutosynchronizeMask:(unsigned long long)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015aba
- (void)loadBagContextWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000015a2b
- (void)loadRemoteDomainVersionWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001599c
- (void)checkForAvailabilityWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001590d
- (void)synchronizeImmediatelyWithCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000001582e
- (void)pullMetadataItemWithItemIdentifier:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015775
- (void)pushMetadataItem:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000000156bc
- (void)synchronizeImmediatelyWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001562f
- (_Bool)automaticallySynchronizeOnBecomeActive;	// IMP=0x000000000001561d
- (_Bool)_automaticallySynchronizeOnBecomeActive;	// IMP=0x0000000000015605
- (void)setAutomaticallySynchronizeOnBecomeActive:(_Bool)arg1;	// IMP=0x00000000000155c0
- (_Bool)automaticallySynchronizeLocalChangesOnResignActive;	// IMP=0x00000000000155ae
- (_Bool)_automaticallySynchronizeLocalChangesOnResignActive;	// IMP=0x0000000000015595
- (void)setAutomaticallySynchronizeLocalChangesOnResignActive:(_Bool)arg1;	// IMP=0x0000000000015550
@property(nonatomic) _Bool hasLocalChangesToSync;
@property(nonatomic) unsigned long long automaticSynchronizeOptions;
- (void)resignActive;	// IMP=0x000000000001547d
- (void)becomeActive;	// IMP=0x0000000000015432
- (void)_onQueueUpdateTimerForAutomaticSyncOptionChanges;	// IMP=0x0000000000015408
- (void)_onQueueUpdateTimerForActiveChanges;	// IMP=0x0000000000015384
- (void)dealloc;	// IMP=0x000000000001521d
- (id)initWithInitialUpdateDelay:(double)arg1;	// IMP=0x000000000001513b
- (id)init;	// IMP=0x0000000000015121
- (id)initWithDomain:(id)arg1 dataSource:(id)arg2 automaticSynchronizeOptions:(unsigned long long)arg3 accountIdentifier:(id)arg4 isActive:(_Bool)arg5;	// IMP=0x0000000000014d64
- (id)initWithDomain:(id)arg1 dataSource:(id)arg2 automaticSynchronizeOptions:(unsigned long long)arg3 isActive:(_Bool)arg4;	// IMP=0x0000000000014ca7
- (void)deprecated_setDataSource:(id)arg1;	// IMP=0x0000000000014c96

@end

