//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKOnboardingBaseViewController.h>

#import <HeartRhythmUI/HRStackedButtonViewDelegate-Protocol.h>

@class HKHeartRhythmAvailability, HRStackedButtonView, UILabel, UIView;

@interface HROnboardingElectrocardiogramUpdateAvailabilityViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate>
{
    HKHeartRhythmAvailability *_availability;	// 8 = 0x8
    UIView *_heroView;	// 16 = 0x10
    UILabel *_titleLabel;	// 24 = 0x18
    UILabel *_bodyLabel;	// 32 = 0x20
    UILabel *_locationFooterLabel;	// 40 = 0x28
    HRStackedButtonView *_stackedButtonView;	// 48 = 0x30
}

+ (void)markElectrocardiogramUpdateAsViewed:(id)arg1;	// IMP=0x0000000000028572
- (void).cxx_destruct;	// IMP=0x0000000000029790
@property(retain, nonatomic) HRStackedButtonView *stackedButtonView; // @synthesize stackedButtonView=_stackedButtonView;
@property(retain, nonatomic) UILabel *locationFooterLabel; // @synthesize locationFooterLabel=_locationFooterLabel;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *heroView; // @synthesize heroView=_heroView;
@property(retain, nonatomic) HKHeartRhythmAvailability *availability; // @synthesize availability=_availability;
- (id)watchOSVersionTooLowBodyString;	// IMP=0x0000000000029667
- (id)deviceNotSupportedBodyString;	// IMP=0x000000000002960b
- (id)featureDisabledBodyString;	// IMP=0x00000000000295af
- (id)updateFeatureIneligiblePromptBodyString;	// IMP=0x000000000002959e
- (id)locationNotFoundPromptBodyString;	// IMP=0x0000000000029542
- (id)locationFeatureIneligiblePromptBodyString;	// IMP=0x00000000000294e6
- (id)buttonTitleString;	// IMP=0x000000000002948a
- (id)locationFooterString;	// IMP=0x0000000000029479
- (id)bodyString;	// IMP=0x0000000000029468
- (id)titleString;	// IMP=0x0000000000029457
- (double)_locationFooterLastBaselineToContinueButton;	// IMP=0x00000000000293ff
- (double)_bodyBottomToLocationTop;	// IMP=0x00000000000293a7
- (double)_titleBottomToBodyTop;	// IMP=0x000000000002934f
- (id)_footnoteFont;	// IMP=0x00000000000292ec
- (id)_footnoteTextStyle;	// IMP=0x00000000000292d8
- (id)_bodyFont;	// IMP=0x0000000000029275
- (id)_bodyFontTextStyle;	// IMP=0x0000000000029261
- (id)_titleFont;	// IMP=0x00000000000291f9
- (id)_titleFontTextStyle;	// IMP=0x00000000000291e5
- (void)continueAndCheckForUpdateAvailability:(id)arg1;	// IMP=0x0000000000028965
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;	// IMP=0x0000000000028834
- (void)setUpConstraints;	// IMP=0x0000000000027e7e
- (void)setUpUI;	// IMP=0x000000000002785b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000000277bd
- (id)initForOnboarding:(_Bool)arg1 upgradingFromAlgorithmVersion:(long long)arg2;	// IMP=0x000000000002775d

@end

