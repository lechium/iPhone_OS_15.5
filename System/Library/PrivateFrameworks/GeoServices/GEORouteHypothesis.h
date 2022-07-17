//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOLocation, GEORouteHypothesisIncident, NSDate, NSError, NSString;

@interface GEORouteHypothesis : NSObject <NSSecureCoding>
{
    NSDate *_generationDate;	// 8 = 0x8
    GEOLocation *_lastLocation;	// 16 = 0x10
    int _transportType;	// 24 = 0x18
    NSDate *_suggestedDepartureDate;	// 32 = 0x20
    double _estimatedTravelTime;	// 40 = 0x28
    unsigned long long _currentTrafficDensity;	// 48 = 0x30
    unsigned long long _historicTrafficDensity;	// 56 = 0x38
    GEORouteHypothesisIncident *_mostRelevantIncident;	// 64 = 0x40
    long long _travelState;	// 72 = 0x48
    _Bool _supportsLiveTraffic;	// 80 = 0x50
    NSError *_error;	// 88 = 0x58
    NSDate *_conservativeDepartureDate;	// 96 = 0x60
    NSDate *_aggressiveDepartureDate;	// 104 = 0x68
    double _conservativeTravelTime;	// 112 = 0x70
    double _aggressiveTravelTime;	// 120 = 0x78
    NSString *_routeName;	// 128 = 0x80
    NSString *_trafficDensityDescription;	// 136 = 0x88
}

+ (_Bool)supportsTravelState:(long long)arg1 forTransportType:(int)arg2;	// IMP=0x00000000011a987f
+ (id)_routeHypothesisErrorWithUnderlyingError:(id)arg1;	// IMP=0x00000000011a9735
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000011a88c6
- (void).cxx_destruct;	// IMP=0x00000000011aa28a
@property(readonly, copy, nonatomic) NSString *routeName; // @synthesize routeName=_routeName;
@property(readonly, nonatomic) double aggressiveTravelTime; // @synthesize aggressiveTravelTime=_aggressiveTravelTime;
@property(readonly, nonatomic) double conservativeTravelTime; // @synthesize conservativeTravelTime=_conservativeTravelTime;
@property(readonly, nonatomic) NSDate *aggressiveDepartureDate; // @synthesize aggressiveDepartureDate=_aggressiveDepartureDate;
@property(readonly, nonatomic) NSDate *conservativeDepartureDate; // @synthesize conservativeDepartureDate=_conservativeDepartureDate;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool supportsLiveTraffic; // @synthesize supportsLiveTraffic=_supportsLiveTraffic;
@property(readonly, nonatomic) long long travelState; // @synthesize travelState=_travelState;
@property(readonly, nonatomic) GEORouteHypothesisIncident *mostRelevantIncident; // @synthesize mostRelevantIncident=_mostRelevantIncident;
@property(readonly, nonatomic) unsigned long long historicTrafficDensity; // @synthesize historicTrafficDensity=_historicTrafficDensity;
@property(readonly, nonatomic) unsigned long long currentTrafficDensity; // @synthesize currentTrafficDensity=_currentTrafficDensity;
@property(readonly, nonatomic) double estimatedTravelTime; // @synthesize estimatedTravelTime=_estimatedTravelTime;
@property(readonly, nonatomic) NSDate *suggestedDepartureDate; // @synthesize suggestedDepartureDate=_suggestedDepartureDate;
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) GEOLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(readonly, nonatomic) NSDate *generationDate; // @synthesize generationDate=_generationDate;
- (id)description;	// IMP=0x00000000011a9ab5
- (void)_clearHypothesisAndSetErrorWithCode:(long long)arg1;	// IMP=0x00000000011a99d7
- (void)_setError:(id)arg1;	// IMP=0x00000000011a989b
- (void)_updateTravelStateHasArrived:(_Bool)arg1 isTraveling:(_Bool)arg2 travelScore:(double)arg3 isNavigating:(_Bool)arg4 isNavigatingToDestination:(_Bool)arg5;	// IMP=0x00000000011a96c7
- (void)_updateTrafficIncidents:(id)arg1;	// IMP=0x00000000011a962a
- (void)_updateTrafficDensityDescription:(id)arg1;	// IMP=0x00000000011a95f7
- (void)_updateHistoricTrafficDensity:(double)arg1 staticTravelTime:(double)arg2;	// IMP=0x00000000011a9565
- (void)_updateCurrentTrafficDensity:(double)arg1 staticTravelTime:(double)arg2;	// IMP=0x00000000011a94d3
- (void)_updateDepartureAndArrivalSuggestionsForArrivalDate:(id)arg1 travelTimeWithTraffic:(double)arg2 conservativeTravelTime:(double)arg3 aggressiveTravelTime:(double)arg4 transportType:(int)arg5;	// IMP=0x00000000011a90fc
@property(readonly, nonatomic) NSString *trafficDensityDescription;
- (void)setRouteName:(id)arg1;	// IMP=0x00000000011a9052
- (void)setSupportsLiveTraffic:(_Bool)arg1;	// IMP=0x00000000011a9049
- (void)setLastLocation:(id)arg1;	// IMP=0x00000000011a9038
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000011a8cb7
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000011a8917
- (void)dealloc;	// IMP=0x00000000011a88ce

@end
