//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableSet;

@interface EKRecurrenceMonthChooserController
{
    NSMutableSet *_monthsOfTheYearSet;	// 8 = 0x8
    _Bool _prohibitsMultipleMonthsInYearlyRecurrence;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000072303
@property(nonatomic) _Bool prohibitsMultipleMonthsInYearlyRecurrence; // @synthesize prohibitsMultipleMonthsInYearlyRecurrence=_prohibitsMultipleMonthsInYearlyRecurrence;
- (void)selectCell:(id)arg1 atIndex:(long long)arg2;	// IMP=0x0000000000072029
- (void)refreshCells;	// IMP=0x0000000000071e23
- (void)prepareForDisplay;	// IMP=0x0000000000071d02
- (long long)gridViewType;	// IMP=0x0000000000071cfa
- (id)cellLabels;	// IMP=0x0000000000071c3c
- (id)tableViewCell;	// IMP=0x0000000000071be4
- (void)updateFromRecurrenceRule:(id)arg1;	// IMP=0x0000000000071b43
- (void)updateRecurrenceRuleBuilder:(id)arg1;	// IMP=0x0000000000071a8f
- (long long)frequency;	// IMP=0x0000000000071a84
@property(retain, nonatomic) NSArray *monthsOfTheYear;
- (id)initWithDate:(id)arg1;	// IMP=0x000000000007195d

@end

