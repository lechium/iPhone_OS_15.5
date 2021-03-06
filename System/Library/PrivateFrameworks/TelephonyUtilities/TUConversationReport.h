//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSCopying-Protocol.h>
#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSDate, NSUUID;

@interface TUConversationReport : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_timebase;	// 8 = 0x8
    NSUUID *_conversationID;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b24ca
- (void).cxx_destruct;	// IMP=0x00000000000b26d2
@property(readonly, nonatomic) NSUUID *conversationID; // @synthesize conversationID=_conversationID;
@property(readonly, nonatomic) NSDate *timebase; // @synthesize timebase=_timebase;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b25d8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b24d2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b2435
- (unsigned long long)hash;	// IMP=0x00000000000b23a8
- (_Bool)isEqualToConversationReport:(id)arg1;	// IMP=0x00000000000b22b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b2257
- (id)description;	// IMP=0x00000000000b2157
- (id)initWithConversationID:(id)arg1 timebase:(id)arg2;	// IMP=0x00000000000b20be
- (id)init;	// IMP=0x00000000000b203c

@end

