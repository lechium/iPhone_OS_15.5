//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Stocks/SCKDatabaseStoreCoordinatorObserver-Protocol.h>

@class NSArray, NSMutableDictionary, SCKAsyncSerialQueue, SCKDatabaseSchema, SCKStartupQueue;
@protocol OS_dispatch_queue, SCKContainerProxying, SCKDatabaseStoreCoordinator;

@interface SCKDatabase : NSObject <SCKDatabaseStoreCoordinatorObserver>
{
    struct os_unfair_lock_s _observersLock;	// 8 = 0x8
    SCKDatabaseSchema *_schema;	// 16 = 0x10
    id <SCKDatabaseStoreCoordinator> _storeCoordinator;	// 24 = 0x18
    id <SCKContainerProxying> _container;	// 32 = 0x20
    NSArray *_mergeHandlers;	// 40 = 0x28
    SCKStartupQueue *_startupQueue;	// 48 = 0x30
    SCKAsyncSerialQueue *_ckSyncQueue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 64 = 0x40
    NSMutableDictionary *_observersByZoneName;	// 72 = 0x48
    long long _status;	// 80 = 0x50
    NSMutableDictionary *_zoneSnapshotsByZoneName;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000062a83
@property(retain, nonatomic) NSMutableDictionary *zoneSnapshotsByZoneName; // @synthesize zoneSnapshotsByZoneName=_zoneSnapshotsByZoneName;
@property long long status; // @synthesize status=_status;
@property(nonatomic) struct os_unfair_lock_s observersLock; // @synthesize observersLock=_observersLock;
@property(retain, nonatomic) NSMutableDictionary *observersByZoneName; // @synthesize observersByZoneName=_observersByZoneName;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property(retain, nonatomic) SCKAsyncSerialQueue *ckSyncQueue; // @synthesize ckSyncQueue=_ckSyncQueue;
@property(retain, nonatomic) SCKStartupQueue *startupQueue; // @synthesize startupQueue=_startupQueue;
@property(retain, nonatomic) NSArray *mergeHandlers; // @synthesize mergeHandlers=_mergeHandlers;
@property(retain, nonatomic) id <SCKContainerProxying> container; // @synthesize container=_container;
@property(retain, nonatomic) id <SCKDatabaseStoreCoordinator> storeCoordinator; // @synthesize storeCoordinator=_storeCoordinator;
@property(retain, nonatomic) SCKDatabaseSchema *schema; // @synthesize schema=_schema;
- (id)_sanitizeErrorForClients:(id)arg1;	// IMP=0x000000000006287c
- (void)_runCKOperation:(id)arg1;	// IMP=0x000000000006277c
- (void)_recoverFromIdentityLossWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000062358
- (void)_reloadSnapshotOfZone:(id)arg1 fromStore:(id)arg2;	// IMP=0x0000000000061da3
- (id)_zonesNeedingSave;	// IMP=0x0000000000061ad5
- (id)_zonesNeedingFetch;	// IMP=0x00000000000617fb
- (id)_emptyZonesNeedingFirstSync;	// IMP=0x00000000000614ec
- (id)_zoneWithSchema:(id)arg1 zoneStore:(id)arg2;	// IMP=0x000000000006147c
- (void)_deleteAndRecreateAllZonesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000060fbd
- (void)_createZoneInContainerWithSchema:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000060e1e
- (void)_squashZoneForMerge:(id)arg1 zoneStore:(id)arg2;	// IMP=0x0000000000060816
- (void)_saveZonesToContainer:(id)arg1 allowRecoveryAttempt:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000060651
- (void)_saveZoneToContainer:(id)arg1 allowRecoveryAttempt:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000005ef0b
- (void)_fetchZoneChangesForZones:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005d1f4
- (void)_fetchDatabaseChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000005c565
- (void)_fetchDatabaseAndZoneChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000005c3d7
- (void)_enqueueStartupSequenceWithFeatures:(long long)arg1;	// IMP=0x000000000005ab4e
- (_Bool)t_flushChangesWithTimeout:(double)arg1;	// IMP=0x000000000005a98f
- (void)storeCoordinatorDiscoveredExternalChanges:(id)arg1;	// IMP=0x000000000005a97d
- (void)synchronize;	// IMP=0x000000000005a700
- (void)savePendingChangesToServerWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000005a22a
- (void)checkSyncingEnabledWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000059fed
- (void)pollForChangesWithCondition:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000059902
- (void)handleRemoteNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000591e6
- (void)removeObserver:(id)arg1 forZone:(id)arg2;	// IMP=0x0000000000059124
- (void)addObserver:(id)arg1 forZone:(id)arg2;	// IMP=0x0000000000058ffb
- (void)modifyContentsOfZone:(id)arg1 withCommand:(id)arg2;	// IMP=0x0000000000058b3a
- (void)readContentsOfZone:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000058623
- (id)initWithSchema:(id)arg1 store:(id)arg2 migrationPlan:(id)arg3 features:(long long)arg4 containerProxy:(id)arg5;	// IMP=0x0000000000058607
- (id)initWithSchema:(id)arg1 store:(id)arg2 migrationPlan:(id)arg3 containerProxy:(id)arg4;	// IMP=0x00000000000585de
- (id)initWithSchema:(id)arg1 store:(id)arg2 features:(long long)arg3 mergeHandlers:(id)arg4 containerProxy:(id)arg5;	// IMP=0x00000000000580d1
- (id)initWithSchema:(id)arg1 store:(id)arg2 features:(long long)arg3 containerProxy:(id)arg4;	// IMP=0x00000000000580ab

@end
