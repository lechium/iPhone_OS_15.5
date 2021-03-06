//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARGarageDoor, CARLocationManager, CARNetworkPathMonitor, CARObserverHashTable, CLLocation, HMHome, NSArray, NSDictionary, NSMutableDictionary, NSString, NSUUID;

@interface CARHome : NSObject
{
    _Bool _garageDoorRefreshScheduled;	// 8 = 0x8
    _Bool _previouslyInRange;	// 9 = 0x9
    _Bool _inExtendedRange;	// 10 = 0xa
    CARGarageDoor *_lastUsedGarageDoor;	// 16 = 0x10
    HMHome *_home;	// 24 = 0x18
    NSDictionary *_cachedGarageDoors;	// 32 = 0x20
    NSMutableDictionary *_lastUsedIdentifiersByServiceType;	// 40 = 0x28
    CARLocationManager *_locationManager;	// 48 = 0x30
    double _lastLoggedDistance;	// 56 = 0x38
    CARNetworkPathMonitor *_networkPathMonitor;	// 64 = 0x40
    CARObserverHashTable *_observers;	// 72 = 0x48
}

+ (double)maxDistance;	// IMP=0x002000000009ca7d
- (void).cxx_destruct;	// IMP=0x002000000009e7c7
@property(retain, nonatomic) CARObserverHashTable *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) CARNetworkPathMonitor *networkPathMonitor; // @synthesize networkPathMonitor=_networkPathMonitor;
@property(nonatomic) double lastLoggedDistance; // @synthesize lastLoggedDistance=_lastLoggedDistance;
@property(nonatomic) _Bool inExtendedRange; // @synthesize inExtendedRange=_inExtendedRange;
@property(nonatomic) _Bool previouslyInRange; // @synthesize previouslyInRange=_previouslyInRange;
@property(readonly, nonatomic) CARLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) _Bool garageDoorRefreshScheduled; // @synthesize garageDoorRefreshScheduled=_garageDoorRefreshScheduled;
@property(readonly, nonatomic) NSMutableDictionary *lastUsedIdentifiersByServiceType; // @synthesize lastUsedIdentifiersByServiceType=_lastUsedIdentifiersByServiceType;
@property(retain, nonatomic) NSDictionary *cachedGarageDoors; // @synthesize cachedGarageDoors=_cachedGarageDoors;
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(readonly, nonatomic) CARGarageDoor *lastUsedGarageDoor; // @synthesize lastUsedGarageDoor=_lastUsedGarageDoor;
- (void)homeDidUpdateHomeLocationStatus:(id)arg1;	// IMP=0x001000000009e6c2
- (void)home:(id)arg1 didUpdateLocation:(id)arg2;	// IMP=0x001000000009e667
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;	// IMP=0x001000000009e60c
- (void)home:(id)arg1 didAddAccessory:(id)arg2;	// IMP=0x001000000009e5b1
- (void)_scheduleGarageDoorRefresh;	// IMP=0x001000000009e4dc
- (void)networkPathMonitorDidChangeNetworkPath:(id)arg1;	// IMP=0x001000000009e481
- (void)networkPathMonitor:(id)arg1 didChangeNetworkReachable:(_Bool)arg2;	// IMP=0x001000000009e426
- (void)locationManager:(id)arg1 didExitRegionIdentifier:(id)arg2;	// IMP=0x001000000009e2c1
- (void)locationManager:(id)arg1 didEnterRegionIdentifier:(id)arg2;	// IMP=0x001000000009e159
- (void)locationManager:(id)arg1 didUpdateLocation:(id)arg2;	// IMP=0x001000000009e147
@property(readonly, nonatomic) double distance;
@property(readonly, nonatomic) NSString *stateDescription;
@property(readonly, nonatomic) _Bool usable;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier;
- (void)_setValue:(id)arg1 forCharacteristic:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009dd2f
- (void)refreshGarageDoors;	// IMP=0x001000000009db78
@property(readonly, copy) NSString *description;
- (void)_updateInRangeIfNeeded;	// IMP=0x001000000009d6f6
- (void)removeObserver:(id)arg1;	// IMP=0x001000000009d684
- (void)addObserver:(id)arg1;	// IMP=0x001000000009d612
- (void)_updateLastUsedServiceOfType:(id)arg1;	// IMP=0x001000000009d28c
- (void)_updateCachedGarageDoors;	// IMP=0x001000000009d10f
@property(readonly, nonatomic) _Bool hasCachedGarageDoors;
@property(readonly, nonatomic) NSArray *garageDoors;
@property(readonly, nonatomic) _Bool hasGarageDoor;
- (_Bool)inHomeRange;	// IMP=0x001000000009cbac
- (_Bool)inLocationRange;	// IMP=0x001000000009cb62
@property(readonly, nonatomic) _Bool inRange;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) NSString *formattedUniqueIdentifier;
- (void)dealloc;	// IMP=0x001000000009c971
- (id)initWithHome:(id)arg1 resourceProvider:(id)arg2;	// IMP=0x001000000009c798

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

