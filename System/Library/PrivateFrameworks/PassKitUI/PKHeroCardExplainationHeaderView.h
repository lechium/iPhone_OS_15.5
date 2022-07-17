//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImage, UIImageView;

@interface PKHeroCardExplainationHeaderView : UIView
{
    UIView *_cardImageShadowView;	// 8 = 0x8
    _Bool _usesCompactLayout;	// 16 = 0x10
    double _cardHeight;	// 24 = 0x18
    double _cardTopPadding;	// 32 = 0x20
    double _cardBottomPadding;	// 40 = 0x28
    double _cardBackingHeight;	// 48 = 0x30
    UIImageView *_cardImageView;	// 56 = 0x38
    unsigned long long _size;	// 64 = 0x40
    unsigned long long _padding;	// 72 = 0x48
}

+ (struct CGSize)recommendedCardImageSize;	// IMP=0x00000000000841de
- (void).cxx_destruct;	// IMP=0x0000000000084a21
@property(nonatomic) unsigned long long padding; // @synthesize padding=_padding;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) UIImageView *cardImageView; // @synthesize cardImageView=_cardImageView;
- (void)updateCardSizeValues;	// IMP=0x00000000000848f6
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000008485c
- (void)layoutSubviews;	// IMP=0x00000000000844d5
@property(retain, nonatomic) UIImage *cardImage;
- (id)initWithImage:(id)arg1;	// IMP=0x00000000000841f4

@end
