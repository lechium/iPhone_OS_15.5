//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, UITableViewCell;

__attribute__((visibility("hidden")))
@interface EKEventAvailabilityDetailItem
{
    UITableViewCell *_cell;	// 40 = 0x28
    long long _availability;	// 48 = 0x30
    unsigned long long _supportedAvailabilities;	// 56 = 0x38
    NSArray *_choices;	// 64 = 0x40
    unsigned long long _availabilityIndexInChoices;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000d9274
- (_Bool)editItemViewControllerShouldShowDetachAlert;	// IMP=0x00000000000d921a
- (_Bool)editItemViewControllerSave:(id)arg1;	// IMP=0x00000000000d915f
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000d905f
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000d887c
- (_Bool)_canChangeAvailability;	// IMP=0x00000000000d8845
- (_Bool)configureWithCalendar:(id)arg1 preview:(_Bool)arg2;	// IMP=0x00000000000d8822
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2;	// IMP=0x00000000000d87f3
- (void)reset;	// IMP=0x00000000000d87d2
- (void)setEvent:(id)arg1 store:(id)arg2;	// IMP=0x00000000000d860c

@end
