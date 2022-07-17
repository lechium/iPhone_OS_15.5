//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <FitnessUI/FUScrollWheelDataSource-Protocol.h>
#import <FitnessUI/FUScrollWheelDelegate-Protocol.h>

@class FUScrollWheel, NSArray, NSDate, NSDateFormatter, NSMutableArray, NSString, UIColor, UILabel;
@protocol FUDatePickerDelegate;

@interface FUDatePicker : UIView <FUScrollWheelDataSource, FUScrollWheelDelegate>
{
    unsigned long long _monthOffset;	// 8 = 0x8
    unsigned long long _dayOffset;	// 16 = 0x10
    long long _yearOrder;	// 24 = 0x18
    long long _monthOrder;	// 32 = 0x20
    long long _dayOrder;	// 40 = 0x28
    unsigned long long _numRowsMonth;	// 48 = 0x30
    unsigned long long _numRowsDate;	// 56 = 0x38
    unsigned long long _numRowsYear;	// 64 = 0x40
    NSArray *_monthNames;	// 72 = 0x48
    NSArray *_dayValues;	// 80 = 0x50
    NSMutableArray *_yearsWithNames;	// 88 = 0x58
    UILabel *_dayLabel;	// 96 = 0x60
    UILabel *_yearLabel;	// 104 = 0x68
    UILabel *_monthLabel;	// 112 = 0x70
    NSDateFormatter *_dateFormatter;	// 120 = 0x78
    _Bool _firstResponderShouldChange;	// 128 = 0x80
    _Bool _displayEra;	// 129 = 0x81
    UIColor *_tintColor;	// 136 = 0x88
    NSDate *_minimumDate;	// 144 = 0x90
    NSDate *_maximumDate;	// 152 = 0x98
    long long _initialWheelType;	// 160 = 0xa0
    id <FUDatePickerDelegate> _delegate;	// 168 = 0xa8
    NSDate *_date;	// 176 = 0xb0
    FUScrollWheel *_monthWheel;	// 184 = 0xb8
    FUScrollWheel *_dayWheel;	// 192 = 0xc0
    FUScrollWheel *_yearWheel;	// 200 = 0xc8
}

- (void).cxx_destruct;	// IMP=0x0000000000020ca2
@property(retain, nonatomic) FUScrollWheel *yearWheel; // @synthesize yearWheel=_yearWheel;
@property(retain, nonatomic) FUScrollWheel *dayWheel; // @synthesize dayWheel=_dayWheel;
@property(retain, nonatomic) FUScrollWheel *monthWheel; // @synthesize monthWheel=_monthWheel;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
@property(nonatomic) __weak id <FUDatePickerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)scrollWheelShouldBecomeFirstResponder:(id)arg1;	// IMP=0x0000000000020be5
- (void)scrollWheel:(id)arg1 didChangeCurrentIndexTo:(unsigned long long)arg2;	// IMP=0x0000000000020835
- (void)tappedScrollWheel:(id)arg1;	// IMP=0x0000000000020339
- (unsigned long long)numberOfRowsInScrollWheel:(id)arg1;	// IMP=0x00000000000202f9
- (id)scrollWheel:(id)arg1 titleForItemAtIndex:(unsigned long long)arg2;	// IMP=0x000000000002004f
- (void)_updateDayRangeReloadingWheel:(_Bool)arg1;	// IMP=0x000000000001ffab
- (void)_updateSpinnersAnimated:(_Bool)arg1;	// IMP=0x000000000001fdda
- (id)dateWheel;	// IMP=0x000000000001fdc5
- (void)setDate:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000001fd61
- (void)layoutSubviews;	// IMP=0x000000000001f5eb
- (id)_enumerateDayValues;	// IMP=0x000000000001f529
- (id)_enumerateDayValuesFromFormatter:(id)arg1;	// IMP=0x000000000001f2c6
- (id)_wheelOfType:(long long)arg1;	// IMP=0x000000000001f29b
- (id)initWithFrame:(struct CGRect)arg1 tintColor:(id)arg2 initialWheelType:(long long)arg3 shouldEnableCrown:(_Bool)arg4 minimumDate:(id)arg5 maximumDate:(id)arg6;	// IMP=0x000000000001e15a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001e0da

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
