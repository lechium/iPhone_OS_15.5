//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <MediaPlayer/CARSessionObserving-Protocol.h>
#import <MediaPlayer/MPAVRoutingControllerDelegate-Protocol.h>
#import <MediaPlayer/MPAVRoutingTableViewCellDelegate-Protocol.h>
#import <MediaPlayer/UITableViewDataSource-Protocol.h>
#import <MediaPlayer/UITableViewDelegate-Protocol.h>

@class CARSessionStatus, MPAVClippingTableView, MPAVEndpointRoute, MPAVRoute, MPAVRoutingController, MPAVRoutingViewControllerUpdate, MPSectionedCollection, MPVolumeGroupSliderCoordinator, MPWeakTimer, NSArray, NSDictionary, NSMapTable, NSMutableSet, NSNumber, NSString, UIColor, UITableView;
@protocol MPAVRoutingViewControllerDelegate, MPAVRoutingViewControllerThemeDelegate;

@interface MPAVRoutingViewController : UIViewController <CARSessionObserving, UITableViewDataSource, UITableViewDelegate, MPAVRoutingControllerDelegate, MPAVRoutingTableViewCellDelegate>
{
    MPAVClippingTableView *_tableView;	// 8 = 0x8
    MPAVRoutingViewControllerUpdate *_pendingUpdate;	// 16 = 0x10
    MPAVRoutingViewControllerUpdate *_optimisticUpdate;	// 24 = 0x18
    _Bool _isAnimatingUpdate;	// 32 = 0x20
    MPAVRoute *_displayedEndpointRoute;	// 40 = 0x28
    MPSectionedCollection *_routingViewItems;	// 48 = 0x30
    NSArray *_cachedPickedRoutes;	// 56 = 0x38
    NSArray *_cachedDisplayableAvailableRoutes;	// 64 = 0x40
    NSArray *_cachedPendingPickedRoutes;	// 72 = 0x48
    NSArray *_cachedDisplayAsPickedRoutes;	// 80 = 0x50
    NSArray *_cachedVolumeCapableRoutes;	// 88 = 0x58
    NSDictionary *_cachedRouteGrouping;	// 96 = 0x60
    NSMutableSet *_expandedGroupUIDs;	// 104 = 0x68
    MPWeakTimer *_updateTimer;	// 112 = 0x70
    MPAVRoutingController *_routingController;	// 120 = 0x78
    long long _routeDiscoveryMode;	// 128 = 0x80
    UIColor *_tableCellsBackgroundColor;	// 136 = 0x88
    UIColor *_tableCellsContentColor;	// 144 = 0x90
    int _airPlayPasswordAlertDidAppearToken;	// 152 = 0x98
    int _airPlayPasswordAlertDidCancelToken;	// 156 = 0x9c
    _Bool _airPlayPasswordAlertDidAppearTokenIsValid;	// 160 = 0xa0
    _Bool _needsDisplayedRoutesUpdate;	// 161 = 0xa1
    _Bool _suspendedDiscoveryModeDueToApplicationState;	// 162 = 0xa2
    _Bool _shouldAutomaticallyUpdateRoutesList;	// 163 = 0xa3
    _Bool _shouldPickRouteOnSelection;	// 164 = 0xa4
    _Bool _onScreen;	// 165 = 0xa5
    _Bool _hasUserSelections;	// 166 = 0xa6
    CARSessionStatus *_carPlayStatus;	// 168 = 0xa8
    unsigned long long _updatesSincePresentation;	// 176 = 0xb0
    long long _discoveryModeBeforeEnteringBackground;	// 184 = 0xb8
    _Bool _sortByIsVideoRoute;	// 192 = 0xc0
    unsigned long long _style;	// 200 = 0xc8
    id <MPAVRoutingViewControllerDelegate> _delegate;	// 208 = 0xd0
    long long _avItemType;	// 216 = 0xd8
    unsigned long long _mirroringStyle;	// 224 = 0xe0
    unsigned long long _iconStyle;	// 232 = 0xe8
    NSNumber *_discoveryModeOverride;	// 240 = 0xf0
    id <MPAVRoutingViewControllerThemeDelegate> _themeDelegate;	// 248 = 0xf8
    MPAVEndpointRoute *_endpointRoute;	// 256 = 0x100
    double _continuousCornerRadius;	// 264 = 0x108
    NSMapTable *_outputDeviceVolumeSliders;	// 272 = 0x110
    MPVolumeGroupSliderCoordinator *_groupSliderCoordinator;	// 280 = 0x118
}

- (void).cxx_destruct;	// IMP=0x000000000011e51a
@property(nonatomic) _Bool sortByIsVideoRoute; // @synthesize sortByIsVideoRoute=_sortByIsVideoRoute;
@property(retain, nonatomic) MPVolumeGroupSliderCoordinator *groupSliderCoordinator; // @synthesize groupSliderCoordinator=_groupSliderCoordinator;
@property(retain, nonatomic) NSMapTable *outputDeviceVolumeSliders; // @synthesize outputDeviceVolumeSliders=_outputDeviceVolumeSliders;
@property(nonatomic, getter=_continuousCornerRadius, setter=_setContinuousCornerRadius:) double continuousCornerRadius; // @synthesize continuousCornerRadius=_continuousCornerRadius;
@property(retain, nonatomic) MPAVEndpointRoute *endpointRoute; // @synthesize endpointRoute=_endpointRoute;
@property(nonatomic) __weak id <MPAVRoutingViewControllerThemeDelegate> themeDelegate; // @synthesize themeDelegate=_themeDelegate;
@property(copy, nonatomic) NSNumber *discoveryModeOverride; // @synthesize discoveryModeOverride=_discoveryModeOverride;
@property(nonatomic) unsigned long long iconStyle; // @synthesize iconStyle=_iconStyle;
@property(nonatomic) unsigned long long mirroringStyle; // @synthesize mirroringStyle=_mirroringStyle;
@property(nonatomic, setter=setAVItemType:) long long avItemType; // @synthesize avItemType=_avItemType;
@property(nonatomic) __weak id <MPAVRoutingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
- (_Bool)shouldGroupRoutingViewItems;	// IMP=0x000000000011e3ea
- (id)_stateDumpObject;	// IMP=0x000000000011e1fa
- (id)_createSectionedCollection:(id)arg1 withPickedRoutes:(id)arg2;	// IMP=0x000000000011dd3b
- (void)_collapseAllGroups;	// IMP=0x000000000011dd1e
- (id)_createRoutingViewItemsForRoutes:(id)arg1;	// IMP=0x000000000011d185
- (id)groupUIDForRoute:(id)arg1;	// IMP=0x000000000011d0a1
- (void)_endUpdates;	// IMP=0x000000000011d062
- (id)_createVolumeSlider;	// IMP=0x000000000011d05a
- (_Bool)_shouldDisplayRouteAsPicked:(id)arg1;	// IMP=0x000000000011cfe7
- (double)_tableViewFooterViewHeight;	// IMP=0x000000000011cfc6
- (double)_tableViewHeaderViewHeight;	// IMP=0x000000000011cfa5
- (void)_applyUpdate:(id)arg1;	// IMP=0x000000000011c8ca
- (void)updateExpandedGroups;	// IMP=0x000000000011c7e8
- (id)endpointGroupUID;	// IMP=0x000000000011c742
- (id)_createReloadUpdate;	// IMP=0x000000000011c701
- (id)_createRefreshUpdate;	// IMP=0x000000000011c654
- (void)_enqueueUpdate:(id)arg1;	// IMP=0x000000000011c5e3
- (void)setOptimisticUpdate:(id)arg1;	// IMP=0x000000000011c55f
- (void)_updateDisplayedRoutes;	// IMP=0x000000000011c506
- (void)_createUpdateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000011c469
- (id)_volumeCapableRoutesInRoutes:(id)arg1;	// IMP=0x000000000011c180
- (id)_displayAsPickedRoutesInRoutes:(id)arg1;	// IMP=0x000000000011bfe1
- (id)_displayableRoutesInRoutes:(id)arg1;	// IMP=0x000000000011bf21
- (void)_volumeSliderVolumeControlAvailabilityDidChangeNotification:(id)arg1;	// IMP=0x000000000011bec2
- (void)_setNeedsDisplayedRoutesUpdate;	// IMP=0x000000000011be63
- (void)_setNeedsRouteDiscoveryModeUpdate;	// IMP=0x000000000011bdc5
- (void)_setRouteDiscoveryMode:(long long)arg1;	// IMP=0x000000000011bda0
- (void)_setupUpdateTimerIfNecessary;	// IMP=0x000000000011bc6f
- (void)_endRouteDiscovery;	// IMP=0x000000000011bc5b
- (void)_beginRouteDiscovery;	// IMP=0x000000000011bc44
- (void)_unregisterNotifications;	// IMP=0x000000000011bb9a
- (void)_registerCarPlayObserver;	// IMP=0x000000000011bb55
- (void)_registerNotifications;	// IMP=0x000000000011baaf
- (void)_configureCell:(id)arg1 forIndexPath:(id)arg2;	// IMP=0x000000000011b042
- (_Bool)_operationRequiresOptimisticState:(long long)arg1 routes:(id)arg2;	// IMP=0x000000000011ae3d
- (void)_applicationWillEnterForegroundNotification:(id)arg1;	// IMP=0x000000000011ae04
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;	// IMP=0x000000000011adb5
- (double)_tableViewHeightAccordingToDataSource;	// IMP=0x000000000011acd3
- (void)_diplayShareAudioDisabledAlertForReason:(id)arg1;	// IMP=0x000000000011abc8
- (_Bool)_wouldShareAudioForPickedRoute:(id)arg1 operation:(long long)arg2 pickedRoutes:(id)arg3;	// IMP=0x000000000011aaea
@property(nonatomic, setter=_setShouldPickRouteOnSelection:) _Bool _shouldPickRouteOnSelection;
@property(nonatomic, setter=_setShouldAutomaticallyUpdateRoutesList:) _Bool _shouldAutomaticallyUpdateRoutesList;
@property(retain, nonatomic, setter=_setTableCellsContentColor:) UIColor *_tableCellsContentColor;
@property(retain, nonatomic, setter=_setTableCellsBackgroundColor:) UIColor *_tableCellsBackgroundColor;
@property(readonly, nonatomic) UITableView *_tableView;
@property(readonly, nonatomic) double _normalCellHeight;
@property(readonly, nonatomic) double _expandedCellHeight;
@property(readonly, nonatomic) MPAVRoutingController *_routingController;
- (void)enqueueRefreshUpdate;	// IMP=0x000000000011a804
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x000000000011a74d
- (void)sessionDidConnect:(id)arg1;	// IMP=0x000000000011a696
- (void)routingCellDidTapToExpand:(id)arg1;	// IMP=0x000000000011a594
- (void)routingCell:(id)arg1 mirroringSwitchValueDidChange:(_Bool)arg2;	// IMP=0x000000000011a568
- (void)routingController:(id)arg1 shouldHijackRoute:(id)arg2 alertStyle:(long long)arg3 busyRouteName:(id)arg4 presentingAppName:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x0000000000119f8a
- (void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2;	// IMP=0x0000000000119f78
- (void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2;	// IMP=0x0000000000119f66
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;	// IMP=0x0000000000119f2f
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000119ebd
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000119e4b
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x00000000001197bc
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000119742
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x00000000001196c4
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000119688
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000000119610
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000001195fa
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x00000000001195da
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x00000000001195bd
- (struct CGSize)preferredContentSize;	// IMP=0x0000000000119513
- (_Bool)shouldOverrideContentSizeCategory:(id)arg1;	// IMP=0x00000000001194ca
- (void)viewWillLayoutSubviews;	// IMP=0x0000000000119310
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x0000000000119282
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x00000000001191dc
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000011915e
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000119112
- (void)registerTableViewCells;	// IMP=0x000000000011909e
- (void)viewDidLoad;	// IMP=0x0000000000118d75
- (void)resetScrollPosition;	// IMP=0x0000000000118ce2
- (void)resetDisplayedRoutes;	// IMP=0x0000000000118cc5
- (_Bool)isInVehicle;	// IMP=0x0000000000118c8c
- (_Bool)hasCarKitRoute;	// IMP=0x0000000000118b46
@property(readonly, nonatomic, getter=isInCarPlay) _Bool inCarPlay;
@property(nonatomic) _Bool allowMirroring;
- (void)dealloc;	// IMP=0x00000000001188b3
- (id)initWithStyle:(unsigned long long)arg1 routingController:(id)arg2;	// IMP=0x000000000011883d
- (id)initWithStyle:(unsigned long long)arg1;	// IMP=0x00000000001187e1
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x000000000011878e
- (void)_initWithStyle:(unsigned long long)arg1 routingController:(id)arg2;	// IMP=0x00000000001184ee

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
