//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class MISSING_TYPE;

@interface _TtC15ConversationKit21ParticipantListLayout : UICollectionViewFlowLayout
{
    MISSING_TYPE *indexPathLayoutAttributes;	// 8 = 0x8
    MISSING_TYPE *lastInvalidatedSize;	// 16 = 0x10
    MISSING_TYPE *calculatedContentSize;	// 40 = 0x28
    MISSING_TYPE *delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000404d2
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x0000000000040316
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x000000000003ff82
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;	// IMP=0x000000000003fe77
@property(nonatomic, readonly) struct CGSize collectionViewContentSize;
- (void)prepareLayout;	// IMP=0x000000000003fda8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003f091
- (id)init;	// IMP=0x000000000003efd3

@end

