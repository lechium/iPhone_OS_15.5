//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PXCuratedLibraryChapterHeaderLayoutSpec, PXMonthCardSectionBodyLayoutSpec;

@interface PXMonthChapterSectionConfigurator
{
    PXCuratedLibraryChapterHeaderLayoutSpec *_chapterHeaderSpec;	// 8 = 0x8
    PXMonthCardSectionBodyLayoutSpec *_cardBodySpec;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000006fb0b1
@property(readonly, nonatomic) PXMonthCardSectionBodyLayoutSpec *cardBodySpec; // @synthesize cardBodySpec=_cardBodySpec;
@property(readonly, nonatomic) PXCuratedLibraryChapterHeaderLayoutSpec *chapterHeaderSpec; // @synthesize chapterHeaderSpec=_chapterHeaderSpec;
- (id)updatedHeaderLayout:(id)arg1 withHeaderStyle:(long long)arg2 forAssetSectionLayout:(id)arg3;	// IMP=0x00000000006faee1
- (void)configureAssetSectionLayout:(id)arg1;	// IMP=0x00000000006fada9
- (id)headerSpecForHeaderStyle:(long long)arg1 assetSectionLayout:(id)arg2;	// IMP=0x00000000006fada1
- (id)initWithExtendedTraitCollection:(id)arg1 assetsSectionLayoutSpec:(id)arg2;	// IMP=0x00000000006facce

@end

