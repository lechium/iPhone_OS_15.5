//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/NSSecureCoding-Protocol.h>

@class NSUUID;

@interface MNRouteDistanceInfo : NSObject <NSSecureCoding>
{
    unsigned long long _legIndex;	// 8 = 0x8
    NSUUID *_routeID;	// 16 = 0x10
    double _distanceRemainingToEndOfLeg;	// 24 = 0x18
    double _distanceRemainingToEndOfRoute;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000bc21d
- (void).cxx_destruct;	// IMP=0x00000000000bc4ad
@property(readonly, nonatomic) double distanceRemainingToEndOfRoute; // @synthesize distanceRemainingToEndOfRoute=_distanceRemainingToEndOfRoute;
@property(readonly, nonatomic) double distanceRemainingToEndOfLeg; // @synthesize distanceRemainingToEndOfLeg=_distanceRemainingToEndOfLeg;
- (id)description;	// IMP=0x00000000000bc469
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000bc3b5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000bc30f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bc225
- (id)initWithDistanceRemainingToEndOfLeg:(double)arg1 distanceRemainingToEndOfRoute:(double)arg2 forLegIndex:(unsigned long long)arg3 forRouteID:(id)arg4;	// IMP=0x00000000000bc189
- (id)init;	// IMP=0x00000000000bc15f

@end
