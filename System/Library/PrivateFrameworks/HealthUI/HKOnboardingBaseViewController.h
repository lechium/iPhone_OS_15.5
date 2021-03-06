//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSLayoutConstraint, NSString, UIScrollView, UIView;
@protocol HKOnboardingPageViewControllerDelegate;

@interface HKOnboardingBaseViewController
{
    _Bool _onboarding;	// 8 = 0x8
    long long _upgradingFromAlgorithmVersion;	// 16 = 0x10
    UIView *_contentView;	// 24 = 0x18
    UIScrollView *_scrollView;	// 32 = 0x20
    long long _leftButtonType;	// 40 = 0x28
    long long _rightButtonType;	// 48 = 0x30
    id <HKOnboardingPageViewControllerDelegate> _delegate;	// 56 = 0x38
    NSString *_cancelWithConfirmAlertTitle;	// 64 = 0x40
    NSString *_cancelWithConfirmAlertContinueActionTitle;	// 72 = 0x48
    NSString *_cancelWithConfirmAlertAbortActionTitle;	// 80 = 0x50
    UIView *_footerView;	// 88 = 0x58
    NSLayoutConstraint *_scrollViewBottomConstraint;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000264015
@property(retain, nonatomic) NSLayoutConstraint *scrollViewBottomConstraint; // @synthesize scrollViewBottomConstraint=_scrollViewBottomConstraint;
@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(copy, nonatomic) NSString *cancelWithConfirmAlertAbortActionTitle; // @synthesize cancelWithConfirmAlertAbortActionTitle=_cancelWithConfirmAlertAbortActionTitle;
@property(copy, nonatomic) NSString *cancelWithConfirmAlertContinueActionTitle; // @synthesize cancelWithConfirmAlertContinueActionTitle=_cancelWithConfirmAlertContinueActionTitle;
@property(copy, nonatomic) NSString *cancelWithConfirmAlertTitle; // @synthesize cancelWithConfirmAlertTitle=_cancelWithConfirmAlertTitle;
@property(retain, nonatomic) id <HKOnboardingPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long rightButtonType; // @synthesize rightButtonType=_rightButtonType;
@property(nonatomic) long long leftButtonType; // @synthesize leftButtonType=_leftButtonType;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) long long upgradingFromAlgorithmVersion; // @synthesize upgradingFromAlgorithmVersion=_upgradingFromAlgorithmVersion;
@property(readonly, nonatomic, getter=isOnboarding) _Bool onboarding; // @synthesize onboarding=_onboarding;
- (double)contentTop;	// IMP=0x0000000000263d58
- (double)titleTopToFirstBaseline;	// IMP=0x0000000000263cf7
- (double)_titleTopToFirstBaselineLeading;	// IMP=0x0000000000263c96
- (id)titleFont;	// IMP=0x0000000000263c2e
- (id)_titleFontTextStyle;	// IMP=0x0000000000263c1a
- (void)_adjustScrollViewForFooterView;	// IMP=0x00000000002639e1
- (void)_setUpNavigationBar;	// IMP=0x00000000002638f1
- (id)_skipButton;	// IMP=0x0000000000263845
- (id)_closeButton;	// IMP=0x0000000000263799
- (id)_cancelButton;	// IMP=0x00000000002636ed
- (id)_cancelWithConfirmButton;	// IMP=0x0000000000263693
- (id)_buttonForButtonType:(long long)arg1;	// IMP=0x0000000000263658
- (void)presentLearnMoreAlertWithMessage:(id)arg1 learnMoreTapped:(CDUnknownBlockType)arg2;	// IMP=0x0000000000263436
- (void)presentAlertWithMessage:(id)arg1;	// IMP=0x0000000000263335
- (void)skipButtonTapped:(id)arg1;	// IMP=0x000000000026332f
- (void)closeButtonTapped:(id)arg1;	// IMP=0x000000000026323e
- (void)cancelWithConfirmButtonTapped:(id)arg1;	// IMP=0x0000000000262f66
- (void)removeFooterView;	// IMP=0x0000000000262d91
- (void)setFooterView:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;	// IMP=0x0000000000262afb
- (void)setUpConstraints;	// IMP=0x00000000002627cc
- (void)setUpUI;	// IMP=0x0000000000262626
- (void)updateUserInterfaceForStyle:(long long)arg1;	// IMP=0x0000000000262620
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000026255b
- (void)viewDidLayoutSubviews;	// IMP=0x00000000002624dd
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000262473
- (void)viewDidLoad;	// IMP=0x0000000000262399
- (id)initForOnboarding:(_Bool)arg1 upgradingFromAlgorithmVersion:(long long)arg2;	// IMP=0x0000000000262341
- (id)initForOnboarding:(_Bool)arg1;	// IMP=0x0000000000262325

@end

