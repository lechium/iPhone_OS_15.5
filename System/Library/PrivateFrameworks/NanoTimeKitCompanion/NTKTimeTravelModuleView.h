//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CALayer, NSCalendar, NSDate, NSDateComponentsFormatter, UILabel, UIView;
@protocol NTKTimeTravelModuleViewTapClient;

@interface NTKTimeTravelModuleView
{
    UIView *_backgroundView;	// 8 = 0x8
    UILabel *_timeScrubDifferenceLabel;	// 16 = 0x10
    UILabel *_timeScrubNowLabel;	// 24 = 0x18
    NSDate *_date;	// 32 = 0x20
    NSDateComponentsFormatter *_offsetDateFormatter;	// 40 = 0x28
    _Bool _is24HourMode;	// 48 = 0x30
    _Bool _shouldUseNowText;	// 49 = 0x31
    NSCalendar *_cal;	// 56 = 0x38
    CALayer *_borderLayer;	// 64 = 0x40
    double _nowLabelCenterY;	// 72 = 0x48
    id <NTKTimeTravelModuleViewTapClient> _tapDelegate;	// 80 = 0x50
}

+ (double)_defaultHeightForDevice:(id)arg1;	// IMP=0x00000000001abf06
+ (double)_actualCornerRadiusForDevice:(id)arg1;	// IMP=0x00000000001abe71
+ (double)cornerRadius;	// IMP=0x00000000001abe68
+ (id)timeTravelColor;	// IMP=0x00000000001abe2f
- (void).cxx_destruct;	// IMP=0x00000000001acb0a
@property(nonatomic) __weak id <NTKTimeTravelModuleViewTapClient> tapDelegate; // @synthesize tapDelegate=_tapDelegate;
- (id)_formatDateStringForIntervalBetweenReferenceDate:(id)arg1 andOverrideDate:(id)arg2;	// IMP=0x00000000001ac7a6
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x00000000001ac6bf
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000001ac540
- (void)scrubToDate:(id)arg1;	// IMP=0x00000000001ac3fa
- (void)_layoutContentView;	// IMP=0x00000000001ac171
- (void)layoutSubviews;	// IMP=0x00000000001ac07b
- (void)_setupBorder;	// IMP=0x00000000001abf2e
- (void)prepareToAppear;	// IMP=0x00000000001abddf
- (id)initWithMaximumWidth:(double)arg1;	// IMP=0x00000000001ab73d

@end
