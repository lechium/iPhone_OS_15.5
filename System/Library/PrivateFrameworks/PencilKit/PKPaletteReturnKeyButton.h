//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPaletteReturnKeyButtonContentView, PKTextInputLanguageSelectionToken;

@interface PKPaletteReturnKeyButton
{
    double _scalingFactor;	// 8 = 0x8
    long long _returnKeyType;	// 16 = 0x10
    long long _axis;	// 24 = 0x18
    PKPaletteReturnKeyButtonContentView *_contentView;	// 32 = 0x20
    PKTextInputLanguageSelectionToken *_observerToken;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000a2a2b
@property(retain, nonatomic) PKTextInputLanguageSelectionToken *observerToken; // @synthesize observerToken=_observerToken;
@property(retain, nonatomic) PKPaletteReturnKeyButtonContentView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
- (double)scalingFactor;	// IMP=0x00000000000a29ad
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000a28a2
- (id)_returnKeyImageSymbolConfiguration;	// IMP=0x00000000000a2832
- (id)_returnKeyImage;	// IMP=0x00000000000a27a7
- (_Bool)_shouldUseBlueReturnKeyColor;	// IMP=0x00000000000a275a
- (id)_textColor;	// IMP=0x00000000000a269d
- (id)_returnKeyLabelText;	// IMP=0x00000000000a2592
- (void)_updateLabelText;	// IMP=0x00000000000a24ce
- (void)_updateContentViewOrientation;	// IMP=0x00000000000a23e2
- (id)_returnKeyTintColor;	// IMP=0x00000000000a2396
- (id)_regularLayoutBackgroundColor;	// IMP=0x00000000000a22c0
- (id)_backgroundColor;	// IMP=0x00000000000a226c
- (void)_updateImageView;	// IMP=0x00000000000a2160
- (_Bool)_useCompactLayout;	// IMP=0x00000000000a20fd
- (void)_updateUI;	// IMP=0x00000000000a2030
- (void)setEnabled:(_Bool)arg1;	// IMP=0x00000000000a1f88
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000000a1f2a
- (void)setScalingFactor:(double)arg1;	// IMP=0x00000000000a1ed7
- (struct CGSize)_contentViewSize;	// IMP=0x00000000000a1e13
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000a1dbe
- (void)layoutSubviews;	// IMP=0x00000000000a1d00
- (void)dealloc;	// IMP=0x00000000000a1cb7
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000a1993

@end
