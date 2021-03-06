//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface SSCalendarResultBuilder
{
    _Bool _isAllDay;	// 8 = 0x8
    NSDate *_startDate;	// 16 = 0x10
    NSDate *_endDate;	// 24 = 0x18
    NSString *_calendarName;	// 32 = 0x20
    NSString *_delegateCalendarName;	// 40 = 0x28
    NSString *_eventIdentifier;	// 48 = 0x30
    NSString *_eventName;	// 56 = 0x38
    NSString *_location;	// 64 = 0x40
}

+ (id)stringWithStartDate:(id)arg1 endDate:(id)arg2 isAllDay:(_Bool)arg3;	// IMP=0x00000000000c1ab8
+ (_Bool)isCoreSpotlightResult;	// IMP=0x00000000000c1ab0
+ (id)bundleId;	// IMP=0x00000000000c1a9c
- (void).cxx_destruct;	// IMP=0x00000000000c26ad
@property(nonatomic) _Bool isAllDay; // @synthesize isAllDay=_isAllDay;
@property(retain, nonatomic) NSString *location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(retain, nonatomic) NSString *eventIdentifier; // @synthesize eventIdentifier=_eventIdentifier;
@property(retain, nonatomic) NSString *delegateCalendarName; // @synthesize delegateCalendarName=_delegateCalendarName;
@property(retain, nonatomic) NSString *calendarName; // @synthesize calendarName=_calendarName;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)buildThumbnail;	// IMP=0x00000000000c24f5
- (id)subclassBuildHorizontallyScrollingCardSection;	// IMP=0x00000000000c2274
- (id)buildCompactCardSection;	// IMP=0x00000000000c20df
- (id)buildInlineCardSection;	// IMP=0x00000000000c1e39
- (id)initWithResult:(id)arg1;	// IMP=0x00000000000c1b16

@end

