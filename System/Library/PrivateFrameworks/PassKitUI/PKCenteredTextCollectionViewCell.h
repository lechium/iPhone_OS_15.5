//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UILabel;

@interface PKCenteredTextCollectionViewCell
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subtitleLabel;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000adc58
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000adb63
- (void)updateTitleTextColor;	// IMP=0x00000000000adab0
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
- (void)layoutSubviews;	// IMP=0x00000000000ad417
- (void)resetFonts;	// IMP=0x00000000000ad27d
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000ad0c5

@end

