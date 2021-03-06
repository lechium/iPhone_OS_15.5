//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLResourceDataStore-Protocol.h>
#import <PhotoLibraryServices/PLSyndicationSanitizedResourceGeneratorDelegate-Protocol.h>

@class NSString, PAImageConversionServiceClient, PAVideoConversionServiceClient, PLPhotoLibraryBundle, PLPhotoLibraryPathManager;

@interface PLSyndicationResourceDataStore <PLSyndicationSanitizedResourceGeneratorDelegate, PLResourceDataStore>
{
    PLPhotoLibraryBundle *_libraryBundle;	// 8 = 0x8
    PAImageConversionServiceClient *_imageConversionServiceClient;	// 16 = 0x10
    PAVideoConversionServiceClient *_videoConversionServiceClient;	// 24 = 0x18
}

+ (id)supportedRecipes;	// IMP=0x00000000004a77e7
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;	// IMP=0x00000000004a777f
+ (unsigned short)storeClassID;	// IMP=0x00000000004a7774
+ (_Bool)markResource:(id)arg1 purgeableAndLocallyAvailableWithFileURL:(id)arg2 error:(id *)arg3;	// IMP=0x00000000004a7654
+ (void)provideFileURLAndUnwrapLivePhotoIfNeededForBundleID:(id)arg1 itemIdentifiers:(id)arg2 destURLs:(id)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000004a74ad
+ (_Bool)_safeCopyItemAtURL:(id)arg1 toURLAndReplaceIfNeeded:(id)arg2 error:(id *)arg3;	// IMP=0x00000000004a6e6a
+ (void)_provideFileURLAndUnwrapLivePhotoIfNeededForBundleID:(id)arg1 syndicationIdentifier:(id)arg2 isLivePhoto:(_Bool)arg3 options:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000004a6c8c
+ (_Bool)_unpackPVTBundleAtURL:(id)arg1 primaryURL:(id *)arg2 secondaryURL:(id *)arg3 error:(id *)arg4;	// IMP=0x00000000004a6962
+ (long long)_provideOptionsFromRequestOptions:(id)arg1;	// IMP=0x00000000004a68d2
+ (_Bool)_markResourceAsLocallyAvailableWithURL:(id)arg1 resource:(id)arg2 inode:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x00000000004a63e0
- (void).cxx_destruct;	// IMP=0x00000000004ac0e9
- (id)metadataForResourceGenerator:(id)arg1 fromFileURL:(id)arg2;	// IMP=0x00000000004ac04a
- (id)videoConversionClientForResourceGenerator:(id)arg1;	// IMP=0x00000000004abfad
- (id)imageConversionClientForResourceGenerator:(id)arg1;	// IMP=0x00000000004abf10
- (void)markAsynchronousLocalRenderAsOptionalForProgress:(id)arg1;	// IMP=0x00000000004abf0a
- (_Bool)canMarkAsynchronousLocalRenderAsOptionalForProgress:(id)arg1;	// IMP=0x00000000004abf02
- (_Bool)canStreamResource:(id)arg1;	// IMP=0x00000000004abefa
- (_Bool)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;	// IMP=0x00000000004abef2
- (_Bool)dataStoreSubtypeIsDownloadable:(long long)arg1;	// IMP=0x00000000004abeea
- (id)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000004ab38a
- (id)_requestLocalAvailabilityChangeForSyndicationOriginalResource:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004aac5e
- (_Bool)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id *)arg5 resultingResource:(id *)arg6;	// IMP=0x00000000004aa430
- (_Bool)canStoreExternalResource:(id)arg1;	// IMP=0x00000000004aa3e5
- (id)virtualResourcesForAsset:(id)arg1;	// IMP=0x00000000004aa3d8
- (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;	// IMP=0x00000000004aa3bf
- (id)resourceURLForKey:(id)arg1 assetID:(id)arg2;	// IMP=0x00000000004aa2d8
- (id)resourceDataForKey:(id)arg1 assetID:(id)arg2;	// IMP=0x00000000004aa16a
- (id)keyFromKeyStruct:(const void *)arg1;	// IMP=0x00000000004aa134
- (id)descriptionForSubtype:(long long)arg1;	// IMP=0x00000000004aa0f2
- (id)name;	// IMP=0x00000000004aa0e5
- (_Bool)_copyAndMarkAsLocallyAvailablePairedLivePhotoResourceForRequestedResource:(id)arg1 requestedVideoComplement:(_Bool)arg2 sourceURL:(id)arg3 error:(id *)arg4;	// IMP=0x00000000004a989a
- (_Bool)_copyAndMarkPurgeableItemAtURL:(id)arg1 toURL:(id)arg2 inode:(unsigned long long *)arg3 error:(id *)arg4;	// IMP=0x00000000004a9622
- (id)_getDestinationURLAndFixLocalAvailabilityIfNeededForResource:(id)arg1 isLocallyAvailable:(_Bool *)arg2;	// IMP=0x00000000004a90bd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property(readonly) Class superclass;

@end

