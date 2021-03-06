//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface GKCollectionHorizontalLayout
{
    _Bool _centersItemsInExcessSpace;	// 8 = 0x8
    _Bool _alignItemsToTop;	// 9 = 0x9
    double _extraSectionHeaderToCellSpace;	// 16 = 0x10
    NSDictionary *_itemAttributes;	// 24 = 0x18
    NSDictionary *_headerAttributes;	// 32 = 0x20
    double _scrollStepIntegral;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000018f20c
@property(nonatomic) double scrollStepIntegral; // @synthesize scrollStepIntegral=_scrollStepIntegral;
@property(retain, nonatomic) NSDictionary *headerAttributes; // @synthesize headerAttributes=_headerAttributes;
@property(retain, nonatomic) NSDictionary *itemAttributes; // @synthesize itemAttributes=_itemAttributes;
@property(nonatomic) double extraSectionHeaderToCellSpace; // @synthesize extraSectionHeaderToCellSpace=_extraSectionHeaderToCellSpace;
@property(nonatomic) _Bool alignItemsToTop; // @synthesize alignItemsToTop=_alignItemsToTop;
@property(nonatomic) _Bool centersItemsInExcessSpace; // @synthesize centersItemsInExcessSpace=_centersItemsInExcessSpace;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;	// IMP=0x000000000018f134
- (long long)lastValidSection;	// IMP=0x000000000018f08d
- (long long)firstValidSection;	// IMP=0x000000000018efd1
- (struct CGSize)collectionViewContentSize;	// IMP=0x000000000018ec76
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x000000000018e78b
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x000000000018e6cf
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x000000000018e25b
- (void)prepareLayout;	// IMP=0x000000000018d6eb
- (double)maxHeaderHeight;	// IMP=0x000000000018d658
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x000000000018d650
- (void)applyDefaults;	// IMP=0x000000000018d56b

@end

