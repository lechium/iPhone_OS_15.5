//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLFileSystemAlbumMetadataPersistence-Protocol.h>

@class NSSet, NSString;

@interface PLImportSession <PLFileSystemAlbumMetadataPersistence>
{
    _Bool _needsPersistenceUpdate;	// 8 = 0x8
    _Bool _albumShouldBeAutomaticallyDeleted;	// 9 = 0x9
}

+ (id)validKindsForPersistence;	// IMP=0x00000000000bea2f
+ (id)albumWithImportSessionID:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x00000000000be92a
+ (id)albumsWithImportSessionIDs:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x00000000000be716
+ (id)insertNewImportSessionAlbumWithImportSessionID:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x00000000000be68c
+ (id)entityName;	// IMP=0x00000000000be67f
@property(nonatomic) _Bool albumShouldBeAutomaticallyDeleted; // @synthesize albumShouldBeAutomaticallyDeleted=_albumShouldBeAutomaticallyDeleted;
@property(nonatomic) _Bool needsPersistenceUpdate; // @synthesize needsPersistenceUpdate=_needsPersistenceUpdate;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;	// IMP=0x00000000000be637
- (_Bool)isEmpty;	// IMP=0x00000000000be61e
- (unsigned long long)count;	// IMP=0x00000000000be5da
- (void)prepareForDeletion;	// IMP=0x00000000000be4d4
- (void)didSave;	// IMP=0x00000000000be3d2
- (void)willSave;	// IMP=0x00000000000be1de
- (void)removePersistedFileSystemDataWithPathManager:(id)arg1;	// IMP=0x00000000000be0e8
- (void)persistMetadataToFileSystemWithPathManager:(id)arg1;	// IMP=0x00000000000bdff2
- (_Bool)isValidForPersistence;	// IMP=0x00000000000bdf76
- (id)_orderedBatchedAssets;	// IMP=0x00000000000bdc9f
- (_Bool)_isDateAfterEndDate:(id)arg1;	// IMP=0x00000000000bdbfb
- (_Bool)_isDateBeforeStartDate:(id)arg1;	// IMP=0x00000000000bdb57
- (_Bool)_isAssetIncludedInImportDates:(id)arg1;	// IMP=0x00000000000bdb07
- (void)updateImportDatesFromAddedAsset:(id)arg1;	// IMP=0x00000000000bda45
- (void)revalidateImportDates;	// IMP=0x00000000000bd7ff
- (void)_updateEndDate:(id)arg1;	// IMP=0x00000000000bd688
- (void)_updateStartDate:(id)arg1;	// IMP=0x00000000000bd511
- (id)mutableAssets;	// IMP=0x00000000000bd4f8
- (_Bool)validForPersistenceChangedForChangedKeys:(id)arg1;	// IMP=0x00000000000e4d41
- (id)payloadForChangedKeys:(id)arg1;	// IMP=0x00000000000e4ce5

// Remaining properties
@property(retain, nonatomic) NSSet *assets; // @dynamic assets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

