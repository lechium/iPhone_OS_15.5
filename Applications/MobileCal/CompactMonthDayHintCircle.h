//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/EKUIBlurryView.h>

@class CAShapeLayer, EKCalendarDate, NSString, UILabel, UIView;

@interface CompactMonthDayHintCircle : EKUIBlurryView
{
    EKCalendarDate *_calendarDate;	// 8 = 0x8
    unsigned long long _day;	// 16 = 0x10
    NSString *_dayString;	// 24 = 0x18
    UILabel *_dayLabel;	// 32 = 0x20
    CAShapeLayer *_circleLayer;	// 40 = 0x28
    UIView *_circleColorBackgroundView;	// 48 = 0x30
    UIView *_snapshot;	// 56 = 0x38
    _Bool _monthViewWasCompressed;	// 64 = 0x40
    long long _colorStyle;	// 72 = 0x48
    struct CGPoint _point;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x002000000006e638
@property(readonly, nonatomic) _Bool monthViewWasCompressed; // @synthesize monthViewWasCompressed=_monthViewWasCompressed;
@property(readonly, nonatomic) struct CGPoint point; // @synthesize point=_point;
@property(nonatomic) long long colorStyle; // @synthesize colorStyle=_colorStyle;
- (void)animatePeekWithDuration:(double)arg1;	// IMP=0x000000000006e5bb
- (void)prepareForPeekAnimationFromPercentComplete:(double)arg1;	// IMP=0x001000000006e521
- (void)animateHintWithDuration:(double)arg1;	// IMP=0x001000000006e206
- (void)layoutInitializedPreanimationState;	// IMP=0x001000000006e18e
@property(nonatomic) double beginTime;
@property(nonatomic) double timeOffset;
@property(nonatomic) double speed;
- (void)_animatePathCenterPointFrom:(struct CGPoint)arg1 to:(struct CGPoint)arg2 withDuration:(double)arg3;	// IMP=0x001000000006da1c
- (void)_animateCircleMaskThroughRadii:(id)arg1 atKeyTimes:(id)arg2 withTotalDuration:(double)arg3;	// IMP=0x001000000006d6c4
- (void)setRadiusPercentOfFull:(double)arg1;	// IMP=0x001000000006d5b7
- (void)_applyLabelScaleTransformInitial:(_Bool)arg1;	// IMP=0x001000000006d440
- (void)_layoutDayNumberWithPercentComplete:(double)arg1;	// IMP=0x001000000006d388
- (void)_layoutCollapsedState;	// IMP=0x001000000006d345
- (struct CGRect)_collapsedStateLabelFrame;	// IMP=0x001000000006d1d7
- (void)layoutSubviews;	// IMP=0x001000000006d1c5
- (_Bool)_isSingleDigit;	// IMP=0x001000000006d1b0
- (double)_labelScaleFactorInitial:(_Bool)arg1;	// IMP=0x001000000006d0eb
- (double)_radiusInitial:(_Bool)arg1;	// IMP=0x001000000006d0d0
- (double)_circleDiameterInitial:(_Bool)arg1;	// IMP=0x001000000006d099
- (void)_updateTextColor;	// IMP=0x001000000006d022
- (void)dealloc;	// IMP=0x001000000006cf6e
- (id)initWithApplicationFrame:(struct CGRect)arg1 calendarDate:(id)arg2 fromPoint:(struct CGPoint)arg3 monthViewWasCompressed:(_Bool)arg4;	// IMP=0x001000000006cc15

@end

