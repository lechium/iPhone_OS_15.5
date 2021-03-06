//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FlightUtilitiesCore/NSCopying-Protocol.h>
#import <FlightUtilitiesCore/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface FUAirline : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_IATACode;	// 8 = 0x8
    NSString *_FAACode;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_phoneNumber;	// 32 = 0x20
    NSURL *_URL;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000006c1c
- (void).cxx_destruct;	// IMP=0x0000000000007091
@property(retain) NSURL *URL; // @synthesize URL=_URL;
@property(retain) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *FAACode; // @synthesize FAACode=_FAACode;
@property(retain) NSString *IATACode; // @synthesize IATACode=_IATACode;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006e5b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000006c24
- (id)description;	// IMP=0x0000000000006b89
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000069c2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006581

@end

