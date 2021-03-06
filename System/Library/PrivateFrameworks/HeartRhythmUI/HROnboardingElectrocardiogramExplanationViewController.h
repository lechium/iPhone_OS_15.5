//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthUI/HKOnboardingBaseViewController.h>

#import <HeartRhythmUI/HRStackedButtonViewDelegate-Protocol.h>

@class HRStackedButtonView, HRVideoPlayerView, NSLayoutConstraint, UILabel;

@interface HROnboardingElectrocardiogramExplanationViewController : HKOnboardingBaseViewController <HRStackedButtonViewDelegate>
{
    UILabel *_titleLabel;	// 8 = 0x8
    HRVideoPlayerView *_animatedWatchRhythmVideoView;	// 16 = 0x10
    UILabel *_bodyLabel;	// 24 = 0x18
    HRStackedButtonView *_stackedButtonView;	// 32 = 0x20
    NSLayoutConstraint *_contentViewBottomConstraint;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000007746
@property(retain, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property(retain, nonatomic) HRStackedButtonView *stackedButtonView; // @synthesize stackedButtonView=_stackedButtonView;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) HRVideoPlayerView *animatedWatchRhythmVideoView; // @synthesize animatedWatchRhythmVideoView=_animatedWatchRhythmVideoView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (double)_videoViewBottomToBodyFirstBaseline;	// IMP=0x0000000000007635
- (id)_bodyFont;	// IMP=0x00000000000075d2
- (id)_bodyFontTextStyle;	// IMP=0x00000000000075be
- (double)_titleBottomToVideoViewTop;	// IMP=0x0000000000007566
- (void)_adjustButtonFooterViewLocationForViewContentHeight;	// IMP=0x0000000000006fc5
- (void)_setUpButtonFooterView;	// IMP=0x0000000000006ee6
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;	// IMP=0x0000000000006e9f
- (void)setUpConstraints;	// IMP=0x00000000000069e3
- (void)setUpUI;	// IMP=0x0000000000006363
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000000062f9
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000006248
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000006207
- (void)viewDidLoad;	// IMP=0x00000000000061c6
- (id)initForOnboarding:(_Bool)arg1 upgradingFromAlgorithmVersion:(long long)arg2;	// IMP=0x000000000000616b

@end

