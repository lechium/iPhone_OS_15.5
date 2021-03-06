//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString, PHFetchOptions, PHPhotoLibrary;

@interface PHRecentContentSyndicationCollectionsResult
{
    PHFetchOptions *_fetchOptions;	// 96 = 0x60
    PHPhotoLibrary *_photoLibrary;	// 104 = 0x68
    long long _maxNumberOfStacks;	// 112 = 0x70
    long long _maxNumberOfAssetsPerStack;	// 120 = 0x78
    NSArray *_objects;	// 128 = 0x80
    NSString *_identifier;	// 136 = 0x88
}

+ (id)pointerComparableIdentifiersFromIdentifiers:(id)arg1;	// IMP=0x00000000001627c0
- (void).cxx_destruct;	// IMP=0x00000000001626ce
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSArray *objects; // @synthesize objects=_objects;
- (id)description;	// IMP=0x0000000000162664
- (unsigned long long)possibleChangesForChange:(id)arg1;	// IMP=0x0000000000161f26
- (void)updateRegistrationForChangeNotificationDeltas;	// IMP=0x0000000000161f0f
- (id)objectIDAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000161e8f
- (id)containerIdentifier;	// IMP=0x0000000000161e87
- (long long)collectionFetchType;	// IMP=0x0000000000161e7c
- (id)fetchedObjects;	// IMP=0x0000000000161e6a
- (id)fetchSortDescriptors;	// IMP=0x0000000000161e62
- (id)fetchRequest;	// IMP=0x0000000000161e5a
- (void)prefetchObjectsAtIndexes:(id)arg1;	// IMP=0x0000000000161e54
- (id)photoLibrary;	// IMP=0x0000000000161e3f
- (id)additionalChangedIdentifiersFromPreviousIdentifiers:(id)arg1 currentIdentifiers:(id)arg2 inFetchResultBeforeChanges:(id)arg3;	// IMP=0x0000000000161a9a
- (id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3;	// IMP=0x00000000001617bd
- (id)changeHandlingKey;	// IMP=0x00000000001617a8
- (id)copyWithOptions:(id)arg1;	// IMP=0x00000000001616bd
- (unsigned long long)hash;	// IMP=0x000000000016164a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000161560
- (id)initWithObjects:(id)arg1 photoLibrary:(id)arg2 fetchOptions:(id)arg3 maxNumberOfStacks:(long long)arg4 maxNumberOfAssetsPerStack:(long long)arg5 fetchType:(id)arg6 fetchPropertySets:(id)arg7 identifier:(id)arg8 registerIfNeeded:(_Bool)arg9;	// IMP=0x0000000000161296
- (id)_transientCollectionForAssetOID:(id)arg1;	// IMP=0x0000000000161180
- (id)_transientCollectionForIdentifier:(id)arg1;	// IMP=0x0000000000160fb4
- (_Bool)_hasReachedGroupCapacity;	// IMP=0x0000000000160f7e

@end

