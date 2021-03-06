//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrackingAvoidance/NSSecureCoding-Protocol.h>

@class NSArray, TAInterVisitMetricPerDeviceSettings, TASPAdvertisement;

@interface TAInterVisitMetricPerDevice : NSObject <NSSecureCoding>
{
    _Bool _segmentSpeedExceedsLimit;	// 8 = 0x8
    unsigned long long _numOfAssociatedLocs;	// 16 = 0x10
    double _duration;	// 24 = 0x18
    double _distance;	// 32 = 0x20
    TASPAdvertisement *_latestAdvertisement;	// 40 = 0x28
    TAInterVisitMetricPerDeviceSettings *_settings;	// 48 = 0x30
    NSArray *_sampledObservedLocations;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000014606
- (void).cxx_destruct;	// IMP=0x00000000000148da
@property(readonly, nonatomic) NSArray *sampledObservedLocations; // @synthesize sampledObservedLocations=_sampledObservedLocations;
@property(retain, nonatomic) TAInterVisitMetricPerDeviceSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) _Bool segmentSpeedExceedsLimit; // @synthesize segmentSpeedExceedsLimit=_segmentSpeedExceedsLimit;
@property(readonly, nonatomic) TASPAdvertisement *latestAdvertisement; // @synthesize latestAdvertisement=_latestAdvertisement;
@property(readonly, nonatomic) double distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) unsigned long long numOfAssociatedLocs; // @synthesize numOfAssociatedLocs=_numOfAssociatedLocs;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000147aa
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001460e
- (id)description;	// IMP=0x000000000001451a
- (id)descriptionDictionary;	// IMP=0x000000000001431c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000013fb1
- (void)accumulateLatestAdvertisement:(id)arg1;	// IMP=0x0000000000013f6e
- (void)accumulateSampledObservedLocations:(id)arg1;	// IMP=0x0000000000013b23
- (void)accumulateDistance:(double)arg1;	// IMP=0x0000000000013b13
- (void)accumulateDuration:(double)arg1;	// IMP=0x0000000000013b03
- (void)accumulateNumOfAssociatedLocs:(unsigned long long)arg1;	// IMP=0x0000000000013af9
- (void)accumulate:(id)arg1;	// IMP=0x00000000000139ca
- (id)initWithSettings:(id)arg1;	// IMP=0x000000000001390c
- (id)init;	// IMP=0x00000000000138cc

@end

