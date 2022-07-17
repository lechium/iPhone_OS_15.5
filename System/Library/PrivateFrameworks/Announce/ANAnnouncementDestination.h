//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Announce/NSSecureCoding-Protocol.h>

@class ANAnnouncement, NSArray, NSString;

@interface ANAnnouncementDestination : NSObject <NSSecureCoding>
{
    _Bool _replyToSender;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    id _homeObject;	// 24 = 0x18
    NSArray *_zoneObjects;	// 32 = 0x20
    NSArray *_roomObjects;	// 40 = 0x28
    NSString *_announcementIdentifier;	// 48 = 0x30
    ANAnnouncement *_announcement;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000148de
+ (id)stringFromAnnouncementDestinationType:(unsigned long long)arg1;	// IMP=0x00000000000148a5
+ (id)destinationWithReplyToAnnouncementIdentifier:(id)arg1;	// IMP=0x000000000001469e
+ (id)destinationWithHomeIdentifier:(id)arg1 zoneIdentifiers:(id)arg2 roomIdentifiers:(id)arg3;	// IMP=0x00000000000145d8
+ (id)destinationWithHomeIdentifier:(id)arg1;	// IMP=0x00000000000145b5
+ (id)destinationWithHomeName:(id)arg1 zoneNames:(id)arg2 roomNames:(id)arg3;	// IMP=0x00000000000144f2
+ (id)destinationWithHomeName:(id)arg1;	// IMP=0x00000000000144cf
- (void).cxx_destruct;	// IMP=0x0000000000014ed2
@property(retain, nonatomic) ANAnnouncement *announcement; // @synthesize announcement=_announcement;
@property(retain, nonatomic) NSString *announcementIdentifier; // @synthesize announcementIdentifier=_announcementIdentifier;
@property(retain, nonatomic) NSArray *roomObjects; // @synthesize roomObjects=_roomObjects;
@property(retain, nonatomic) NSArray *zoneObjects; // @synthesize zoneObjects=_zoneObjects;
@property(retain, nonatomic) id homeObject; // @synthesize homeObject=_homeObject;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000014a94
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000148e6
- (void)setReplyToSender:(_Bool)arg1;	// IMP=0x000000000001489c
- (_Bool)replyToSender;	// IMP=0x0000000000014893
- (id)description;	// IMP=0x0000000000014744
- (id)init;	// IMP=0x00000000000144a0

@end
