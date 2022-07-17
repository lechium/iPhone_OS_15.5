//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

@interface EKRecurrenceMonthDayChooserController
{
    NSMutableSet *_daysOfTheMonthSet;	// 8 = 0x8
    _Bool _prohibitsMultipleDaysInMonthlyRecurrence;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004dbcb
@property(nonatomic) _Bool prohibitsMultipleDaysInMonthlyRecurrence; // @synthesize prohibitsMultipleDaysInMonthlyRecurrence=_prohibitsMultipleDaysInMonthlyRecurrence;
- (void)selectCell:(id)arg1 atIndex:(long long)arg2;	// IMP=0x000000000004d8f1
- (void)refreshCells;	// IMP=0x000000000004d7cc
- (void)prepareForDisplay;	// IMP=0x000000000004d6c4
- (long long)gridViewType;	// IMP=0x000000000004d6b9
- (id)cellLabels;	// IMP=0x000000000004d606
- (void)updateFromRecurrenceRule:(id)arg1;	// IMP=0x000000000004d565
- (void)updateRecurrenceRuleBuilder:(id)arg1;	// IMP=0x000000000004d4f3
- (void)setDaysOfTheMonth:(id)arg1;	// IMP=0x000000000004d48b
- (id)daysOfTheMonth;	// IMP=0x000000000004d429
- (long long)frequency;	// IMP=0x000000000004d41e
- (id)initWithDate:(id)arg1;	// IMP=0x000000000004d3c1

@end
