//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXYearAssetsSectionHeaderLayoutSpec, PXYearAssetsSkimmingSectionHeaderLayoutSpec;

@interface PXYearAssetsSectionConfigurator
{
    PXYearAssetsSkimmingSectionHeaderLayoutSpec *_skimmingHeaderSpec;	// 8 = 0x8
    PXYearAssetsSectionHeaderLayoutSpec *_normalHeaderSpec;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005411a7
- (id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2;	// IMP=0x0000000000541127
- (void)configureAssetSectionLayout:(id)arg1;	// IMP=0x0000000000541098
- (id)createCardSpecWithExtendedTraitCollection:(id)arg1;	// IMP=0x000000000054104b
- (id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2;	// IMP=0x0000000000540efd

@end
