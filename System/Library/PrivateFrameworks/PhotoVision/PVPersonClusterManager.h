//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoVision/PVPhotoLibraryProtocol-Protocol.h>

@class NSMutableDictionary, NSSet, NSString, PVVisionHelper;
@protocol PVPhotoLibraryProtocol;

@interface PVPersonClusterManager : NSObject <PVPhotoLibraryProtocol>
{
    NSMutableDictionary *_representativeFaceObservationForPersonIdentifier;	// 8 = 0x8
    NSMutableDictionary *_distancesForPersonLocalIdentifier;	// 16 = 0x10
    NSMutableDictionary *_distancesInCommonMomentsForPersonLocalIdentifier;	// 24 = 0x18
    id <PVPhotoLibraryProtocol> _photoLibrary;	// 32 = 0x20
    PVVisionHelper *_visionHelper;	// 40 = 0x28
    NSMutableDictionary *_personClusters;	// 48 = 0x30
    NSSet *_assetsToIgnore;	// 56 = 0x38
}

+ (id)nodeSortDescriptors;	// IMP=0x000000000001b665
+ (id)faceGroupSortDescriptors;	// IMP=0x000000000001b5c7
+ (id)peopleSortDescriptors;	// IMP=0x000000000001b529
+ (id)faceSortDescriptors;	// IMP=0x000000000001b48b
+ (id)assetSortDescriptors;	// IMP=0x000000000001b3a9
+ (id)momentSortDescriptors;	// IMP=0x000000000001b30b
+ (id)personProcessingSortDescriptors;	// IMP=0x000000000001b22f
- (void).cxx_destruct;	// IMP=0x000000000001abad
@property(retain, nonatomic) NSSet *assetsToIgnore; // @synthesize assetsToIgnore=_assetsToIgnore;
@property(retain, nonatomic) NSMutableDictionary *personClusters; // @synthesize personClusters=_personClusters;
@property(retain, nonatomic) PVVisionHelper *visionHelper; // @synthesize visionHelper=_visionHelper;
@property(retain, nonatomic) id <PVPhotoLibraryProtocol> photoLibrary; // @synthesize photoLibrary=_photoLibrary;
- (id)pv_lastAssetDate;	// IMP=0x000000000001aaf1
- (float)pv_faceProcessingProgress;	// IMP=0x000000000001aaa1
- (id)pv_fetchInvalidAssetIdentifiersForCommonComparison;	// IMP=0x000000000001aa51
- (id)pv_fetchFaceGroupsForPerson:(id)arg1;	// IMP=0x000000000001a9af
- (id)pv_fetchFaceGroups;	// IMP=0x000000000001a95f
- (id)pv_fetchAssetsForFaceGroup:(id)arg1;	// IMP=0x000000000001a8dc
- (id)pv_fetchAssetsForPerson:(id)arg1;	// IMP=0x000000000001a8c7
- (id)pv_fetchAssetsInMoment:(id)arg1;	// IMP=0x000000000001a844
- (id)pv_fetchAssetsWithLocalIdentifiers:(id)arg1;	// IMP=0x000000000001a7c1
- (id)pv_fetchMomentsForAssetsWithLocalIdentifiers:(id)arg1;	// IMP=0x000000000001a73e
- (id)pv_fetchMomentsForPerson:(id)arg1;	// IMP=0x000000000001a729
- (id)pv_fetchMomentsWithLocalIdentifiers:(id)arg1;	// IMP=0x000000000001a6a6
- (id)pv_fetchMoments;	// IMP=0x000000000001a656
- (id)pv_fetchAssetsForFaceLocalIdentifiers:(id)arg1;	// IMP=0x000000000001a5d3
- (id)pv_fetchFacesGroupedByAssetLocalIdentifierForAssets:(id)arg1;	// IMP=0x000000000001a550
- (id)pv_fetchFacesForFaceGroup:(id)arg1;	// IMP=0x000000000001a4cd
- (id)pv_fetchFacesForPersonLocalIdentifiers:(id)arg1 inMoment:(id)arg2;	// IMP=0x000000000001a436
- (id)pv_fetchFacesForPerson:(id)arg1 inMoment:(id)arg2;	// IMP=0x000000000001a012
- (id)pv_fetchFacesForPerson:(id)arg1;	// IMP=0x0000000000019ffd
- (id)pv_fetchFacesWithLocalIdentifiers:(id)arg1;	// IMP=0x0000000000019f7a
- (unsigned long long)pv_numberOfFacesWithFaceprints;	// IMP=0x0000000000019f36
- (id)pv_fetchPersonsGroupedByAssetLocalIdentifierForAssets:(id)arg1;	// IMP=0x0000000000019e0d
- (id)pv_fetchInvalidCandidatePersonsForPerson:(id)arg1;	// IMP=0x0000000000019d41
- (id)pv_fetchCandidatePersonsForPerson:(id)arg1;	// IMP=0x0000000000019c75
- (id)pv_fetchPersonsInMoment:(id)arg1;	// IMP=0x0000000000019bcb
- (id)pv_fetchPersonsWithType:(unsigned long long)arg1;	// IMP=0x0000000000019af4
- (id)pv_fetchPersonsWithLocalIdentifiers:(id)arg1;	// IMP=0x000000000001984f
- (_Bool)pv_performChangesAndWait:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x00000000000197d2
- (id)pv_persistentStorageDirectoryURL;	// IMP=0x0000000000019782
- (id)representativeFaceObservationForFaces:(id)arg1 ageType:(unsigned short *)arg2 inPerson:(id)arg3;	// IMP=0x0000000000018e29
- (id)_representativeFaceObservationForPerson:(id)arg1 ageType:(unsigned short *)arg2 inAssetCollections:(id)arg3;	// IMP=0x00000000000187da
- (id)representativeFaceObservationForPerson:(id)arg1 ageType:(unsigned short *)arg2;	// IMP=0x00000000000187c5
- (float)_adjustDistanceFactorForPerson:(id)arg1 andPerson:(id)arg2 forAgeType:(unsigned short)arg3 andAgeType:(unsigned short)arg4;	// IMP=0x00000000000185d8
- (float)_minimiumDistanceRequiredForCommonAssetDistanceForAgeType:(unsigned short)arg1;	// IMP=0x00000000000185bb
- (float)distanceBetweenPerson:(id)arg1 andPerson:(id)arg2 useCommonMoments:(_Bool)arg3 minAgeType:(unsigned short *)arg4 updateBlock:(CDUnknownBlockType)arg5 error:(id *)arg6;	// IMP=0x00000000000178a6
- (float)distanceWithOverlapCheckBetweenPerson:(id)arg1 andPerson:(id)arg2 useCommonMoments:(_Bool)arg3 minAgeType:(unsigned short *)arg4 updateBlock:(CDUnknownBlockType)arg5 error:(id *)arg6;	// IMP=0x00000000000177b9
- (unsigned long long)numberOfMomentsInCommonBetweenPerson:(id)arg1 andPerson:(id)arg2;	// IMP=0x0000000000017701
- (unsigned long long)numberOfAssetsInCommonBetweenPersonAssetIdentifiers:(id)arg1 andPersonAssetIdentifiers:(id)arg2;	// IMP=0x0000000000017644
- (unsigned long long)numberOfAssetsInCommonBetweenPerson:(id)arg1 andPerson:(id)arg2;	// IMP=0x00000000000175ab
- (long long)assetsOverlapBetweenPersonAssetIdentifiers:(id)arg1 andPersonAssetIdentifiers:(id)arg2;	// IMP=0x0000000000017468
- (long long)assetsOverlapBetweenPerson:(id)arg1 andPerson:(id)arg2;	// IMP=0x00000000000173cf
- (unsigned short)minAgeTypeForFaceAgeType:(unsigned short)arg1 andFaceAgeType:(unsigned short)arg2;	// IMP=0x00000000000173b3
- (void)mergePersons:(id)arg1 withPerson:(id)arg2;	// IMP=0x00000000000169ff
- (id)_mapPersonClustersToFaceGroups:(id)arg1;	// IMP=0x0000000000016760
- (id)_mapPersonClustersToPersons:(id)arg1;	// IMP=0x00000000000164d3
- (void)invalidateCachesForPerson:(id)arg1;	// IMP=0x0000000000016277
- (void)clearCaches;	// IMP=0x0000000000016228
- (id)initWithPhotoLibrary:(id)arg1;	// IMP=0x0000000000016116

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
