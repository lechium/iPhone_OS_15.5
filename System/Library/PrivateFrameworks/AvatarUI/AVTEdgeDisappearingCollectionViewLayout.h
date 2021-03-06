//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class UICollectionViewLayoutAttributes;

@interface AVTEdgeDisappearingCollectionViewLayout : UICollectionViewFlowLayout
{
    _Bool _enableEdgeDisappearing;	// 8 = 0x8
    _Bool _pinHeaderToVisible;	// 9 = 0x9
    UICollectionViewLayoutAttributes *_fixedHeaderLayoutAttributes;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001f1a2
@property(retain, nonatomic) UICollectionViewLayoutAttributes *fixedHeaderLayoutAttributes; // @synthesize fixedHeaderLayoutAttributes=_fixedHeaderLayoutAttributes;
@property(nonatomic) _Bool pinHeaderToVisible; // @synthesize pinHeaderToVisible=_pinHeaderToVisible;
@property(nonatomic) _Bool enableEdgeDisappearing; // @synthesize enableEdgeDisappearing=_enableEdgeDisappearing;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x000000000001f135
- (void)modifyLayoutAttributes:(id)arg1;	// IMP=0x000000000001ea8b
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x000000000001ea1d
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x000000000001e79d
- (void)prepareLayout;	// IMP=0x000000000001e75d
- (_Bool)isRTL;	// IMP=0x000000000001e719

@end

