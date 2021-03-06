//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSDateFormatter, UIDatePicker, WDManualDataEntryTableViewCell;

@interface _WDTwoPartDateTimeManualEntryItem
{
    UIDatePicker *_datePicker;	// 40 = 0x28
    UIDatePicker *_timePicker;	// 48 = 0x30
    WDManualDataEntryTableViewCell *_dateTableViewCell;	// 56 = 0x38
    WDManualDataEntryTableViewCell *_timeTableViewCell;	// 64 = 0x40
    NSDateFormatter *_dateFormatter;	// 72 = 0x48
    NSDateFormatter *_timeFormatter;	// 80 = 0x50
    NSDate *_maximumDate;	// 88 = 0x58
    NSDate *_chosenDate;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000000812d
- (void)beginEditing;	// IMP=0x0000000000008110
- (void)setValue:(id)arg1;	// IMP=0x0000000000008072
- (void)_generateValue:(CDUnknownBlockType)arg1;	// IMP=0x0000000000007e49
- (id)generateValue;	// IMP=0x0000000000007e34
- (void)_updateCellLabels;	// IMP=0x0000000000007d00
- (void)_timePickerDidChange:(id)arg1;	// IMP=0x0000000000007be9
- (void)_saveDisambiguatedDate:(id)arg1;	// IMP=0x0000000000007b34
- (void)_datePickerDidChange:(id)arg1;	// IMP=0x0000000000007a1d
- (void)_setupTableViewCells;	// IMP=0x0000000000007659
- (id)tableViewCells;	// IMP=0x00000000000075df
- (id)initWithMaximumDate:(id)arg1;	// IMP=0x0000000000007561

@end

