//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewListCell.h>

@class NSArray;

@interface PKMultiStackedLabelCell : UICollectionViewListCell
{
    NSArray *_textLabels;	// 8 = 0x8
    NSArray *_sources;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000118abd
@property(copy, nonatomic) NSArray *sources; // @synthesize sources=_sources;
- (void)prepareForReuse;	// IMP=0x0000000000118a62
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1 isTemplateLayout:(_Bool)arg2;	// IMP=0x00000000001187a3
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000011875a
- (void)layoutSubviews;	// IMP=0x00000000001186b9

@end
