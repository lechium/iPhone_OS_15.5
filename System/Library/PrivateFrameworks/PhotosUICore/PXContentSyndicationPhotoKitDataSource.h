//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHFetchResult;

@interface PXContentSyndicationPhotoKitDataSource
{
    PHFetchResult *_fetchResult;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000903a5c
- (id)mostRecentlyAddedDate;	// IMP=0x0000000000903a01
- (id)assetCollectionAtItemIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x00000000009038a9
- (id)contentSyndicationItemAtItemIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x0000000000903843
- (id)existingAssetsFetchResultAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x00000000009037d0
- (long long)countForCollection:(id)arg1;	// IMP=0x00000000009035fd
- (id)collectionListForSection:(long long)arg1;	// IMP=0x000000000090358a
- (id)collectionAtIndexPath:(id)arg1;	// IMP=0x000000000090350e
- (id)indexPathForCollection:(id)arg1;	// IMP=0x0000000000903492
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;	// IMP=0x00000000009030f9
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x00000000009030e7
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x00000000009030ca
- (long long)numberOfSections;	// IMP=0x00000000009030a1
- (id)dataSourceUpdatedWithChange:(id)arg1 underlyingArrayChangeDetails:(id *)arg2;	// IMP=0x0000000000902f12
- (id)initWithFetchResult:(id)arg1;	// IMP=0x0000000000902e29

@end

