//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface PSDSyncStateManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_syncStateCache;	// 16 = 0x10
    NSMutableArray *_activeConnections;	// 24 = 0x18
    NSXPCListener *_listener;	// 32 = 0x20
}

+ (id)sharedSyncStateManager;	// IMP=0x002000000000b03f
- (void).cxx_destruct;	// IMP=0x002000000000d060
- (id)syncStatePersistentURL;	// IMP=0x001000000000cfd8
- (void)_loadLegacySyncStateAndMigrateIfNeeded;	// IMP=0x001000000000cc82
- (void)_queue_tellRemoteObserversDidCompleteSyncForPairingID:(id)arg1;	// IMP=0x001000000000caef
- (oneway void)registerSyncStateObserverIfNeeded;	// IMP=0x001000000000cae9
- (oneway void)requestDeviceSyncStateEntriesForPairingIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000c73f
- (void)connectionInterrupted:(id)arg1;	// IMP=0x001000000000c696
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x001000000000c3d6
- (void)setupListener;	// IMP=0x001000000000c36f
- (id)domainAccessorForPairingID:(id)arg1;	// IMP=0x001000000000c287
- (id)_queue_deviceSyncStateEntryForPairingID:(id)arg1;	// IMP=0x001000000000c077
- (id)isInitialSyncCompleteForPairingID:(id)arg1;	// IMP=0x001000000000bee6
- (id)isSyncCompleteForPairingID:(id)arg1;	// IMP=0x001000000000bd30
- (void)setSyncCompleteForPairingID:(id)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b83d
- (void)_updateMigrationCounter;	// IMP=0x001000000000b379
- (id)init;	// IMP=0x001000000000b0c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
