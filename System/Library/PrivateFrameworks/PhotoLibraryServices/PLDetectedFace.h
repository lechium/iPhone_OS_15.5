//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLSyncableDetectedFace-Protocol.h>

@class NSDate, NSSet, NSString, PLDetectedFaceGroup, PLDetectedFaceprint, PLFaceCrop, PLManagedAsset, PLPerson;

@interface PLDetectedFace <PLSyncableDetectedFace>
{
}

+ (id)predicateToExcludeBodyOnlyDetection;	// IMP=0x000000000024d4a1
+ (id)predicateForIncludedDetectionTypes:(id)arg1;	// IMP=0x000000000024d3c8
+ (id)predicateForFaceCountTrigger;	// IMP=0x000000000024d38d
+ (id)predicateForArchival;	// IMP=0x000000000024d346
+ (id)predicatesForFacesNeedingFaceCropGeneration;	// IMP=0x000000000024d1ae
+ (id)predicatesToExcludeNonVisibleFaces;	// IMP=0x000000000024cfdb
+ (void)batchFetchKeyFaceByPersonObjectIDWithPersonObjectIDs:(id)arg1 library:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000024ce06
+ (void)batchFetchDetectedFacesByAssetUUIDWithAssetUUIDs:(id)arg1 predicate:(id)arg2 library:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000024cc09
+ (unsigned long long)countOfHiddenFacesOnAssetsWithObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x000000000024ca54
+ (id)detectedFaceWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;	// IMP=0x000000000024c8b3
+ (id)entityName;	// IMP=0x000000000024c8a6
+ (void)enumerateAssetUUIDsForSearchIndexingWithDetctedFaceUUIDs:(id)arg1 managedObjectContext:(id)arg2 assetUUIDHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000001179a9
+ (void)resetCloudStateInPhotoLibrary:(id)arg1;	// IMP=0x000000000050ab3f
+ (long long)resetAssetForAllSyncableFacesInManagedObjectContext:(id)arg1 error:(id *)arg2;	// IMP=0x000000000050a9a3
+ (id)syncableFacesToUploadInitiallyInLibrary:(id)arg1 limit:(unsigned long long)arg2;	// IMP=0x000000000050a917
+ (id)_syncableFacesToUploadInitiallyPredicate;	// IMP=0x000000000050a7f9
+ (id)syncableFacesPredicate;	// IMP=0x000000000050a7d5
+ (id)_facesMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2 inPhotoLibrary:(id)arg3;	// IMP=0x000000000050a5dd
+ (id)findExistingFaceMatchingDimension:(id)arg1 inFaces:(id)arg2 ignoreSourceAssetDimensions:(_Bool)arg3;	// IMP=0x000000000050a471
@property(nonatomic) int effectiveNameSource;
- (void)addClusterRejectedPerson:(id)arg1;	// IMP=0x000000000024c7b8
- (void)addRejectedPersonNeedingFaceCrops:(id)arg1;	// IMP=0x000000000024c6e0
- (void)addRejectedPerson:(id)arg1;	// IMP=0x000000000024c643
- (id)namingDescription;	// IMP=0x000000000024c583
- (id)debugLogDescription;	// IMP=0x000000000024bf80
- (void)removeFaceprint;	// IMP=0x000000000024bf04
- (void)_verifyAssetRelationship;	// IMP=0x000000000024bd1b
- (_Bool)isTorsoOnly;	// IMP=0x000000000024bcf7
@property(readonly, nonatomic) _Bool isTrainingFace;
- (void)_updateFaceGroupIfNeeded;	// IMP=0x000000000024baf0
- (void)_touchPersonForPersistenceIfNeeded;	// IMP=0x000000000024b9e1
- (void)willSave;	// IMP=0x000000000024b35d
- (void)delete;	// IMP=0x000000000024b311
- (void)awakeFromInsert;	// IMP=0x000000000024b29c
- (_Bool)validForPersistenceChangedForChangedKeys:(id)arg1;	// IMP=0x00000000003e916c
- (id)payloadIDForTombstone:(id)arg1;	// IMP=0x00000000003e90ff
- (id)payloadForChangedKeys:(id)arg1;	// IMP=0x00000000003e9097
- (id)payloadID;	// IMP=0x00000000003e9034
- (_Bool)isValidForJournalPersistence;	// IMP=0x00000000003e8fad
- (double)photosFaceRepresentationQuality;	// IMP=0x000000000050a45f
- (double)photosFaceRepresentationRoll;	// IMP=0x000000000050a44d
- (id)photosFaceRepresentationLocalIdentifier;	// IMP=0x000000000050a370
- (long long)photosFaceRepresentationClusterSequenceNumber;	// IMP=0x000000000050a35b
- (long long)photosFaceRepresentationQualityMeasure;	// IMP=0x000000000050a346
- (_Bool)photosFaceRepresentationIsRightEyeClosed;	// IMP=0x000000000050a334
- (_Bool)photosFaceRepresentationIsLeftEyeClosed;	// IMP=0x000000000050a322
- (_Bool)photosFaceRepresentationHasSmile;	// IMP=0x000000000050a310
- (double)photosFaceRepresentationBlurScore;	// IMP=0x000000000050a2fe
- (double)photosFaceRepresentationSize;	// IMP=0x000000000050a2ec
- (double)photosFaceRepresentationCenterY;	// IMP=0x000000000050a2da
- (double)photosFaceRepresentationCenterX;	// IMP=0x000000000050a2c8
- (long long)photosFaceRepresentationSourceHeight;	// IMP=0x000000000050a2b6
- (long long)photosFaceRepresentationSourceWidth;	// IMP=0x000000000050a2a4
- (id)syncDescription;	// IMP=0x000000000050a197
- (id)momentShare;	// IMP=0x000000000050a18f
- (id)cplFullRecord;	// IMP=0x000000000050a112
@property(readonly, retain, nonatomic) id localID;
- (_Bool)isSyncableChange;	// IMP=0x0000000000509e90
- (_Bool)supportsCloudUpload;	// IMP=0x0000000000509e52

// Remaining properties
@property(retain, nonatomic) NSDate *adjustmentVersion; // @dynamic adjustmentVersion;
@property(nonatomic) unsigned short ageType; // @dynamic ageType;
@property(retain, nonatomic) PLManagedAsset *asset; // @dynamic asset;
@property(readonly, nonatomic) _Bool assetVisible; // @dynamic assetVisible;
@property(nonatomic) double blurScore; // @dynamic blurScore;
@property(nonatomic) double bodyCenterX; // @dynamic bodyCenterX;
@property(nonatomic) double bodyCenterY; // @dynamic bodyCenterY;
@property(nonatomic) double bodyHeight; // @dynamic bodyHeight;
@property(nonatomic) double bodyWidth; // @dynamic bodyWidth;
@property(nonatomic) double centerX; // @dynamic centerX;
@property(nonatomic) double centerY; // @dynamic centerY;
@property(nonatomic) short cloudLocalState; // @dynamic cloudLocalState;
@property(nonatomic) int cloudNameSource; // @dynamic cloudNameSource;
@property(retain, nonatomic) NSSet *clusterRejectedPersons; // @dynamic clusterRejectedPersons;
@property(nonatomic) int clusterSequenceNumber; // @dynamic clusterSequenceNumber;
@property(nonatomic) short confirmedFaceCropGenerationState; // @dynamic confirmedFaceCropGenerationState;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) NSSet *detectionTraits; // @dynamic detectionTraits;
@property(nonatomic) short detectionType; // @dynamic detectionType;
@property(nonatomic) unsigned short ethnicityType; // @dynamic ethnicityType;
@property(nonatomic) unsigned short eyeMakeupType; // @dynamic eyeMakeupType;
@property(nonatomic) unsigned short eyesState; // @dynamic eyesState;
@property(nonatomic) int faceAlgorithmVersion; // @dynamic faceAlgorithmVersion;
@property(retain, nonatomic) PLFaceCrop *faceCrop; // @dynamic faceCrop;
@property(nonatomic) unsigned short faceExpressionType; // @dynamic faceExpressionType;
@property(retain, nonatomic) PLDetectedFaceGroup *faceGroup; // @dynamic faceGroup;
@property(retain, nonatomic) PLDetectedFaceGroup *faceGroupBeingKeyFace; // @dynamic faceGroupBeingKeyFace;
@property(retain, nonatomic) PLDetectedFaceprint *faceprint; // @dynamic faceprint;
@property(nonatomic) unsigned short facialHairType; // @dynamic facialHairType;
@property(nonatomic) double gazeCenterX; // @dynamic gazeCenterX;
@property(nonatomic) double gazeCenterY; // @dynamic gazeCenterY;
@property(nonatomic) unsigned short gazeType; // @dynamic gazeType;
@property(nonatomic) unsigned short genderType; // @dynamic genderType;
@property(nonatomic) unsigned short glassesType; // @dynamic glassesType;
@property(retain, nonatomic) NSString *groupingIdentifier; // @dynamic groupingIdentifier;
@property(nonatomic) unsigned short hairColorType; // @dynamic hairColorType;
@property(nonatomic) unsigned short hairType; // @dynamic hairType;
@property(nonatomic) _Bool hasFaceMask; // @dynamic hasFaceMask;
@property(nonatomic) _Bool hasSmile; // @dynamic hasSmile;
@property(readonly) unsigned long long hash;
@property(nonatomic) unsigned short headgearType; // @dynamic headgearType;
@property(nonatomic) _Bool hidden; // @dynamic hidden;
@property(nonatomic) _Bool isInTrash; // @dynamic isInTrash;
@property(nonatomic) _Bool isLeftEyeClosed; // @dynamic isLeftEyeClosed;
@property(nonatomic) _Bool isRightEyeClosed; // @dynamic isRightEyeClosed;
@property(nonatomic) double leftEyeX; // @dynamic leftEyeX;
@property(nonatomic) double leftEyeY; // @dynamic leftEyeY;
@property(nonatomic) unsigned short lipMakeupType; // @dynamic lipMakeupType;
@property(nonatomic) _Bool manual; // @dynamic manual;
@property(retain, nonatomic) NSString *masterIdentifier; // @dynamic masterIdentifier;
@property(nonatomic) double mouthX; // @dynamic mouthX;
@property(nonatomic) double mouthY; // @dynamic mouthY;
@property(nonatomic) int nameSource; // @dynamic nameSource;
@property(retain, nonatomic) PLPerson *person; // @dynamic person;
@property(retain, nonatomic) PLPerson *personBeingKeyFace; // @dynamic personBeingKeyFace;
@property(nonatomic) unsigned short poseType; // @dynamic poseType;
@property(nonatomic) double poseYaw; // @dynamic poseYaw;
@property(nonatomic) double quality; // @dynamic quality;
@property(nonatomic) int qualityMeasure; // @dynamic qualityMeasure;
@property(retain, nonatomic) NSSet *rejectedPersons; // @dynamic rejectedPersons;
@property(retain, nonatomic) NSSet *rejectedPersonsNeedingFaceCrops; // @dynamic rejectedPersonsNeedingFaceCrops;
@property(nonatomic) double rightEyeX; // @dynamic rightEyeX;
@property(nonatomic) double rightEyeY; // @dynamic rightEyeY;
@property(nonatomic) double roll; // @dynamic roll;
@property(nonatomic) double size; // @dynamic size;
@property(nonatomic) unsigned short skintoneType; // @dynamic skintoneType;
@property(nonatomic) unsigned short smileType; // @dynamic smileType;
@property(nonatomic) long long sourceHeight; // @dynamic sourceHeight;
@property(nonatomic) long long sourceWidth; // @dynamic sourceWidth;
@property(readonly) Class superclass;
@property(nonatomic) int trainingType; // @dynamic trainingType;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;
@property(nonatomic) short vipModelType; // @dynamic vipModelType;
@property(nonatomic) double yaw; // @dynamic yaw;

@end
