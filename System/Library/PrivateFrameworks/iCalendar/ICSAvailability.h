//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ICSDate, ICSDuration, ICSUserAddress, NSString, NSURL;

@interface ICSAvailability
{
}

+ (id)name;	// IMP=0x000000000001848c

// Remaining properties
@property(retain) ICSDate *created; // @dynamic created;
@property(retain) ICSDate *dtend; // @dynamic dtend;
@property(retain) ICSDate *dtstamp; // @dynamic dtstamp;
@property(retain) ICSDate *dtstart; // @dynamic dtstart;
@property(retain) ICSDuration *duration; // @dynamic duration;
@property(retain) ICSDate *last_modified; // @dynamic last_modified;
@property(retain) ICSUserAddress *organizer; // @dynamic organizer;
@property unsigned long long sequence; // @dynamic sequence;
@property(retain) NSString *summary; // @dynamic summary;
@property(retain) NSString *uid; // @dynamic uid;
@property(retain) NSURL *url; // @dynamic url;

@end

