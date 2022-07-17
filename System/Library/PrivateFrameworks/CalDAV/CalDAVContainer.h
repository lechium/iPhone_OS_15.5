//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVContainer.h>

@class ICSDuration, NSSet, NSString, NSTimeZone, NSURL;

@interface CalDAVContainer : CoreDAVContainer
{
    _Bool _subscribedStripAlarms;	// 128 = 0x80
    _Bool _subscribedStripTodos;	// 129 = 0x81
    _Bool _subscribedStripAttachments;	// 130 = 0x82
    _Bool _isScheduleTransparent;	// 131 = 0x83
    _Bool _canBePublished;	// 132 = 0x84
    _Bool _canBeShared;	// 133 = 0x85
    _Bool _isMarkedUndeletable;	// 134 = 0x86
    _Bool _isMarkedImmutableSharees;	// 135 = 0x87
    _Bool _autoprovisioned;	// 136 = 0x88
    _Bool _overrideSupportsFreebusy;	// 137 = 0x89
    NSString *_calendarDescription;	// 144 = 0x90
    NSString *_ctag;	// 152 = 0x98
    NSString *_calendarColor;	// 160 = 0xa0
    NSString *_symbolicColorName;	// 168 = 0xa8
    NSString *_calendarOrder;	// 176 = 0xb0
    NSString *_defaultTimedAlarms;	// 184 = 0xb8
    NSString *_defaultAllDayAlarms;	// 192 = 0xc0
    NSSet *_supportedCalendarComponentSet;	// 200 = 0xc8
    ICSDuration *_subscribedRefreshRate;	// 208 = 0xd0
    NSURL *_publishURL;	// 216 = 0xd8
    NSURL *_prePublishURL;	// 224 = 0xe0
    NSTimeZone *_timeZone;	// 232 = 0xe8
    NSURL *_source;	// 240 = 0xf0
    NSSet *_freeBusySet;	// 248 = 0xf8
    NSURL *_scheduleDefaultCalendarURL;	// 256 = 0x100
    NSSet *_sharees;	// 264 = 0x108
    NSString *_supportedCalendarComponentSets;	// 272 = 0x110
    NSString *_locationCode;	// 280 = 0x118
    NSString *_languageCode;	// 288 = 0x120
    NSString *_alarms;	// 296 = 0x128
    long long _maxAttendees;	// 304 = 0x130
}

+ (id)copyPropertyMappingsForParser;	// IMP=0x00000000000042a0
- (void).cxx_destruct;	// IMP=0x0000000000006261
@property(nonatomic) _Bool overrideSupportsFreebusy; // @synthesize overrideSupportsFreebusy=_overrideSupportsFreebusy;
@property(nonatomic) long long maxAttendees; // @synthesize maxAttendees=_maxAttendees;
@property(retain, nonatomic) NSString *alarms; // @synthesize alarms=_alarms;
@property(nonatomic) _Bool autoprovisioned; // @synthesize autoprovisioned=_autoprovisioned;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) NSString *locationCode; // @synthesize locationCode=_locationCode;
@property(retain, nonatomic) NSString *supportedCalendarComponentSets; // @synthesize supportedCalendarComponentSets=_supportedCalendarComponentSets;
@property(retain, nonatomic) NSSet *sharees; // @synthesize sharees=_sharees;
@property(retain, nonatomic) NSURL *scheduleDefaultCalendarURL; // @synthesize scheduleDefaultCalendarURL=_scheduleDefaultCalendarURL;
@property(retain, nonatomic) NSSet *freeBusySet; // @synthesize freeBusySet=_freeBusySet;
@property(retain, nonatomic) NSURL *source; // @synthesize source=_source;
@property(nonatomic) _Bool isMarkedImmutableSharees; // @synthesize isMarkedImmutableSharees=_isMarkedImmutableSharees;
@property(nonatomic) _Bool isMarkedUndeletable; // @synthesize isMarkedUndeletable=_isMarkedUndeletable;
@property(nonatomic) _Bool canBeShared; // @synthesize canBeShared=_canBeShared;
@property(nonatomic) _Bool canBePublished; // @synthesize canBePublished=_canBePublished;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(nonatomic) _Bool isScheduleTransparent; // @synthesize isScheduleTransparent=_isScheduleTransparent;
@property(retain, nonatomic) NSURL *prePublishURL; // @synthesize prePublishURL=_prePublishURL;
@property(retain, nonatomic) NSURL *publishURL; // @synthesize publishURL=_publishURL;
@property(retain, nonatomic) ICSDuration *subscribedRefreshRate; // @synthesize subscribedRefreshRate=_subscribedRefreshRate;
@property(nonatomic) _Bool subscribedStripAttachments; // @synthesize subscribedStripAttachments=_subscribedStripAttachments;
@property(nonatomic) _Bool subscribedStripTodos; // @synthesize subscribedStripTodos=_subscribedStripTodos;
@property(nonatomic) _Bool subscribedStripAlarms; // @synthesize subscribedStripAlarms=_subscribedStripAlarms;
@property(retain, nonatomic) NSSet *supportedCalendarComponentSet; // @synthesize supportedCalendarComponentSet=_supportedCalendarComponentSet;
@property(retain, nonatomic) NSString *defaultAllDayAlarms; // @synthesize defaultAllDayAlarms=_defaultAllDayAlarms;
@property(retain, nonatomic) NSString *defaultTimedAlarms; // @synthesize defaultTimedAlarms=_defaultTimedAlarms;
@property(retain, nonatomic) NSString *calendarOrder; // @synthesize calendarOrder=_calendarOrder;
@property(retain, nonatomic) NSString *symbolicColorName; // @synthesize symbolicColorName=_symbolicColorName;
@property(retain, nonatomic) NSString *calendarColor; // @synthesize calendarColor=_calendarColor;
@property(retain, nonatomic) NSString *ctag; // @synthesize ctag=_ctag;
@property(retain, nonatomic) NSString *calendarDescription; // @synthesize calendarDescription=_calendarDescription;
@property(readonly, nonatomic) _Bool supportsFreebusy;
@property(readonly, nonatomic) _Bool isPollContainer;
@property(readonly, nonatomic) _Bool isJournalContainer;
@property(readonly, nonatomic) _Bool isTaskContainer;
@property(readonly, nonatomic) _Bool isEventContainer;
@property(readonly, nonatomic) _Bool isFamilyCalendar;
@property(readonly, nonatomic) _Bool isShared;
@property(readonly, nonatomic) _Bool isSharedOwner;
@property(readonly, nonatomic) _Bool isSubscribed;
@property(readonly, nonatomic) _Bool isNotification;
@property(readonly, nonatomic) _Bool isScheduleOutbox;
@property(readonly, nonatomic) _Bool isScheduleInbox;
@property(readonly, nonatomic) _Bool isCalendar;
- (_Bool)_isComponentSupportedForString:(id)arg1;	// IMP=0x0000000000005838
- (void)postProcessWithResponseHeaders:(id)arg1;	// IMP=0x0000000000005761
- (void)_setTimeZoneFromProperties:(id)arg1 onCalendar:(id)arg2;	// IMP=0x00000000000053a1
- (void)applyParsedProperties:(id)arg1;	// IMP=0x0000000000004771
- (id)description;	// IMP=0x0000000000003b62

@end
