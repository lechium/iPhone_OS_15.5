//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, Route;

__attribute__((visibility("hidden")))
@interface RouteAnnotationsConfiguration : NSObject
{
    _Bool _selectPolyline;	// 8 = 0x8
    _Bool _alternateRoutesEnabled;	// 9 = 0x9
    _Bool _routeTrafficFeaturesActive;	// 10 = 0xa
    NSArray *_routes;	// 16 = 0x10
    unsigned long long _selectedRouteIndex;	// 24 = 0x18
    unsigned long long _focusedRouteIndex;	// 32 = 0x20
    NSArray *_transitVehiclePositions;	// 40 = 0x28
    unsigned long long _style;	// 48 = 0x30
    NSString *_selectedRouteCustomText;	// 56 = 0x38
    unsigned long long _routeMarkerOptions;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x002000000054488b
@property(nonatomic) _Bool routeTrafficFeaturesActive; // @synthesize routeTrafficFeaturesActive=_routeTrafficFeaturesActive;
@property(nonatomic) _Bool alternateRoutesEnabled; // @synthesize alternateRoutesEnabled=_alternateRoutesEnabled;
@property(nonatomic, getter=selectsPolyline) _Bool selectPolyline; // @synthesize selectPolyline=_selectPolyline;
@property(nonatomic) unsigned long long routeMarkerOptions; // @synthesize routeMarkerOptions=_routeMarkerOptions;
@property(copy, nonatomic) NSString *selectedRouteCustomText; // @synthesize selectedRouteCustomText=_selectedRouteCustomText;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(copy, nonatomic) NSArray *transitVehiclePositions; // @synthesize transitVehiclePositions=_transitVehiclePositions;
@property(nonatomic) unsigned long long focusedRouteIndex; // @synthesize focusedRouteIndex=_focusedRouteIndex;
@property(nonatomic) unsigned long long selectedRouteIndex; // @synthesize selectedRouteIndex=_selectedRouteIndex;
@property(copy, nonatomic) NSArray *routes; // @synthesize routes=_routes;
- (void)_copyPropertiesTo:(id)arg1;	// IMP=0x001000000054467b
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000005445e9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000005445de
@property(readonly, nonatomic) Route *focusedRoute;
@property(readonly, nonatomic) Route *selectedRoute;
- (void)_setRoutes:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;	// IMP=0x0010000000544496
- (id)initWithRoutes:(id)arg1 selectedRouteIndex:(unsigned long long)arg2;	// IMP=0x0010000000544379
- (id)initWithRoute:(id)arg1;	// IMP=0x00100000005442bf
- (id)init;	// IMP=0x00100000005442ab

@end

