//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <QuickLookThumbnailingDaemon/QLThumbnailAdditionIndexInterface-Protocol.h>

@class NSURL, PQLConnection;
@protocol OS_dispatch_source;

@interface QLThumbnailAdditionIndex : NSObject <QLThumbnailAdditionIndexInterface>
{
    NSURL *_url;	// 8 = 0x8
    PQLConnection *_db;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_dbWatcher;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x000000000003349a
+ (void)setUpCleanupXPCActivitySynchronously:(_Bool)arg1;	// IMP=0x0000000000033396
+ (void)registerCleanupXPCActivity;	// IMP=0x00000000000332ea
- (void).cxx_destruct;	// IMP=0x0000000000038508
@property(readonly) PQLConnection *db; // @synthesize db=_db;
- (void)retrieveAllAdditions:(CDUnknownBlockType)arg1;	// IMP=0x000000000003848e
- (void)addThumbnailForURLWrapper:(id)arg1 size:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000003837e
- (void)removeThumbnailForURL:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000003832e
- (void)updateLastHitDate:(id)arg1 ofThumbnailForURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000382d9
- (void)updateFileSize:(unsigned long long)arg1 ofThumbnailForURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000038284
- (void)hasThumbnailForURLWrapper:(id)arg1 updateLastHitDate:(_Bool)arg2 andSize:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000003814f
@property(readonly, copy) NSURL *databaseURL;
- (id)databaseConnection;	// IMP=0x0000000000038133
- (void)performDatabaseMaintenance;	// IMP=0x0000000000037f20
- (void)cleanUpBatchOfEntries:(id)arg1;	// IMP=0x0000000000037343
- (void)removeEntriesFromDatabase:(id)arg1;	// IMP=0x000000000003717c
- (int)deviceForHomeDirectory;	// IMP=0x000000000003709f
- (void)removeAllAdditions;	// IMP=0x0000000000036e2c
- (id)batchOfEntriesStartingAt:(unsigned long long)arg1 endingAt:(unsigned long long *)arg2;	// IMP=0x0000000000036a53
- (id)allEntries;	// IMP=0x00000000000367de
- (void)enumerateCacheEntriesWithHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000003660d
- (id)entriesEnumerator;	// IMP=0x000000000003654f
- (_Bool)addThumbnailForURL:(id)arg1 size:(unsigned long long)arg2;	// IMP=0x00000000000364c9
- (_Bool)addThumbnailForURL:(id)arg1 lastHitDate:(id)arg2 size:(unsigned long long)arg3;	// IMP=0x0000000000035f99
- (_Bool)removeThumbnailForURL:(id)arg1;	// IMP=0x0000000000035d16
- (_Bool)updateLastHitDate:(id)arg1 ofThumbnailForURL:(id)arg2;	// IMP=0x0000000000035a19
- (_Bool)updateFileSize:(unsigned long long)arg1 ofThumbnailForURL:(id)arg2;	// IMP=0x00000000000357a4
- (_Bool)hasThumbnailForURL:(id)arg1 updateLastHitDate:(_Bool)arg2 andSize:(unsigned long long)arg3;	// IMP=0x0000000000035153
- (id)whereClauseForURL:(id)arg1;	// IMP=0x000000000003505d
- (id)init;	// IMP=0x0000000000034efa
- (id)initForTesting;	// IMP=0x0000000000034de3
- (void)_resetDatabaseOnItsQueue:(id)arg1;	// IMP=0x0000000000034bd5
- (id)openDatabaseAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000034922
- (id)makeDatabaseAtURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000003445e
- (void)logError:(id)arg1 onDB:(id)arg2 statement:(id)arg3;	// IMP=0x0000000000034356
- (id)upgradeDatabaseIfNeeded:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000033ca5
- (void)setUpDatabase:(id)arg1;	// IMP=0x000000000003388c
- (void)close;	// IMP=0x000000000003378b
- (void)_closeDatabaseOnItsQueue:(id)arg1;	// IMP=0x00000000000336cc
- (void)_cleanUpAfterClose;	// IMP=0x0000000000033696
- (_Bool)open;	// IMP=0x00000000000335b8
- (id)initWithURL:(id)arg1;	// IMP=0x000000000003354d
- (void)cancelCacheDeletePurge;	// IMP=0x00000000000395c4
- (long long)purgeOnMountPoint:(id)arg1 withUrgency:(int)arg2 beforeDate:(id)arg3;	// IMP=0x0000000000038c00
- (long long)purgeableSpaceOnMountPoint:(id)arg1 withUrgency:(int)arg2 beforeDate:(id)arg3;	// IMP=0x000000000003894e
- (id)volumeRestrictionForMountPoint:(id)arg1;	// IMP=0x000000000003892c

@end

