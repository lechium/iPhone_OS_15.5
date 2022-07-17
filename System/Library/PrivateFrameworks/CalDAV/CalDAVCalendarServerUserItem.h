//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVItem.h>

@class CalDAVCalendarServerAccessItem, CoreDAVHrefItem, CoreDAVItemWithNoChildren, CoreDAVLeafItem, NSString, NSURL;

@interface CalDAVCalendarServerUserItem : CoreDAVItem
{
    CoreDAVHrefItem *_href;	// 56 = 0x38
    CoreDAVLeafItem *_commonName;	// 64 = 0x40
    CoreDAVItemWithNoChildren *_inviteStatus;	// 72 = 0x48
    CalDAVCalendarServerAccessItem *_access;	// 80 = 0x50
    CoreDAVLeafItem *_summary;	// 88 = 0x58
    NSString *_firstName;	// 96 = 0x60
    NSString *_lastName;	// 104 = 0x68
    NSURL *_acceptedURL;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000001d837
@property(retain, nonatomic) NSURL *acceptedURL; // @synthesize acceptedURL=_acceptedURL;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) CoreDAVLeafItem *summary; // @synthesize summary=_summary;
@property(retain, nonatomic) CalDAVCalendarServerAccessItem *access; // @synthesize access=_access;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *inviteStatus; // @synthesize inviteStatus=_inviteStatus;
@property(retain, nonatomic) CoreDAVLeafItem *commonName; // @synthesize commonName=_commonName;
@property(retain, nonatomic) CoreDAVHrefItem *href; // @synthesize href=_href;
- (long long)compare:(id)arg1;	// IMP=0x000000000001d3f6
- (id)copyParseRules;	// IMP=0x000000000001cd16
- (void)setAcceptedURLItem:(id)arg1;	// IMP=0x000000000001cca4
- (void)setLastNameItem:(id)arg1;	// IMP=0x000000000001cc55
- (void)setFirstNameItem:(id)arg1;	// IMP=0x000000000001cc06
- (id)description;	// IMP=0x000000000001c7ae
- (id)initWithHREF:(id)arg1 commonName:(id)arg2 inviteStatus:(int)arg3 access:(int)arg4;	// IMP=0x000000000001c5b0
- (id)init;	// IMP=0x000000000001c58a

@end
