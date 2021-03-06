//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSDateFormatter, UIDatePicker, WDManualDataEntryTableViewCell;

@interface _WDDateBasedAddDataManualEntryItem
{
    UIDatePicker *_datePicker;	// 40 = 0x28
    WDManualDataEntryTableViewCell *_tableViewCell;	// 48 = 0x30
    NSDate *_maximumDate;	// 56 = 0x38
    NSDate *_chosenDate;	// 64 = 0x40
    _Bool _highlightWhenEditing;	// 72 = 0x48
    NSDateFormatter *_dateFormatter;	// 80 = 0x50
    long long _datePickerMode;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000074fd
@property(nonatomic) long long datePickerMode; // @synthesize datePickerMode=_datePickerMode;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (void)setTitle:(id)arg1;	// IMP=0x0000000000007440
- (void)beginEditing;	// IMP=0x0000000000007423
- (void)setValue:(id)arg1;	// IMP=0x00000000000073ad
- (void)_generateValue:(CDUnknownBlockType)arg1;	// IMP=0x00000000000072dd
- (id)generateValue;	// IMP=0x00000000000072c8
- (void)_saveDisambiguatedDate:(id)arg1;	// IMP=0x00000000000071dc
- (void)_datePickerDidChange:(id)arg1;	// IMP=0x00000000000070a5
- (id)tableViewCells;	// IMP=0x0000000000006ec9
- (id)initWithMaximumDate:(id)arg1 highlightWhenEditing:(_Bool)arg2;	// IMP=0x0000000000006e49

@end

