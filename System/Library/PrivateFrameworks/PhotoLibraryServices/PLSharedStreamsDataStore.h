//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServices/PLResourceDataStore-Protocol.h>

@class NSString, PLPhotoLibraryPathManager;

@interface PLSharedStreamsDataStore <PLResourceDataStore>
{
}

+ (id)supportedRecipes;	// IMP=0x000000000015eb46
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;	// IMP=0x000000000015eb29
+ (unsigned short)storeClassID;	// IMP=0x000000000015eb1e
+ (unsigned int)_masterThumbRecipeID;	// IMP=0x000000000015eaf3
- (id)requiredExternalResourcesForMigratingOrImportingAsset:(id)arg1;	// IMP=0x00000000001612b1
- (void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 intent:(unsigned long long)arg3 timeRange:(CDStruct_3c1748cc)arg4 inContext:(id)arg5 clientBundleID:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x0000000000160f1a
- (_Bool)canStreamResource:(id)arg1;	// IMP=0x0000000000160e89
- (_Bool)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;	// IMP=0x0000000000160e4c
- (_Bool)dataStoreSubtypeIsDownloadable:(long long)arg1;	// IMP=0x0000000000160e3c
- (id)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000160261
- (_Bool)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id *)arg5 resultingResource:(id *)arg6;	// IMP=0x000000000015fd34
- (_Bool)canStoreExternalResource:(id)arg1;	// IMP=0x000000000015fce9
- (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;	// IMP=0x000000000015f841
- (id)virtualResourcesForAsset:(id)arg1;	// IMP=0x000000000015f834
- (id)resourceURLForKey:(id)arg1 assetID:(id)arg2;	// IMP=0x000000000015f81c
- (id)resourceDataForKey:(id)arg1 assetID:(id)arg2;	// IMP=0x000000000015f7b6
- (id)keyFromKeyStruct:(const void *)arg1;	// IMP=0x000000000015f780
- (id)descriptionForSubtype:(long long)arg1;	// IMP=0x000000000015f6f2
- (id)name;	// IMP=0x000000000015f6e5
- (unsigned int)_mainResourceTypeForAsset:(id)arg1;	// IMP=0x000000000015f6c1
- (short)_remoteAvailabilityForType:(unsigned int)arg1;	// IMP=0x000000000015f6b0
- (short)_localAvailabilityForAsset:(id)arg1 album:(id)arg2 type:(unsigned int)arg3;	// IMP=0x000000000015f3c8
- (id)_sharedStreamsExternalResourceForAsset:(id)arg1 album:(id)arg2 type:(unsigned int)arg3;	// IMP=0x000000000015ef3d
- (_Bool)_isDerivativeForSharedStreamsType:(unsigned int)arg1;	// IMP=0x000000000015ef24
- (id)_utiStringForAsset:(id)arg1 type:(unsigned int)arg2;	// IMP=0x000000000015ee7e
- (void)_prepareForDownloadNotification:(id)arg1 atFileURL:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000015ebdd
- (short)_cloudSharedAssetPlaceholderKindFromSharedStreamsResourceType:(unsigned int)arg1;	// IMP=0x000000000015ebc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property(readonly) Class superclass;

@end

