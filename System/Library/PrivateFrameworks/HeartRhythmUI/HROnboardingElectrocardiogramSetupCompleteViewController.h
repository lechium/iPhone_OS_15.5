//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKOnboardingBaseViewController.h>

#import <HeartRhythmUI/HRStackedButtonViewDelegate-Protocol.h>

@class HKAnchoredObjectQuery, HKElectrocardiogram, HKElectrocardiogramCardView, HRStackedButtonView, NSLayoutConstraint, NSLayoutYAxisAnchor, UIActivityIndicatorView, UILabel, UITapGestureRecognizer;
@protocol HROnboardingElectrocardiogramSetupCompleteViewControllerDelegate;

@interface HROnboardingElectrocardiogramSetupCompleteViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate>
{
    _Bool _firstViewDidLayoutSubviews;	// 8 = 0x8
    _Bool _isSampleInteractive;	// 9 = 0x9
    long long _state;	// 16 = 0x10
    HKAnchoredObjectQuery *_electrocardiogramQuery;	// 24 = 0x18
    HKElectrocardiogram *_electrocardiogram;	// 32 = 0x20
    UITapGestureRecognizer *_electrocardiogramCardTapGestureRecognizer;	// 40 = 0x28
    id <HROnboardingElectrocardiogramSetupCompleteViewControllerDelegate> _electrocardiogramDelegate;	// 48 = 0x30
    UILabel *_titleLabel;	// 56 = 0x38
    UIActivityIndicatorView *_activityIndicatorView;	// 64 = 0x40
    UILabel *_classificationLabel;	// 72 = 0x48
    HKElectrocardiogramCardView *_electrocardiogramCardView;	// 80 = 0x50
    UILabel *_bodyLabel;	// 88 = 0x58
    HRStackedButtonView *_stackedButtonView;	// 96 = 0x60
    NSLayoutConstraint *_contentViewBottomConstraint;	// 104 = 0x68
    NSLayoutYAxisAnchor *_viewBottomAnchor;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000000018038
@property(readonly, nonatomic) _Bool isSampleInteractive; // @synthesize isSampleInteractive=_isSampleInteractive;
@property(nonatomic) _Bool firstViewDidLayoutSubviews; // @synthesize firstViewDidLayoutSubviews=_firstViewDidLayoutSubviews;
@property(retain, nonatomic) NSLayoutYAxisAnchor *viewBottomAnchor; // @synthesize viewBottomAnchor=_viewBottomAnchor;
@property(retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(retain, nonatomic) HRStackedButtonView *stackedButtonView; // @synthesize stackedButtonView=_stackedButtonView;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) HKElectrocardiogramCardView *electrocardiogramCardView; // @synthesize electrocardiogramCardView=_electrocardiogramCardView;
@property(retain, nonatomic) UILabel *classificationLabel; // @synthesize classificationLabel=_classificationLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <HROnboardingElectrocardiogramSetupCompleteViewControllerDelegate> electrocardiogramDelegate; // @synthesize electrocardiogramDelegate=_electrocardiogramDelegate;
@property(retain, nonatomic) UITapGestureRecognizer *electrocardiogramCardTapGestureRecognizer; // @synthesize electrocardiogramCardTapGestureRecognizer=_electrocardiogramCardTapGestureRecognizer;
@property(retain, nonatomic) HKElectrocardiogram *electrocardiogram; // @synthesize electrocardiogram=_electrocardiogram;
@property(retain, nonatomic) HKAnchoredObjectQuery *electrocardiogramQuery; // @synthesize electrocardiogramQuery=_electrocardiogramQuery;
@property(nonatomic) long long state; // @synthesize state=_state;
- (id)_subheadlineFont;	// IMP=0x0000000000017dff
- (id)_bodyFont;	// IMP=0x0000000000017d9c
- (id)_bodyFontTextStyle;	// IMP=0x0000000000017d88
- (double)_classificationTextDistance;	// IMP=0x0000000000017cfc
- (void)_stopElectrocardiogramQuery;	// IMP=0x0000000000017b7a
- (void)_setUpElectrocardiogramQuery;	// IMP=0x0000000000016ef0
- (void)_setupBodyLabelForSetupCompleteState:(long long)arg1;	// IMP=0x0000000000016c81
- (id)_classificationAttributedTextForElectrocardiogram:(id)arg1 activeAlgorithmVersion:(long long)arg2;	// IMP=0x0000000000016aa5
- (void)_recomputeState;	// IMP=0x00000000000168de
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;	// IMP=0x0000000000016887
- (void)_electrocardiogramCardViewTapped:(id)arg1;	// IMP=0x00000000000167bb
- (void)_updateUI;	// IMP=0x000000000001677e
- (void)_updateUIForElectrocardiogram:(id)arg1;	// IMP=0x00000000000165b2
- (void)_setUpConstraints;	// IMP=0x0000000000015375
- (void)_resetUI;	// IMP=0x00000000000151c6
- (void)_setUpUI;	// IMP=0x0000000000014888
- (void)viewDidLayoutSubviews;	// IMP=0x000000000001481c
- (void)viewDidLoad;	// IMP=0x0000000000014796
- (id)initForOnboarding:(_Bool)arg1 isSampleInteractive:(_Bool)arg2 electrocardiogramDelegate:(id)arg3;	// IMP=0x00000000000146c0

@end
