//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIDatePickerCompactDateLabelDelegate-Protocol.h>
#import <UIKitCore/_UIDatePickerCompactTimeLabelDelegate-Protocol.h>
#import <UIKitCore/_UIDatePickerOverlayPresentationDelegate-Protocol.h>
#import <UIKitCore/_UIDatePickerViewComponent-Protocol.h>

@class NSArray, NSDateFormatter, NSDictionary, NSString, UIColor, UIDatePicker, UILayoutGuide, UIPanGestureRecognizer, _UIDatePickerCompactDateLabel, _UIDatePickerCompactTimeLabel, _UIDatePickerDataModel, _UIDatePickerOverlayPresentation;

__attribute__((visibility("hidden")))
@interface _UIDatePickerIOSCompactView <_UIDatePickerCompactTimeLabelDelegate, _UIDatePickerCompactDateLabelDelegate, _UIDatePickerOverlayPresentationDelegate, _UIDatePickerViewComponent>
{
    struct {
        unsigned int isEnabled:1;
        unsigned int implementsCustomDidSelectComponent:1;
    } _flags;	// 120 = 0x78
    NSDateFormatter *_dateFormatterMedium;	// 128 = 0x80
    NSDateFormatter *_dateFormatterShort;	// 136 = 0x88
    UILayoutGuide *_timeViewLayoutGuide;	// 144 = 0x90
    UILayoutGuide *_contentLayoutGuide;	// 152 = 0x98
    NSDateFormatter *_layoutFormatter;	// 160 = 0xa0
    _Bool _dateOnLeadingSide;	// 168 = 0xa8
    NSArray *_dateTimeConstraints;	// 176 = 0xb0
    _UIDatePickerOverlayPresentation *_presentation;	// 184 = 0xb8
    long long _activeComponent;	// 192 = 0xc0
    UIPanGestureRecognizer *_panGestureRecognizer;	// 200 = 0xc8
    UIDatePicker *_datePicker;	// 208 = 0xd0
    _UIDatePickerDataModel *_data;	// 216 = 0xd8
    _UIDatePickerCompactDateLabel *_dateView;	// 224 = 0xe0
    _UIDatePickerCompactTimeLabel *_timeView;	// 232 = 0xe8
}

- (void).cxx_destruct;	// IMP=0x00000000010db16c
@property(readonly, nonatomic) _UIDatePickerCompactTimeLabel *timeView; // @synthesize timeView=_timeView;
@property(readonly, nonatomic) _UIDatePickerCompactDateLabel *dateView; // @synthesize dateView=_dateView;
@property(retain, nonatomic) _UIDatePickerDataModel *data; // @synthesize data=_data;
@property(nonatomic) __weak UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (struct UIEdgeInsets)_appliedInsetsToEdgeOfContent;	// IMP=0x00000000010db0f9
- (_Bool)hasDefaultSize;	// IMP=0x00000000010db0f1
- (struct CGSize)defaultSize;	// IMP=0x00000000010db0db
- (struct CGSize)_sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000010db0c5
- (void)_setEnabled:(_Bool)arg1;	// IMP=0x00000000010db0a1
- (_Bool)usesAutoLayout;	// IMP=0x00000000010db099
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;	// IMP=0x00000000010db091
- (void)_setHidesLabels:(_Bool)arg1;	// IMP=0x00000000010db08b
@property(readonly, nonatomic, getter=_isTimeIntervalMode) _Bool isTimeIntervalMode;
@property(nonatomic, getter=_allowsZeroTimeInterval, setter=_setAllowsZeroTimeInterval:) _Bool allowsZeroTimeInterval;
@property(nonatomic, getter=_allowsZeroCountDownDuration, setter=_setAllowsZeroCountDownDuration:) _Bool allowsZeroCountDownDuration;
- (void)didChangeToday;	// IMP=0x00000000010db055
- (void)didReset;	// IMP=0x00000000010db027
- (void)didChangeRoundsToMinuteInterval;	// IMP=0x00000000010daf69
- (void)didChangeMinuteInterval;	// IMP=0x00000000010daead
- (void)didChangeMaximumDate;	// IMP=0x00000000010dae2a
- (void)didChangeMinimumDate;	// IMP=0x00000000010dada7
- (void)displaySelectedDateAnimated:(_Bool)arg1;	// IMP=0x00000000010dad1f
- (void)didChangeDateFrom:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000010dac07
- (void)didChangeCalendar;	// IMP=0x00000000010dab6d
- (void)didChangeTimeZone;	// IMP=0x00000000010daad3
- (void)didChangeLocale;	// IMP=0x00000000010daa39
- (void)didChangeMode;	// IMP=0x00000000010da9f9
@property(readonly, nonatomic) long long datePickerStyle;
- (void)_reloadTimeViewTimeFormat;	// IMP=0x00000000010da7fe
- (void)updateTimeZoneDisplay;	// IMP=0x00000000010da7ec
@property(retain, nonatomic) NSDictionary *overrideAttributes;
- (void)_resignActiveComponentAnimated:(_Bool)arg1;	// IMP=0x00000000010da6fc
- (void)setActiveComponent:(long long)arg1;	// IMP=0x00000000010da69f
- (void)_datePickerPresentation:(id)arg1 didChangeActiveMode:(long long)arg2;	// IMP=0x00000000010da5d2
- (void)didChangeCompactStyleDelegate;	// IMP=0x00000000010da542
- (id)createDatePickerForCompactDateLabel:(id)arg1;	// IMP=0x00000000010da34e
- (id)createDatePickerForCompactTimeLabel:(id)arg1;	// IMP=0x00000000010da299
- (void)compactDateLabelDidEndEditing:(id)arg1;	// IMP=0x00000000010da265
- (void)compactDateLabelDidBeginEditing:(id)arg1;	// IMP=0x00000000010da231
- (_Bool)compactTimeLabel:(id)arg1 shouldDismissForInteractionAtLocation:(struct CGPoint)arg2;	// IMP=0x00000000010da191
- (void)compactTimeLabelWillBecomeFirstResponder:(id)arg1;	// IMP=0x00000000010da14a
- (void)compactTimeLabelDidEndEditing:(id)arg1;	// IMP=0x00000000010da0be
- (void)compactTimeLabelDidBeginEditing:(id)arg1;	// IMP=0x00000000010da08a
- (void)compactTimeLabel:(id)arg1 didSelectTime:(id)arg2;	// IMP=0x00000000010d9d77
- (void)_didReceivePanGestureRecognizer:(id)arg1;	// IMP=0x00000000010d9d60
- (void)updateConstraints;	// IMP=0x00000000010d82a0
- (void)tintColorDidChange;	// IMP=0x00000000010d81f8
@property(readonly, nonatomic) _Bool alignConstraintsToLayoutGuide;
- (void)_updateDateViewTextAlignment;	// IMP=0x00000000010d812e
- (void)_updateEnabledStyling;	// IMP=0x00000000010d8084
- (void)_updateUI;	// IMP=0x00000000010d7c4e
- (void)_updateDateBeforeTimeValue;	// IMP=0x00000000010d7887
- (void)willMoveToSuperview:(id)arg1;	// IMP=0x00000000010d7838
- (void)willMoveToWindow:(id)arg1;	// IMP=0x00000000010d77e9
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000010d7496
- (void)setContentHorizontalAlignment:(long long)arg1;	// IMP=0x00000000010d7428

// Remaining properties
@property(readonly, nonatomic) double contentWidth;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic, getter=_highlightColor, setter=_setHighlightColor:) UIColor *highlightColor;
@property(retain, nonatomic, getter=_magnifierLineColor, setter=_setMagnifierLineColor:) UIColor *magnifierLineColor;
@property(readonly) Class superclass;
@property(retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *textColor;
@property(retain, nonatomic, getter=_textShadowColor, setter=_setTextShadowColor:) UIColor *textShadowColor;
@property(nonatomic) double timeInterval;

@end

