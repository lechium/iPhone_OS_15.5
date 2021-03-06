//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSharedNavState, IOSBasedChromeViewController, MKMapView, MapCameraController, NSString, PersonalizedItemSource, RouteAnnotationsController, SearchPinsManager, SharedTripContactAnnotationView, SharedTripUserAnnotation, SharedTripsItemSource, UIWindowScene;

__attribute__((visibility("hidden")))
@interface SharedTripsAnnotationsController : NSObject
{
    SharedTripUserAnnotation *_userAnnotation;	// 8 = 0x8
    SharedTripContactAnnotationView *_userAnnotationView;	// 16 = 0x10
    SharedTripsItemSource *_itemSource;	// 24 = 0x18
    CDStruct_f9c529ff _oldMapConfiguration;	// 32 = 0x20
    long long _idiom;	// 80 = 0x50
    _Bool _sceneIsActive;	// 88 = 0x58
    UIWindowScene *_windowScene;	// 96 = 0x60
    _Bool _attachedToMapView;	// 104 = 0x68
    id _subscriptionToken;	// 112 = 0x70
    id _modernMapToken;	// 120 = 0x78
    _Bool _active;	// 128 = 0x80
    GEOSharedNavState *_sharedTrip;	// 136 = 0x88
    MKMapView *_mapView;	// 144 = 0x90
    MapCameraController *_mapCameraController;	// 152 = 0x98
    RouteAnnotationsController *_routeAnnotationsController;	// 160 = 0xa0
    SearchPinsManager *_searchPinsManager;	// 168 = 0xa8
    IOSBasedChromeViewController *_chromeViewController;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x002000000085e6e9
@property(readonly, nonatomic) __weak IOSBasedChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(readonly, nonatomic) __weak SearchPinsManager *searchPinsManager; // @synthesize searchPinsManager=_searchPinsManager;
@property(readonly, nonatomic) __weak RouteAnnotationsController *routeAnnotationsController; // @synthesize routeAnnotationsController=_routeAnnotationsController;
@property(readonly, nonatomic) __weak MapCameraController *mapCameraController; // @synthesize mapCameraController=_mapCameraController;
@property(readonly, nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) UIWindowScene *windowScene; // @synthesize windowScene=_windowScene;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(retain, nonatomic) GEOSharedNavState *sharedTrip; // @synthesize sharedTrip=_sharedTrip;
- (void)setIOSBasedChromeViewController:(id)arg1;	// IMP=0x001000000085e512
- (void)sharedTripService:(id)arg1 didUpdateReachedDestinationForSharedTrip:(id)arg2;	// IMP=0x001000000085e415
- (void)sharedTripService:(id)arg1 didUpdateClosedTrip:(id)arg2;	// IMP=0x001000000085e318
- (void)sharedTripService:(id)arg1 didRemoveSharedTrip:(id)arg2;	// IMP=0x001000000085e23c
- (void)sharedTripService:(id)arg1 didUpdateDestinationForSharedTrip:(id)arg2;	// IMP=0x001000000085e150
- (void)sharedTripService:(id)arg1 didUpdateETAForSharedTrip:(id)arg2;	// IMP=0x001000000085e064
- (void)sharedTripService:(id)arg1 didUpdateRouteForSharedTrip:(id)arg2;	// IMP=0x001000000085df67
- (void)sharedTripService:(id)arg1 didReceiveSharedTrip:(id)arg2;	// IMP=0x001000000085df61
- (void)sharedTripServiceDidUpdateReceivingAvailability:(id)arg1;	// IMP=0x001000000085df5b
- (void)_updateModernMapTokenIfNeeded;	// IMP=0x001000000085dd79
- (void)_subscribeIfNecessary:(id)arg1;	// IMP=0x001000000085dcbe
- (void)_unsubscribeIfNecessary:(id)arg1;	// IMP=0x001000000085dc03
- (_Bool)_shouldBeActive;	// IMP=0x001000000085dbbd
- (void)poiShapeLoader:(id)arg1 didLoadStartPOIShape:(id)arg2 endPOIShape:(id)arg3;	// IMP=0x001000000085dba6
- (double)_userAnnotationViewImageSideLength;	// IMP=0x001000000085db8a
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;	// IMP=0x001000000085d98a
- (void)_showStartEndPinsAnimated:(_Bool)arg1;	// IMP=0x001000000085d68b
- (void)_updateRouteLines;	// IMP=0x001000000085d3e4
- (void)recenterOnRouteAnimated:(_Bool)arg1;	// IMP=0x001000000085cfb1
- (_Bool)shouldShowRoute;	// IMP=0x001000000085cfa3
- (void)reload;	// IMP=0x001000000085cf70
- (void)_updateSubscriptionToken:(id)arg1;	// IMP=0x001000000085cf5f
- (void)_updateSubscriptions;	// IMP=0x001000000085cda8
- (void)_connectOrDisconnectFromMapView;	// IMP=0x001000000085cd6a
- (void)removeFromMapView;	// IMP=0x001000000085cd13
- (void)_detachFromMapView;	// IMP=0x001000000085cb90
- (void)_attachToMapViewIfNeeded:(_Bool)arg1;	// IMP=0x001000000085c873
- (void)setMapView:(id)arg1 mapCameraController:(id)arg2 searchPinsManager:(id)arg3 routeAnnotationsController:(id)arg4 animated:(_Bool)arg5;	// IMP=0x001000000085c714
@property(readonly, nonatomic) PersonalizedItemSource *itemSource;
- (void)dealloc;	// IMP=0x001000000085c615
- (id)init;	// IMP=0x001000000085c4cb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

