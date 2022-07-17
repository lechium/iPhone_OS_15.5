//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDDirectoryContext, CKDMMCS, CKSQLite, NSMutableDictionary, NSMutableSet, NSString;

@interface CKDAssetCache : NSObject
{
    _Bool _databaseWasReset;	// 8 = 0x8
    _Bool _isEvictionScheduled;	// 9 = 0x9
    _Bool _didDrop;	// 10 = 0xa
    int _fileDownloadDirectoryFd;	// 12 = 0xc
    CKDMMCS *_MMCS;	// 16 = 0x10
    CKSQLite *_sqlite;	// 24 = 0x18
    NSString *_applicationBundleID;	// 32 = 0x20
    CKDDirectoryContext *_directoryContext;	// 40 = 0x28
    long long _checkoutCount;	// 48 = 0x30
    NSMutableDictionary *_volumeUUIDByVolumeIndex;	// 56 = 0x38
    NSMutableDictionary *_volumeIndexByVolumeUUID;	// 64 = 0x40
    NSMutableSet *_deferredDeletedAssetHandles;	// 72 = 0x48
    NSMutableDictionary *_deferredLastUsedTimeByTrackingUUID;	// 80 = 0x50
}

+ (void)registerExpirationForAssetHandles;	// IMP=0x00000000001e311b
+ (int)openFdForDownloadPath:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c9c05
+ (id)assetCacheWithApplicationBundleID:(id)arg1 directoryContext:(id)arg2 didInit:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x00000000001c95e5
+ (id)_sharedCachesByDirectory;	// IMP=0x00000000001c9580
+ (id)_sharedCachesQueue;	// IMP=0x00000000001c9492
- (void).cxx_destruct;	// IMP=0x00000000001e42f4
@property(retain, nonatomic) NSMutableDictionary *deferredLastUsedTimeByTrackingUUID; // @synthesize deferredLastUsedTimeByTrackingUUID=_deferredLastUsedTimeByTrackingUUID;
@property(retain, nonatomic) NSMutableSet *deferredDeletedAssetHandles; // @synthesize deferredDeletedAssetHandles=_deferredDeletedAssetHandles;
@property(retain, nonatomic) NSMutableDictionary *volumeIndexByVolumeUUID; // @synthesize volumeIndexByVolumeUUID=_volumeIndexByVolumeUUID;
@property(retain, nonatomic) NSMutableDictionary *volumeUUIDByVolumeIndex; // @synthesize volumeUUIDByVolumeIndex=_volumeUUIDByVolumeIndex;
@property(nonatomic) long long checkoutCount; // @synthesize checkoutCount=_checkoutCount;
@property _Bool didDrop; // @synthesize didDrop=_didDrop;
@property _Bool isEvictionScheduled; // @synthesize isEvictionScheduled=_isEvictionScheduled;
@property(nonatomic) int fileDownloadDirectoryFd; // @synthesize fileDownloadDirectoryFd=_fileDownloadDirectoryFd;
@property(retain, nonatomic) CKDDirectoryContext *directoryContext; // @synthesize directoryContext=_directoryContext;
@property(readonly, nonatomic) NSString *applicationBundleID; // @synthesize applicationBundleID=_applicationBundleID;
@property(readonly, nonatomic) _Bool databaseWasReset; // @synthesize databaseWasReset=_databaseWasReset;
@property(readonly, nonatomic) CKSQLite *sqlite; // @synthesize sqlite=_sqlite;
@property(nonatomic) __weak CKDMMCS *MMCS; // @synthesize MMCS=_MMCS;
- (void)setupPersistentStateAtStartup;	// IMP=0x00000000001e4033
- (void)_resetAssetInflight;	// IMP=0x00000000001e37dd
- (void)expireAssetHandlesIfNecessaryWithGroup:(id)arg1;	// IMP=0x00000000001e36fa
- (void)_performExpirationForAssetHandles;	// IMP=0x00000000001e358e
- (void)_expireAssetHandlesWithGroup:(id)arg1;	// IMP=0x00000000001e2d76
- (void)_expireAssetHandlesWithExpiryDate:(id)arg1 group:(id)arg2;	// IMP=0x00000000001e1fbc
- (unsigned long long)predictedEvictedSizeForAllFilesForced:(_Bool)arg1;	// IMP=0x00000000001e1cde
- (unsigned long long)evictAllFilesForced:(_Bool)arg1;	// IMP=0x00000000001e1c04
- (unsigned long long)_evictAllFilesForced:(_Bool)arg1;	// IMP=0x00000000001e1956
- (unsigned long long)_evictWithEvictionInfo:(id)arg1;	// IMP=0x00000000001e1944
- (unsigned long long)_evictDownloadedFilesWithEvictionInfo:(id)arg1;	// IMP=0x00000000001df11f
- (void)_scheduleEvictionForDownloadedFiles;	// IMP=0x00000000001de8b7
- (id)assetHandleWithCachedPath:(id)arg1;	// IMP=0x00000000001de33b
- (_Bool)parseCachedPath:(id)arg1 assetHandleUUID:(id *)arg2 assetSignature:(id *)arg3;	// IMP=0x00000000001de1f7
- (_Bool)parseCachedPath:(id)arg1 assetHandleUUIDString:(id *)arg2 assetSignatureString:(id *)arg3;	// IMP=0x00000000001dddef
- (void)deferredUpdateLastTimeUsedForUUID:(id)arg1;	// IMP=0x00000000001ddb9f
- (id)findAssetHandleForItemID:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00000000001dd485
- (void)stopTrackingAssetHandlesByItemIDs:(id)arg1;	// IMP=0x00000000001dc969
- (void)updateDeferredLastAccessTimeForUUIDs;	// IMP=0x00000000001dc578
- (void)unregisterDeferredItemIDs:(id)arg1 andDeleteAssetHandles:(id)arg2;	// IMP=0x00000000001dbdfb
- (void)deferredStopTrackingAssetHandlesByItemIDs:(id)arg1;	// IMP=0x00000000001dbc18
- (_Bool)startTrackingGetAssetHandles:(id)arg1 operationType:(long long)arg2 error:(id *)arg3;	// IMP=0x00000000001dad94
- (_Bool)startTrackingRegisterOrPutAssetHandles:(id)arg1 operationType:(long long)arg2 error:(id *)arg3;	// IMP=0x00000000001d9caf
- (id)trackDownloadedData:(id)arg1 signature:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001d9a54
- (id)trackCachedButNotRegisteredMMCSItems:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d837f
- (id)trackDownloadedMMCSItems:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d6e3d
- (_Bool)updateAssetHandlesForPutMMCSItems:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d6161
- (_Bool)updateAssetHandlesForGetMMCSItems:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d5268
- (id)updateAssetHandlesForChunkedMMCSItems:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d4ac1
- (id)updateAssetHandlesForRegisteredMMCSItems:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d3a1c
- (id)_getAssetHandlesForCachedButNotRegisteredMMCSItems:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d2c1a
- (id)_getAssetHandlesForDownloadedMMCSItems:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d1e18
- (id)_saveData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001d1a91
- (void)scheduleUnregisterItemIDsAndDeleteAssetHandlesWithEvictionInfo:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000001d19e0
- (void)scheduleUnregisterItemsAndDeleteUnregisteredAssetHandlesWithIDs:(id)arg1;	// IMP=0x00000000001d19c9
- (void)scheduleUnregisterItemsAndDeleteUnregisteredAssetHandlesWithIDs:(id)arg1 deleteUnregisteredAssetHandlesWithIDs:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000001d1797
- (id)_performUnregisterItemsAndDeleteUnregisteredAssetHandlesWithIDs:(id)arg1 deleteUnregisteredAssetHandlesWithIDs:(id)arg2;	// IMP=0x00000000001d0a17
- (void)showAssetCache;	// IMP=0x00000000001cf5ef
- (unsigned long long)countAssetCacheItems;	// IMP=0x00000000001cf307
- (void)checkAssetHandlesForRegisteredMMCSItems:(id)arg1;	// IMP=0x00000000001ce60d
- (void)clearAssetCache;	// IMP=0x00000000001cdffa
- (unsigned long long)clearForced:(_Bool)arg1;	// IMP=0x00000000001cdd87
- (id)existingOrNewVolumeIndexForDeviceID:(id)arg1;	// IMP=0x00000000001cdbe4
- (id)deviceIDForVolumeIndex:(id)arg1;	// IMP=0x00000000001cdb60
- (void)_deleteAssetHandlesAndUnregisterItemsForUnmountedAssetVolumes;	// IMP=0x00000000001cc861
- (void)forgetVolumeUUID:(id)arg1;	// IMP=0x00000000001cc3a7
- (id)volumeUUIDWithVolumeIndex:(id)arg1;	// IMP=0x00000000001cc24c
- (id)existingOrNewVolumeIndexForVolumeUUID:(id)arg1;	// IMP=0x00000000001cbdb3
- (void)_setVolumeIndex:(id)arg1 forVolumeUUID:(id)arg2;	// IMP=0x00000000001cb9d5
- (void)dealloc;	// IMP=0x00000000001cb7c3
- (void)drop;	// IMP=0x00000000001cb17b
@property(readonly, nonatomic) NSString *fileDownloadPath;
@property(readonly, nonatomic) _Bool hasMigrated;
- (void)serialize_async:(CDUnknownBlockType)arg1;	// IMP=0x00000000001cb014
- (void)serialize:(CDUnknownBlockType)arg1;	// IMP=0x00000000001cae2f
- (id)_initWithApplicationBundleID:(id)arg1 directoryContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001ca545
- (void)registerForCacheExpiration;	// IMP=0x00000000001c9a27

@end
