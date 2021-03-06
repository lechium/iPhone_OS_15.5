//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSCache, NSString, PXPhotosDataSource, PXPhotosDataSourceChange;

@interface PUPhotoKitAssetsDataSource
{
    PXPhotosDataSource *_photosDataSource;	// 8 = 0x8
    PXPhotosDataSourceChange *_change;	// 16 = 0x10
    NSString *_changeFromDataSourceIdentifier;	// 24 = 0x18
    NSCache *__assetReferenceByIndexPathCache;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000002fb606
@property(readonly, nonatomic) NSCache *_assetReferenceByIndexPathCache; // @synthesize _assetReferenceByIndexPathCache=__assetReferenceByIndexPathCache;
@property(readonly, nonatomic) NSString *changeFromDataSourceIdentifier; // @synthesize changeFromDataSourceIdentifier=_changeFromDataSourceIdentifier;
@property(readonly, nonatomic) PXPhotosDataSourceChange *change; // @synthesize change=_change;
@property(readonly, nonatomic) PXPhotosDataSource *photosDataSource; // @synthesize photosDataSource=_photosDataSource;
- (id)assetAtIndexPath:(id)arg1;	// IMP=0x00000000002fb53f
- (_Bool)couldAssetReferenceAppear:(id)arg1;	// IMP=0x00000000002fb39f
- (long long)numberOfAssetsWithMaximum:(long long)arg1;	// IMP=0x00000000002fb27e
- (_Bool)isEmpty;	// IMP=0x00000000002fb23a
- (id)badgeInfoPromiseForAssetAtIndexPath:(id)arg1;	// IMP=0x00000000002fac6a
- (id)startingAssetReference;	// IMP=0x00000000002fab7a
- (id)convertIndexPath:(id)arg1 fromAssetsDataSource:(id)arg2;	// IMP=0x00000000002fa999
- (id)indexPathForAssetCollection:(id)arg1;	// IMP=0x00000000002fa8db
- (id)assetCollectionAtIndexPath:(id)arg1;	// IMP=0x00000000002fa7c9
- (id)indexPathForAssetReference:(id)arg1;	// IMP=0x00000000002f9d7a
- (id)assetReferenceAtIndexPath:(id)arg1;	// IMP=0x00000000002f9b8a
- (long long)numberOfSubItemsAtIndexPath:(id)arg1;	// IMP=0x00000000002f9a68
- (id)initWithImmutablePhotosDataSource:(id)arg1 withChange:(id)arg2 fromDataSourceIdentifier:(id)arg3;	// IMP=0x00000000002f9880

@end

