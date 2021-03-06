//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HKSimpleDataEntryPlainTextCell, HKValueRange, NSDate, NSDateFormatter, NSString, UIDatePicker;

@interface HKSimpleDataEntryDateItem
{
    HKSimpleDataEntryPlainTextCell *_cell;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
    NSString *_registrantModelKey;	// 24 = 0x18
    NSDate *_date;	// 32 = 0x20
    NSDate *_defaultDate;	// 40 = 0x28
    HKValueRange *_dateRange;	// 48 = 0x30
    UIDatePicker *_datePicker;	// 56 = 0x38
    NSDateFormatter *_exportFormatter;	// 64 = 0x40
}

+ (id)gregorianGMTCalendar;	// IMP=0x000000000021ab19
+ (id)_dateFormatter;	// IMP=0x000000000021aa42
- (void).cxx_destruct;	// IMP=0x000000000021abee
- (void)datePickerValueChanged:(id)arg1;	// IMP=0x000000000021ab66
- (void)_setTextForInputTextField:(id)arg1;	// IMP=0x000000000021a8ba
- (void)localeDidChange:(id)arg1;	// IMP=0x000000000021a8a8
- (void)beginEditing;	// IMP=0x000000000021a7ec
- (void)updateCellDisplay;	// IMP=0x000000000021a761
- (id)cell;	// IMP=0x000000000021a37e
- (id)formattedKeyAndValue;	// IMP=0x000000000021a255
- (id)initWithTitle:(id)arg1 registrantModelKey:(id)arg2 date:(id)arg3 defaultDate:(id)arg4 dateRange:(id)arg5 exportFormatter:(id)arg6;	// IMP=0x000000000021a111

@end

