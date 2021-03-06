//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <FlightUtilitiesCore/NSSecureCoding-Protocol.h>

@class FUAirline;

__attribute__((visibility("hidden")))
@interface FUFlightCodeShare : NSObject <NSSecureCoding>
{
    FUAirline *_airline;	// 8 = 0x8
    unsigned long long _flightNumber;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000063aa
- (void).cxx_destruct;	// IMP=0x0000000000006571
@property unsigned long long flightNumber; // @synthesize flightNumber=_flightNumber;
@property(retain) FUAirline *airline; // @synthesize airline=_airline;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000006476
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000063b2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000006271

@end

