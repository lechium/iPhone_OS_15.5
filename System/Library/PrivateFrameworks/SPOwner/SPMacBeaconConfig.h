//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSArray;

@interface SPMacBeaconConfig : NSObject <NSCopying, NSSecureCoding>
{
    double _initialNoBeaconDuration;	// 8 = 0x8
    double _fastRollAdvertisementDuration;	// 16 = 0x10
    double _fastRollAdvertisementInterval;	// 24 = 0x18
    double _slowRollAdvertisementDuration;	// 32 = 0x20
    double _slowRollNoAdvertisementDuration;	// 40 = 0x28
    double _noAdvertisementDurationDecayFactor;	// 48 = 0x30
    NSArray *_postInitialDayAdvertisementTimes;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000033af4
- (void).cxx_destruct;	// IMP=0x0000000000033e84
@property(copy, nonatomic) NSArray *postInitialDayAdvertisementTimes; // @synthesize postInitialDayAdvertisementTimes=_postInitialDayAdvertisementTimes;
@property(nonatomic) double noAdvertisementDurationDecayFactor; // @synthesize noAdvertisementDurationDecayFactor=_noAdvertisementDurationDecayFactor;
@property(nonatomic) double slowRollNoAdvertisementDuration; // @synthesize slowRollNoAdvertisementDuration=_slowRollNoAdvertisementDuration;
@property(nonatomic) double slowRollAdvertisementDuration; // @synthesize slowRollAdvertisementDuration=_slowRollAdvertisementDuration;
@property(nonatomic) double fastRollAdvertisementInterval; // @synthesize fastRollAdvertisementInterval=_fastRollAdvertisementInterval;
@property(nonatomic) double fastRollAdvertisementDuration; // @synthesize fastRollAdvertisementDuration=_fastRollAdvertisementDuration;
@property(nonatomic) double initialNoBeaconDuration; // @synthesize initialNoBeaconDuration=_initialNoBeaconDuration;
- (id)debugDescription;	// IMP=0x0000000000033d28
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000033c42
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000033afc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000033aa4
- (void)persistToPrefs;	// IMP=0x0000000000033814
- (id)initFromPrefs;	// IMP=0x000000000003368b
- (id)initWithInitialNoBeaconDuration:(double)arg1 fastRollAdvertisementDuration:(double)arg2 fastRollAdvertisementInterval:(double)arg3 slowRollAdvertisementDuration:(double)arg4 slowRollNoAdvertisementDuration:(double)arg5 noAdvertisementDurationDecayFactor:(double)arg6 postInitialDayAdvertisementTimes:(id)arg7;	// IMP=0x00000000000335aa

@end

