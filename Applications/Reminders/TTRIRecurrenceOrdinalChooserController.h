//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TTRIRecurrenceOrdinalPickerViewController, UITableViewCell;

@interface TTRIRecurrenceOrdinalChooserController
{
    TTRIRecurrenceOrdinalPickerViewController *_pickerViewController;	// 8 = 0x8
    UITableViewCell *_cell;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000008398
- (void)frequencyPickerUpdated:(id)arg1;	// IMP=0x0010000000008386
- (void)updateFromRecurrenceRule:(id)arg1;	// IMP=0x0010000000008369
- (void)updateRecurrenceRuleBuilder:(id)arg1;	// IMP=0x001000000000834c
- (id)cellForRow:(long long)arg1;	// IMP=0x0010000000008045
- (double)heightForRow:(long long)arg1;	// IMP=0x0010000000007fda
- (long long)numberOfRows;	// IMP=0x0010000000007fcf
- (long long)frequency;	// IMP=0x0010000000007fc4
- (id)initWithDate:(id)arg1;	// IMP=0x0010000000007f4d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

