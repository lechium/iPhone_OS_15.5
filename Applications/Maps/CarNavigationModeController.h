//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AudioPreferences, CarCompressionTestCardViewController, CarETACardViewController, CarGuidanceCardViewController, CarMapTrackingController, CarTrafficAlertCardViewController, GEOComposedRoute, GuidanceObserver, MNLocation, NGChromeViewController, NSArray, NSMutableSet, NSString, NavigationRoutePauser;

__attribute__((visibility("hidden")))
@interface CarNavigationModeController : NSObject
{
    MNLocation *_lastKnownLocation;	// 8 = 0x8
    _Bool _forceShareButtonHidden;	// 16 = 0x10
    NSMutableSet *_invalidatedAlertIds;	// 24 = 0x18
    _Bool _observingAudioKeys;	// 32 = 0x20
    _Bool _isTogglingETACard;	// 33 = 0x21
    _Bool _showingJunctionView;	// 34 = 0x22
    _Bool _hasArrived;	// 35 = 0x23
    NGChromeViewController *_chromeViewController;	// 40 = 0x28
    long long _cameraStyle;	// 48 = 0x30
    CarGuidanceCardViewController *_guidanceCardController;	// 56 = 0x38
    CarETACardViewController *_etaCardController;	// 64 = 0x40
    CarTrafficAlertCardViewController *_trafficAlertCardController;	// 72 = 0x48
    CarCompressionTestCardViewController *_compressionTestCardController;	// 80 = 0x50
    NavigationRoutePauser *_routePauser;	// 88 = 0x58
    GEOComposedRoute *_currentRoute;	// 96 = 0x60
    AudioPreferences *_audioPreferences;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0020000000127db1
@property(retain, nonatomic) AudioPreferences *audioPreferences; // @synthesize audioPreferences=_audioPreferences;
@property(nonatomic) _Bool hasArrived; // @synthesize hasArrived=_hasArrived;
@property(nonatomic, getter=isShowingJunctionView) _Bool showingJunctionView; // @synthesize showingJunctionView=_showingJunctionView;
@property(nonatomic) _Bool isTogglingETACard; // @synthesize isTogglingETACard=_isTogglingETACard;
@property(retain, nonatomic) GEOComposedRoute *currentRoute; // @synthesize currentRoute=_currentRoute;
@property(retain, nonatomic) NavigationRoutePauser *routePauser; // @synthesize routePauser=_routePauser;
@property(retain, nonatomic) CarCompressionTestCardViewController *compressionTestCardController; // @synthesize compressionTestCardController=_compressionTestCardController;
@property(retain, nonatomic) CarTrafficAlertCardViewController *trafficAlertCardController; // @synthesize trafficAlertCardController=_trafficAlertCardController;
@property(retain, nonatomic) CarETACardViewController *etaCardController; // @synthesize etaCardController=_etaCardController;
@property(retain, nonatomic) CarGuidanceCardViewController *guidanceCardController; // @synthesize guidanceCardController=_guidanceCardController;
@property(nonatomic) long long cameraStyle; // @synthesize cameraStyle=_cameraStyle;
@property(nonatomic) __weak NGChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(readonly, nonatomic) int currentUsageTarget;
- (void)carNavigationDisplayUserDidTapMap:(id)arg1;	// IMP=0x0010000000127c7c
- (void)carNavigationDisplay:(id)arg1 configurationDidChange:(id)arg2;	// IMP=0x0010000000127c33
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
- (void)compressionTestCardRequestsDismiss:(id)arg1;	// IMP=0x001000000012787c
- (void)compressionTestCard:(id)arg1 reloadWithSpacerHeight:(double)arg2 priority:(float)arg3;	// IMP=0x001000000012777d
- (void)_loadCompressionTestCardWithHeight:(double)arg1 priority:(float)arg2;	// IMP=0x001000000012763c
- (void)sharedTripService:(id)arg1 didUpdateSharingIdentity:(id)arg2;	// IMP=0x0010000000127625
- (void)sharedTripService:(id)arg1 sharingDidInvalidateWithError:(id)arg2;	// IMP=0x001000000012760e
- (void)sharedTripService:(id)arg1 didUpdateReceivers:(id)arg2;	// IMP=0x00100000001275f7
- (void)sharedTripServiceDidUpdateSendingAvailability:(id)arg1;	// IMP=0x00100000001275e0
- (void)trafficAlertCardViewControllerDismiss:(id)arg1;	// IMP=0x00100000001273d9
- (void)navigationService:(id)arg1 didInvalidateTrafficIncidentAlert:(id)arg2;	// IMP=0x00100000001272c2
- (void)navigationService:(id)arg1 didUpdateTrafficIncidentAlert:(id)arg2;	// IMP=0x001000000012711f
- (void)navigationService:(id)arg1 didReceiveTrafficIncidentAlert:(id)arg2 responseCallback:(CDUnknownBlockType)arg3;	// IMP=0x0010000000126ffc
- (void)navigationService:(id)arg1 hideJunctionViewForId:(id)arg2;	// IMP=0x0010000000126fc3
- (void)navigationService:(id)arg1 showJunctionView:(id)arg2;	// IMP=0x0010000000126f87
- (void)navigationService:(id)arg1 didChangeFromState:(unsigned long long)arg2 toState:(unsigned long long)arg3;	// IMP=0x0010000000126f0f
- (void)navigationService:(id)arg1 didChangeVoiceGuidanceLevel:(unsigned long long)arg2;	// IMP=0x0010000000126ed2
- (void)navigationService:(id)arg1 didEnableGuidancePrompts:(_Bool)arg2;	// IMP=0x0010000000126e7b
- (void)navigationService:(id)arg1 didArriveAtWaypoint:(id)arg2 endOfLegIndex:(unsigned long long)arg3;	// IMP=0x0010000000126dab
- (void)navigationService:(id)arg1 didReroute:(id)arg2;	// IMP=0x0010000000126d96
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x0010000000126d90
- (void)mapView:(id)arg1 didBecomePitched:(_Bool)arg2;	// IMP=0x0010000000126d8a
- (void)_toggleETACard;	// IMP=0x0010000000126567
- (void)_setupGuidanceDisplays:(_Bool)arg1;	// IMP=0x0010000000126340
- (_Bool)_shouldShowShareButton;	// IMP=0x00100000001262b6
- (void)_updateShareButtonContentAndVisibility:(_Bool)arg1;	// IMP=0x0010000000126260
- (void)etaCardSign:(id)arg1 didSelectAction:(unsigned long long)arg2;	// IMP=0x0010000000125e79
- (id)sharingButtonTitle;	// IMP=0x0010000000125c7c
- (_Bool)isSharingTrip;	// IMP=0x0010000000125c03
- (void)_captureUserToggledCameraStyle;	// IMP=0x0010000000125b91
- (void)_captureCurrentNavigationState;	// IMP=0x0010000000125b2b
- (void)_toggleCameraStyle;	// IMP=0x0010000000125993
- (void)refreshCameraTypeAnimated:(_Bool)arg1;	// IMP=0x0010000000125876
- (void)endNavigation;	// IMP=0x001000000012585d
- (void)_ppt_notityETATrayUpdateCompleted;	// IMP=0x0010000000125837
- (void)setTrayExpanded:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000001256d1
- (void)setCameraStyle:(long long)arg1 animated:(_Bool)arg2;	// IMP=0x0010000000125660
- (void)audioControlView:(id)arg1 didSelectAudioType:(unsigned long long)arg2;	// IMP=0x001000000012557c
- (unsigned long long)audioSettingsCurrentState;	// IMP=0x0010000000125401
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000001251f8
- (void)toggleCameraPressed;	// IMP=0x00100000001251e6
- (void)hideAutohidingContentWithAnimation:(id)arg1;	// IMP=0x001000000012517a
- (void)configureNavigationDisplay:(id)arg1;	// IMP=0x0010000000125119
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x0010000000124e60
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x00100000001248bf
- (id)personalizedItemSources;	// IMP=0x0010000000124711
- (void)configureCard:(id)arg1 forKey:(id)arg2;	// IMP=0x0010000000123f93
- (id)desiredCards;	// IMP=0x0010000000123e90
- (void)_initializeRoutePauserIfNeeded;	// IMP=0x0010000000123d65
- (void)configureFocusContainerGuideController:(id)arg1;	// IMP=0x0010000000123d4b
- (_Bool)supportsAlternateRouteSelection;	// IMP=0x0010000000123ab7
- (_Bool)shouldSuppressAutohideRecognizerForTouch:(id)arg1;	// IMP=0x00100000001238be
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) long long autohideBehavior;
@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
- (_Bool)showsNavigationBar;	// IMP=0x001000000012387f
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
@property(readonly, nonatomic) _Bool showsSpeedLimit;
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) _Bool showsHeadingIndicator;
- (CDStruct_917cde60);	// IMP=0x0010000000123796
- (_Bool)showsMapView;	// IMP=0x001000000012378e
@property(readonly, nonatomic) GuidanceObserver *guidanceObserver;
- (id)mapView;	// IMP=0x00100000001236e7
- (id)init;	// IMP=0x00100000001235e3
- (void)dealloc;	// IMP=0x0010000000123548

// Remaining properties
@property(readonly, nonatomic) double autohideIdlenessInterval;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
@property(readonly, nonatomic) CDStruct_917cde60 mapControlsConfiguration;
@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
@property(readonly) Class superclass;
@property(readonly, nonatomic) CarMapTrackingController *trackingController;
@property(readonly, nonatomic) id visuallySelectedItem;
@property(readonly, nonatomic) _Bool zoomInButtonPressed;
@property(readonly, nonatomic) _Bool zoomOutButtonPressed;

@end

