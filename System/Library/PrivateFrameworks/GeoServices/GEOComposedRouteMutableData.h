//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOComposedRouteTraffic, NSArray, NSMutableDictionary;

@interface GEOComposedRouteMutableData : NSObject <NSSecureCoding>
{
    GEOComposedRouteTraffic *_traffic;	// 8 = 0x8
    NSArray *_trafficDelayInfos;	// 16 = 0x10
    NSArray *_updateableCameraInfos;	// 24 = 0x18
    NSMutableDictionary *_stepsIDToEVInfos;	// 32 = 0x20
    NSMutableDictionary *_legIndexToChargingStationInfos;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000007050ad
- (void).cxx_destruct;	// IMP=0x00000000007059e9
@property(retain, nonatomic) NSArray *updateableCameraInfos; // @synthesize updateableCameraInfos=_updateableCameraInfos;
@property(retain, nonatomic) NSArray *trafficDelayInfos; // @synthesize trafficDelayInfos=_trafficDelayInfos;
@property(retain, nonatomic) GEOComposedRouteTraffic *traffic; // @synthesize traffic=_traffic;
- (id)description;	// IMP=0x0000000000705426
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000070537d
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000007050b5
- (void)updateForRoute:(id)arg1 etaRoute:(id)arg2;	// IMP=0x0000000000704f58
- (void)updateForRoute:(id)arg1;	// IMP=0x00000000007048bb
- (id)chargingStationInfoForLegIndex:(unsigned long long)arg1;	// IMP=0x0000000000704854
- (id)evInfoForStepID:(unsigned long long)arg1;	// IMP=0x00000000007047ed

@end

