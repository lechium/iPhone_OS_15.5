//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

@class ASVBlurredBackgroundView, ASVWrappedButton, NSString, UIColor, UIFont, UIImage;

@interface ASVButton : UIControl
{
    UIFont *_regularFont;	// 8 = 0x8
    UIFont *_boldFont;	// 16 = 0x10
    long long _controlStyle;	// 24 = 0x18
    ASVWrappedButton *_button;	// 32 = 0x20
    ASVBlurredBackgroundView *_blurredBackgroundView;	// 40 = 0x28
    long long _buttonStyle;	// 48 = 0x30
    long long _textStyle;	// 56 = 0x38
    UIColor *_white35PercentColor;	// 64 = 0x40
    UIColor *_white100PercentColor;	// 72 = 0x48
    UIColor *_white70PercentColor;	// 80 = 0x50
    UIColor *_black35PercentColor;	// 88 = 0x58
    UIColor *_black70PercentColor;	// 96 = 0x60
    UIColor *_blue100PercentColor;	// 104 = 0x68
    UIColor *_blue50PercentColor;	// 112 = 0x70
    long long _currentStyle;	// 120 = 0x78
    UIColor *_white75PercentColor;	// 128 = 0x80
    UIColor *_white52PercentColor;	// 136 = 0x88
    UIColor *_white26PercentColor;	// 144 = 0x90
    struct UIEdgeInsets _largeImageInsets;	// 152 = 0x98
}

- (void).cxx_destruct;	// IMP=0x000000000000f7ac
@property(retain, nonatomic) UIColor *white26PercentColor; // @synthesize white26PercentColor=_white26PercentColor;
@property(retain, nonatomic) UIColor *white52PercentColor; // @synthesize white52PercentColor=_white52PercentColor;
@property(retain, nonatomic) UIColor *white75PercentColor; // @synthesize white75PercentColor=_white75PercentColor;
@property(nonatomic) long long currentStyle; // @synthesize currentStyle=_currentStyle;
@property(retain, nonatomic) UIColor *blue50PercentColor; // @synthesize blue50PercentColor=_blue50PercentColor;
@property(retain, nonatomic) UIColor *blue100PercentColor; // @synthesize blue100PercentColor=_blue100PercentColor;
@property(retain, nonatomic) UIColor *black70PercentColor; // @synthesize black70PercentColor=_black70PercentColor;
@property(retain, nonatomic) UIColor *black35PercentColor; // @synthesize black35PercentColor=_black35PercentColor;
@property(retain, nonatomic) UIColor *white70PercentColor; // @synthesize white70PercentColor=_white70PercentColor;
@property(retain, nonatomic) UIColor *white100PercentColor; // @synthesize white100PercentColor=_white100PercentColor;
@property(retain, nonatomic) UIColor *white35PercentColor; // @synthesize white35PercentColor=_white35PercentColor;
@property(retain, nonatomic) UIFont *boldFont; // @synthesize boldFont=_boldFont;
@property(retain, nonatomic) UIFont *regularFont; // @synthesize regularFont=_regularFont;
@property(nonatomic) long long textStyle; // @synthesize textStyle=_textStyle;
@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(retain, nonatomic) ASVBlurredBackgroundView *blurredBackgroundView; // @synthesize blurredBackgroundView=_blurredBackgroundView;
@property(retain, nonatomic) ASVWrappedButton *button; // @synthesize button=_button;
@property(nonatomic) struct UIEdgeInsets largeImageInsets; // @synthesize largeImageInsets=_largeImageInsets;
@property(nonatomic) long long controlStyle; // @synthesize controlStyle=_controlStyle;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000000f4d2
- (void)updateCurrentAppearanceIfNeeded;	// IMP=0x000000000000f35c
- (void)layoutSubviews;	// IMP=0x000000000000f31b
@property(retain, nonatomic) UIImage *image;
@property(retain, nonatomic) NSString *title;
- (void)_didUpdateContentSizeCategory:(id)arg1;	// IMP=0x000000000000f155
- (void)_didUpdateDarkenColorsSetting:(id)arg1;	// IMP=0x000000000000f0f9
- (void)_updateTitleStyleForButton:(id)arg1 withControlStyle:(long long)arg2;	// IMP=0x000000000000e75f
- (id)_colorDarkenedIfNeededForColor:(id)arg1;	// IMP=0x000000000000e667
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000000e584
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000000e4a1
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000000e3be
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets;
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000000dfb2
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;	// IMP=0x000000000000decd
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x000000000000de06
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;	// IMP=0x000000000000dd89
- (id)initWithImage:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4 largeImageInsets:(struct UIEdgeInsets)arg5;	// IMP=0x000000000000dc67
- (id)initWithImage:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4;	// IMP=0x000000000000dc35
- (id)initWithTitle:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4 adjustsFontForContentSizeCategory:(_Bool)arg5;	// IMP=0x000000000000db1b
- (id)initWithTitle:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4;	// IMP=0x000000000000daf9
- (id)initWithButton:(id)arg1 buttonStyle:(long long)arg2 textStyle:(long long)arg3 controlStyle:(long long)arg4 largeImageInsets:(struct UIEdgeInsets)arg5;	// IMP=0x000000000000d19c

@end

