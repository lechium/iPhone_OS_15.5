//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/DNDSBackingStoreDelegate-Protocol.h>
#import <DoNotDisturbServer/DNDSGlobalConfigurationStoring-Protocol.h>
#import <DoNotDisturbServer/DNDSIDSSyncEngineDataSource-Protocol.h>
#import <DoNotDisturbServer/DNDSSyncEngineDataSource-Protocol.h>

@class DNDSGlobalConfiguration, DNDSIDSSyncEngine, DNDSSyncEngine, NSString;
@protocol DNDSBackingStore, DNDSGlobalConfigurationStoreDelegate;

@interface DNDSGlobalConfigurationStore : NSObject <DNDSBackingStoreDelegate, DNDSSyncEngineDataSource, DNDSIDSSyncEngineDataSource, DNDSGlobalConfigurationStoring>
{
    id <DNDSBackingStore> _backingStore;	// 8 = 0x8
    DNDSSyncEngine *_syncEngine;	// 16 = 0x10
    DNDSIDSSyncEngine *_idsSyncEngine;	// 24 = 0x18
    DNDSGlobalConfiguration *_configuration;	// 32 = 0x20
    struct os_unfair_lock_s _lock;	// 40 = 0x28
    id <DNDSGlobalConfigurationStoreDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000a58f9
@property(nonatomic) __weak id <DNDSGlobalConfigurationStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_purgeData;	// IMP=0x00000000000a5884
- (void)_lock_purgeData;	// IMP=0x00000000000a56f2
- (void)_lock_updateConfigurationWithCKRecord:(id)arg1;	// IMP=0x00000000000a5623
- (void)_lock_updateConfigurationWithDNDSIDSRecord:(id)arg1;	// IMP=0x00000000000a5554
- (unsigned long long)_lock_writeRecord:(id)arg1 writePartition:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000a51fb
- (void)_notifyDelegateOfConfigurationChange;	// IMP=0x00000000000a5000
- (void)_lock_prepareCKRecordToSave:(id)arg1;	// IMP=0x00000000000a4f3b
- (void)_lock_prepareDNDSIDSRecordToSave:(id)arg1;	// IMP=0x00000000000a4e76
- (void)_populateCKRecord:(id)arg1 withGlobalConfiguration:(id)arg2;	// IMP=0x00000000000a4c98
- (void)_populateDNDSIDSRecord:(id)arg1 withGlobalConfiguration:(id)arg2;	// IMP=0x00000000000a4ae7
- (id)_lock_existingConfiguration;	// IMP=0x00000000000a4a53
- (id)_lock_mutableExistingConfigurationInStore:(id)arg1;	// IMP=0x00000000000a4a0b
- (id)_createConfigurationFromCKRecord:(id)arg1;	// IMP=0x00000000000a4859
- (id)_createConfigurationFromDNDSIDSRecord:(id)arg1;	// IMP=0x00000000000a46c3
- (void)globalConfigurationSyncManager:(id)arg1 didReceiveUpdatedGlobalConfiguration:(id)arg2;	// IMP=0x00000000000a45a5
- (void)purgeRecordsForIDSSyncEngine:(id)arg1;	// IMP=0x00000000000a4461
- (id)recordIDsForIDSSyncEngine:(id)arg1;	// IMP=0x00000000000a43c1
- (void)idsSyncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2;	// IMP=0x00000000000a4374
- (void)idsSyncEngine:(id)arg1 didFetchRecord:(id)arg2;	// IMP=0x00000000000a3fc9
- (void)idsSyncEngine:(id)arg1 prepareRecordToSave:(inout id)arg2;	// IMP=0x00000000000a3e9c
- (void)purgeRecordsForSyncEngine:(id)arg1;	// IMP=0x00000000000a3e8a
- (id)recordIDsForSyncEngine:(id)arg1;	// IMP=0x00000000000a3d94
- (void)syncEngine:(id)arg1 zoneWithIDWasDeleted:(id)arg2 removingRecordIDs:(id)arg3;	// IMP=0x00000000000a3d2d
- (id)syncEngine:(id)arg1 recordTypeForRecordID:(id)arg2;	// IMP=0x00000000000a3d20
- (void)syncEngine:(id)arg1 recordWithIDWasDeleted:(id)arg2;	// IMP=0x00000000000a3cd3
- (long long)syncEngine:(id)arg1 prepareRecordToSave:(inout id)arg2;	// IMP=0x00000000000a3ba1
- (void)syncEngine:(id)arg1 resolveConflictBetweenClientRecord:(id)arg2 andServerRecord:(id)arg3;	// IMP=0x00000000000a37bf
- (void)syncEngine:(id)arg1 failedToDeleteRecordWithID:(id)arg2 error:(id)arg3;	// IMP=0x00000000000a3767
- (void)syncEngine:(id)arg1 didFetchRecord:(id)arg2;	// IMP=0x00000000000a3306
- (long long)syncEngine:(id)arg1 wantsRecord:(id)arg2;	// IMP=0x00000000000a3147
- (id)backingStore:(id)arg1 migrateDictionaryRepresentation:(id)arg2 fromVersionNumber:(unsigned long long)arg3 toVersionNumber:(unsigned long long)arg4;	// IMP=0x00000000000a309b
- (unsigned long long)writeRecord:(id)arg1 writePartition:(_Bool)arg2 error:(id *)arg3;	// IMP=0x00000000000a3017
- (unsigned long long)writeRecord:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000a2ffd
- (id)readRecordWithError:(id *)arg1;	// IMP=0x00000000000a2fa8
- (id)initWithBackingStore:(id)arg1 syncEngine:(id)arg2 idsSyncEngine:(id)arg3;	// IMP=0x00000000000a2ddb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
