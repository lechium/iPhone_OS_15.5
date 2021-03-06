//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WeatherFoundation/NSSecureCoding-Protocol.h>

@class WFLocation;

@interface WFGeocodeResponse <NSSecureCoding>
{
    WFLocation *_location;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001f51b
- (void).cxx_destruct;	// IMP=0x000000000001f686
@property(readonly) WFLocation *location; // @synthesize location=_location;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001f5d5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001f523
- (id)description;	// IMP=0x000000000001f4eb
- (id)initWithIdentifier:(id)arg1 location:(id)arg2;	// IMP=0x000000000001f460

@end

