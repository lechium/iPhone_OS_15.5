//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSLayoutYAxisAnchor, NSString, UIBlurEffect, UILabel;
@protocol HRStackedButtonViewDelegate;

@interface HRStackedButtonView : UIView
{
    _Bool _fixedBottomButtonSpacing;	// 8 = 0x8
    _Bool _blurHidden;	// 9 = 0x9
    NSArray *_buttons;	// 16 = 0x10
    long long _lastButtonMode;	// 24 = 0x18
    NSArray *_titles;	// 32 = 0x20
    NSArray *_styles;	// 40 = 0x28
    long long _buttonMode;	// 48 = 0x30
    NSString *_footerText;	// 56 = 0x38
    NSString *_boldFooterText;	// 64 = 0x40
    long long _footerTextAlignment;	// 72 = 0x48
    UILabel *_footerTextLabel;	// 80 = 0x50
    UIBlurEffect *_backgroundBlurEffect;	// 88 = 0x58
    UIView *_backgroundBlurView;	// 96 = 0x60
    NSLayoutConstraint *_backgroundBlurViewLeadingConstraint;	// 104 = 0x68
    NSLayoutConstraint *_backgroundBlurViewTrailingConstraint;	// 112 = 0x70
    NSLayoutYAxisAnchor *_firstTopAnchor;	// 120 = 0x78
    double _firstTopConstant;	// 128 = 0x80
    NSLayoutConstraint *_bottomConstraint;	// 136 = 0x88
    id <HRStackedButtonViewDelegate> _delegate;	// 144 = 0x90
}

+ (double)_buttonSpacingForValue:(double)arg1;	// IMP=0x000000000003ccef
+ (double)_footerTextSpacingForValue:(double)arg1;	// IMP=0x000000000003cc8d
+ (id)_footerTextBoldFont;	// IMP=0x000000000003cc1d
+ (id)_footerTextFont;	// IMP=0x000000000003cbb2
+ (id)_footerFontTextStyle;	// IMP=0x000000000003cb9e
+ (double)topPadding;	// IMP=0x000000000003b959
+ (id)buddyStackedButtonViewWithTitles:(id)arg1 footerText:(id)arg2 boldFooterText:(id)arg3 footerTextAlignment:(long long)arg4 delegate:(id)arg5;	// IMP=0x000000000003b22c
+ (id)buddyStackedButtonViewWithTitles:(id)arg1 footerText:(id)arg2 boldFooterText:(id)arg3 delegate:(id)arg4;	// IMP=0x000000000003b207
- (void).cxx_destruct;	// IMP=0x000000000003cfd5
@property(nonatomic) __weak id <HRStackedButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(nonatomic) double firstTopConstant; // @synthesize firstTopConstant=_firstTopConstant;
@property(retain, nonatomic) NSLayoutYAxisAnchor *firstTopAnchor; // @synthesize firstTopAnchor=_firstTopAnchor;
@property(retain, nonatomic) NSLayoutConstraint *backgroundBlurViewTrailingConstraint; // @synthesize backgroundBlurViewTrailingConstraint=_backgroundBlurViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *backgroundBlurViewLeadingConstraint; // @synthesize backgroundBlurViewLeadingConstraint=_backgroundBlurViewLeadingConstraint;
@property(retain, nonatomic) UIView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property(retain, nonatomic) UIBlurEffect *backgroundBlurEffect; // @synthesize backgroundBlurEffect=_backgroundBlurEffect;
@property(retain, nonatomic) UILabel *footerTextLabel; // @synthesize footerTextLabel=_footerTextLabel;
@property(nonatomic) long long footerTextAlignment; // @synthesize footerTextAlignment=_footerTextAlignment;
@property(copy, nonatomic) NSString *boldFooterText; // @synthesize boldFooterText=_boldFooterText;
@property(copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property(nonatomic) long long buttonMode; // @synthesize buttonMode=_buttonMode;
@property(copy, nonatomic) NSArray *styles; // @synthesize styles=_styles;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(nonatomic, getter=isBlurHidden) _Bool blurHidden; // @synthesize blurHidden=_blurHidden;
@property(nonatomic) _Bool fixedBottomButtonSpacing; // @synthesize fixedBottomButtonSpacing=_fixedBottomButtonSpacing;
@property(nonatomic) long long lastButtonMode; // @synthesize lastButtonMode=_lastButtonMode;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (id)lastBaselineAnchor;	// IMP=0x000000000003cb24
- (id)firstBaselineAnchor;	// IMP=0x000000000003caaa
- (id)_attributedFooterText;	// IMP=0x000000000003c9e0
- (void)_updateForCurrentSizeCategory;	// IMP=0x000000000003c923
- (void)_updateBottomConstraint;	// IMP=0x000000000003c7b2
- (void)_createViewBottomConstraint;	// IMP=0x000000000003c59d
- (void)_assignConstraintsForButtons;	// IMP=0x000000000003c128
- (void)_setUpFooterText;	// IMP=0x000000000003bdbf
- (id)_createButtons;	// IMP=0x000000000003bb4f
- (void)_setUpBlurEffect;	// IMP=0x000000000003b9e9
- (void)_setUpButtons;	// IMP=0x000000000003b967
- (void)actionButtonTapped:(id)arg1;	// IMP=0x000000000003b8d4
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000003b7da
- (void)alignBlurViewHorizontalConstraintsWithView:(id)arg1;	// IMP=0x000000000003b48a
- (id)initWithButtonTitles:(id)arg1 styles:(id)arg2 footerText:(id)arg3 boldFooterText:(id)arg4 footerTextAlignment:(long long)arg5 delegate:(id)arg6;	// IMP=0x000000000003b09e

@end
