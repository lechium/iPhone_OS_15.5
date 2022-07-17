//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, SPUnauthorizedTrackingAdvertisement;

@interface SPUnauthorizedTrackingObservation : NSObject <NSSecureCoding>
{
    SPUnauthorizedTrackingAdvertisement *_trackingIdentifier;	// 8 = 0x8
    NSArray *_observedLocations;	// 16 = 0x10
    NSDate *_observedAt;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000011dda
- (void).cxx_destruct;	// IMP=0x000000000001223a
@property(copy, nonatomic) NSDate *observedAt; // @synthesize observedAt=_observedAt;
@property(copy, nonatomic) NSArray *observedLocations; // @synthesize observedLocations=_observedLocations;
@property(retain, nonatomic) SPUnauthorizedTrackingAdvertisement *trackingIdentifier; // @synthesize trackingIdentifier=_trackingIdentifier;
- (id)description;	// IMP=0x0000000000012139
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000012056
- (unsigned long long)hash;	// IMP=0x0000000000011f97
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000011de2
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000011c6b
- (id)initWithCurrentAdvertisementAndLocationHistory:(id)arg1 observedLocations:(id)arg2;	// IMP=0x0000000000011b6b

@end
