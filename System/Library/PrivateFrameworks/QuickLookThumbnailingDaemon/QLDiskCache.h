//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, NSString, QLCacheIndexDatabase, QLCacheMMAPBlobDatabase;
@protocol QLDiskCacheDelegate;

@interface QLDiskCache : NSObject
{
    NSString *_path;	// 8 = 0x8
    QLCacheIndexDatabase *_indexDatabase;	// 16 = 0x10
    QLCacheMMAPBlobDatabase *_blobDatabase;	// 24 = 0x18
    NSString *_metaDataFilePath;	// 32 = 0x20
    NSString *_dirtyFilePath;	// 40 = 0x28
    NSString *_exclusivePath;	// 48 = 0x30
    NSString *_resetFilePath;	// 56 = 0x38
    NSString *_resetReasonPath;	// 64 = 0x40
    _Bool _dirtyForDelegate;	// 72 = 0x48
    NSLock *_databaseLock;	// 80 = 0x50
    _Bool _opened;	// 88 = 0x58
    NSMutableDictionary *_metaData;	// 96 = 0x60
    _Bool _metaDataDirty;	// 104 = 0x68
    long long _writingCount;	// 112 = 0x70
    int _exclusiveFD;	// 120 = 0x78
    _Bool _hasDirtyLock;	// 124 = 0x7c
    id <QLDiskCacheDelegate> _delegate;	// 128 = 0x80
}

+ (void)setupCacheAtLocationIfNecessary:(id)arg1;	// IMP=0x000000000002f45d
+ (id)defaultLocation;	// IMP=0x000000000002f2dc
+ (void)setCacheLocationForTesting:(id)arg1;	// IMP=0x000000000002f2c8
- (void).cxx_destruct;	// IMP=0x000000000003325e
@property(retain) NSString *metaDataFilePath; // @synthesize metaDataFilePath=_metaDataFilePath;
@property(retain) NSMutableDictionary *metaData; // @synthesize metaData=_metaData;
@property _Bool metaDataDirty; // @synthesize metaDataDirty=_metaDataDirty;
@property(readonly) long long writingCount; // @synthesize writingCount=_writingCount;
@property(readonly, nonatomic) _Bool hasDirtyLock; // @synthesize hasDirtyLock=_hasDirtyLock;
@property __weak id <QLDiskCacheDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly) NSString *path; // @synthesize path=_path;
@property(readonly) _Bool isOpened; // @synthesize isOpened=_opened;
- (id)itemsAfterFilteringOutItemsWithMissingThumbnails:(id)arg1;	// IMP=0x0000000000033195
- (void)noteRemoteThumbnailPresentForItems:(id)arg1;	// IMP=0x000000000003317f
- (void)noteRemoteThumbnailMissingForItems:(id)arg1;	// IMP=0x0000000000033169
- (_Bool)setLastHitDateOfAllCachedThumbnailsToDate:(id)arg1;	// IMP=0x0000000000033153
- (_Bool)removeCachedThumbnailsFromUninstalledFileProvidersWithIdentifiers:(id)arg1;	// IMP=0x00000000000330f8
- (_Bool)removeCachedThumbnailsFromUninstalledFileProvidersWithRemainingFileProviderIdentifiers:(id)arg1;	// IMP=0x000000000003309d
- (id)lastResetWithDate:(id *)arg1;	// IMP=0x0000000000032ff2
- (id)lastCrapWithDate:(id *)arg1;	// IMP=0x0000000000032fdc
@property(readonly) unsigned long long thumbnailCount;
@property(readonly) unsigned long long fileEntryCount;
@property(readonly) unsigned long long maxThumbnailLifeTime;
- (_Bool)discardReservedBuffer:(id)arg1;	// IMP=0x0000000000032ddc
- (_Bool)validateReservedBuffer:(id)arg1;	// IMP=0x0000000000032c1e
- (id)reserveBufferForData:(id)arg1;	// IMP=0x000000000003297f
- (id)reserveBufferWithLength:(unsigned long long)arg1;	// IMP=0x00000000000328aa
- (unsigned long long)sizeSumOfThumbnailsOlderThanDate:(id)arg1;	// IMP=0x0000000000032894
- (void)setMetaData:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000000327c0
- (id)metaDataForKey:(id)arg1;	// IMP=0x00000000000327aa
- (id)blobDatabase;	// IMP=0x000000000003279c
- (id)indexDatabase;	// IMP=0x000000000003278e
- (id)checkConsistency;	// IMP=0x0000000000032643
- (void)reset;	// IMP=0x00000000000325ad
- (void)close;	// IMP=0x000000000003251b
- (_Bool)open;	// IMP=0x000000000003244c
- (id)_checkConsistency;	// IMP=0x00000000000323d8
- (void)_resetWithReason:(id)arg1;	// IMP=0x00000000000322a4
- (void)_close;	// IMP=0x00000000000321ee
- (void)_closeWhatIsOpen;	// IMP=0x0000000000032153
- (_Bool)_open;	// IMP=0x00000000000315af
@property(readonly) unsigned long long maxSize;
@property(readonly) unsigned long long size;
@property(readonly) unsigned long long reserveBufferSize;
@property(readonly) unsigned long long reserveBufferCount;
@property(readonly) float fragmentation;
- (void)updateHitCount:(id)arg1 forFileIdentifier:(id)arg2;	// IMP=0x000000000003152b
- (void)removeFilesWithFileInfo:(id)arg1;	// IMP=0x00000000000314db
- (void)checkpoint;	// IMP=0x00000000000314c5
- (unsigned long long)cleanupDeletedFiles;	// IMP=0x000000000003146e
- (unsigned long long)cleanup;	// IMP=0x000000000003140d
- (void)logCacheSizeBeforeCleanup;	// IMP=0x00000000000312b1
- (unsigned long long)freeDiskSpaceForNewThumbnails;	// IMP=0x000000000003120f
- (unsigned long long)removeThumbnailsOlderThanDate:(id)arg1;	// IMP=0x00000000000311b8
- (unsigned long long)_deleteBlobArrayFromDatabase:(id)arg1;	// IMP=0x000000000003101d
- (void)discardThumbnailDataBatchForReset:(id)arg1;	// IMP=0x0000000000030ef3
- (void)writeThumbnailDataBatch:(id)arg1;	// IMP=0x0000000000030dc9
- (_Bool)doWriting:(CDUnknownBlockType)arg1;	// IMP=0x0000000000030a5e
- (_Bool)doReading:(CDUnknownBlockType)arg1;	// IMP=0x00000000000308ec
- (void)do:(CDUnknownBlockType)arg1;	// IMP=0x00000000000308d6
- (void)_cleanupForceResetAtNextLaunch;	// IMP=0x00000000000308b8
- (void)forceResetAtNextLaunch;	// IMP=0x0000000000030884
- (void)_removeDirtyLock;	// IMP=0x00000000000307ce
- (void)_createDirtyLockInformDelegate:(_Bool)arg1;	// IMP=0x000000000003071d
- (void)_cleanupDirtyLock;	// IMP=0x0000000000030717
- (void)_discardThumbnailDataForReset:(id)arg1;	// IMP=0x00000000000305a7
- (_Bool)_setThumbnailData:(id)arg1;	// IMP=0x000000000002fb36
- (id)enumeratorForAllThumbnailsWithFileIdentifier:(id)arg1;	// IMP=0x000000000002fada
- (id)enumeratorForAllFilesUbiquitousFiles:(_Bool)arg1 withExtraInfo:(_Bool)arg2;	// IMP=0x000000000002fa90
- (id)enumeratorForThumbnailRequests:(id)arg1;	// IMP=0x000000000002fa34
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000002f8aa
- (id)initWithPathLocation:(id)arg1 cacheSize:(long long)arg2 cacheThread:(id)arg3;	// IMP=0x000000000002f674

@end

