//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <EventKitUI/EKRecurrenceOrdinalPickerViewControllerDelegate-Protocol.h>

@class EKRecurrenceOrdinalPickerViewController, NSString, UITableViewCell;

@interface EKRecurrenceOrdinalChooserController <EKRecurrenceOrdinalPickerViewControllerDelegate>
{
    EKRecurrenceOrdinalPickerViewController *_pickerViewController;	// 8 = 0x8
    UITableViewCell *_cell;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000013b434
- (void)frequencyPickerUpdated:(id)arg1;	// IMP=0x000000000013b422
- (void)updateFromRecurrenceRule:(id)arg1;	// IMP=0x000000000013b405
- (void)updateRecurrenceRuleBuilder:(id)arg1;	// IMP=0x000000000013b3e8
- (id)cellForRow:(long long)arg1;	// IMP=0x000000000013afc1
- (double)heightForRow:(long long)arg1;	// IMP=0x000000000013af56
- (long long)numberOfRows;	// IMP=0x000000000013af4b
- (long long)frequency;	// IMP=0x000000000013af40
- (id)initWithDate:(id)arg1;	// IMP=0x000000000013aec9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

