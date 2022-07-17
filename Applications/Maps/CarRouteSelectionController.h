//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarAlternateRouteItemsContainingView, CarChromeViewController, MKMapView, NSArray, NSString, PlatformController, Route;
@protocol CarRouteSelectableSession;

__attribute__((visibility("hidden")))
@interface CarRouteSelectionController : NSObject
{
    CarChromeViewController *_chromeViewController;	// 8 = 0x8
    PlatformController *_platformController;	// 16 = 0x10
    CarAlternateRouteItemsContainingView *_routeItemContainingView;	// 24 = 0x18
    _Bool _active;	// 32 = 0x20
    MKMapView *_mapView;	// 40 = 0x28
    id <CarRouteSelectableSession> _currentSession;	// 48 = 0x30
    unsigned long long _focusedRouteIndex;	// 56 = 0x38
    NSArray *_alternateRouteFocusItems;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000001bdfe7
@property(retain, nonatomic) NSArray *alternateRouteFocusItems; // @synthesize alternateRouteFocusItems=_alternateRouteFocusItems;
@property(nonatomic) unsigned long long focusedRouteIndex; // @synthesize focusedRouteIndex=_focusedRouteIndex;
@property(nonatomic) __weak id <CarRouteSelectableSession> currentSession; // @synthesize currentSession=_currentSession;
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void)navigationSession:(id)arg1 didChangeCurrentTransportType:(long long)arg2;	// IMP=0x00100000001bdf98
- (void)navigationSession:(id)arg1 didUpdateRouteCollection:(id)arg2;	// IMP=0x00100000001bdf86
- (void)mapsSession:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x00100000001bdf80
- (void)routePlanningSession:(id)arg1 didFinishResolvingWaypointSet:(id)arg2;	// IMP=0x00100000001bdf7a
- (void)routePlanningSession:(id)arg1 didReceiveUpdates:(id)arg2 forRoutesResult:(id)arg3;	// IMP=0x00100000001bdf74
- (void)routePlanningSession:(id)arg1 didChangeCurrentTransportType:(long long)arg2;	// IMP=0x00100000001bdf62
- (void)routePlanningSession:(id)arg1 didUpdateRouteCollectionResult:(id)arg2 forTransportType:(long long)arg3;	// IMP=0x00100000001bdf50
- (void)routeItemDidUpdateFocus:(id)arg1;	// IMP=0x00100000001bde3b
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x00100000001bddc9
- (void)platformController:(id)arg1 willChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x00100000001bddc3
- (void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2;	// IMP=0x00100000001bdbf9
- (_Bool)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2;	// IMP=0x00100000001bdbe4
- (void)didTapMapView:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00100000001bd91a
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000001bd78e
- (void)_selectRouteAtIndex:(unsigned long long)arg1;	// IMP=0x00100000001bd311
- (void)_updateRouteFrames;	// IMP=0x00100000001bd1e9
- (void)_rebuildAlternateRouteFocusItems;	// IMP=0x00100000001bcb8a
- (struct CGRect)_frameForRoute:(id)arg1 offset:(unsigned long long)arg2;	// IMP=0x00100000001bc9c5
- (_Bool)handleKnobPress:(id)arg1;	// IMP=0x00100000001bc4e4
- (void)_updateFocusItemsIfNeeded;	// IMP=0x00100000001bc422
@property(readonly, nonatomic) Route *currentRoute;
@property(readonly, nonatomic) NSArray *routes;
@property(readonly, nonatomic) NSArray *focusableRouteItems;
- (id)routeAnnotationsController;	// IMP=0x00100000001bbf88
- (void)_updateAlternateRouteItemContainingView;	// IMP=0x00100000001bbb9b
- (void)dealloc;	// IMP=0x00100000001bbad4
- (id)initWithPlatformController:(id)arg1 chromeViewController:(id)arg2;	// IMP=0x00100000001bb94b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
