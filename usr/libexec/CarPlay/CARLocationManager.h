//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CARObserverHashTable, CLLocation, CLLocationManager, NSBundle, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface CARLocationManager : NSObject
{
    _Bool _locationActive;	// 8 = 0x8
    CLLocation *_cachedCurrentLocation;	// 16 = 0x10
    NSString *_bundlePath;	// 24 = 0x18
    NSBundle *_bundle;	// 32 = 0x20
    NSString *_bundleIdentifier;	// 40 = 0x28
    CLLocationManager *_locationManager;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_locationQueue;	// 56 = 0x38
    NSMutableSet *_activeAssertions;	// 64 = 0x40
    CLLocation *_currentLocation;	// 72 = 0x48
    CLLocation *_lastPostedLocation;	// 80 = 0x50
    NSMutableDictionary *_monitoringRegions;	// 88 = 0x58
    unsigned long long _cacheUsedCount;	// 96 = 0x60
    CARObserverHashTable *_observers;	// 104 = 0x68
}

+ (id)homeKitLocationManager;	// IMP=0x00200000000befa7
- (void).cxx_destruct;	// IMP=0x00200000000c14d3
@property(retain, nonatomic) CARObserverHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) unsigned long long cacheUsedCount; // @synthesize cacheUsedCount=_cacheUsedCount;
@property(retain, nonatomic) NSMutableDictionary *monitoringRegions; // @synthesize monitoringRegions=_monitoringRegions;
@property(retain, nonatomic) CLLocation *lastPostedLocation; // @synthesize lastPostedLocation=_lastPostedLocation;
@property(retain, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(nonatomic) _Bool locationActive; // @synthesize locationActive=_locationActive;
@property(retain, nonatomic) NSMutableSet *activeAssertions; // @synthesize activeAssertions=_activeAssertions;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *locationQueue; // @synthesize locationQueue=_locationQueue;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
- (void)_didExitRegionWithIDentifier:(id)arg1;	// IMP=0x00100000000c12d5
- (void)_didEnterRegionWithIdentifier:(id)arg1;	// IMP=0x00100000000c11ce
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;	// IMP=0x00100000000c107d
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00100000000c1010
- (void)_updateCurrentLocation:(id)arg1;	// IMP=0x00100000000c0ed9
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x00100000000c0e8a
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x00100000000c0e0e
@property(readonly, copy) NSString *description;
- (id)_name;	// IMP=0x00100000000c09f0
- (void)_authorizeIfNeeded;	// IMP=0x00100000000c0921
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000c08af
- (void)addObserver:(id)arg1;	// IMP=0x00100000000c083d
- (void)stopMonitoringForRegionWithIdentifier:(id)arg1;	// IMP=0x00100000000c0642
- (void)startMonitoringForRegionWithIdentifier:(id)arg1 locationCoordinate:(struct CLLocationCoordinate2D)arg2 range:(double)arg3;	// IMP=0x00100000000c0314
- (void)_stopUpdatingLocationNow;	// IMP=0x00100000000c02ab
- (void)stopUpdatingLocationWithIdentifier:(id)arg1;	// IMP=0x00100000000c0111
- (void)_startUpdatingLocationNow;	// IMP=0x00100000000c0054
- (void)startUpdatingLocationWithIdentifier:(id)arg1;	// IMP=0x00100000000bfef9
@property(readonly, nonatomic) CLLocation *cachedCurrentLocation; // @synthesize cachedCurrentLocation=_cachedCurrentLocation;
@property(readonly, nonatomic) _Bool authorized;
- (void)dealloc;	// IMP=0x00100000000bf737
- (void)_commonPostInit;	// IMP=0x00100000000bf665
- (void)_commonInit;	// IMP=0x00100000000bf51a
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x00100000000bf351
- (id)initWithBundlePath:(id)arg1;	// IMP=0x00100000000bf0e0
- (id)initWithLocationManager:(id)arg1 locationQueue:(id)arg2;	// IMP=0x00100000000bf017

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
