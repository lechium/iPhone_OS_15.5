//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSLayoutConstraint, UIFont, UIImageView, UILabel, UILayoutGuide, UIVisualEffectView;

@interface REUpNextThumbnailCell
{
    UILayoutGuide *_labelLayoutGuide;	// 8 = 0x8
    UIImageView *_imageView;	// 16 = 0x10
    UILabel *_headerLabel;	// 24 = 0x18
    UILabel *_descriptionLine1Label;	// 32 = 0x20
    UILabel *_descriptionLine2Label;	// 40 = 0x28
    UIVisualEffectView *_headerEffectView;	// 48 = 0x30
    UIVisualEffectView *_descriptionLine1EffectView;	// 56 = 0x38
    UIVisualEffectView *_descriptionLine2EffectView;	// 64 = 0x40
    UIVisualEffectView *_imageEffectView;	// 72 = 0x48
    UIFont *_standardFont;	// 80 = 0x50
    UIFont *_italicFont;	// 88 = 0x58
    UIFont *_boldFont;	// 96 = 0x60
    NSArray *_withHeaderConstraints;	// 104 = 0x68
    NSArray *_withoutHeaderConstraints;	// 112 = 0x70
    NSArray *_withDescription2Constraints;	// 120 = 0x78
    NSArray *_withoutDescription2Constraints;	// 128 = 0x80
    NSLayoutConstraint *_imageWidthConstraint;	// 136 = 0x88
    NSLayoutConstraint *_imageHeightConstraint;	// 144 = 0x90
    _Bool _showingHeader;	// 152 = 0x98
    _Bool _showingThreeLineLayout;	// 153 = 0x99
}

+ (void)initialize;	// IMP=0x000000000000b04c
- (void).cxx_destruct;	// IMP=0x000000000000d8ee
- (void)configureWithContent:(id)arg1;	// IMP=0x000000000000d5e0
- (void)updateConstraints;	// IMP=0x000000000000d1f1
- (id)secondaryEffectViews;	// IMP=0x000000000000d145
- (id)primaryEffectViews;	// IMP=0x000000000000d05e
- (void)defaultTextColorDidChange;	// IMP=0x000000000000cf2a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000000b0f3

@end
