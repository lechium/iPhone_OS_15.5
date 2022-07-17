//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSCalendar, NSDate, NSDateFormatter, NSDateInterval, NSDateIntervalFormatter, UIDatePicker;
@protocol SCLTimePickerTableViewCellDelegate;

@interface SCLTimePickerTableViewCell : UITableViewCell
{
    unsigned long long _constraintMode;	// 8 = 0x8
    NSDateFormatter *_dateFormatter;	// 16 = 0x10
    NSDateIntervalFormatter *_intervalFormatter;	// 24 = 0x18
    UIDatePicker *_datePicker;	// 32 = 0x20
    NSDateInterval *_constraintInterval;	// 40 = 0x28
    id <SCLTimePickerTableViewCellDelegate> _delegate;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000010c79
@property(nonatomic) __weak id <SCLTimePickerTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDateInterval *constraintInterval; // @synthesize constraintInterval=_constraintInterval;
@property(readonly) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
- (void)_updateConstraintModeWithInterval:(id)arg1 selectedDate:(id)arg2;	// IMP=0x00000000000107f1
- (void)datePickerDidChangeDate:(id)arg1;	// IMP=0x0000000000010156
@property(copy, nonatomic) NSDate *selectedDate;
@property(copy, nonatomic) NSCalendar *calendar; // @dynamic calendar;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000000f9e4

@end
