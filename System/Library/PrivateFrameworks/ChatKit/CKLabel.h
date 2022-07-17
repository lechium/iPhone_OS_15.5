//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILabel.h>

@class NSSet, UIImageView;

@interface CKLabel : UILabel
{
    _Bool _shouldHaveRotatedTitleIconImage;	// 8 = 0x8
    UIImageView *_titleIconImageView;	// 16 = 0x10
    long long _titleIconImageType;	// 24 = 0x18
    NSSet *_titleIconImageTypesSupportingRotation;	// 32 = 0x20
    struct CGRect _textRectForAccessoryImageView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000041562f
@property(nonatomic) struct CGRect textRectForAccessoryImageView; // @synthesize textRectForAccessoryImageView=_textRectForAccessoryImageView;
@property(nonatomic) _Bool shouldHaveRotatedTitleIconImage; // @synthesize shouldHaveRotatedTitleIconImage=_shouldHaveRotatedTitleIconImage;
@property(retain, nonatomic) NSSet *titleIconImageTypesSupportingRotation; // @synthesize titleIconImageTypesSupportingRotation=_titleIconImageTypesSupportingRotation;
@property(nonatomic) long long titleIconImageType; // @synthesize titleIconImageType=_titleIconImageType;
@property(retain, nonatomic) UIImageView *titleIconImageView; // @synthesize titleIconImageView=_titleIconImageView;
- (_Bool)isLTR;	// IMP=0x0000000000415572
- (void)_rotateTitleIconImageView;	// IMP=0x0000000000415451
- (void)setShouldHaveRotatedTitleIconImage:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000041532b
- (_Bool)titleIconImageTypeSupportsRotation:(long long)arg1;	// IMP=0x00000000004152b0
- (struct CGSize)sizeOfAccessoryImageView;	// IMP=0x0000000000415136
- (_Bool)hasAccessoryImageView;	// IMP=0x000000000041511d
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000041509e
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000414f7d
- (void)drawTextInRect:(struct CGRect)arg1;	// IMP=0x0000000000414f0f
- (struct CGRect)rectToDrawTextInForRect:(struct CGRect)arg1;	// IMP=0x0000000000414ec0
- (void)layoutSubviews;	// IMP=0x0000000000414a9d
- (void)setTextColor:(id)arg1;	// IMP=0x0000000000414652

@end
