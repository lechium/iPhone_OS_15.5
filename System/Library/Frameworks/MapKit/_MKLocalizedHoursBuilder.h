//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOBusinessHours, NSArray, NSDate, NSString, NSTimeZone, UIColor;

@interface _MKLocalizedHoursBuilder : NSObject
{
    _Bool _isClosedTodayAllDay;	// 8 = 0x8
    _Bool _isCurrentlyClosed;	// 9 = 0x9
    _Bool _isClosingSoon;	// 10 = 0xa
    _Bool _isOpeningSoon;	// 11 = 0xb
    _Bool _isPermanentlyClosed;	// 12 = 0xc
    _Bool _isTemporarilyClosed;	// 13 = 0xd
    _Bool _isOpenTodayAllDay;	// 14 = 0xe
    _Bool _isCurrentlyOpen;	// 15 = 0xf
    NSString *_localizedOperatingHours;	// 16 = 0x10
    NSString *_localizedOpenState;	// 24 = 0x18
    UIColor *_hoursStateLabelColor;	// 32 = 0x20
    NSDate *_compareDate;	// 40 = 0x28
    long long _state;	// 48 = 0x30
    unsigned long long _geoMapItemOpeningHourOptions;	// 56 = 0x38
    unsigned long long _localizedHoursStringOptions;	// 64 = 0x40
    NSTimeZone *_timeZone;	// 72 = 0x48
    GEOBusinessHours *_operatingHours;	// 80 = 0x50
}

+ (id)localizedHoursDayRangeString:(id)arg1;	// IMP=0x00000000001cfe10
+ (id)hoursDelimeter;	// IMP=0x00000000001cfdff
+ (id)localizedHoursStringSpecialHours;	// IMP=0x00000000001cfdee
+ (id)localizedHoursStringNormalHours;	// IMP=0x00000000001cfddd
+ (id)testGetHoursFormatter;	// IMP=0x00000000001cfdcc
+ (id)testGetDayOfWeekFormatterShort;	// IMP=0x00000000001cfdbb
+ (id)testGetDayOfWeekFormatterFull;	// IMP=0x00000000001cfdaa
+ (id)testGetMonthAndDayFormatter;	// IMP=0x00000000001cfd99
- (void).cxx_destruct;	// IMP=0x00000000001d31d4
@property(retain, nonatomic) GEOBusinessHours *operatingHours; // @synthesize operatingHours=_operatingHours;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) unsigned long long localizedHoursStringOptions; // @synthesize localizedHoursStringOptions=_localizedHoursStringOptions;
@property(nonatomic) unsigned long long geoMapItemOpeningHourOptions; // @synthesize geoMapItemOpeningHourOptions=_geoMapItemOpeningHourOptions;
@property(retain, nonatomic) NSDate *compareDate; // @synthesize compareDate=_compareDate;
@property(readonly, nonatomic) NSArray *AMPMSymbols;
- (id)concatenateStrings:(id)arg1 joinedByString:(id)arg2;	// IMP=0x00000000001d2eab
- (void)calculateWidthsForData:(id)arg1;	// IMP=0x00000000001d2572
- (id)formatData:(id)arg1;	// IMP=0x00000000001d14e4
- (void)updateHoursLabelColorWithDefaultLabelColor:(id)arg1;	// IMP=0x00000000001d13b9
- (void)updateHoursLabelColor;	// IMP=0x00000000001d13a5
- (id)_formattedStringForHourRangesWithStartAndEndDates:(id)arg1 timeZone:(id)arg2;	// IMP=0x00000000001d1358
- (id)_updateLocalizedOperatingHoursString:(unsigned long long)arg1;	// IMP=0x00000000001d0a16
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void)_updateLocalizedString;	// IMP=0x00000000001d090f
@property(readonly, nonatomic) UIColor *hoursStateLabelColor; // @synthesize hoursStateLabelColor=_hoursStateLabelColor;
@property(readonly, nonatomic) NSString *localizedOpenState; // @synthesize localizedOpenState=_localizedOpenState;
@property(readonly, nonatomic) NSString *localizedOperatingHours; // @synthesize localizedOperatingHours=_localizedOperatingHours;
- (void)_resetLocalizedStrings:(_Bool)arg1;	// IMP=0x00000000001d067e
- (void)_resetLocalizedBuilder:(_Bool)arg1;	// IMP=0x00000000001d05f0
- (void)_commonInit;	// IMP=0x00000000001d035e
- (id)initWithMapItemForMessageForBusiness:(id)arg1 localizedHoursStringOptions:(unsigned long long)arg2;	// IMP=0x00000000001d023c
- (id)initWithMapItem:(id)arg1 localizedHoursStringOptions:(unsigned long long)arg2;	// IMP=0x00000000001d0174
- (id)initWithBusinessHours:(id)arg1 timeZone:(id)arg2 localizedHoursStringOptions:(unsigned long long)arg3;	// IMP=0x00000000001d0023

@end

