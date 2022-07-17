//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CarActionButtonsCardViewController, CarMapTrackingController, CarPreciseLocationOffButtonCardViewController, CarShortcutsCardViewController, NGChromeViewController, NSArray, NSString, TrafficIncidentItemSource, UINavigationItem;

__attribute__((visibility("hidden")))
@interface CarMapBrowsingModeController
{
    _Bool _didSetInitialTracking;	// 8 = 0x8
    UINavigationItem *_navigationItem;	// 16 = 0x10
    _Bool _didStartUserInteraction;	// 24 = 0x18
    _Bool _didDisplayVehicleDisambiguation;	// 25 = 0x19
    TrafficIncidentItemSource *_incidentItemSource;	// 32 = 0x20
    CarPreciseLocationOffButtonCardViewController *_preciseLocationOffButtonCardController;	// 40 = 0x28
    CarActionButtonsCardViewController *_actionButtonsCardController;	// 48 = 0x30
    CarShortcutsCardViewController *_shortcutsCardController;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000007fd70f
@property(retain, nonatomic) CarShortcutsCardViewController *shortcutsCardController; // @synthesize shortcutsCardController=_shortcutsCardController;
@property(retain, nonatomic) CarActionButtonsCardViewController *actionButtonsCardController; // @synthesize actionButtonsCardController=_actionButtonsCardController;
@property(retain, nonatomic) CarPreciseLocationOffButtonCardViewController *preciseLocationOffButtonCardController; // @synthesize preciseLocationOffButtonCardController=_preciseLocationOffButtonCardController;
@property(readonly, nonatomic) NSArray *carFocusOrderSequences;
@property(readonly, nonatomic) int currentUsageTarget;
- (void)_findPossibleVehiclesToPairToAccessory;	// IMP=0x00100000007fb0ad
- (void)incidentsReportingEnablementDidUpdate;	// IMP=0x00100000007fb027
- (CDUnknownBlockType)presentInterruptionOfKind:(long long)arg1 userInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000007fafbe
- (_Bool)canPresentInterruptionOfKind:(long long)arg1;	// IMP=0x00100000007fafb1
- (void)locationManagerApprovalDidChange:(id)arg1;	// IMP=0x00100000007faf38
- (void)resignTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x00100000007fae09
- (void)becomeTopContextInChromeViewController:(id)arg1 withAnimation:(id)arg2;	// IMP=0x00100000007fa8d4
- (void)hideAutohidingContentWithAnimation:(id)arg1;	// IMP=0x00100000007fa869
- (void)showAutohidingContentWithAnimation:(id)arg1;	// IMP=0x00100000007fa818
@property(readonly, nonatomic) long long accessoriesHidingBehavior;
@property(readonly, nonatomic) long long autohideBehavior;
@property(readonly, nonatomic) _Bool allowKnobNudgeMapPanning;
@property(readonly, nonatomic) _Bool showsHeadingIndicator;
@property(readonly, nonatomic) _Bool showsSpeedLimit;
- (_Bool)showsMapView;	// IMP=0x00100000007fa7e2
@property(readonly, nonatomic) _Bool allowMapZoomAndRecentering;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;	// IMP=0x00100000007fa71a
- (void)mapViewDidStopUserInteraction:(id)arg1;	// IMP=0x00100000007fa709
- (_Bool)_mapViewCanChangeUserTrackingModeWhenRegionDidChange:(id)arg1;	// IMP=0x00100000007fa6f9
- (void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(_Bool)arg3 fromTrackingButton:(_Bool)arg4;	// IMP=0x00100000007fa560
- (void)mapView:(id)arg1 willStartRespondingToGesture:(long long)arg2 animated:(_Bool)arg3;	// IMP=0x00100000007fa54f
- (void)carCardView:(id)arg1 chevronButtonSelected:(id)arg2;	// IMP=0x00100000007fa4d6
- (void)actionButtonsCard:(id)arg1 didSelectAction:(unsigned long long)arg2;	// IMP=0x00100000007fa366
- (void)carShortcutsCardViewController:(id)arg1 canBeExpandedUpdated:(_Bool)arg2;	// IMP=0x00100000007fa260
- (void)carShortcutsCardViewController:(id)arg1 visibilityUpdated:(_Bool)arg2;	// IMP=0x00100000007fa102
- (void)preciseLocationOffButtonCard:(id)arg1 visibilityUpdated:(_Bool)arg2;	// IMP=0x00100000007f9fa4
- (void)preciseLocationOffButtonCardDidSelectAction:(id)arg1;	// IMP=0x00100000007f9f56
@property(readonly, nonatomic) CDStruct_917cde60 mapControlsConfiguration;
- (id)personalizedItemSources;	// IMP=0x00100000007f9e79
- (void)configureCard:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000007f99fa
- (id)desiredCards;	// IMP=0x00100000007f98b6
- (id)mapView;	// IMP=0x00100000007f9866
- (id)init;	// IMP=0x00100000007f9764

// Remaining properties
@property(readonly, nonatomic) double autohideIdlenessInterval;
@property(nonatomic) __weak NGChromeViewController *chromeViewController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool invalidAfterDisconnect;
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
