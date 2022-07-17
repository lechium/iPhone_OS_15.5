//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface PXFileBackedAssetsDataSource
{
    NSDictionary *_assetCollectionBySection;	// 8 = 0x8
    NSDictionary *_assetDescriptionsBySection;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000060be94
@property(readonly, copy, nonatomic) NSDictionary *assetDescriptionsBySection; // @synthesize assetDescriptionsBySection=_assetDescriptionsBySection;
- (id)inputForItem:(id)arg1;	// IMP=0x000000000060bdd6
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;	// IMP=0x000000000060b962
- (id)assetsInSectionIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x000000000060b721
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;	// IMP=0x000000000060b497
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;	// IMP=0x000000000060b48f
- (long long)numberOfItemsInSection:(long long)arg1;	// IMP=0x000000000060b3ed
- (long long)numberOfSections;	// IMP=0x000000000060b3a9
- (id)init;	// IMP=0x000000000060b32f
- (id)initWithFileURLsBySection:(id)arg1;	// IMP=0x000000000060b257
- (id)initWithFileBackedAssetDescriptionsBySection:(id)arg1;	// IMP=0x000000000060b116
- (id)photosGraphSuggestedContributions;	// IMP=0x000000000045aac1

@end
