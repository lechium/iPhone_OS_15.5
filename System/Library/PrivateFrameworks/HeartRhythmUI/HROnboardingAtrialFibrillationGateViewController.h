//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKOnboardingBaseViewController.h>

#import <HeartRhythmUI/HKOnboardingCompactDatePickerViewDelegate-Protocol.h>
#import <HeartRhythmUI/HRStackedButtonViewDelegate-Protocol.h>

@class HKSeparatorLineView, HRStackedButtonView, NSDate, NSLayoutConstraint, NSNumber, NSString, UIImageView, UILabel, UIStackView, UIView;

@interface HROnboardingAtrialFibrillationGateViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate, HKOnboardingCompactDatePickerViewDelegate>
{
    _Bool _didLayoutSubviewsOnce;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UILabel *_bodyLabel;	// 24 = 0x18
    HKSeparatorLineView *_birthdayTopSeparator;	// 32 = 0x20
    UIStackView *_birthdayEntryView;	// 40 = 0x28
    UILabel *_birthdayFooterLabel;	// 48 = 0x30
    NSDate *_dateOfBirth;	// 56 = 0x38
    HKSeparatorLineView *_birthdayBottomSeparator;	// 64 = 0x40
    UILabel *_diagnosisPromptLabel;	// 72 = 0x48
    NSNumber *_diagnosis;	// 80 = 0x50
    HKSeparatorLineView *_diagnosisTopSeparator;	// 88 = 0x58
    UIView *_diagnosisYesBackground;	// 96 = 0x60
    UIStackView *_diagnosisYesRow;	// 104 = 0x68
    UIImageView *_diagnosisYesCheckmark;	// 112 = 0x70
    UILabel *_diagnosisYesLabel;	// 120 = 0x78
    HKSeparatorLineView *_diagnosisMiddleSeparator;	// 128 = 0x80
    UIView *_diagnosisNoBackground;	// 136 = 0x88
    UIStackView *_diagnosisNoRow;	// 144 = 0x90
    UIImageView *_diagnosisNoCheckmark;	// 152 = 0x98
    UILabel *_diagnosisNoLabel;	// 160 = 0xa0
    HKSeparatorLineView *_diagnosisBottomSeparator;	// 168 = 0xa8
    UILabel *_diagnosisFooterLabel;	// 176 = 0xb0
    HRStackedButtonView *_stackedButtonView;	// 184 = 0xb8
    NSLayoutConstraint *_contentViewBottomConstraint;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x000000000001452a
@property(nonatomic) _Bool didLayoutSubviewsOnce; // @synthesize didLayoutSubviewsOnce=_didLayoutSubviewsOnce;
@property(retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(retain, nonatomic) HRStackedButtonView *stackedButtonView; // @synthesize stackedButtonView=_stackedButtonView;
@property(retain, nonatomic) UILabel *diagnosisFooterLabel; // @synthesize diagnosisFooterLabel=_diagnosisFooterLabel;
@property(retain, nonatomic) HKSeparatorLineView *diagnosisBottomSeparator; // @synthesize diagnosisBottomSeparator=_diagnosisBottomSeparator;
@property(retain, nonatomic) UILabel *diagnosisNoLabel; // @synthesize diagnosisNoLabel=_diagnosisNoLabel;
@property(retain, nonatomic) UIImageView *diagnosisNoCheckmark; // @synthesize diagnosisNoCheckmark=_diagnosisNoCheckmark;
@property(retain, nonatomic) UIStackView *diagnosisNoRow; // @synthesize diagnosisNoRow=_diagnosisNoRow;
@property(retain, nonatomic) UIView *diagnosisNoBackground; // @synthesize diagnosisNoBackground=_diagnosisNoBackground;
@property(retain, nonatomic) HKSeparatorLineView *diagnosisMiddleSeparator; // @synthesize diagnosisMiddleSeparator=_diagnosisMiddleSeparator;
@property(retain, nonatomic) UILabel *diagnosisYesLabel; // @synthesize diagnosisYesLabel=_diagnosisYesLabel;
@property(retain, nonatomic) UIImageView *diagnosisYesCheckmark; // @synthesize diagnosisYesCheckmark=_diagnosisYesCheckmark;
@property(retain, nonatomic) UIStackView *diagnosisYesRow; // @synthesize diagnosisYesRow=_diagnosisYesRow;
@property(retain, nonatomic) UIView *diagnosisYesBackground; // @synthesize diagnosisYesBackground=_diagnosisYesBackground;
@property(retain, nonatomic) HKSeparatorLineView *diagnosisTopSeparator; // @synthesize diagnosisTopSeparator=_diagnosisTopSeparator;
@property(retain, nonatomic) NSNumber *diagnosis; // @synthesize diagnosis=_diagnosis;
@property(retain, nonatomic) UILabel *diagnosisPromptLabel; // @synthesize diagnosisPromptLabel=_diagnosisPromptLabel;
@property(retain, nonatomic) HKSeparatorLineView *birthdayBottomSeparator; // @synthesize birthdayBottomSeparator=_birthdayBottomSeparator;
@property(retain, nonatomic) NSDate *dateOfBirth; // @synthesize dateOfBirth=_dateOfBirth;
@property(retain, nonatomic) UILabel *birthdayFooterLabel; // @synthesize birthdayFooterLabel=_birthdayFooterLabel;
@property(retain, nonatomic) UIStackView *birthdayEntryView; // @synthesize birthdayEntryView=_birthdayEntryView;
@property(retain, nonatomic) HKSeparatorLineView *birthdayTopSeparator; // @synthesize birthdayTopSeparator=_birthdayTopSeparator;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)_footnoteFont;	// IMP=0x00000000000141bc
- (id)_diagnosisPromptFont;	// IMP=0x0000000000014194
- (id)_ageEntryTitleFont;	// IMP=0x000000000001416c
- (id)_bodyFont;	// IMP=0x0000000000014149
- (double)_diagnosisFooterLabelToContinueButton;	// IMP=0x00000000000140f1
- (double)_separatorToFooterFirstBaseline;	// IMP=0x0000000000014099
- (double)_diagnosisLastBaselineToBottomSeparator;	// IMP=0x0000000000014041
- (double)_diagnosisTopSeparatorToFirstBaseline;	// IMP=0x0000000000013fe9
- (double)_diagnosisPromptLastBaselineToDiagnosisTop;	// IMP=0x0000000000013f91
- (double)_ageEntryFooterToDiagnosisPromptFirstBaseline;	// IMP=0x0000000000013f39
- (double)_ageEntryLastBaselineToBottomSeparator;	// IMP=0x0000000000013ee1
- (double)_ageEntryTopSeparatorToFirstBaseline;	// IMP=0x0000000000013e89
- (id)diagnosisIneligiblePromptAckButtonString;	// IMP=0x0000000000013e2d
- (id)diagnosisIneligiblePromptBodyString;	// IMP=0x0000000000013dd1
- (id)diagnosisIneligiblePromptTitleString;	// IMP=0x0000000000013d75
- (id)ageIneligiblePromptAckButtonString;	// IMP=0x0000000000013d19
- (id)ageIneligiblePromptBodyString;	// IMP=0x0000000000013cbd
- (id)ageIneligiblePromptTitleString;	// IMP=0x0000000000013c61
- (id)ageLimit;	// IMP=0x0000000000013c54
- (id)ageWithDate:(id)arg1;	// IMP=0x0000000000013adf
- (_Bool)_meetsDiagnosisRequirement;	// IMP=0x0000000000013a63
- (_Bool)_meetsAgeRequirement;	// IMP=0x00000000000139bd
- (void)_adjustButtonFooterViewLocationForViewContentHeight;	// IMP=0x0000000000013462
- (void)_setUpButtonFooterView;	// IMP=0x000000000001336e
- (void)_updateButtonState;	// IMP=0x0000000000012fce
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;	// IMP=0x0000000000012df9
- (void)_diagnosisRowTapped:(id)arg1;	// IMP=0x00000000000129f3
- (void)_setUpDiagnosisRowWithTitle:(id)arg1 value:(_Bool)arg2;	// IMP=0x00000000000125bf
- (void)compactDatePickerView:(id)arg1 didChangeValue:(id)arg2;	// IMP=0x00000000000125aa
- (void)_setUpBirthdayEntryView;	// IMP=0x00000000000121bd
- (id)_defaultDOB;	// IMP=0x00000000000120b4
- (void)setUpConstraints;	// IMP=0x0000000000010ca2
- (void)setUpUI;	// IMP=0x000000000000fda0
- (void)viewDidLayoutSubviews;	// IMP=0x000000000000fd4e
- (void)viewDidLoad;	// IMP=0x000000000000fd0d
- (id)initForOnboarding:(_Bool)arg1 upgradingFromAlgorithmVersion:(long long)arg2;	// IMP=0x000000000000fca7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

