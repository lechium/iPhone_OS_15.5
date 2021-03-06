//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <SpringBoardUIServices/SBUILegibility-Protocol.h>
#import <SpringBoardUIServices/_SBFVibrantView-Protocol.h>

@class NSString, SBUILegibilityLabel, SBUILegibilityView, UIImage, UIImageView, UILabel, UIView, _SBFVibrantSettings, _UILegibilitySettings;

@interface SBUIVibrantButton : UIControl <_SBFVibrantView, SBUILegibility>
{
    _SBFVibrantSettings *_vibrantSettings;	// 8 = 0x8
    _UILegibilitySettings *_legibilitySettings;	// 16 = 0x10
    UIImage *_glyphImage;	// 24 = 0x18
    NSString *_title;	// 32 = 0x20
    double _minimumTitleScaleFactor;	// 40 = 0x28
    long long _numberOfLines;	// 48 = 0x30
    long long _textAlignment;	// 56 = 0x38
    long long _lineBreakMode;	// 64 = 0x40
    UIView *_vibrantMaskView;	// 72 = 0x48
    UILabel *_vibrantMaskLabel;	// 80 = 0x50
    UIImageView *_vibrantMaskGlyphView;	// 88 = 0x58
    UIView *_vibrantGlyph;	// 96 = 0x60
    UIView *_vibrantGlyphBackgroundView;	// 104 = 0x68
    UIView *_vibrantGlyphTintView;	// 112 = 0x70
    UIView *_nonVibrantGlyph;	// 120 = 0x78
    SBUILegibilityView *_nonVibrantGlyphLegibilityView;	// 128 = 0x80
    SBUILegibilityLabel *_nonVibrantLegibilityLabel;	// 136 = 0x88
    _Bool _vibrancyAllowed;	// 144 = 0x90
    double _strength;	// 152 = 0x98
}

+ (id)_labelFont;	// IMP=0x0000000000022192
- (void).cxx_destruct;	// IMP=0x0000000000023485
@property(nonatomic) long long numberOfLines; // @synthesize numberOfLines=_numberOfLines;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic, getter=isVibrancyAllowed) _Bool vibrancyAllowed; // @synthesize vibrancyAllowed=_vibrancyAllowed;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) double strength; // @synthesize strength=_strength;
@property(retain, nonatomic) _SBFVibrantSettings *vibrantSettings; // @synthesize vibrantSettings=_vibrantSettings;
@property(nonatomic) long long lineBreakMode; // @synthesize lineBreakMode=_lineBreakMode;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) double minimumTitleScaleFactor; // @synthesize minimumTitleScaleFactor=_minimumTitleScaleFactor;
@property(retain, nonatomic) UIImage *glyphImage; // @synthesize glyphImage=_glyphImage;
- (void)setLegibilitySettings:(id)arg1 textStrength:(double)arg2;	// IMP=0x0000000000023376
- (void)setBackgroundView:(id)arg1;	// IMP=0x00000000000230cc
- (void)_updateForState;	// IMP=0x0000000000022f6b
- (double)_alphaForState;	// IMP=0x0000000000022f42
- (id)_lazyGlyphLegibilityView;	// IMP=0x0000000000022dd4
- (void)_layoutNonVibrantSubviews;	// IMP=0x0000000000022c51
- (void)_layoutVibrantSubviews;	// IMP=0x000000000002294f
- (struct CGRect)_glyphFrameForSize:(struct CGSize)arg1 inRect:(struct CGRect)arg2;	// IMP=0x00000000000228a5
- (struct CGRect)_labelFrameForSize:(struct CGSize)arg1 baselineOffset:(double)arg2 inRect:(struct CGRect)arg3;	// IMP=0x00000000000227f0
- (struct CGSize)_sizeThatFitsForLabelView:(id)arg1;	// IMP=0x000000000002278e
- (struct CGSize)_sizeThatFitsWithoutVibrancy;	// IMP=0x0000000000022771
- (struct CGSize)_sizeThatFitsWithVibrancy;	// IMP=0x0000000000022754
- (void)_setUpForCurrentVibrancy;	// IMP=0x00000000000221cb
- (_Bool)_shouldUseVibrancy;	// IMP=0x0000000000022131
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000000220f0
- (id)backgroundColor;	// IMP=0x00000000000220d3
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000022066
- (void)layoutSubviews;	// IMP=0x0000000000022028
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000021fea
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000021bb1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

