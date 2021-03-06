//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIImage, UIImageView, UILabel;

@interface PKSearchSuggestionCollectionViewCell
{
    UILabel *_labelSuggestion;	// 8 = 0x8
    UIImageView *_imageViewIcon;	// 16 = 0x10
    _Bool _isTemplateLayout;	// 24 = 0x18
    NSString *_suggestion;	// 32 = 0x20
    UIImage *_icon;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000eca45
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *suggestion; // @synthesize suggestion=_suggestion;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000ec8f4
- (struct CGSize)_layoutWithBounds:(struct CGRect)arg1;	// IMP=0x00000000000ec617
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000ec5b9
- (void)layoutSubviews;	// IMP=0x00000000000ec54c
- (void)resetFonts;	// IMP=0x00000000000ec46c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000ec2c2

@end

