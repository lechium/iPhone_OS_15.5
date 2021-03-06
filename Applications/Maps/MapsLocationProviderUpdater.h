//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKLocationManager, NSString, NavigationSession, RoutePlanningSession;

__attribute__((visibility("hidden")))
@interface MapsLocationProviderUpdater : NSObject
{
    unsigned long long _locationProviderType;	// 8 = 0x8
    MKLocationManager *_locationManager;	// 16 = 0x10
    NavigationSession *_observedNavigationSession;	// 24 = 0x18
    RoutePlanningSession *_observedRoutePlanningSession;	// 32 = 0x20
}

+ (long long)creationPreference;	// IMP=0x002000000011f011
- (void).cxx_destruct;	// IMP=0x002000000011f531
@property(retain, nonatomic) RoutePlanningSession *observedRoutePlanningSession; // @synthesize observedRoutePlanningSession=_observedRoutePlanningSession;
@property(retain, nonatomic) NavigationSession *observedNavigationSession; // @synthesize observedNavigationSession=_observedNavigationSession;
@property(retain, nonatomic) MKLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) unsigned long long locationProviderType; // @synthesize locationProviderType=_locationProviderType;
- (void)routePlanningSession:(id)arg1 didReceiveUpdates:(id)arg2 forRoutesResult:(id)arg3;	// IMP=0x001000000011f4f2
- (void)routePlanningSession:(id)arg1 didUpdateRouteCollectionResult:(id)arg2 forTransportType:(long long)arg3;	// IMP=0x001000000011f4ec
- (void)routePlanningSession:(id)arg1 didFinishResolvingWaypointSet:(id)arg2;	// IMP=0x001000000011f4e6
- (void)routePlanningSession:(id)arg1 didChangeCurrentTransportType:(long long)arg2;	// IMP=0x001000000011f4e0
- (void)navigationSession:(id)arg1 didChangeCurrentTransportType:(long long)arg2;	// IMP=0x001000000011f4da
- (void)navigationSession:(id)arg1 didUpdateRouteCollection:(id)arg2;	// IMP=0x001000000011f4d4
- (void)mapsSession:(id)arg1 didChangeState:(unsigned long long)arg2;	// IMP=0x001000000011f4c2
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x001000000011f3d5
- (void)platformController:(id)arg1 willChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x001000000011f3cf
- (void)_updateLocationProviderType;	// IMP=0x001000000011f104
- (id)initWithLocationManager:(id)arg1;	// IMP=0x001000000011efa6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

