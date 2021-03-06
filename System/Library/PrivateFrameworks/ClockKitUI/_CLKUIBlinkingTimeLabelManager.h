//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <ClockKitUI/CLKTimeFormatterObserver-Protocol.h>
#import <ClockKitUI/_CLKUITimeLabelManager-Protocol.h>

@class CLKClockTimerToken, CLKTimeFormatter, NSString, UIColor, UILabel, _CLKUIBasicTimeLabelManager;

@interface _CLKUIBlinkingTimeLabelManager : UIView <_CLKUITimeLabelManager, CLKTimeFormatterObserver>
{
    CLKTimeFormatter *_timeFormatter;	// 8 = 0x8
    _CLKUIBasicTimeLabelManager *_numbersLabelManager;	// 16 = 0x10
    _CLKUIBasicTimeLabelManager *_blinkerLabelManager;	// 24 = 0x18
    CLKClockTimerToken *_blinkTimerToken;	// 32 = 0x20
    _Bool _usesIsolatedBlinkerLabel;	// 40 = 0x28
    UILabel *_minutesBlinkerLabel;	// 48 = 0x30
    UILabel *_secondsBlinkerLabel;	// 56 = 0x38
    _Bool _animationsPaused;	// 64 = 0x40
    _Bool _showSeconds;	// 65 = 0x41
}

- (void).cxx_destruct;	// IMP=0x0000000000010477
@property(nonatomic) _Bool showSeconds; // @synthesize showSeconds=_showSeconds;
@property(nonatomic) _Bool animationsPaused; // @synthesize animationsPaused=_animationsPaused;
- (void)_updateBlinkerAlphaForSecondFraction:(double)arg1;	// IMP=0x0000000000002b9a
- (void)_startOrStopBlinking;	// IMP=0x0000000000001984
- (void)_stopBlinking;	// IMP=0x00000000000019d8
- (void)_startBlinking;	// IMP=0x0000000000001b22
- (void)timeFormatterReportingLiveTimeDidChange:(id)arg1;	// IMP=0x0000000000001b10
- (void)layoutSubviews;	// IMP=0x000000000000291f
- (void)enumerateUnderlyingLabelsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000102c7
@property(retain, nonatomic) UIColor *textColor;
- (void)updateTimeText;	// IMP=0x0000000000001cd2
- (id)effectiveAttributedText;	// IMP=0x0000000000010168
- (id)effectiveFont;	// IMP=0x000000000001014b
- (id)viewForLastBaselineLayout;	// IMP=0x000000000001012e
- (double)_lastLineBaseline;	// IMP=0x0000000000010111
- (void)setShowsDesignator:(_Bool)arg1;	// IMP=0x0000000000010047
- (void)setStyle:(id)arg1;	// IMP=0x000000000000ffd9
- (void)setMaxWidth:(double)arg1;	// IMP=0x000000000000ff74
@property(readonly, nonatomic) struct UIEdgeInsets opticalInsets;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000000fec9
- (void)sizeViewToFit;	// IMP=0x0000000000002896
- (struct CGSize)sizeThatFits;	// IMP=0x00000000000026b7
@property(readonly, nonatomic) struct CGSize intrinsicSize;
@property(readonly, nonatomic) UIView *view;
- (void)dealloc;	// IMP=0x000000000000fe60
- (id)initWithForDevice:(id)arg1 timeFormatter:(id)arg2 options:(unsigned long long)arg3 labelFactory:(CDUnknownBlockType)arg4;	// IMP=0x000000000000fbb7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

