//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHInsertChangeRequest-Protocol.h>

@class NSDictionary, NSManagedObjectID, NSMutableArray, NSMutableDictionary, NSNumber, NSString, PHAssetCreationAdjustmentBakeInOptions, PHAssetCreationDerivativeContext, PHAssetCreationMetadataCopyOptions, PHAssetCreationPhotoStreamPublishingRequest, PHAssetResourceBag, PHMomentShare, PHRelationshipChangeRequestHelper;

@interface PHAssetCreationRequest <PHInsertChangeRequest>
{
    NSMutableArray *_assetResources;	// 16 = 0x10
    PHAssetResourceBag *_assetResourceBag;	// 24 = 0x18
    NSMutableDictionary *_movedFiles;	// 32 = 0x20
    _Bool _duplicateAllowsPrivateMetadata;	// 40 = 0x28
    _Bool _shouldCreateScreenshot;	// 41 = 0x29
    PHAssetCreationDerivativeContext *_derivativeContext;	// 48 = 0x30
    _Bool _duplicateLivePhotoAsStill;	// 56 = 0x38
    _Bool _duplicateAsOriginal;	// 57 = 0x39
    _Bool _duplicateSinglePhotoFromBurst;	// 58 = 0x3a
    _Bool _duplicateSpatialOverCaptureResources;	// 59 = 0x3b
    _Bool _duplicateAsAlternateAsset;	// 60 = 0x3c
    _Bool _createAsCompanionSyncedAsset;	// 61 = 0x3d
    short _importedBy;	// 62 = 0x3e
    unsigned short _duplicateAssetPhotoLibraryType;	// 64 = 0x40
    NSString *_importSessionID;	// 72 = 0x48
    NSString *_conversationID;	// 80 = 0x50
    NSDictionary *_customAssetProperties;	// 88 = 0x58
    PHMomentShare *_momentShare;	// 96 = 0x60
    PHAssetCreationPhotoStreamPublishingRequest *__photoStreamPublishingRequest;	// 104 = 0x68
    NSManagedObjectID *_limitedLibraryFetchFilterObjectID;	// 112 = 0x70
    NSNumber *_assetExistsWithSyndicationIdentifier;	// 120 = 0x78
    NSString *_syndicationIdentifier;	// 128 = 0x80
    PHRelationshipChangeRequestHelper *_momentShareHelper;	// 136 = 0x88
    NSString *_duplicateAssetIdentifier;	// 144 = 0x90
    PHAssetCreationAdjustmentBakeInOptions *_adjustmentBakeInOptions;	// 152 = 0x98
    PHAssetCreationMetadataCopyOptions *_metadataCopyOptions;	// 160 = 0xa0
    NSString *_forcePairingIdentifier;	// 168 = 0xa8
    NSString *_momentShareUUID;	// 176 = 0xb0
    NSString *_guestAssetUUID;	// 184 = 0xb8
    NSString *_importedByBundleIdentifier;	// 192 = 0xc0
    CDStruct_1b6d18a9 _duplicateStillSourceTime;	// 200 = 0xc8
}

+ (long long)_originalResourceTypeFromAdjustedResourceType:(long long)arg1 sourceAssetIsLoopingVideo:(_Bool)arg2;	// IMP=0x00000000000c3557
+ (id)_uuidForAssetWithSyndicationIdentifier:(id)arg1 inLibrary:(id)arg2;	// IMP=0x00000000000c317c
+ (id)_jpegDataFromRAWData:(id)arg1 derivativeContext:(id)arg2;	// IMP=0x00000000000c28ba
+ (id)_imageIOThumbnailCreationOptionsFromDerivativeContext:(id)arg1;	// IMP=0x00000000000c2678
+ (id)_creationOptionsFromExternalResource:(id)arg1 andSourceUrl:(id)arg2;	// IMP=0x00000000000c248a
+ (_Bool)supportsImportAssetResourceTypes:(id)arg1;	// IMP=0x00000000000c2469
+ (_Bool)supportsAssetResourceTypes:(id)arg1;	// IMP=0x00000000000c244b
+ (id)creationRequestForAssetCopyFromAsset:(id)arg1;	// IMP=0x00000000000c2437
+ (id)creationRequestForAssetCopyFromAsset:(id)arg1 options:(id)arg2;	// IMP=0x00000000000c1d41
+ (id)creationRequestForAssetFromGuestAsset:(id)arg1 checkForMomentShareAsset:(_Bool)arg2;	// IMP=0x00000000000c0ca0
+ (id)creationRequestForAssetFromGuestAsset:(id)arg1;	// IMP=0x00000000000c0c89
+ (id)creationRequestForAssetFromAssetBundle:(id)arg1;	// IMP=0x00000000000c03c2
+ (id)creationRequestForAssetFromVideoComplementBundle:(id)arg1;	// IMP=0x00000000000c01b2
+ (id)creationRequestForAssetWithSyndicationIdentifier:(id)arg1;	// IMP=0x00000000000bfed8
+ (id)creationRequestForAssetFromVideoAtFileURL:(id)arg1;	// IMP=0x00000000000bfe5e
+ (id)creationRequestForAssetFromImageAtFileURL:(id)arg1;	// IMP=0x00000000000bfde4
+ (id)creationRequestForAssetFromImage:(id)arg1;	// IMP=0x00000000000bfd6c
+ (id)creationRequestForAssetFromScreenshotImage:(id)arg1;	// IMP=0x00000000000bfcdf
+ (id)creationRequestForAssetFromImageData:(id)arg1 usingUUID:(id)arg2;	// IMP=0x00000000000bfc60
+ (id)creationRequestForAssetFromImageData:(id)arg1;	// IMP=0x00000000000bfc4c
+ (id)creationRequestForAssetWithUUID:(id)arg1;	// IMP=0x00000000000bfbc2
+ (id)creationRequestForAsset;	// IMP=0x00000000000bfbae
+ (id)_creationRequestForAssetUsingUUID:(id)arg1;	// IMP=0x00000000000bfb61
- (void).cxx_destruct;	// IMP=0x00000000000be7ed
@property(nonatomic) _Bool createAsCompanionSyncedAsset; // @synthesize createAsCompanionSyncedAsset=_createAsCompanionSyncedAsset;
@property(copy, nonatomic) NSString *importedByBundleIdentifier; // @synthesize importedByBundleIdentifier=_importedByBundleIdentifier;
@property(readonly, nonatomic) NSString *guestAssetUUID; // @synthesize guestAssetUUID=_guestAssetUUID;
@property(readonly, nonatomic) NSString *momentShareUUID; // @synthesize momentShareUUID=_momentShareUUID;
@property(readonly, nonatomic) NSString *forcePairingIdentifier; // @synthesize forcePairingIdentifier=_forcePairingIdentifier;
@property(copy, nonatomic, setter=_setMetadataCopyOptions:) PHAssetCreationMetadataCopyOptions *metadataCopyOptions; // @synthesize metadataCopyOptions=_metadataCopyOptions;
@property(copy, nonatomic, setter=_setAdjustmentBakeInOptions:) PHAssetCreationAdjustmentBakeInOptions *adjustmentBakeInOptions; // @synthesize adjustmentBakeInOptions=_adjustmentBakeInOptions;
@property(nonatomic, setter=_setDuplicateAsAlternateAsset:) _Bool duplicateAsAlternateAsset; // @synthesize duplicateAsAlternateAsset=_duplicateAsAlternateAsset;
@property(nonatomic, setter=_setDuplicateSpatialOverCaptureResources:) _Bool duplicateSpatialOverCaptureResources; // @synthesize duplicateSpatialOverCaptureResources=_duplicateSpatialOverCaptureResources;
@property(nonatomic, setter=_setDuplicateSinglePhotoFromBurst:) _Bool duplicateSinglePhotoFromBurst; // @synthesize duplicateSinglePhotoFromBurst=_duplicateSinglePhotoFromBurst;
@property(nonatomic, setter=_setDuplicateAsOriginal:) _Bool duplicateAsOriginal; // @synthesize duplicateAsOriginal=_duplicateAsOriginal;
@property(nonatomic, setter=_setDuplicateLivePhotoAsStill:) _Bool duplicateLivePhotoAsStill; // @synthesize duplicateLivePhotoAsStill=_duplicateLivePhotoAsStill;
@property(nonatomic, setter=_setDuplicateStillSourceTime:) CDStruct_1b6d18a9 duplicateStillSourceTime; // @synthesize duplicateStillSourceTime=_duplicateStillSourceTime;
@property(nonatomic, setter=_setDuplicateAssetPhotoLibraryType:) unsigned short duplicateAssetPhotoLibraryType; // @synthesize duplicateAssetPhotoLibraryType=_duplicateAssetPhotoLibraryType;
@property(retain, nonatomic, setter=_setDuplicateAssetIdentifier:) NSString *duplicateAssetIdentifier; // @synthesize duplicateAssetIdentifier=_duplicateAssetIdentifier;
@property(readonly, nonatomic) PHRelationshipChangeRequestHelper *momentShareHelper; // @synthesize momentShareHelper=_momentShareHelper;
@property(retain, nonatomic) NSString *syndicationIdentifier; // @synthesize syndicationIdentifier=_syndicationIdentifier;
@property(retain, nonatomic) NSNumber *assetExistsWithSyndicationIdentifier; // @synthesize assetExistsWithSyndicationIdentifier=_assetExistsWithSyndicationIdentifier;
@property(retain, nonatomic, getter=_limitedLibraryFetchFilterObjectID, setter=_setLimitedLibraryFetchFilterObjectID:) NSManagedObjectID *limitedLibraryFetchFilterObjectID; // @synthesize limitedLibraryFetchFilterObjectID=_limitedLibraryFetchFilterObjectID;
@property(retain, nonatomic, setter=_setPhotoStreamPublishingRequest:) PHAssetCreationPhotoStreamPublishingRequest *_photoStreamPublishingRequest; // @synthesize _photoStreamPublishingRequest=__photoStreamPublishingRequest;
@property(retain, nonatomic) NSDictionary *customAssetProperties; // @synthesize customAssetProperties=_customAssetProperties;
@property(retain, nonatomic) NSString *conversationID; // @synthesize conversationID=_conversationID;
@property(retain, nonatomic) NSString *importSessionID; // @synthesize importSessionID=_importSessionID;
@property(nonatomic) short importedBy; // @synthesize importedBy=_importedBy;
@property(readonly, nonatomic) long long accessScopeOptionsRequirement;
- (_Bool)isDuplicateAssetCreationRequest;	// IMP=0x00000000000be4e1
@property(nonatomic, getter=_shouldCreateScreenshot, setter=_setShouldCreateScreenshot:) _Bool shouldCreateScreenshot;
@property(nonatomic, setter=_setDuplicateAllowsPrivateMetadata:) _Bool duplicateAllowsPrivateMetadata;
- (_Bool)isNew;	// IMP=0x00000000000be499
@property(retain, nonatomic) PHMomentShare *momentShare; // @synthesize momentShare=_momentShare;
- (id)_mutableMomentShareObjectIDsAndUUIDs;	// IMP=0x00000000000be3e6
- (void)_prepareMomentShareHelperIfNeeded;	// IMP=0x00000000000be2fd
- (void)performTransactionCompletionHandlingInPhotoLibrary:(id)arg1;	// IMP=0x00000000000bde9d
- (_Bool)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000bdcf0
- (id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000bd8b5
- (_Bool)_validateNewObjectUUID:(id)arg1 inPhotoLibrary:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000bd2f4
- (_Bool)validateInsertIntoPhotoLibrary:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000bd074
- (_Bool)_populateDuplicatingAssetCreationRequest:(id)arg1 photoLibrary:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000bc8b0
- (void)_updateMutationsForDuplicatingPrivateMetadataFromAsset:(id)arg1;	// IMP=0x00000000000bc827
- (id)duplicatedAssetResourcesFromAsset:(id)arg1 stillSourceTime:(CDStruct_1b6d18a9)arg2 flattenLivePhotoIntoStillPhoto:(_Bool)arg3 duplicateAsOriginal:(_Bool)arg4 duplicateWithAdjustmentsBakedIn:(_Bool)arg5 duplicatePhotoAsData:(_Bool)arg6 error:(id *)arg7;	// IMP=0x00000000000bbd4b
- (void)encodeToXPCDict:(id)arg1;	// IMP=0x00000000000bb571
- (id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3;	// IMP=0x00000000000bada4
- (long long)_mediaTypeForCreatedAsset;	// IMP=0x00000000000baadb
- (id)placeholderForCreatedAsset;	// IMP=0x00000000000baa51
- (void)_addResourceWithType:(long long)arg1 data:(id)arg2 orFileURL:(id)arg3 options:(id)arg4;	// IMP=0x00000000000ba966
- (void)addResourceWithType:(long long)arg1 data:(id)arg2 options:(id)arg3;	// IMP=0x00000000000ba94e
- (void)addResourceWithType:(long long)arg1 fileURL:(id)arg2 options:(id)arg3;	// IMP=0x00000000000ba934
- (id)initWithHelper:(id)arg1;	// IMP=0x00000000000ba849
- (id)initForNewObjectWithUUID:(id)arg1;	// IMP=0x00000000000ba7c8
- (id)initForNewObject;	// IMP=0x00000000000ba7b4
- (id)_createAssetFromValidatedResources:(id)arg1 withUUID:(id)arg2 assetAlreadyExistsAsPlaceholder:(_Bool)arg3 inPhotoLibrary:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000b7b85
- (id)createAssetFromValidatedResources:(id)arg1 withUUID:(id)arg2 assetAlreadyExistsAsPlaceholder:(_Bool)arg3 inPhotoLibrary:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000b78e3
- (void)finalizeRequestWithBatchSuccess:(_Bool)arg1;	// IMP=0x00000000000b7410
- (void)performConcurrentWork;	// IMP=0x00000000000b6f5a
- (struct CGImageSource *)_imageSourceForDerivatives;	// IMP=0x00000000000b6c86
- (void)_setupDerivativeCreationContextForAsset:(id)arg1 imageSource:(struct CGImageSource *)arg2 imageData:(id)arg3;	// IMP=0x00000000000b668c
- (id)_externalLivePhotoResourceForAsset:(id)arg1;	// IMP=0x00000000000b627a
- (_Bool)_writeDataToDisk:(id)arg1 imageUTIType:(id)arg2 exifProperties:(id)arg3 mainFileURL:(id)arg4 thumbnailData:(id)arg5;	// IMP=0x00000000000b5e80
- (_Bool)_accessWritableURLForUUID:(id)arg1 imageUTI:(id)arg2 originalFilename:(id)arg3 photoLibrary:(id)arg4 withHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000b5a6b
- (id)_managedAssetFromPrimaryResourceData:(id)arg1 withUUID:(id)arg2 photoLibrary:(id)arg3 mainFileMetadata:(id *)arg4 getImageSource:(struct CGImageSource **)arg5 imageData:(id *)arg6;	// IMP=0x00000000000b54f4
- (short)_savedAssetTypeForAsset;	// IMP=0x00000000000b547e
- (id)_exifPropertiesFromSourceImageDataExifProperties:(id)arg1;	// IMP=0x00000000000b524f
- (_Bool)_createOriginalResourceForAsset:(id)arg1 fromValidatedResource:(id)arg2 resourceType:(unsigned int)arg3 photoLibrary:(id)arg4 destinationURL:(id)arg5 error:(id *)arg6;	// IMP=0x00000000000b4cdd
- (_Bool)_createAudioResourceForAsset:(id)arg1 fromValidatedResources:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000b4a2f
- (_Bool)_createXmpResourceForAsset:(id)arg1 fromValidatedResources:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000b48e9
- (_Bool)_createSocResourceForAsset:(id)arg1 fromValidatedResources:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000b461b
- (_Bool)_createRAWSidecarForAsset:(id)arg1 fromValidatedResources:(id)arg2 mainFileMetadata:(id)arg3 photoLibrary:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000b3d6b
- (_Bool)_createAssetAsPhotoIris:(id)arg1 fromValidatedResources:(id)arg2 mainFileMetadata:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000b3411
- (id)_ingestOriginalFromSrcURL:(id)arg1 toDstURL:(id)arg2 useSecureMove:(_Bool)arg3 resource:(id)arg4 resourceType:(unsigned int)arg5 asset:(id)arg6 error:(id *)arg7;	// IMP=0x00000000000b2d85
- (_Bool)_ingestOriginalInPlaceSrcURL:(id)arg1 dstURL:(id)arg2 asset:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000b2b81
- (_Bool)_createAssetAsAdjusted:(id)arg1 fromValidatedResources:(id)arg2 mainFileMetadata:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000b1131
- (id)makeSubstitueRenderImageFileFromPath:(id)arg1 primaryResource:(id)arg2 fileSuffix:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000b0cdd
- (id)_secureMove:(_Bool)arg1 assetResource:(id)arg2 photoLibrary:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000b05cc
- (id)_secureMove:(_Bool)arg1 fileAtURL:(id)arg2 toURL:(id)arg3 capabilities:(id)arg4 error:(id *)arg5;	// IMP=0x00000000000b02ed
@property(readonly, nonatomic) NSDictionary *_movedFiles;
- (void)_resetMovedFiles;	// IMP=0x00000000000b02a0
- (_Bool)_restoreMovedFilesOnFailure;	// IMP=0x00000000000aff65
- (void)_didMoveFileFromURL:(id)arg1 toURL:(id)arg2;	// IMP=0x00000000000afede
- (void)_copyMediaAnalysisProperties:(id)arg1;	// IMP=0x00000000000af9b4
- (void)_copyUserSpecificMetadataFromAsset:(id)arg1;	// IMP=0x00000000000af908
- (void)_copyMetadataFromAsset:(id)arg1;	// IMP=0x00000000000af79f

// Remaining properties
@property(readonly, nonatomic, getter=isClientEntitled) _Bool clientEntitled;
@property(readonly, nonatomic) NSString *clientName;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) _Bool isNewRequest;
@property(readonly, nonatomic) NSString *managedEntityName;
@property(readonly, getter=isMutated) _Bool mutated;
@property(readonly, nonatomic) NSManagedObjectID *objectID;
@property(nonatomic) _Bool shouldPerformConcurrentWork;
@property(readonly) Class superclass;

@end
