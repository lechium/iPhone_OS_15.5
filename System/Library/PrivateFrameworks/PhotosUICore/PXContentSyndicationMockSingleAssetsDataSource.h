//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PHFetchResult;

@interface PXContentSyndicationMockSingleAssetsDataSource
{
    PHFetchResult *_fetchResult;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000060e16
- (id)mostRecentlyAddedDate;	// IMP=0x0000000000060d84
- (id)assetCollectionAtItemIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x0000000000060ad0
- (id)contentSyndicationItemAtItemIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x0000000000060a60
- (id)existingAssetsFetchResultAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x00000000000609ed
- (long long)countForCollection:(id)arg1;	// IMP=0x00000000000609e2
- (id)collectionListForSection:(long long)arg1;	// IMP=0x000000000006096f
- (id)collectionAtIndexPath:(id)arg1;	// IMP=0x00000000000608f3
- (id)indexPathForCollection:(id)arg1;	// IMP=0x0000000000060877
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;	// IMP=0x00000000000604de
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x00000000000604cc
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x00000000000604af
- (long long)numberOfSections;	// IMP=0x0000000000060486
- (id)dataSourceUpdatedWithChange:(id)arg1 changeDetails:(id *)arg2;	// IMP=0x0000000000060381
- (id)initWithFetchResult:(id)arg1;	// IMP=0x0000000000060298

@end

