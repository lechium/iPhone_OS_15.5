//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSDateFormatter, NSString;

@interface DateProvider
{
    NSArray *_templateSeries;	// 8 = 0x8
    _Bool _uppercase;	// 16 = 0x10
    NSDate *_date;	// 24 = 0x18
    unsigned long long _calendarUnits;	// 32 = 0x20
    NSString *_dateFormat;	// 40 = 0x28
    NSDateFormatter *_dateFormatter;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0000000000004c08
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(copy, nonatomic) NSString *dateFormat; // @synthesize dateFormat=_dateFormat;
@property(nonatomic) _Bool uppercase; // @synthesize uppercase=_uppercase;
@property(nonatomic) unsigned long long calendarUnits; // @synthesize calendarUnits=_calendarUnits;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)updateInterval;	// IMP=0x0000000000004a48
- (id)_partialDateTemplateSeriesForUnits:(unsigned long long)arg1;	// IMP=0x00000000000046c7
- (id)_completeDateTemplateSeries;	// IMP=0x00000000000045fc
- (id)_sessionTextForIndex:(long long)arg1;	// IMP=0x00000000000040af
- (id)initWithDateFormat:(id)arg1 calendar:(id)arg2 locale:(id)arg3 timeZone:(id)arg4;	// IMP=0x0000000000003eca
- (id)initWithDate:(id)arg1 units:(unsigned long long)arg2 calendar:(id)arg3 locale:(id)arg4 timeZone:(id)arg5;	// IMP=0x0000000000003e31
- (id)initWithDate:(id)arg1 units:(unsigned long long)arg2;	// IMP=0x0000000000003d78

@end
