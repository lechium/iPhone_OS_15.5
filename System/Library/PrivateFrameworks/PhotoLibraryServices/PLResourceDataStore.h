//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/PLResourceDataStore-Protocol.h>

@class NSString, PLPhotoLibraryPathManager;

@interface PLResourceDataStore : NSObject <PLResourceDataStore>
{
    PLPhotoLibraryPathManager *_pathManager;	// 8 = 0x8
}

+ (id)supportedRecipes;	// IMP=0x00000000000d6bc2
+ (_Bool)keyDataIsValid:(id)arg1;	// IMP=0x00000000000d6b45
+ (unsigned short)keyLengthWithDataPreview:(unsigned char)arg1;	// IMP=0x00000000000d6ac8
+ (unsigned short)storeClassID;	// IMP=0x00000000000d6a4b
+ (_Bool)isMasterThumbRecipeID:(unsigned int)arg1;	// IMP=0x00000000000d6a27
- (void).cxx_destruct;	// IMP=0x00000000000d6a17
@property(readonly, nonatomic) PLPhotoLibraryPathManager *pathManager; // @synthesize pathManager=_pathManager;
- (_Bool)verifyAndFixLocalAvailabilityForResource:(id)arg1;	// IMP=0x00000000000d67c1
- (_Bool)supportsTimeRange;	// IMP=0x00000000000d67b9
- (void)markAsynchronousLocalRenderAsOptionalForProgress:(id)arg1;	// IMP=0x00000000000d67b3
- (_Bool)canMarkAsynchronousLocalRenderAsOptionalForProgress:(id)arg1;	// IMP=0x00000000000d67ab
- (id)guessUTIForExternalResource:(id)arg1 forAssetKind:(short)arg2 managedObjectContext:(id)arg3;	// IMP=0x00000000000d66d7
- (void)requestStreamingURLForResource:(id)arg1 asset:(id)arg2 intent:(unsigned long long)arg3 timeRange:(CDStruct_3c1748cc)arg4 inContext:(id)arg5 clientBundleID:(id)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x00000000000d663c
- (_Bool)canStreamResource:(id)arg1;	// IMP=0x00000000000d6634
- (_Bool)videoResource:(id)arg1 matchesOrExceedsQualityLevel:(unsigned int)arg2;	// IMP=0x00000000000d65b7
- (_Bool)dataStoreSubtypeIsDownloadable:(long long)arg1;	// IMP=0x00000000000d65af
- (id)requestLocalAvailabilityChange:(short)arg1 forResource:(id)arg2 options:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000000d6532
- (_Bool)storeExternalResource:(id)arg1 forAsset:(id)arg2 inContext:(id)arg3 options:(id)arg4 error:(id *)arg5 resultingResource:(id *)arg6;	// IMP=0x00000000000d64b5
- (_Bool)canStoreExternalResource:(id)arg1;	// IMP=0x00000000000d6438
- (id)updateDerivativeResourcesForAsset:(id)arg1 forLifecycleEvent:(unsigned int)arg2;	// IMP=0x00000000000d63bb
- (id)virtualResourcesForAsset:(id)arg1;	// IMP=0x00000000000d633e
- (id)resourceURLForKey:(id)arg1 assetID:(id)arg2;	// IMP=0x00000000000d62c1
- (id)resourceDataForKey:(id)arg1 assetID:(id)arg2;	// IMP=0x00000000000d6244
- (id)keyFromKeyStruct:(const void *)arg1;	// IMP=0x00000000000d61c7
- (id)descriptionForSubtype:(long long)arg1;	// IMP=0x00000000000d61a2
- (id)name;	// IMP=0x00000000000d6125
- (id)initWithPathManager:(id)arg1;	// IMP=0x00000000000d603f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

