//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewLayout.h>

@class MISSING_TYPE;

@interface _TtC16NewsSubscription35FlexiblePaywallCollectionViewLayout : UICollectionViewLayout
{
    MISSING_TYPE *layoutProvider;	// 8 = 0x8
    MISSING_TYPE *itemAttributes;	// 48 = 0x30
    MISSING_TYPE *supplementaryItemAttributes;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000f80f0
- (id)init;	// IMP=0x00000000000f8090
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;	// IMP=0x00000000000f7fa0
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;	// IMP=0x00000000000f7930
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;	// IMP=0x00000000000f7860
@property(nonatomic, readonly) struct CGSize collectionViewContentSize;
- (void)prepareLayout;	// IMP=0x00000000000f7720
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000f6a40

@end
