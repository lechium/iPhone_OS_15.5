//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewListCell.h>

@class NSArray;

@interface PKMultiKeyValueCell : UICollectionViewListCell
{
    NSArray *_titleLabels;	// 8 = 0x8
    NSArray *_subtitleLabels;	// 16 = 0x10
    NSArray *_sources;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000018d379
@property(copy, nonatomic) NSArray *sources; // @synthesize sources=_sources;
- (void)prepareForReuse;	// IMP=0x000000000018d301
- (_Bool)_shouldStackLabelsWithBounds:(struct CGRect)arg1;	// IMP=0x000000000018d1ad
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1 isTemplateLayout:(_Bool)arg2;	// IMP=0x000000000018cada
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000018ca91
- (void)layoutSubviews;	// IMP=0x000000000018c9f0

@end

