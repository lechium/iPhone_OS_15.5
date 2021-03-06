//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICSColor, ICSDuration, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface ICSCalendar
{
    NSMutableSet *_keys;	// 8 = 0x8
    NSMutableDictionary *_masters;	// 16 = 0x10
    NSMutableDictionary *_occurrences;	// 24 = 0x18
    NSMutableDictionary *_timezones;	// 32 = 0x20
    NSMutableArray *_parsingErrors;	// 40 = 0x28
}

+ (long long)compareCalendarServerAccess:(int)arg1 withAccess:(int)arg2;	// IMP=0x000000000000b164
+ (id)ICSStringFromCalendarServerAccess:(int)arg1;	// IMP=0x000000000000b113
+ (int)calendarServerAccessFromICSString:(id)arg1;	// IMP=0x000000000000b074
+ (id)ICSStringFromMethod:(int)arg1;	// IMP=0x000000000000aff5
+ (int)methodFromICSString:(id)arg1;	// IMP=0x000000000000aed9
+ (id)defaultProdid;	// IMP=0x000000000000ae93
+ (void)setDefaultProdid:(id)arg1;	// IMP=0x000000000000ae19
+ (id)name;	// IMP=0x000000000000ae0c
+ (id)calendarWithKnownTimeZones;	// IMP=0x000000000000ab68
- (void).cxx_destruct;	// IMP=0x000000000000d7c5
- (id)propertiesToIncludeForChecksumVersion:(int)arg1;	// IMP=0x000000000000d7a5
- (id)parsingErrors;	// IMP=0x000000000000d780
- (void)addParsingError:(id)arg1;	// IMP=0x000000000000d763
- (id)timeZoneForKey:(id)arg1;	// IMP=0x000000000000d746
- (void)addComponent:(id)arg1;	// IMP=0x000000000000d6d8
- (void)setComponents:(id)arg1;	// IMP=0x000000000000d6c4
- (void)setComponents:(id)arg1 options:(int)arg2;	// IMP=0x000000000000d45f
- (void)setComponents:(id)arg1 timeZones:(_Bool)arg2;	// IMP=0x000000000000d44b
- (id)componentOccurrencesForKey:(id)arg1;	// IMP=0x000000000000d42e
- (id)componentForKey:(id)arg1;	// IMP=0x000000000000d411
- (id)componentKeys;	// IMP=0x000000000000d3f4
- (void)_addComponent:(id)arg1;	// IMP=0x000000000000d0a6
- (id)_timeZonesForComponents:(id)arg1 options:(int)arg2;	// IMP=0x000000000000ca9a
- (void)_addTimeZonesInComponent:(id)arg1 toDictionary:(id)arg2;	// IMP=0x000000000000c58d
- (void)_addTimeZonesInComponent:(id)arg1 toSet:(id)arg2;	// IMP=0x000000000000c115
- (id)systemDateForDate:(id)arg1 options:(int)arg2;	// IMP=0x000000000000bf01
- (id)systemCalendarForDate:(id)arg1 options:(int)arg2;	// IMP=0x000000000000be12
- (id)systemTimeZoneForDate:(id)arg1;	// IMP=0x000000000000bc5a
@property(retain, nonatomic) NSString *x_wr_timezone;
@property(retain, nonatomic) NSString *x_wr_relcalid;
@property(retain, nonatomic) NSString *x_wr_calname;
@property(retain, nonatomic) NSString *x_wr_caldesc;
@property(retain, nonatomic) ICSColor *x_apple_calendar_color;
@property(retain, nonatomic) ICSDuration *x_apple_auto_refresh;
@property(retain, nonatomic) NSString *version;
@property(retain, nonatomic) NSString *prodid;
@property(nonatomic) int method;
@property(retain, nonatomic) NSString *calscale;
- (id)_initWithVersionAndProdID:(_Bool)arg1;	// IMP=0x000000000000b194
- (id)init;	// IMP=0x000000000000b17d
- (id)_init;	// IMP=0x000000000000d829
- (void)fixEntities;	// IMP=0x000000000000ede1
- (void)fixComponent;	// IMP=0x000000000000ecd5
- (void)fixPropertiesInheritance;	// IMP=0x000000000000ea3f

// Remaining properties
@property _Bool x_apple_ignore_on_restore; // @dynamic x_apple_ignore_on_restore;
@property int x_calendarserver_access; // @dynamic x_calendarserver_access;

@end

