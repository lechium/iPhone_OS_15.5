//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKOnboardingBaseViewController.h>

#import <HeartRhythmUI/HKHeartRhythmAvailabilityObserver-Protocol.h>

@class HKAnchoredObjectQuery, HKElectrocardiogram, HKHeartRhythmAvailability, HRImageLabel, UILabel, UIView;

@interface HROnboardingElectrocardiogramTakeRecordingViewController : HKOnboardingBaseViewController <HKHeartRhythmAvailabilityObserver>
{
    _Bool _electrocardiogramFirstRecordingCompleted;	// 8 = 0x8
    _Bool _didStepForward;	// 9 = 0x9
    HKHeartRhythmAvailability *_availability;	// 16 = 0x10
    HKAnchoredObjectQuery *_electrocardiogramQuery;	// 24 = 0x18
    HKElectrocardiogram *_electrocardiogram;	// 32 = 0x20
    UIView *_assetView;	// 40 = 0x28
    UILabel *_titleLabel;	// 48 = 0x30
    UILabel *_bodyLabel;	// 56 = 0x38
    HRImageLabel *_recordingStep1ImageLabel;	// 64 = 0x40
    HRImageLabel *_recordingStep2ImageLabel;	// 72 = 0x48
    UILabel *_wristSettingsLabel;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000000450a3
@property(retain, nonatomic) UILabel *wristSettingsLabel; // @synthesize wristSettingsLabel=_wristSettingsLabel;
@property(retain, nonatomic) HRImageLabel *recordingStep2ImageLabel; // @synthesize recordingStep2ImageLabel=_recordingStep2ImageLabel;
@property(retain, nonatomic) HRImageLabel *recordingStep1ImageLabel; // @synthesize recordingStep1ImageLabel=_recordingStep1ImageLabel;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *assetView; // @synthesize assetView=_assetView;
@property(nonatomic) _Bool didStepForward; // @synthesize didStepForward=_didStepForward;
@property(nonatomic) _Bool electrocardiogramFirstRecordingCompleted; // @synthesize electrocardiogramFirstRecordingCompleted=_electrocardiogramFirstRecordingCompleted;
@property(retain, nonatomic) HKElectrocardiogram *electrocardiogram; // @synthesize electrocardiogram=_electrocardiogram;
@property(retain, nonatomic) HKAnchoredObjectQuery *electrocardiogramQuery; // @synthesize electrocardiogramQuery=_electrocardiogramQuery;
@property(retain, nonatomic) HKHeartRhythmAvailability *availability; // @synthesize availability=_availability;
- (id)_recordingStepFont;	// IMP=0x0000000000044eae
- (id)_bodyFont;	// IMP=0x0000000000044e4b
- (id)_bodyFontTextStyle;	// IMP=0x0000000000044e37
- (id)_titleFont;	// IMP=0x0000000000044dcf
- (id)_titleFontTextStyle;	// IMP=0x0000000000044dbb
- (void)_stopElectrocardiogramQuery;	// IMP=0x0000000000044c39
- (void)_setUpElectrocardiogramQuery;	// IMP=0x0000000000044130
- (void)_stepForwardWithElectrocardiogramRecorded:(_Bool)arg1;	// IMP=0x000000000004401f
- (struct CGSize)_takeRecordingImageDimension;	// IMP=0x000000000004400e
- (id)_titleForOnboarding:(_Bool)arg1;	// IMP=0x0000000000043fe0
- (void)heartRhythmAvailabilityDidUpdate;	// IMP=0x0000000000043dea
- (void)skipButtonTapped:(id)arg1;	// IMP=0x0000000000043c0e
- (void)setUpConstraints;	// IMP=0x0000000000043469
- (void)setUpUI;	// IMP=0x0000000000042972
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000428e0
- (void)viewDidLoad;	// IMP=0x00000000000427bd
- (id)initForOnboarding:(_Bool)arg1 upgradingFromAlgorithmVersion:(long long)arg2;	// IMP=0x0000000000042717

@end
