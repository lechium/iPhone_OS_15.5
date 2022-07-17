//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <TVUIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <TVUIKit/_UIFloatingContentViewDelegate-Protocol.h>

@class NSAttributedString, NSString, UIColor, UILabel, UITapGestureRecognizer, UITextView, UIVisualEffectView, _UIFloatingContentView;

@interface _TVFocusableTextView : UIView <_UIFloatingContentViewDelegate, UIGestureRecognizerDelegate>
{
    UIColor *_backgroundColor;	// 8 = 0x8
    UIVisualEffectView *_vibrantEffectView;	// 16 = 0x10
    UITextView *_auxilliaryTextView;	// 24 = 0x18
    _Bool _textTruncating;	// 32 = 0x20
    _Bool _moreLabelOnNewLine;	// 33 = 0x21
    _Bool _trackHorizontal;	// 34 = 0x22
    _Bool _alwaysShowBackground;	// 35 = 0x23
    _Bool _alwaysFocusable;	// 36 = 0x24
    _Bool _disableFocus;	// 37 = 0x25
    _Bool _needsTextSizeComputation;	// 38 = 0x26
    UIColor *_descriptionTextColor;	// 40 = 0x28
    UIColor *_descriptionTextHighlightColor;	// 48 = 0x30
    long long _descriptionTextAlignment;	// 56 = 0x38
    UIColor *_highlightBackgroundColor;	// 64 = 0x40
    double _moreHighlightPadding;	// 72 = 0x48
    UIColor *_moreLabelTextColor;	// 80 = 0x50
    NSString *_moreLabelText;	// 88 = 0x58
    unsigned long long _focusSizeIncrease;	// 96 = 0x60
    CDUnknownBlockType _selectionHandler;	// 104 = 0x68
    CDUnknownBlockType _playHandler;	// 112 = 0x70
    UITextView *_descriptionTextView;	// 120 = 0x78
    _UIFloatingContentView *_floatingView;	// 128 = 0x80
    UIVisualEffectView *_backgroundView;	// 136 = 0x88
    UITapGestureRecognizer *_selectRecognizer;	// 144 = 0x90
    UITapGestureRecognizer *_playRecognizer;	// 152 = 0x98
    UILabel *_moreLabel;	// 160 = 0xa0
    UITapGestureRecognizer *_moreLabelTapGestureRecognizer;	// 168 = 0xa8
    struct UIEdgeInsets _padding;	// 176 = 0xb0
}

+ (double)cornerRadius;	// IMP=0x00000000000077ee
- (void).cxx_destruct;	// IMP=0x0000000000008a97
@property(nonatomic) _Bool needsTextSizeComputation; // @synthesize needsTextSizeComputation=_needsTextSizeComputation;
@property(readonly, nonatomic) UITapGestureRecognizer *moreLabelTapGestureRecognizer; // @synthesize moreLabelTapGestureRecognizer=_moreLabelTapGestureRecognizer;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UITapGestureRecognizer *playRecognizer; // @synthesize playRecognizer=_playRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *selectRecognizer; // @synthesize selectRecognizer=_selectRecognizer;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) _UIFloatingContentView *floatingView; // @synthesize floatingView=_floatingView;
@property(retain, nonatomic) UITextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(copy, nonatomic) CDUnknownBlockType playHandler; // @synthesize playHandler=_playHandler;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(nonatomic) _Bool disableFocus; // @synthesize disableFocus=_disableFocus;
@property(nonatomic, getter=isAlwaysFocusable) _Bool alwaysFocusable; // @synthesize alwaysFocusable=_alwaysFocusable;
@property(nonatomic) unsigned long long focusSizeIncrease; // @synthesize focusSizeIncrease=_focusSizeIncrease;
@property(nonatomic) _Bool alwaysShowBackground; // @synthesize alwaysShowBackground=_alwaysShowBackground;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) _Bool trackHorizontal; // @synthesize trackHorizontal=_trackHorizontal;
@property(retain, nonatomic) NSString *moreLabelText; // @synthesize moreLabelText=_moreLabelText;
@property(retain, nonatomic) UIColor *moreLabelTextColor; // @synthesize moreLabelTextColor=_moreLabelTextColor;
@property(nonatomic) _Bool moreLabelOnNewLine; // @synthesize moreLabelOnNewLine=_moreLabelOnNewLine;
@property(nonatomic) double moreHighlightPadding; // @synthesize moreHighlightPadding=_moreHighlightPadding;
@property(readonly, nonatomic, getter=isTextTruncating) _Bool textTruncating; // @synthesize textTruncating=_textTruncating;
@property(retain, nonatomic) UIColor *highlightBackgroundColor; // @synthesize highlightBackgroundColor=_highlightBackgroundColor;
@property(nonatomic) long long descriptionTextAlignment; // @synthesize descriptionTextAlignment=_descriptionTextAlignment;
@property(retain, nonatomic) UIColor *descriptionTextHighlightColor; // @synthesize descriptionTextHighlightColor=_descriptionTextHighlightColor;
@property(retain, nonatomic) UIColor *descriptionTextColor; // @synthesize descriptionTextColor=_descriptionTextColor;
- (void)_playButtonAction:(id)arg1;	// IMP=0x00000000000087b1
- (void)_selectButtonAction:(id)arg1;	// IMP=0x0000000000008791
- (void)floatingContentView:(id)arg1 isTransitioningFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x000000000000874d
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000000086c6
- (void)tintColorDidChange;	// IMP=0x0000000000008626
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000000853a
- (struct CGRect)_moreLabelFrame;	// IMP=0x000000000000808b
- (struct CGRect)_moreLabelExclusionPathFrame;	// IMP=0x0000000000007f76
- (void)_recomputeTextSizeIfNeeded;	// IMP=0x0000000000007e46
- (void)_setNeedsTextSizeComputation;	// IMP=0x0000000000007e35
@property(nonatomic) unsigned long long maximumNumberOfLines;
@property(retain, nonatomic) NSAttributedString *descriptionText;
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x000000000000779f
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000007748
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000075d4
- (_Bool)canBecomeFocused;	// IMP=0x0000000000007532
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000074ce
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000074bc
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000007406
- (void)layoutSubviews;	// IMP=0x0000000000006e8e
- (void)_updateTextColorsForFocusState:(_Bool)arg1;	// IMP=0x0000000000006cae
- (void)_updateTextColorsIfNeeded;	// IMP=0x0000000000006c6c
- (void)_updateBackgroundColors;	// IMP=0x0000000000006aec
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000000068da
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000061c2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
