//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface RoutePlanningRoutingAppsController
{
}

- (void)routingAppSelectionControllerDidSelectApp:(id)arg1;	// IMP=0x002000000067d95b
- (void)routingAppSelectionControllerDidCancel:(id)arg1;	// IMP=0x001000000067d8dd
- (void)headerViewButtonTapped:(id)arg1;	// IMP=0x001000000067d84b
- (void)routePlanningDataCoordinator:(id)arg1 didUpdateResolvedWaypointSet:(id)arg2;	// IMP=0x001000000067d836
@property(readonly, nonatomic) long long observedRoutePlanningData;
- (void)_updateWaypointSet:(id)arg1;	// IMP=0x001000000067d6e7
- (id)initWithDataCoordination:(id)arg1;	// IMP=0x001000000067d5a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

