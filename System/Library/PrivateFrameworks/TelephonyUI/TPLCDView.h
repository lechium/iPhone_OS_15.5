//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TPLCDSubImageView, TPLCDTextView, UIView;

@interface TPLCDView
{
    UIView *_contentView;	// 8 = 0x8
    TPLCDTextView *_textView;	// 16 = 0x10
    TPLCDTextView *_labelView;	// 24 = 0x18
    TPLCDSubImageView *_imageView;	// 32 = 0x20
    unsigned int _layoutAsLabelled:1;	// 40 = 0x28
    _Bool _verticallyCenterTextViewIfLabelless;	// 41 = 0x29
}

+ (double)defaultLabelFontSize;	// IMP=0x0000000000007bd0
+ (double)defaultTextFontSize;	// IMP=0x0000000000007bc2
- (void).cxx_destruct;	// IMP=0x0000000000008ffd
@property _Bool verticallyCenterTextViewIfLabelless; // @synthesize verticallyCenterTextViewIfLabelless=_verticallyCenterTextViewIfLabelless;
- (id)secondLineText;	// IMP=0x0000000000008fd3
- (void)setSecondLineText:(id)arg1;	// IMP=0x0000000000008fcd
- (void)setLayoutAsLabelled:(_Bool)arg1;	// IMP=0x0000000000008f4d
- (void)setShadowColor:(id)arg1;	// IMP=0x0000000000008ee0
- (id)subImage;	// IMP=0x0000000000008ec3
- (void)setSubImage:(id)arg1;	// IMP=0x0000000000008dc4
- (void)blinkLabel;	// IMP=0x0000000000008b92
- (id)label;	// IMP=0x0000000000008b75
- (void)setLabel:(id)arg1 animate:(_Bool)arg2;	// IMP=0x00000000000088da
- (void)setLabel:(id)arg1;	// IMP=0x00000000000088c6
- (void)setLabelFontSize:(double)arg1;	// IMP=0x000000000000886b
- (void)didFinishAnimatingLCDLabelFadeOut:(id)arg1 finished:(id)arg2 context:(id)arg3;	// IMP=0x0000000000008856
- (void)didMoveToWindow;	// IMP=0x0000000000008815
- (void)layoutSubviews;	// IMP=0x0000000000008587
- (struct CGRect)_imageViewFrame;	// IMP=0x000000000000845e
- (struct CGRect)_labelFrame;	// IMP=0x00000000000082d6
- (struct CGRect)textFrame;	// IMP=0x00000000000082b7
- (struct CGRect)_text1Frame;	// IMP=0x0000000000007f78
- (id)text;	// IMP=0x0000000000007f5b
- (void)setText:(id)arg1;	// IMP=0x0000000000007e56
- (void)setTextFontSize:(double)arg1;	// IMP=0x0000000000007dfb
- (double)_textVInset;	// IMP=0x0000000000007d9b
- (double)_labelVInset;	// IMP=0x0000000000007ccb
- (void)setContentsAlpha:(double)arg1;	// IMP=0x0000000000007c62
- (_Bool)shouldCenterContentView;	// IMP=0x0000000000007bf3
- (_Bool)shouldCenterText;	// IMP=0x0000000000007bde
- (id)initWithDefaultSizeForOrientation:(long long)arg1;	// IMP=0x0000000000007af6
- (void)_resetContentViewFrame;	// IMP=0x0000000000007a87
- (struct CGRect)fullSizedContentViewFrame;	// IMP=0x0000000000007936

@end
