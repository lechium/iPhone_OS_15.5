//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DirectionsWaypoint, GEOComposedRoute, GEOComposedRouteStep, GEOComposedRouteTraffic, GEODirectionsRequest, GEODirectionsResponse, GEOObserverHashTable, GEORouteAttributes, GuidanceETA, MNTraceRecordingData, NSArray, NSMutableArray, NSString, NSUUID, RouteSet, TransitDirectionsStepsListDataProvider;
@protocol GEOServerFormattedString, GEOTransitRoutingIncidentMessage;

__attribute__((visibility("hidden")))
@interface Route : NSObject
{
    CDStruct_02837cd9 _boundingMapRect;	// 8 = 0x8
    CDStruct_c3b9c2ee *_mapPoints;	// 40 = 0x28
    unsigned long long _mapPointsCount;	// 48 = 0x30
    NSMutableArray *_trafficIncidentsOnRoute;	// 56 = 0x38
    GEOObserverHashTable *_observers;	// 64 = 0x40
    DirectionsWaypoint *_origin;	// 72 = 0x48
    DirectionsWaypoint *_destination;	// 80 = 0x50
    RouteSet *_routeSet;	// 88 = 0x58
    GEOComposedRoute *_composedRoute;	// 96 = 0x60
    unsigned long long _mode;	// 104 = 0x68
    GEODirectionsRequest *_directionsRequest;	// 112 = 0x70
    GEODirectionsResponse *_directionsResponse;	// 120 = 0x78
    MNTraceRecordingData *_traceRecordingData;	// 128 = 0x80
}

+ (void)initialize;	// IMP=0x004000000074b5b7
- (void).cxx_destruct;	// IMP=0x001000000074d028
@property(retain, nonatomic) MNTraceRecordingData *traceRecordingData; // @synthesize traceRecordingData=_traceRecordingData;
@property(readonly, nonatomic) GEODirectionsResponse *directionsResponse; // @synthesize directionsResponse=_directionsResponse;
@property(readonly, nonatomic) GEODirectionsRequest *directionsRequest; // @synthesize directionsRequest=_directionsRequest;
@property(readonly, nonatomic) CDStruct_c3b9c2ee *mapPoints; // @synthesize mapPoints=_mapPoints;
@property(readonly, nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) GEOComposedRoute *composedRoute; // @synthesize composedRoute=_composedRoute;
@property(readonly, nonatomic) __weak RouteSet *routeSet; // @synthesize routeSet=_routeSet;
@property(readonly, nonatomic) DirectionsWaypoint *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) DirectionsWaypoint *origin; // @synthesize origin=_origin;
- (void)composedRoute:(id)arg1 changedSelectedRideInClusteredSegment:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;	// IMP=0x001000000074cf7f
- (void)composedRoute:(id)arg1 appliedTransitRouteUpdates:(id)arg2;	// IMP=0x001000000074cf79
- (void)composedRoute:(id)arg1 selectedSections:(id)arg2 deselectedSections:(id)arg3;	// IMP=0x001000000074cf73
- (void)composedRouteUpdatedSnappedPaths:(id)arg1;	// IMP=0x001000000074cf6d
- (void)removeObserver:(id)arg1;	// IMP=0x001000000074cf57
- (void)addObserver:(id)arg1;	// IMP=0x001000000074cf41
@property(readonly, nonatomic) NSArray *trafficIncidentsOnRoute;
@property(readonly, nonatomic) unsigned long long routeIndex;
- (CDStruct_c3b9c2ee)closestMapPointToMapPoint:(CDStruct_c3b9c2ee)arg1;	// IMP=0x001000000074cd98
- (CDStruct_02837cd9)boundingRectForStep:(id)arg1;	// IMP=0x001000000074ccea
- (CDStruct_02837cd9)boundingRectForStep:(id)arg1 fromPoint:(unsigned long long)arg2;	// IMP=0x001000000074cb80
- (CDStruct_02837cd9)boundingRectForRoute;	// IMP=0x001000000074cb68
- (CDStruct_c3b9c2ee)midPoint;	// IMP=0x001000000074caa1
- (CDStruct_c3b9c2ee)endCoordinate;	// IMP=0x001000000074c9dc
- (CDStruct_c3b9c2ee)startCoordinate;	// IMP=0x001000000074c949
- (id)travelTimeForInterval:(unsigned int)arg1;	// IMP=0x001000000074c933
- (id)abbreviatedTravelTimeForInterval:(unsigned int)arg1;	// IMP=0x001000000074c91a
@property(readonly, nonatomic) NSString *expandedTravelTime;
@property(readonly, nonatomic) GEOComposedRouteTraffic *traffic;
- (id)_timeForSeconds:(unsigned long long)arg1 abbreviated:(_Bool)arg2;	// IMP=0x001000000074c7f1
@property(readonly, nonatomic) NSString *expandedDistance;
@property(readonly, nonatomic) NSString *accessibilityExpandedDistance;
@property(readonly, nonatomic) GEOComposedRouteStep *lastStep;
@property(readonly, nonatomic) GEOComposedRouteStep *firstStep;
@property(readonly, nonatomic) id <GEOServerFormattedString> planningDescriptionFormatString;
@property(readonly, nonatomic) id <GEOServerFormattedString> pickingDurationFormatString;
@property(readonly, nonatomic) id <GEOServerFormattedString> previewDurationFormatString;
@property(readonly, nonatomic) id <GEOTransitRoutingIncidentMessage> transitRoutingIncidentMessage;
@property(readonly) NSString *shortDescription;
@property(readonly, copy) NSString *description;
- (struct CLLocationCoordinate2D)_mkCoordAt:(unsigned int)arg1;	// IMP=0x001000000074c255
- (void)dealloc;	// IMP=0x001000000074c1d2
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000074bfe8
- (void)updateTraffic;	// IMP=0x001000000074bd81
@property(readonly, nonatomic) GEORouteAttributes *routeAttributes;
@property(readonly, nonatomic) NSUUID *uniqueRouteID;
- (void)_createMapPoints;	// IMP=0x001000000074bc1b
- (void)_routeSetOnly_setRouteSetWhenNil:(id)arg1;	// IMP=0x001000000074bbb7
- (void)_commonInit;	// IMP=0x001000000074b95f
- (id)initWithComposedRoute:(id)arg1 inRouteSet:(id)arg2 generateNavTraceData:(_Bool)arg3;	// IMP=0x001000000074b651
- (id)initWithComposedRoute:(id)arg1 inRouteSet:(id)arg2;	// IMP=0x001000000074b63c
- (id)initWithComposedRoute:(id)arg1;	// IMP=0x001000000074b628
- (_Bool)_isStartWaypoint:(id)arg1;	// IMP=0x00100000001ad3e5
- (id)combinedDescriptionForFont:(id)arg1;	// IMP=0x00100000003d9625
@property(readonly, nonatomic) _Bool avoidsTolls;
- (id)bookmarkRepresentation;	// IMP=0x00100000007f244d
- (_Bool)shouldReturnToRoutePickerWhenEndingDirectionsAtStepIndex:(unsigned long long)arg1;	// IMP=0x00100000009a8cf4
@property(readonly, nonatomic) GuidanceETA *guidanceETA;
@property(readonly, nonatomic) NSArray *transitAdvisories;
@property(readonly, nonatomic) NSString *clientPickingDescription;
@property(readonly, nonatomic) NSString *clientPickingDuration;
@property(readonly, nonatomic) NSString *abbreviatedDistance;
@property(readonly, nonatomic) TransitDirectionsStepsListDataProvider *transitDirectionsStepsListDataProvider;
- (_Bool)carplayDestinationHandoffRequired;	// IMP=0x0010000000aa3184

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

