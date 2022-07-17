//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewListCell.h>

@class NSString, UIImage, UIImageView, UILabel;

@interface PKTitleDetailIconCell : UICollectionViewListCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_detailLabel;	// 16 = 0x10
    UIImageView *_iconView;	// 24 = 0x18
    NSString *_titleText;	// 32 = 0x20
    NSString *_detailText;	// 40 = 0x28
    UIImage *_icon;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000037efdd
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void)prepareForReuse;	// IMP=0x000000000037eed2
- (void)_configureView;	// IMP=0x000000000037eb40
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1 isTemplateLayout:(_Bool)arg2;	// IMP=0x000000000037e451
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000037e408
- (void)layoutSubviews;	// IMP=0x000000000037e367

@end
