//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/GEOComposedRoute.h>

@class GEOComposedRouteAdvisory, GEOComposedRouteStep, NSArray, NSData, NSDate, NSString;

@interface GEOComposedRoute (WidgetExtras)
- (unsigned long long)mapType;	// IMP=0x00100000002eca23
@property(readonly, nonatomic) NSData *rideSelectionsAsNSData;
- (id)rapDestinationTitle;	// IMP=0x00100000002fd287
- (id)lastEVStep;	// IMP=0x00100000003795bf
- (_Bool)isLegIndexOfLastLeg:(unsigned long long)arg1;	// IMP=0x0010000000379568
- (id)chargingStationInfos;	// IMP=0x0010000000379379
@property(readonly, nonatomic) NSArray *steppingSigns;
- (id)_signForTransitTripStep:(id)arg1;	// IMP=0x0010000000399554
- (id)_signForTransitStationStep:(id)arg1;	// IMP=0x00100000003994c7
- (id)_signForWalkingStep:(id)arg1;	// IMP=0x0010000000399113
@property(readonly, nonatomic) GEOComposedRouteStep *startRouteStep;
- (id)combinedDescriptionForFont:(id)arg1;	// IMP=0x00100000003d97a2
@property(readonly, nonatomic) unsigned char tollCurrencyType;
@property(readonly, nonatomic) NSDate *transitRouteArrivalDate;
@property(readonly, nonatomic) NSArray *transitLinesOnRoute;
@property(readonly, nonatomic) GEOComposedRouteAdvisory *clickableAdvisory;
- (id)advisoriesStyleAttributes;	// IMP=0x001000000070f024
@property(readonly, nonatomic) NSString *combinedAdvisorySummaryString;
@property(readonly, nonatomic) _Bool noticesAlwaysClickable;
@property(readonly, nonatomic) NSArray *combinedRouteAdvisoryCards;
@property(readonly, nonatomic) NSArray *combinedRouteIncidents;
- (id)evAdvisoryString;	// IMP=0x001000000070e715
- (id)historicalTrafficAdvisoryString;	// IMP=0x001000000070e4c3
- (id)tollAdvisoryString;	// IMP=0x001000000070e313

// Remaining properties
@property(readonly, nonatomic) _Bool avoidsTolls;
@end

