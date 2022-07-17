//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIDatePicker, UILabel;
@protocol HKOnboardingCompactDatePickerViewDelegate;

@interface HKOnboardingCompactDatePickerView : UIView
{
    id <HKOnboardingCompactDatePickerViewDelegate> _delegate;	// 8 = 0x8
    UILabel *_initialTextLabel;	// 16 = 0x10
    UIDatePicker *_datePicker;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000054411
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) UILabel *initialTextLabel; // @synthesize initialTextLabel=_initialTextLabel;
@property(nonatomic) __weak id <HKOnboardingCompactDatePickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_datePickerValueChanged:(id)arg1;	// IMP=0x00000000000542c2
- (void)_setUpDatePicker:(id)arg1 maxYears:(long long)arg2;	// IMP=0x0000000000053d93
- (void)_setUpInitialLabel:(id)arg1;	// IMP=0x00000000000539d9
- (void)setBackgroundColor:(id)arg1;	// IMP=0x0000000000053998
- (void)_setInitialLabelBGColor;	// IMP=0x00000000000538b4
- (void)_showDatePicker;	// IMP=0x0000000000053673
- (void)setCurrentDate:(id)arg1;	// IMP=0x0000000000053656
- (void)setInitialText:(id)arg1 alignment:(long long)arg2;	// IMP=0x00000000000535c0
- (id)initWithFrame:(struct CGRect)arg1 initialText:(id)arg2 defaultDate:(id)arg3 maxYears:(long long)arg4;	// IMP=0x00000000000534e5

@end
