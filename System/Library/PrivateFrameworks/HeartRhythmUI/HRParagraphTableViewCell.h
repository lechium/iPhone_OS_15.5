//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSString, UIButton, UILabel;

@interface HRParagraphTableViewCell : UITableViewCell
{
    NSString *_titleText;	// 8 = 0x8
    NSString *_paragraphText;	// 16 = 0x10
    NSString *_buttonText;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UILabel *_paragraphLabel;	// 40 = 0x28
    UIButton *_button;	// 48 = 0x30
    NSLayoutConstraint *_titleLabelBaselineConstraint;	// 56 = 0x38
    NSLayoutConstraint *_paragraphLabelBaselineConstraint;	// 64 = 0x40
    NSLayoutConstraint *_buttonBaselineConstraint;	// 72 = 0x48
    NSLayoutConstraint *_contentViewParagraphBottomConstraint;	// 80 = 0x50
    NSLayoutConstraint *_contentViewButtonBottomConstraint;	// 88 = 0x58
}

+ (id)reuseIdentifier;	// IMP=0x000000000003079e
- (void).cxx_destruct;	// IMP=0x0000000000031c56
@property(retain, nonatomic) NSLayoutConstraint *contentViewButtonBottomConstraint; // @synthesize contentViewButtonBottomConstraint=_contentViewButtonBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewParagraphBottomConstraint; // @synthesize contentViewParagraphBottomConstraint=_contentViewParagraphBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *buttonBaselineConstraint; // @synthesize buttonBaselineConstraint=_buttonBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *paragraphLabelBaselineConstraint; // @synthesize paragraphLabelBaselineConstraint=_paragraphLabelBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleLabelBaselineConstraint; // @synthesize titleLabelBaselineConstraint=_titleLabelBaselineConstraint;
@property(retain, nonatomic) UIButton *button; // @synthesize button=_button;
@property(retain, nonatomic) UILabel *paragraphLabel; // @synthesize paragraphLabel=_paragraphLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *paragraphText; // @synthesize paragraphText=_paragraphText;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
- (void)_updateForCurrentSizeCategory;	// IMP=0x000000000003187c
- (long long)_buttonHorizontalAlignment;	// IMP=0x000000000003185e
- (void)_updateBottomConstraint;	// IMP=0x0000000000031780
- (double)_lastViewToBottom;	// IMP=0x00000000000316f4
- (id)_buttonFont;	// IMP=0x000000000003168c
- (id)_buttonFontTextStyle;	// IMP=0x0000000000031678
- (double)_subtitleLabelBaselineToButton;	// IMP=0x00000000000315ec
- (double)_titleLabelBaselineToParagraphBaseline;	// IMP=0x0000000000031560
- (id)_paragraphLabelFont;	// IMP=0x00000000000314f8
- (id)_paragraphLabelFontTextStyle;	// IMP=0x00000000000314e4
- (double)_titleLabelTopToBaseline;	// IMP=0x0000000000031458
- (id)_titleLabelFont;	// IMP=0x00000000000313f0
- (id)_titleLabelFontTextStyle;	// IMP=0x00000000000313dc
- (void)_setUpConstraints;	// IMP=0x0000000000030d6d
- (void)_setUpUI;	// IMP=0x00000000000308aa
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000307b0
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000030508
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000304a7

@end

