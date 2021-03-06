//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVItem.h>

@class CalDAVCalendarServerAccessItem, CalDAVCalendarServerOrganizerItem, CalDAVSupportedCalendarComponentSet, CoreDAVHrefItem, CoreDAVItemWithHrefChildItem, CoreDAVItemWithNoChildren, CoreDAVLeafItem;

@interface CalDAVCalendarServerInviteNotificationItem : CoreDAVItem
{
    CoreDAVLeafItem *_uid;	// 56 = 0x38
    CoreDAVHrefItem *_href;	// 64 = 0x40
    CoreDAVItemWithNoChildren *_inviteStatus;	// 72 = 0x48
    CoreDAVItemWithNoChildren *_calendarPublic;	// 80 = 0x50
    CalDAVCalendarServerAccessItem *_access;	// 88 = 0x58
    CoreDAVItemWithHrefChildItem *_hostURL;	// 96 = 0x60
    CalDAVCalendarServerOrganizerItem *_organizer;	// 104 = 0x68
    CoreDAVLeafItem *_summary;	// 112 = 0x70
    CalDAVSupportedCalendarComponentSet *_supportedCalendarComponentSet;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000001b58c
@property(retain, nonatomic) CalDAVSupportedCalendarComponentSet *supportedCalendarComponentSet; // @synthesize supportedCalendarComponentSet=_supportedCalendarComponentSet;
@property(retain, nonatomic) CoreDAVLeafItem *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) CalDAVCalendarServerOrganizerItem *organizer; // @synthesize organizer=_organizer;
@property(retain, nonatomic) CoreDAVItemWithHrefChildItem *hostURL; // @synthesize hostURL=_hostURL;
@property(retain, nonatomic) CalDAVCalendarServerAccessItem *access; // @synthesize access=_access;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *calendarPublic; // @synthesize calendarPublic=_calendarPublic;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *inviteStatus; // @synthesize inviteStatus=_inviteStatus;
@property(retain, nonatomic) CoreDAVHrefItem *href; // @synthesize href=_href;
@property(retain, nonatomic) CoreDAVLeafItem *uid; // @synthesize uid=_uid;
- (_Bool)isComponentSupportedForString:(id)arg1;	// IMP=0x000000000001b37d
- (id)copyParseRules;	// IMP=0x000000000001ab4d
- (id)initForReplyWithUID:(id)arg1 href:(id)arg2 hostURL:(id)arg3 summary:(id)arg4;	// IMP=0x000000000001a8b2
- (id)init;	// IMP=0x000000000001a88c

@end

