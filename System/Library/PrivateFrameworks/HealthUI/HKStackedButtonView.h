//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSLayoutYAxisAnchor, NSString, UIBlurEffect, UILabel;
@protocol HKStackedButtonViewDelegate;

@interface HKStackedButtonView : UIView
{
    _Bool _bottomAdjustsForHomeButtonlessScreen;	// 8 = 0x8
    _Bool _blurHidden;	// 9 = 0x9
    NSArray *_buttons;	// 16 = 0x10
    long long _lastButtonMode;	// 24 = 0x18
    NSArray *_titles;	// 32 = 0x20
    NSArray *_styles;	// 40 = 0x28
    NSArray *_buttonSpacingConstraints;	// 48 = 0x30
    long long _buttonMode;	// 56 = 0x38
    NSString *_footerText;	// 64 = 0x40
    NSString *_boldFooterText;	// 72 = 0x48
    long long _footerTextAlignment;	// 80 = 0x50
    UILabel *_footerTextLabel;	// 88 = 0x58
    UIBlurEffect *_backgroundBlurEffect;	// 96 = 0x60
    UIView *_backgroundBlurView;	// 104 = 0x68
    NSLayoutConstraint *_backgroundBlurViewLeadingConstraint;	// 112 = 0x70
    NSLayoutConstraint *_backgroundBlurViewTrailingConstraint;	// 120 = 0x78
    NSLayoutYAxisAnchor *_firstTopAnchor;	// 128 = 0x80
    double _firstTopConstant;	// 136 = 0x88
    NSLayoutConstraint *_bottomConstraint;	// 144 = 0x90
    id <HKStackedButtonViewDelegate> _delegate;	// 152 = 0x98
}

+ (double)_buttonSpacingForValue:(double)arg1;	// IMP=0x000000000029dd94
+ (double)_footerTextSpacingForValue:(double)arg1;	// IMP=0x000000000029dd32
+ (id)_footerTextBoldFont;	// IMP=0x000000000029dcc2
+ (id)_footerTextFont;	// IMP=0x000000000029dc57
+ (id)_footerFontTextStyle;	// IMP=0x000000000029dc43
+ (id)createButtonBackgroundView;	// IMP=0x000000000029dac4
+ (id)buddyStackedButtonViewWithTitles:(id)arg1 footerText:(id)arg2 boldFooterText:(id)arg3 footerTextAlignment:(long long)arg4 delegate:(id)arg5;	// IMP=0x000000000029bf34
+ (id)buddyStackedButtonViewWithTitles:(id)arg1 footerText:(id)arg2 boldFooterText:(id)arg3 delegate:(id)arg4;	// IMP=0x000000000029bf0f
- (void).cxx_destruct;	// IMP=0x000000000029e09c
@property(nonatomic) __weak id <HKStackedButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
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
@property(copy, nonatomic) NSArray *buttonSpacingConstraints; // @synthesize buttonSpacingConstraints=_buttonSpacingConstraints;
@property(copy, nonatomic) NSArray *styles; // @synthesize styles=_styles;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(nonatomic, getter=isBlurHidden) _Bool blurHidden; // @synthesize blurHidden=_blurHidden;
@property(nonatomic) _Bool bottomAdjustsForHomeButtonlessScreen; // @synthesize bottomAdjustsForHomeButtonlessScreen=_bottomAdjustsForHomeButtonlessScreen;
@property(nonatomic) long long lastButtonMode; // @synthesize lastButtonMode=_lastButtonMode;
@property(retain, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
- (id)lastBaselineAnchor;	// IMP=0x000000000029dbc9
- (id)firstBaselineAnchor;	// IMP=0x000000000029db4f
- (id)_attributedFooterText;	// IMP=0x000000000029d9fa
- (void)_updateForCurrentSizeCategory;	// IMP=0x000000000029d92c
- (void)_updateBottomConstraint;	// IMP=0x000000000029d731
- (void)_createViewBottomConstraint;	// IMP=0x000000000029d51c
- (void)_updateConstraintsForButtons;	// IMP=0x000000000029d28a
- (void)_assignConstraintsForButtons;	// IMP=0x000000000029ce2c
- (void)_setUpFooterText;	// IMP=0x000000000029cac3
- (id)_createButtons;	// IMP=0x000000000029c853
- (void)_setUpBlurEffect;	// IMP=0x000000000029c6f0
- (void)_setUpButtons;	// IMP=0x000000000029c661
- (void)actionButtonTapped:(id)arg1;	// IMP=0x000000000029c5dc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000029c4e2
- (void)alignBlurViewHorizontalConstraintsWithView:(id)arg1;	// IMP=0x000000000029c192
- (id)initWithButtonTitles:(id)arg1 styles:(id)arg2 footerText:(id)arg3 boldFooterText:(id)arg4 footerTextAlignment:(long long)arg5 delegate:(id)arg6;	// IMP=0x000000000029bd17

@end

