//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UILabel, UIVisualEffectView;

@interface AVTAttributeLabeledCollectionViewCell
{
    _Bool _shouldHideLabelBackground;	// 8 = 0x8
    NSString *_labelString;	// 16 = 0x10
    double _labelVerticalSpace;	// 24 = 0x18
    UIVisualEffectView *_labelBackgroundView;	// 32 = 0x20
    UILabel *_label;	// 40 = 0x28
}

+ (id)cellIdentifier;	// IMP=0x00000000000b77ad
- (void).cxx_destruct;	// IMP=0x00000000000b8bc9
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIVisualEffectView *labelBackgroundView; // @synthesize labelBackgroundView=_labelBackgroundView;
@property(nonatomic) _Bool shouldHideLabelBackground; // @synthesize shouldHideLabelBackground=_shouldHideLabelBackground;
@property(nonatomic) double labelVerticalSpace; // @synthesize labelVerticalSpace=_labelVerticalSpace;
@property(copy, nonatomic) NSString *labelString; // @synthesize labelString=_labelString;
- (void)prepareForReuse;	// IMP=0x00000000000b8ab1
- (void)layoutSubviews;	// IMP=0x00000000000b7cc9
- (void)updateLabelBackgroundAppearance;	// IMP=0x00000000000b7b6a
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000b7b06
- (struct CGRect)frameForAttributeView;	// IMP=0x00000000000b79eb
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000b77ba

@end
