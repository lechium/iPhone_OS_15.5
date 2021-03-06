//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PHAPhotoVisionPhotoKitBridge : NSObject
{
}

+ (void)assignPropertiesOfPVFace:(id)arg1 toPHFaceChangeRequest:(id)arg2;	// IMP=0x000000000008ada5
+ (unsigned short)phFaceGlassesTypeFromPVFace:(id)arg1;	// IMP=0x000000000008ace3
+ (id)vnFaceAttributeGlassesToPHFaceGlassesTypeMap;	// IMP=0x000000000008acb3
+ (unsigned short)phFaceBaldTypeFromPVFace:(id)arg1;	// IMP=0x000000000008abf1
+ (id)vnFaceAttributeBaldToPHFaceBaldTypeMap;	// IMP=0x000000000008abc1
+ (unsigned short)phFaceHairColorTypeFromPVFace:(id)arg1;	// IMP=0x000000000008aaff
+ (id)vnFaceAttributeHairColorToPHFaceHairColorTypeMap;	// IMP=0x000000000008aacf
+ (unsigned short)phFaceFacialHairTypeFromPVFace:(id)arg1;	// IMP=0x000000000008aa0d
+ (id)vnFaceAttributeFacialHairToPHFacialHairTypeMap;	// IMP=0x000000000008a9dd
+ (unsigned short)phFaceSmileTypeFromPVFace:(id)arg1;	// IMP=0x000000000008a91b
+ (id)vnFaceAttributeSmileToPHFaceSmileTypeMap;	// IMP=0x000000000008a8eb
+ (unsigned short)phFaceEyesStateFromPVFace:(id)arg1;	// IMP=0x000000000008a829
+ (id)vnFaceAttributeEyesToPHEyesStateMap;	// IMP=0x000000000008a7f9
+ (unsigned short)phFaceSexFromPVFace:(id)arg1;	// IMP=0x000000000008a737
+ (id)vnFaceAttributeSexToPHFaceSexTypeMap;	// IMP=0x000000000008a707
+ (unsigned short)phFaceAgeTypeFromPVFace:(id)arg1;	// IMP=0x000000000008a645
+ (id)vnFaceAttributeAgeToPHFaceAgeTypeMap;	// IMP=0x000000000008a615
+ (id)pvFaceCropFromPHFaceCrop:(id)arg1;	// IMP=0x000000000008a54c
+ (id)phFaceCropsFromPVFaceCrops:(id)arg1 withFetchOptions:(id)arg2;	// IMP=0x000000000008a2fe
+ (id)phFaceCropFromPVFaceCrop:(id)arg1 withFetchOptions:(id)arg2;	// IMP=0x000000000008a1e2
+ (id)phFaceprintFromPVFaceprint:(id)arg1;	// IMP=0x000000000008a145
+ (id)pvFaceprintFromPHFaceprint:(id)arg1;	// IMP=0x000000000008a0a6
+ (id)pvFacesArrayFromPHFetchResult:(id)arg1 copyPropertiesOption:(long long)arg2;	// IMP=0x0000000000089ec4
+ (id)pvFaceFromPHFace:(id)arg1 copyPropertiesOption:(long long)arg2;	// IMP=0x00000000000895cf
+ (id)phFacesFromPVFaces:(id)arg1 withFetchOptions:(id)arg2;	// IMP=0x000000000008932b
+ (id)phFaceFromPVFace:(id)arg1 withFetchOptions:(id)arg2;	// IMP=0x00000000000891f7
+ (id)newVerifiedPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)arg1;	// IMP=0x0000000000089165
+ (id)newAllPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)arg1;	// IMP=0x0000000000089113
+ (id)newVerifiedPersonsFetchOptionsWithPhotoLibrary:(id)arg1;	// IMP=0x0000000000089084
+ (id)newAllPersonsFetchOptionsWithPhotoLibrary:(id)arg1;	// IMP=0x0000000000089038
+ (id)newVisibleFacesFetchOptionsWithPhotoLibrary:(id)arg1;	// IMP=0x0000000000088ffb
+ (id)newAllFacesFetchOptionsWithPhotoLibrary:(id)arg1;	// IMP=0x0000000000088fbb
+ (id)newAssetFetchOptionsWithPhotoLibrary:(id)arg1;	// IMP=0x0000000000088f05

@end

