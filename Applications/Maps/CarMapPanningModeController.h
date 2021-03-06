//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarMapPanningViewController, CarMapTrackingController, NGChromeViewController, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface CarMapPanningModeController : NSObject
{
    CarMapPanningViewController *_viewController;	// 8 = 0x8
    _Bool _scrollWasEnabled;	// 16 = 0x10
    _Bool _mapWasPanned;	// 17 = 0x11
    NGChromeViewController *_chromeViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000099f234
@property(readonly, nonatomic) _Bool mapWasPanned; // @synthesize mapWasPanned=_mapWasPanned;
@property(nonatomic) __weak NGChromeViewController *chromeViewController; // @synthesize chromeViewController=_chromeViewController;
@property(readonly, nonatomic) int currentUsageTarget;
- (void)carMapPanningViewControllerDidTapDone:(id)arg1;	// IMP=0x001000000099f1e7
- (void)carMapPanningViewControllerDidPan:(id)arg1 inDirection:(long long)arg2;	// IMP=0x001000000099f193
- (void)mapView:(id)arg1 willStartRespondingToGesture:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x001000000099f183
- (void)_doneButtonPressed;	// IMP=0x001000000099f0b5
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
- (void)configureNavigationDisplay:(id)arg1;	// IMP=0x001000000099f057
- (void)layoutForUnobscuredBoundsChange;	// IMP=0x001000000099f041
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x001000000099ef28
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x001000000099ecc1
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
- (_Bool)showsNavigationBar;	// IMP=0x001000000099ec69
- (id)fullscreenViewController;	// IMP=0x001000000099ec5b
- (_Bool)supportsAlternateRouteSelection;	// IMP=0x001000000099ec53
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
@property(readonly, nonatomic) _Bool showsSpeedLimit;
@property(readonly, nonatomic) _Bool showsHeadingIndicator;
@property(readonly, nonatomic) CDStruct_917cde60 mapControlsConfiguration;
- (_Bool)showsMapView;	// IMP=0x001000000099ec14
- (id)mapView;	// IMP=0x001000000099ebc4
- (id)init;	// IMP=0x001000000099eb5a

// Remaining properties
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) long long autohideBehavior;
@property(readonly, nonatomic) double autohideIdlenessInterval;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *preferredCarFocusEnvironments;
@property(readonly, nonatomic) _Bool shouldAccessoriesModifyMapInsets;
@property(readonly, nonatomic) _Bool shouldAllowKnobFocusMovement;
@property(readonly, nonatomic) _Bool shouldTimeoutAfterDisconnect;
@property(readonly, nonatomic) _Bool shouldTimeoutDuringNavigation;
@property(readonly) Class superclass;
@property(readonly, nonatomic) CarMapTrackingController *trackingController;
@property(readonly, nonatomic) id visuallySelectedItem;
@property(readonly, nonatomic) _Bool zoomInButtonPressed;
@property(readonly, nonatomic) _Bool zoomOutButtonPressed;

@end

