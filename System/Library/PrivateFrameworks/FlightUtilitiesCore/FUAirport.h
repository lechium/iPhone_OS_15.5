//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FlightUtilitiesCore/NSCopying-Protocol.h>
#import <FlightUtilitiesCore/NSSecureCoding-Protocol.h>

@class CLPlacemark, NSString, NSTimeZone;

@interface FUAirport : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_IATACode;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_city;	// 24 = 0x18
    NSTimeZone *_timeZone;	// 32 = 0x20
    CLPlacemark *_placemark;	// 40 = 0x28
    struct CLLocationCoordinate2D _location;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000a075
- (void).cxx_destruct;	// IMP=0x000000000000a67d
@property(retain) CLPlacemark *placemark; // @synthesize placemark=_placemark;
@property struct CLLocationCoordinate2D location; // @synthesize location=_location;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(retain) NSString *city; // @synthesize city=_city;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *IATACode; // @synthesize IATACode=_IATACode;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000a35d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000a07d
- (void)fetchPlacemarkWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000009dc3
- (id)description;	// IMP=0x0000000000009cfc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000009b1b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000009629

@end
