//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TLKLabel, TLKMultilineText, TLKProminenceView, UIColor, UIFont;

@interface TLKEmbossedLabel
{
    _Bool _shouldBadge;	// 8 = 0x8
    TLKMultilineText *_text;	// 16 = 0x10
    UIColor *_color;	// 24 = 0x18
    UIFont *_font;	// 32 = 0x20
    TLKLabel *_label;	// 40 = 0x28
    TLKProminenceView *_backgroundView;	// 48 = 0x30
    struct CGSize _textOffset;	// 56 = 0x38
    struct CGSize _customInsetSize;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x000000000001a815
@property(retain, nonatomic) TLKProminenceView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) TLKLabel *label; // @synthesize label=_label;
@property(nonatomic) struct CGSize customInsetSize; // @synthesize customInsetSize=_customInsetSize;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) struct CGSize textOffset; // @synthesize textOffset=_textOffset;
@property(retain, nonatomic) TLKMultilineText *text; // @synthesize text=_text;
@property(nonatomic) _Bool shouldBadge; // @synthesize shouldBadge=_shouldBadge;
- (void)layoutSubviews;	// IMP=0x000000000001a4dc
- (struct CGSize)effectiveLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x000000000001a418
- (double)effectiveFirstBaselineOffsetFromTop;	// IMP=0x000000000001a3b6
- (double)effectiveBaselineOffsetFromBottom;	// IMP=0x000000000001a354
@property(nonatomic) _Bool adjustsFontSizeToFitWidth;
- (void)observedPropertiesChanged;	// IMP=0x0000000000019f88
- (void)setText:(id)arg1 font:(id)arg2 customInsetSize:(struct CGSize)arg3 badge:(_Bool)arg4;	// IMP=0x0000000000019e73
- (id)init;	// IMP=0x00000000000195d1

@end

