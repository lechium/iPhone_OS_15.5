//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarChromeViewController, CarNavigationDisplayConfiguration, CarNavigationDisplayRateThrottle, MKMapView, MNTrafficIncidentAlert, NSString, NavCameraController, NavigationDisplay, Route, SearchResult;
@protocol CarNavigationDisplayDelegate;

__attribute__((visibility("hidden")))
@interface CarNavigationDisplay : NSObject
{
    CarNavigationDisplayConfiguration *_configuration;	// 8 = 0x8
    _Bool _hasArrived;	// 16 = 0x10
    _Bool _isNavigating;	// 17 = 0x11
    _Bool _mapClearsUserLocationOnReset;	// 18 = 0x12
    unsigned long long _currentStepIndex;	// 24 = 0x18
    double _currentCameraOffset;	// 32 = 0x20
    Route *_route;	// 40 = 0x28
    NavigationDisplay *_navigationDisplay;	// 48 = 0x30
    CarNavigationDisplayRateThrottle *_throttle;	// 56 = 0x38
    CarNavigationDisplayConfiguration *_lastAppliedConfiguration;	// 64 = 0x40
    _Bool _paused;	// 72 = 0x48
    _Bool _cameraPanning;	// 73 = 0x49
    id <CarNavigationDisplayDelegate> _delegate;	// 80 = 0x50
    MNTrafficIncidentAlert *_trafficAlert;	// 88 = 0x58
    unsigned long long _currentCameraMode;	// 96 = 0x60
    CarChromeViewController *_chromeViewController;	// 104 = 0x68
    SearchResult *_startPin;	// 112 = 0x70
}

+ (id)defaultConfiguration;	// IMP=0x0020000000a0fd56
- (void).cxx_destruct;	// IMP=0x0020000000a13ae6
@property(retain, nonatomic) SearchResult *startPin; // @synthesize startPin=_startPin;
@property(nonatomic) __weak CarChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(nonatomic) unsigned long long currentCameraMode; // @synthesize currentCameraMode=_currentCameraMode;
@property(retain, nonatomic) MNTrafficIncidentAlert *trafficAlert; // @synthesize trafficAlert=_trafficAlert;
@property(nonatomic, getter=isCameraPanning) _Bool cameraPanning; // @synthesize cameraPanning=_cameraPanning;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) __weak id <CarNavigationDisplayDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CarNavigationDisplayConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)navigationService:(id)arg1 didUpdateTrafficForRouteID:(id)arg2;	// IMP=0x0010000000a137bf
- (void)navigationService:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;	// IMP=0x0010000000a136b5
- (void)navigationService:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;	// IMP=0x0010000000a135ab
- (void)navigationService:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;	// IMP=0x0010000000a134a1
- (void)navigationService:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;	// IMP=0x0010000000a1349b
- (void)navigationService:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x0010000000a13446
- (void)navigationServiceDidHideSecondaryStep:(id)arg1;	// IMP=0x0010000000a13440
- (void)navigationService:(id)arg1 displaySecondaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6;	// IMP=0x0010000000a1343a
- (void)navigationService:(id)arg1 displayManeuverAlertForAnnouncementStage:(unsigned long long)arg2;	// IMP=0x0010000000a13434
- (void)navigationService:(id)arg1 displayPrimaryStep:(id)arg2 instructions:(id)arg3 shieldType:(int)arg4 shieldText:(id)arg5 drivingSide:(int)arg6 maneuverStepIndex:(unsigned long long)arg7 isSynthetic:(_Bool)arg8;	// IMP=0x0010000000a1342e
- (void)navigationService:(id)arg1 didUpdateDistanceUntilSign:(double)arg2 timeUntilSign:(double)arg3 forStepIndex:(unsigned long long)arg4;	// IMP=0x0010000000a13428
- (void)navigationService:(id)arg1 didUpdateMatchedLocation:(id)arg2;	// IMP=0x0010000000a13413
- (void)navigationService:(id)arg1 didUpdateAlternateRoutes:(id)arg2 traffics:(id)arg3;	// IMP=0x0010000000a133c4
- (void)navigationService:(id)arg1 didSwitchToNewTransportType:(int)arg2 newRoute:(id)arg3;	// IMP=0x0010000000a133af
- (void)navigationService:(id)arg1 didReroute:(id)arg2;	// IMP=0x0010000000a13341
- (void)navigationServiceDidCancelReroute:(id)arg1;	// IMP=0x0010000000a1333b
- (void)navigationServiceWillReroute:(id)arg1;	// IMP=0x0010000000a13335
- (_Bool)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2;	// IMP=0x0010000000a13268
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0010000000a13206
- (void)navigationService:(id)arg1 willChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0010000000a13042
- (void)didTapMapView:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x0010000000a12fa5
- (void)mapViewNavigationCameraHasStoppedPanning:(id)arg1;	// IMP=0x0010000000a12f8c
- (void)mapViewNavigationCameraHasStartedPanning:(id)arg1;	// IMP=0x0010000000a12f70
- (void)mapView:(id)arg1 willStartRespondingToGesture:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x0010000000a12f06
- (void)navigationDisplay:(id)arg1 didChangeUserTrackingMode:(long long)arg2;	// IMP=0x0010000000a12eb1
- (void)throttle:(id)arg1 calculatedNewDisplayRate:(long long)arg2;	// IMP=0x0010000000a12e14
- (void)setTemporaryDisplayRate:(long long)arg1 forDuration:(double)arg2;	// IMP=0x0010000000a12d8a
- (void)updateDisplayRate;	// IMP=0x0010000000a12b57
- (unsigned long long)_routeMarkerOptionsForCameraStyle:(long long)arg1 incidentAlert:(id)arg2;	// IMP=0x0010000000a12b41
- (void)_transitionToCameraStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000a1278f
- (void)setCameraPanning:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000a1267e
- (void)_stopNavigationCameraMotion;	// IMP=0x0010000000a125dc
- (void)_pauseNavigationCameraMotion;	// IMP=0x0010000000a1254e
- (void)_startNavigationCameraMotionAnimated:(_Bool)arg1;	// IMP=0x0010000000a12176
- (void)mapInsetsDidChangeAnimated:(_Bool)arg1;	// IMP=0x0010000000a120f1
- (double)_horizontalCameraOffset;	// IMP=0x0010000000a11fa9
- (void)_applyHorizontalCameraOffset:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000a11dc3
- (void)recenterCameraAnimated:(_Bool)arg1;	// IMP=0x0010000000a11d72
- (void)_prepareNavigationDisplay;	// IMP=0x0010000000a119fc
- (void)_cleanupNavigationDisplay;	// IMP=0x0010000000a117e5
- (void)startRunningNavigationAnimated:(_Bool)arg1;	// IMP=0x0010000000a115f6
- (void)stopRunningNavigationAnimated:(_Bool)arg1;	// IMP=0x0010000000a1141d
- (void)setPaused:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000a1122d
- (void)zoomOut;	// IMP=0x0010000000a11122
- (void)zoomIn;	// IMP=0x0010000000a1102b
@property(readonly, nonatomic) NavCameraController *cameraController;
- (void)_ioHIDRepeatCurrentGuidance:(id)arg1;	// IMP=0x0010000000a10f5e
- (void)_updateWithMatchedLocation:(id)arg1;	// IMP=0x0010000000a10de9
- (void)_clearAnnotations;	// IMP=0x0010000000a10c5c
- (void)_updateDirectionsAnnotationManagerDisplayedRoutes;	// IMP=0x0010000000a10a7a
- (void)_updateForCurrentRoute;	// IMP=0x0010000000a1073a
- (void)_setRoute:(id)arg1;	// IMP=0x0010000000a1055d
- (void)_setRouteWithComposedRoute:(id)arg1;	// IMP=0x0010000000a104e2
- (void)_captureCurrentNavigationState;	// IMP=0x0010000000a102ba
- (void)updateWithRoute:(id)arg1;	// IMP=0x0010000000a1022c
- (void)_setConfiguration:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000a0ff3b
- (void)configureDisplay:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000a0fda5
@property(readonly, nonatomic) id mapViewDelegate;
@property(readonly, nonatomic) __weak MKMapView *mapView;
- (id)initWithChromeViewController:(id)arg1;	// IMP=0x0010000000a0fc10
- (id)init;	// IMP=0x0010000000a0fbfc
- (void)dealloc;	// IMP=0x0010000000a0fb3d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

