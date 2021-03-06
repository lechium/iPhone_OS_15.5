//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKOnboardingBaseViewController.h>

#import <HeartRhythmUI/HRLinkTextViewDelegate-Protocol.h>
#import <HeartRhythmUI/HRStackedButtonViewDelegate-Protocol.h>

@class HKElectrocardiogram, HROnboardingElectrocardiogramResultView, HRStackedButtonView, NSLayoutAnchor, NSLayoutConstraint, UILabel;

@interface HROnboardingElectrocardiogramPossibleResultsViewController : HKOnboardingBaseViewController <HRLinkTextViewDelegate, HRStackedButtonViewDelegate>
{
    HKElectrocardiogram *_electrocardiogram;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    HROnboardingElectrocardiogramResultView *_sinusRhythmResultReview;	// 24 = 0x18
    HROnboardingElectrocardiogramResultView *_atrialFibrillationResultView;	// 32 = 0x20
    HROnboardingElectrocardiogramResultView *_highOrLowHeartRateResultView;	// 40 = 0x28
    HROnboardingElectrocardiogramResultView *_inconclusiveResultView;	// 48 = 0x30
    HROnboardingElectrocardiogramResultView *_onlyResultView;	// 56 = 0x38
    HROnboardingElectrocardiogramResultView *_bottomResultView;	// 64 = 0x40
    UILabel *_disclaimerLabel;	// 72 = 0x48
    HRStackedButtonView *_stackedButtonView;	// 80 = 0x50
    NSLayoutAnchor *_viewTopAnchor;	// 88 = 0x58
    NSLayoutConstraint *_contentViewBottomConstraint;	// 96 = 0x60
    NSLayoutConstraint *_disclaimerLabelTopConstraint;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000003471b
@property(retain, nonatomic) NSLayoutConstraint *disclaimerLabelTopConstraint; // @synthesize disclaimerLabelTopConstraint=_disclaimerLabelTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(retain, nonatomic) NSLayoutAnchor *viewTopAnchor; // @synthesize viewTopAnchor=_viewTopAnchor;
@property(retain, nonatomic) HRStackedButtonView *stackedButtonView; // @synthesize stackedButtonView=_stackedButtonView;
@property(retain, nonatomic) UILabel *disclaimerLabel; // @synthesize disclaimerLabel=_disclaimerLabel;
@property(retain, nonatomic) HROnboardingElectrocardiogramResultView *bottomResultView; // @synthesize bottomResultView=_bottomResultView;
@property(retain, nonatomic) HROnboardingElectrocardiogramResultView *onlyResultView; // @synthesize onlyResultView=_onlyResultView;
@property(retain, nonatomic) HROnboardingElectrocardiogramResultView *inconclusiveResultView; // @synthesize inconclusiveResultView=_inconclusiveResultView;
@property(retain, nonatomic) HROnboardingElectrocardiogramResultView *highOrLowHeartRateResultView; // @synthesize highOrLowHeartRateResultView=_highOrLowHeartRateResultView;
@property(retain, nonatomic) HROnboardingElectrocardiogramResultView *atrialFibrillationResultView; // @synthesize atrialFibrillationResultView=_atrialFibrillationResultView;
@property(retain, nonatomic) HROnboardingElectrocardiogramResultView *sinusRhythmResultReview; // @synthesize sinusRhythmResultReview=_sinusRhythmResultReview;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) HKElectrocardiogram *electrocardiogram; // @synthesize electrocardiogram=_electrocardiogram;
- (void)_pauseResultViewVideos;	// IMP=0x0000000000034374
- (void)_playResultViewVideos;	// IMP=0x0000000000034177
- (void)_adjustStackedButtonViewLocationForViewContentHeight;	// IMP=0x0000000000033bbd
- (void)_setStackedButtonViewAsFooterView;	// IMP=0x0000000000033ab5
- (void)_setUpStackedButtonView;	// IMP=0x00000000000338cb
- (void)_adjustDisclaimerLabelConstraints;	// IMP=0x00000000000336db
- (void)_setUpDisclaimerLabel;	// IMP=0x0000000000033437
- (void)_setUpBottomResultViewConstraint;	// IMP=0x00000000000332c4
- (void)_setUpAllResultViewConstraints;	// IMP=0x0000000000032e62
- (void)_setUpAllResultViews;	// IMP=0x0000000000032b08
- (void)_setUpOnlyResultViewConstraints;	// IMP=0x00000000000329df
- (void)_setUpOnlyResultView;	// IMP=0x000000000003283d
- (id)_resultViewForSample:(id)arg1 activeAlgorithmVersion:(long long)arg2;	// IMP=0x0000000000032756
- (void)_setUpTitleConstraints;	// IMP=0x00000000000325fb
- (void)_setUpTitle;	// IMP=0x000000000003243b
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;	// IMP=0x00000000000323f4
- (void)linkTextView:(id)arg1 didTapOnLinkInRange:(struct _NSRange)arg2;	// IMP=0x00000000000322f8
- (void)_updateForCurrentSizeCategory;	// IMP=0x00000000000322ab
- (void)setUpConstraints;	// IMP=0x00000000000321cf
- (void)setUpUI;	// IMP=0x0000000000031fd8
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000031ede
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000031e9d
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000031e5c
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000031e1b
- (void)viewDidLoad;	// IMP=0x0000000000031dda
- (id)initWithSample:(id)arg1;	// IMP=0x0000000000031d7b
- (id)initForOnboarding:(_Bool)arg1 upgradingFromAlgorithmVersion:(long long)arg2;	// IMP=0x0000000000031d20

@end

