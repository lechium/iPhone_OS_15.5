//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Announce/NSSecureCoding-Protocol.h>

@class ANAnnouncementContent, ANAnnouncementDestination, NSString;

@interface ANAnnouncementRequest : NSObject <NSSecureCoding>
{
    ANAnnouncementContent *_content;	// 8 = 0x8
    ANAnnouncementDestination *_destination;	// 16 = 0x10
    NSString *_clientID;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001813a
+ (id)requestWithContent:(id)arg1 destination:(id)arg2;	// IMP=0x0000000000018037
- (void).cxx_destruct;	// IMP=0x00000000000182b9
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(readonly, nonatomic) ANAnnouncementDestination *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) ANAnnouncementContent *content; // @synthesize content=_content;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000181b0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000018142
- (id)description;	// IMP=0x00000000000180a7
- (id)initWithContent:(id)arg1 destination:(id)arg2;	// IMP=0x0000000000017f9e

@end

