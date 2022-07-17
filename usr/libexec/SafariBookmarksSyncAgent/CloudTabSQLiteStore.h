//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordZoneID, MISSING_TYPE, NSString;
@protocol CloudTabLocalStoreDelegate;

@interface CloudTabSQLiteStore
{
    CKRecordZoneID *_cloudTabsRecordZoneID;	// 8 = 0x8
    id <CloudTabLocalStoreDelegate> _delegate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000696ab
@property(nonatomic) __weak id <CloudTabLocalStoreDelegate> delegate; // @synthesize delegate=_delegate;
- (int)_saveCloseRequest:(id)arg1;	// IMP=0x0010000000069330
- (id)_loadCloseRequests;	// IMP=0x0010000000068cf5
- (int)_saveTab:(id)arg1;	// IMP=0x00100000000687d8
- (id)_cloudTabFromRow:(id)arg1 deviceUUIDString:(id)arg2;	// IMP=0x00100000000682a8
- (int)_loadTabsForDevice:(id)arg1;	// IMP=0x0010000000067e3b
- (int)_saveDevice:(id)arg1;	// IMP=0x0010000000067ad1
- (id)_loadDeviceWithUUIDString:(id)arg1;	// IMP=0x00100000000677a3
- (id)_loadDevices;	// IMP=0x0010000000067251
- (void)_vacuumFailedWithError:(int)arg1;	// IMP=0x0010000000067132
- (void)_failedToDeleteMetadataValueWithKey:(id)arg1 error:(int)arg2;	// IMP=0x0010000000066fe2
- (void)_failedToInsertMetadataValueWithKey:(id)arg1 error:(int)arg2;	// IMP=0x0010000000066e92
- (void)_failedToUpdateMetadataValueWithKey:(id)arg1 error:(int)arg2;	// IMP=0x0010000000066d42
- (void)_failedToSetSchemaVersion:(int)arg1 withError:(int)arg2;	// IMP=0x0010000000066c11
- (void)_databaseWillBeRecreated;	// IMP=0x0010000000066bc6
- (void)_databaseAtURL:(id)arg1 failedToDeleteWithError:(id)arg2;	// IMP=0x0010000000066aa1
- (void)_databaseWillBeDeleted;	// IMP=0x0010000000066a56
- (void)_databaseWillBeClosed;	// IMP=0x0010000000066a26
- (void)_databaseAtURL:(id)arg1 hasIncorrectSchemaVersion:(int)arg2;	// IMP=0x00100000000669bc
- (void)_failedToEnableSecureDeleteWithError:(int)arg1;	// IMP=0x001000000006689d
- (void)_failedToEnableForeignKeysWithError:(int)arg1;	// IMP=0x001000000006677e
- (void)_failedToEnableWALWithError:(id)arg1;	// IMP=0x00100000000666b2
- (void)_failedToExcludeDatabaseFromBackupWithError:(id)arg1;	// IMP=0x00100000000665e6
- (void)_databaseAtURL:(id)arg1 failedToOpenWithError:(id)arg2;	// IMP=0x00100000000664c1
- (void)_databaseWillBeOpened;	// IMP=0x0010000000066491
- (int)_resetDatabaseSchema;	// IMP=0x001000000006621e
- (int)_createFreshDatabaseSchema;	// IMP=0x0010000000065d97
- (int)_currentSchemaVersion;	// IMP=0x0010000000065d8c
- (void)database:(id)arg1 hadSevereError:(id)arg2;	// IMP=0x0010000000065cda
- (void)setUseManateeContainerForSyncing:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000065bbc
- (void)getUseManateeContainerForSyncingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000065a96
- (void)saveCloudTabDevices:(id)arg1 tabs:(id)arg2 closeRequests:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000006544d
- (MISSING_TYPE *)deleteRecordsWithPrimaryKeys:completionHandler: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000064ef4
- (void)loadCloudTabDeviceWithUUIDString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000064d48
- (void)loadCloudTabDataWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000064a56
- (id)initWithDatabaseURL:(id)arg1 cloudTabsRecordZoneID:(id)arg2;	// IMP=0x00100000000649b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
