//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewTableLayout.h>

@class MISSING_TYPE;

@interface _TtC5Files28DOCCollectionViewTableLayout : UICollectionViewTableLayout
{
    MISSING_TYPE *footerViewContentInsets;	// 8 = 0x8
    MISSING_TYPE *footerViewHeight;	// 40 = 0x28
    MISSING_TYPE *coreLayout;	// 48 = 0x30
}

+ (Class)layoutAttributesClass;	// IMP=0x0020000000115e00
- (void).cxx_destruct;	// IMP=0x0040000000116050
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000115fe0
- (id)init;	// IMP=0x0010000000115fc0
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x0010000000115ee0
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0010000000115ec0
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x0010000000115ea0
@property(nonatomic, readonly) struct CGSize collectionViewContentSize;
- (void)prepareLayout;	// IMP=0x0010000000115e30
@property(nonatomic, readonly) _Bool _disallowsFadeCellsForBoundsChange;
@property(nonatomic) double sectionFooterHeight;

@end
