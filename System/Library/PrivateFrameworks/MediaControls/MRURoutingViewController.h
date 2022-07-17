//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <MediaControls/CARSessionObserving-Protocol.h>
#import <MediaControls/MPAVRoutingControllerDelegate-Protocol.h>
#import <MediaControls/MRUEndpointMetadataControllerObserver-Protocol.h>
#import <MediaControls/MRURoutingTableViewCellDelegate-Protocol.h>
#import <MediaControls/UIGestureRecognizerDelegate-Protocol.h>
#import <MediaControls/UITableViewDataSource-Protocol.h>
#import <MediaControls/UITableViewDelegate-Protocol.h>
#import <MediaControls/UITableViewDelegatePrivate-Protocol.h>

@class CARSessionStatus, MPAVEndpointRoute, MPAVRoute, MPAVRoutingController, MPSectionedCollection, MPVolumeGroupSliderCoordinator, MPWeakTimer, MRURoutingView, MRURoutingViewControllerUpdate, MRUVisualStylingProvider, NSArray, NSDictionary, NSMapTable, NSMutableSet, NSNumberFormatter, NSString, NSTimer;
@protocol MRURoutingViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MRURoutingViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITableViewDelegatePrivate, MPAVRoutingControllerDelegate, MRURoutingTableViewCellDelegate, MRUEndpointMetadataControllerObserver, CARSessionObserving, UIGestureRecognizerDelegate>
{
    MRURoutingViewControllerUpdate *_pendingUpdate;	// 8 = 0x8
    MRURoutingViewControllerUpdate *_optimisticUpdate;	// 16 = 0x10
    _Bool _isAnimatingUpdate;	// 24 = 0x18
    MPAVRoute *_displayedEndpointRoute;	// 32 = 0x20
    MPSectionedCollection *_routingViewItems;	// 40 = 0x28
    NSArray *_cachedPickedRoutes;	// 48 = 0x30
    NSArray *_cachedDisplayableAvailableRoutes;	// 56 = 0x38
    NSArray *_cachedPendingPickedRoutes;	// 64 = 0x40
    NSArray *_cachedDisplayAsPickedRoutes;	// 72 = 0x48
    NSArray *_cachedVolumeCapableRoutes;	// 80 = 0x50
    NSDictionary *_cachedRouteGrouping;	// 88 = 0x58
    MPWeakTimer *_updateTimer;	// 96 = 0x60
    int _airPlayPasswordAlertDidAppearToken;	// 104 = 0x68
    int _airPlayPasswordAlertDidCancelToken;	// 108 = 0x6c
    _Bool _airPlayPasswordAlertDidAppearTokenIsValid;	// 112 = 0x70
    _Bool _hasUserSelections;	// 113 = 0x71
    unsigned long long _updatesSincePresentation;	// 120 = 0x78
    _Bool _sortByIsVideoRoute;	// 128 = 0x80
    _Bool _showMetadataForEndpointRoute;	// 129 = 0x81
    _Bool _onScreen;	// 130 = 0x82
    _Bool _needsDisplayedRoutesUpdate;	// 131 = 0x83
    MPAVRoutingController *_routingController;	// 136 = 0x88
    id <MRURoutingViewControllerDelegate> _delegate;	// 144 = 0x90
    MRUVisualStylingProvider *_stylingProvider;	// 152 = 0x98
    MPVolumeGroupSliderCoordinator *_groupSliderCoordinator;	// 160 = 0xa0
    NSArray *_metadataControllers;	// 168 = 0xa8
    MPAVEndpointRoute *_endpointRoute;	// 176 = 0xb0
    long long _discoveryMode;	// 184 = 0xb8
    NSMapTable *_outputDeviceVolumeSliders;	// 192 = 0xc0
    CARSessionStatus *_carPlaySessionStatus;	// 200 = 0xc8
    NSMutableSet *_expandedGroupUIDs;	// 208 = 0xd0
    NSMutableSet *_expandedItemUIDs;	// 216 = 0xd8
    NSDictionary *_indexedMetadataControllers;	// 224 = 0xe0
    NSNumberFormatter *_percentageFormatter;	// 232 = 0xe8
    MPWeakTimer *_subtitleUpdateTimer;	// 240 = 0xf0
    NSTimer *_collapseTimer;	// 248 = 0xf8
    unsigned long long _stateHandle;	// 256 = 0x100
    struct UIEdgeInsets _contentEdgeInsets;	// 264 = 0x108
    struct UIEdgeInsets _scrollIndicatorInsets;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x0000000000014fe8
@property(nonatomic) unsigned long long stateHandle; // @synthesize stateHandle=_stateHandle;
@property(retain, nonatomic) NSTimer *collapseTimer; // @synthesize collapseTimer=_collapseTimer;
@property(retain, nonatomic) MPWeakTimer *subtitleUpdateTimer; // @synthesize subtitleUpdateTimer=_subtitleUpdateTimer;
@property(retain, nonatomic) NSNumberFormatter *percentageFormatter; // @synthesize percentageFormatter=_percentageFormatter;
@property(nonatomic) _Bool needsDisplayedRoutesUpdate; // @synthesize needsDisplayedRoutesUpdate=_needsDisplayedRoutesUpdate;
@property(retain, nonatomic) NSDictionary *indexedMetadataControllers; // @synthesize indexedMetadataControllers=_indexedMetadataControllers;
@property(retain, nonatomic) NSMutableSet *expandedItemUIDs; // @synthesize expandedItemUIDs=_expandedItemUIDs;
@property(retain, nonatomic) NSMutableSet *expandedGroupUIDs; // @synthesize expandedGroupUIDs=_expandedGroupUIDs;
@property(retain, nonatomic) CARSessionStatus *carPlaySessionStatus; // @synthesize carPlaySessionStatus=_carPlaySessionStatus;
@property(retain, nonatomic) NSMapTable *outputDeviceVolumeSliders; // @synthesize outputDeviceVolumeSliders=_outputDeviceVolumeSliders;
@property(nonatomic) _Bool onScreen; // @synthesize onScreen=_onScreen;
@property(nonatomic) struct UIEdgeInsets scrollIndicatorInsets; // @synthesize scrollIndicatorInsets=_scrollIndicatorInsets;
@property(nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(nonatomic) _Bool showMetadataForEndpointRoute; // @synthesize showMetadataForEndpointRoute=_showMetadataForEndpointRoute;
@property(nonatomic) _Bool sortByIsVideoRoute; // @synthesize sortByIsVideoRoute=_sortByIsVideoRoute;
@property(nonatomic) long long discoveryMode; // @synthesize discoveryMode=_discoveryMode;
@property(retain, nonatomic) MPAVEndpointRoute *endpointRoute; // @synthesize endpointRoute=_endpointRoute;
@property(retain, nonatomic) NSArray *metadataControllers; // @synthesize metadataControllers=_metadataControllers;
@property(retain, nonatomic) MPVolumeGroupSliderCoordinator *groupSliderCoordinator; // @synthesize groupSliderCoordinator=_groupSliderCoordinator;
@property(retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // @synthesize stylingProvider=_stylingProvider;
@property(nonatomic) __weak id <MRURoutingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MPAVRoutingController *routingController; // @synthesize routingController=_routingController;
- (id)_fullStateDumpObject;	// IMP=0x0000000000014c5c
- (id)_stateDumpObject;	// IMP=0x0000000000014b5d
- (_Bool)routesContainAirPlayGroupableRoute:(id)arg1;	// IMP=0x0000000000014a0f
- (_Bool)routesContainSplitterCapableRoute:(id)arg1;	// IMP=0x000000000001487d
- (_Bool)routesContainMultipleBuiltIn:(id)arg1;	// IMP=0x000000000001470c
- (id)_createSectionedCollection:(id)arg1 withPickedRoutes:(id)arg2;	// IMP=0x000000000001441a
- (void)_collapseAllGroupsAfterDelay;	// IMP=0x0000000000014381
- (void)_collapseAllGroups;	// IMP=0x0000000000014338
- (id)_createRoutingViewItemsForRoutes:(id)arg1;	// IMP=0x00000000000136eb
- (id)groupUIDForRoute:(id)arg1;	// IMP=0x0000000000013607
- (void)_applyUpdate:(id)arg1;	// IMP=0x0000000000012e02
- (void)updateExpandedGroups;	// IMP=0x0000000000012d20
- (id)endpointGroupUID;	// IMP=0x0000000000012c7a
- (id)_createReloadUpdate;	// IMP=0x0000000000012c39
- (id)_createRefreshUpdate;	// IMP=0x0000000000012b8c
- (void)_enqueueUpdate:(id)arg1;	// IMP=0x0000000000012b05
- (void)didReceiveInteraction:(id)arg1;	// IMP=0x0000000000012ae3
- (void)setOptimisticUpdate:(id)arg1;	// IMP=0x0000000000012a5f
- (void)_updateDisplayedRoutes;	// IMP=0x0000000000012a13
- (void)_createUpdateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000012976
- (id)_displayAsPickedRoutesInRoutes:(id)arg1;	// IMP=0x00000000000127e7
- (id)_displayableRoutesInRoutes:(id)arg1;	// IMP=0x000000000001275c
- (void)_setupUpdateTimerIfNecessary;	// IMP=0x000000000001262b
- (void)_setNeedsDisplayedRoutesUpdate;	// IMP=0x00000000000125cc
- (void)_setNeedsRouteDiscoveryModeUpdate;	// IMP=0x0000000000012550
- (void)_diplayShareAudioDisabledAlertForReason:(id)arg1;	// IMP=0x0000000000012480
- (_Bool)_wouldShareAudioForPickedRoute:(id)arg1 operation:(long long)arg2 pickedRoutes:(id)arg3;	// IMP=0x00000000000123c9
- (void)enqueueRefreshUpdate;	// IMP=0x000000000001236a
- (long long)subtitleAccessoryForItem:(id)arg1 metadataController:(id)arg2;	// IMP=0x0000000000012296
- (void)updateSubtitle;	// IMP=0x00000000000121b1
- (void)updateMetadataForController:(id)arg1;	// IMP=0x0000000000011d95
- (void)updateMetadata;	// IMP=0x00000000000118c1
- (void)updateMetadataControllersForRoutes:(id)arg1;	// IMP=0x00000000000113a2
- (void)updateHeaderView:(id)arg1 forSection:(long long)arg2;	// IMP=0x00000000000112b8
- (void)updateCell:(id)arg1 forIndexPath:(id)arg2;	// IMP=0x0000000000010906
- (_Bool)_operationRequiresOptimisticState:(long long)arg1 routes:(id)arg2;	// IMP=0x0000000000010701
- (void)volumeSliderVolumeControlAvailabilityDidChangeNotification:(id)arg1;	// IMP=0x0000000000010612
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x000000000001060a
- (void)sessionDidDisconnect:(id)arg1;	// IMP=0x0000000000010551
- (void)sessionDidConnect:(id)arg1;	// IMP=0x0000000000010498
- (void)metadataControllerRouteDidUpdate:(id)arg1;	// IMP=0x0000000000010486
- (void)metadataController:(id)arg1 didLoadNewResponse:(id)arg2;	// IMP=0x0000000000010474
- (_Bool)metadataControllerShouldAutomaticallyUpdateReponse:(id)arg1;	// IMP=0x0000000000010464
- (void)routingCellDidTapToExpand:(id)arg1;	// IMP=0x0000000000010302
- (void)routingController:(id)arg1 shouldHijackRoute:(id)arg2 alertStyle:(long long)arg3 busyRouteName:(id)arg4 presentingAppName:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x000000000000ff37
- (void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2;	// IMP=0x000000000000ff25
- (void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2;	// IMP=0x000000000000ff13
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;	// IMP=0x000000000000fedc
- (_Bool)tableView:(id)arg1 shouldHaveFullLengthBottomSeparatorForSection:(long long)arg2;	// IMP=0x000000000000feb3
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000000f8d9
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x000000000000f828
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000f770
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000f68b
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000000f67d
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x000000000000f664
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000000f644
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000000f627
- (void)resetDisplayedRoutes;	// IMP=0x000000000000f4a8
- (_Bool)isInVehicle;	// IMP=0x000000000000f46f
- (_Bool)hasCarKitRoute;	// IMP=0x000000000000f329
@property(readonly, nonatomic, getter=isInCarPlay) _Bool inCarPlay;
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000000f0d3
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;	// IMP=0x000000000000f067
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000000efce
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x000000000000ef8b
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000ef45
- (void)viewDidLoad;	// IMP=0x000000000000ea5d
- (void)loadView;	// IMP=0x000000000000ea24
- (void)dealloc;	// IMP=0x000000000000e97c
- (id)initWithRoutingController:(id)arg1;	// IMP=0x000000000000e7fb
- (id)init;	// IMP=0x000000000000e76e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) MRURoutingView *view; // @dynamic view;
@property(retain, nonatomic) MRURoutingView *viewIfLoaded; // @dynamic viewIfLoaded;

@end
