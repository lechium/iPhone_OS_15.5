//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKOnboardingBaseViewController.h>

#import <HeartRhythmUI/HRStackedButtonViewDelegate-Protocol.h>

@class HRStackedButtonView, NSLayoutConstraint, NSString, UILabel, UIView;

@interface HROnboardingHeroExplanationViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate>
{
    long long _textAlignment;	// 8 = 0x8
    UIView *_heroView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_bodyLabel;	// 32 = 0x20
    HRStackedButtonView *_stackedButtonView;	// 40 = 0x28
    NSLayoutConstraint *_contentViewBottomConstraint;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000000bf69
@property(retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(retain, nonatomic) HRStackedButtonView *stackedButtonView; // @synthesize stackedButtonView=_stackedButtonView;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *heroView; // @synthesize heroView=_heroView;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
- (id)_bodyFont;	// IMP=0x000000000000be3c
- (id)_bodyFontTextStyle;	// IMP=0x000000000000be28
- (double)_titleLastBaselineToBodyTop;	// IMP=0x000000000000bdd0
- (double)_titleTopToFirstBaseline;	// IMP=0x000000000000bd6f
- (double)_titleTopToFirstBaselineLeading;	// IMP=0x000000000000bd3f
- (id)_titleFont;	// IMP=0x000000000000bcd7
- (id)_titleFontTextStyle;	// IMP=0x000000000000bcc3
- (void)_adjustButtonFooterViewLocationForViewContentHeight;	// IMP=0x000000000000b732
- (void)_setUpButtonFooterView;	// IMP=0x000000000000b5e8
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;	// IMP=0x000000000000b5a1
- (long long)stackedButtonViewLastButtonMode;	// IMP=0x000000000000b599
@property(readonly, nonatomic) NSString *buttonTitleString;
@property(readonly, nonatomic) NSString *bodyString;
@property(readonly, nonatomic) NSString *titleString;
- (id)createHeroView;	// IMP=0x000000000004cbac
- (void)setUpConstraints;	// IMP=0x000000000000af0a
- (void)setUpUI;	// IMP=0x000000000000a999
- (void)viewDidLayoutSubviews;	// IMP=0x000000000000a958
- (void)viewDidLoad;	// IMP=0x000000000000a917

@end
