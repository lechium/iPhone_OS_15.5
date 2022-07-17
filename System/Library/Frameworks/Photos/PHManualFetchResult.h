//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSOrderedSet, NSString, PHPhotoLibrary;

@interface PHManualFetchResult
{
    NSOrderedSet *_objectIDs;	// 96 = 0x60
    PHPhotoLibrary *_photoLibrary;	// 104 = 0x68
    NSArray *_objects;	// 112 = 0x70
    NSString *_identifier;	// 120 = 0x78
}

+ (id)emptyFetchResultWithPhotoLibrary:(id)arg1;	// IMP=0x0000000000121df9
- (void).cxx_destruct;	// IMP=0x0000000000121da6
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSArray *objects; // @synthesize objects=_objects;
- (id)description;	// IMP=0x0000000000121d3c
- (id)fetchResultWithChangeHandlingValue:(id)arg1;	// IMP=0x000000000012183a
- (id)fetchUpdatedObjects;	// IMP=0x00000000001216d5
- (unsigned long long)possibleChangesForChange:(id)arg1;	// IMP=0x0000000000121389
- (void)updateRegistrationForChangeNotificationDeltas;	// IMP=0x0000000000121372
- (id)objectIDAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001212f2
- (id)fetchedObjectIDsSet;	// IMP=0x0000000000121219
- (id)fetchedObjectIDs;	// IMP=0x0000000000121140
- (id)containerIdentifier;	// IMP=0x0000000000121138
- (long long)collectionFetchType;	// IMP=0x000000000012112d
- (id)fetchedObjects;	// IMP=0x000000000012111b
- (id)fetchSortDescriptors;	// IMP=0x0000000000121113
- (id)fetchRequest;	// IMP=0x000000000012110b
- (void)prefetchObjectsAtIndexes:(id)arg1;	// IMP=0x000000000012108a
- (id)photoLibrary;	// IMP=0x0000000000121075
- (id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3;	// IMP=0x0000000000121061
- (id)changeHandlingKey;	// IMP=0x000000000012104c
- (_Bool)isFullyBackedByObjectIDs;	// IMP=0x0000000000120fdf
- (id)copyWithOptions:(id)arg1;	// IMP=0x0000000000120e4c
- (void)getMediaTypeCounts;	// IMP=0x0000000000120c7e
- (unsigned long long)hash;	// IMP=0x0000000000120c0b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000120b21
@property(readonly) NSOrderedSet *objectIDs;
- (id)initWithOids:(id)arg1 photoLibrary:(id)arg2 fetchType:(id)arg3 fetchPropertySets:(id)arg4 identifier:(id)arg5 registerIfNeeded:(_Bool)arg6 photosCount:(unsigned long long)arg7 videosCount:(unsigned long long)arg8 audiosCount:(unsigned long long)arg9;	// IMP=0x0000000000120711
- (id)initWithOids:(id)arg1 photoLibrary:(id)arg2 fetchType:(id)arg3 fetchPropertySets:(id)arg4 identifier:(id)arg5 registerIfNeeded:(_Bool)arg6;	// IMP=0x00000000001206dc
- (id)initWithObjects:(id)arg1 photoLibrary:(id)arg2 fetchType:(id)arg3 fetchPropertySets:(id)arg4 identifier:(id)arg5 registerIfNeeded:(_Bool)arg6;	// IMP=0x000000000011ffdc

@end
