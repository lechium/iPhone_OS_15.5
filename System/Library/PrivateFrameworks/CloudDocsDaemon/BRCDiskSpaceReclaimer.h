//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCLowDiskDelegate-Protocol.h>

@class BRCAccountSession, NSString, br_pacer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCDiskSpaceReclaimer : NSObject <BRCLowDiskDelegate>
{
    BRCAccountSession *_session;	// 8 = 0x8
    _Bool _isClosed;	// 16 = 0x10
    _Bool _computingPurgable;	// 17 = 0x11
    br_pacer *_purgePacer;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

+ (double)onDiskAccessTimeDeltaForUrgency:(int)arg1;	// IMP=0x00000000002adf18
+ (double)accessTimeDeltaForUrgency:(int)arg1;	// IMP=0x00000000002addf0
+ (int)simpleUrgencyForCacheDeleteUrgency:(int)arg1;	// IMP=0x00000000002adcc6
- (void).cxx_destruct;	// IMP=0x00000000002aed31
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (unsigned long long)totalSize;	// IMP=0x00000000002aeb24
- (unsigned long long)_recursivelySizeDirectoryAtPath:(id)arg1;	// IMP=0x00000000002ae976
- (_Bool)performOptimizeStorageWithTimeDelta:(double)arg1 onDiskAccessTimeDelta:(double)arg2 error:(id *)arg3;	// IMP=0x00000000002ae67a
- (void)requestPurgeSpace;	// IMP=0x00000000002ae66c
- (long long)cachedPurgeableSpaceForUrgency:(int)arg1;	// IMP=0x00000000002ae5a0
- (void)_requestPurgeSpace;	// IMP=0x00000000002ae257
- (void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(_Bool)arg2;	// IMP=0x00000000002ae1e3
- (_Bool)renameAndUnlinkInBackgroundItemAt:(int)arg1 path:(id)arg2;	// IMP=0x00000000002ae165
- (_Bool)renameAndUnlinkInBackgroundItemAtRelpath:(id)arg1;	// IMP=0x00000000002ae040
- (int)urgencyForCacheDeleteUrgency:(int)arg1;	// IMP=0x00000000002adcda
- (id)descriptionForItem:(id)arg1 context:(id)arg2;	// IMP=0x00000000002adac4
- (void)_enumerateItemsForEvictSyncWithBlock:(CDUnknownBlockType)arg1 withUrgency:(int)arg2;	// IMP=0x00000000002ada41
- (void)_enumerateItemsForEvictSyncWithBlock:(CDUnknownBlockType)arg1 withTimeDelta:(double)arg2 onDiskAccessTimeDelta:(double)arg3;	// IMP=0x00000000002ad12b
- (void)_updateNonPurgeableCachedSizeForDocument:(id)arg1;	// IMP=0x00000000002acc6b
- (id)accessTimestampForDocument:(id)arg1;	// IMP=0x00000000002acbd6
- (_Bool)documentWasAccessedRecently:(id)arg1;	// IMP=0x00000000002aca8f
- (void)didAccessDocument:(id)arg1;	// IMP=0x00000000002ac7f1
- (_Bool)overwriteDocumentAccessTime:(id)arg1 atime:(unsigned long long)arg2;	// IMP=0x00000000002ac6ea
- (_Bool)documentUpdateEvictability:(id)arg1;	// IMP=0x00000000002ac63a
- (_Bool)documentWasUpdated:(id)arg1 diffs:(unsigned long long)arg2;	// IMP=0x00000000002ac3d3
- (_Bool)documentWasDeleted:(id)arg1;	// IMP=0x00000000002ac334
- (_Bool)documentWasCreated:(id)arg1;	// IMP=0x00000000002ac24d
- (void)_updateNonPurgeableCachedSizeByAddingBytes:(long long)arg1;	// IMP=0x00000000002abf82
- (long long)periodicReclaimSpace;	// IMP=0x00000000002abbca
- (long long)purgeSpace:(long long)arg1 withUrgency:(int)arg2;	// IMP=0x00000000002ab9e3
- (long long)_purgeSpaceUnderQueue:(long long)arg1 withUrgency:(int)arg2;	// IMP=0x00000000002ab348
- (void)_asyncAutovacuumIfNeeds:(id)arg1;	// IMP=0x00000000002ab26d
- (long long)_vacuumDB:(id)arg1 amount:(long long)arg2 withUrgency:(int)arg3;	// IMP=0x00000000002ab1df
- (long long)_doIncrementalVacuum:(id)arg1 amount:(long long)arg2;	// IMP=0x00000000002aae96
- (long long)_fullVacuumIfPossible:(id)arg1;	// IMP=0x00000000002aadde
- (long long)_dbAutovacuumableSpaceInBytes:(id)arg1;	// IMP=0x00000000002aac45
- (long long)_dbSizeInBytes:(id)arg1;	// IMP=0x00000000002aab0d
- (void)computePurgeableSpaceForAllUrgenciesWithReply:(CDUnknownBlockType)arg1;	// IMP=0x00000000002a9775
- (void)cachedPurgeableSpaceForAllUrgencies:(id *)arg1 nonPurgeableSpace:(id *)arg2 error:(id *)arg3;	// IMP=0x00000000002a9648
- (void)close;	// IMP=0x00000000002a95cf
- (id)initWithAccountSession:(id)arg1;	// IMP=0x00000000002a9048

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
