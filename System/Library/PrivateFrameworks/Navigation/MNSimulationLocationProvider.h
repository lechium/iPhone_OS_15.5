//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Navigation/MNLocationProvider-Protocol.h>

@class CLSimulationManager, MNSimulatedLocationGenerator, NSBundle, NSMutableArray, NSString, NSTimer;
@protocol MNLocationProviderDelegate;

__attribute__((visibility("hidden")))
@interface MNSimulationLocationProvider : NSObject <MNLocationProvider>
{
    id <MNLocationProviderDelegate> _delegate;	// 8 = 0x8
    NSTimer *_locationUpdateTimer;	// 16 = 0x10
    long long _simulationType;	// 24 = 0x18
    MNSimulatedLocationGenerator *_locationGenerator;	// 32 = 0x20
    _Bool _simulateGeoFences;	// 40 = 0x28
    CLSimulationManager *_simulationManager;	// 48 = 0x30
    NSMutableArray *_monitoredGeoFences;	// 56 = 0x38
    NSMutableArray *_currentGeoFences;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000092a65
@property(nonatomic) __weak id <MNLocationProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double timeScale;
@property(readonly, nonatomic) unsigned long long traceVersion;
@property(readonly, nonatomic) _Bool isTracePlayer;
@property(readonly, nonatomic) _Bool coarseModeEnabled;
@property(readonly, nonatomic) double expectedGpsUpdateInterval;
@property(nonatomic) int headingOrientation;
@property(readonly, nonatomic) _Bool isAuthorized;
@property(copy, nonatomic) NSString *effectiveBundleIdentifier;
@property(retain, nonatomic) NSBundle *effectiveBundle;
- (void)stopMonitoringForRegion:(id)arg1;	// IMP=0x0000000000092921
- (void)startMonitoringForRegion:(id)arg1;	// IMP=0x0000000000092886
- (void)resetForActiveTileGroupChanged;	// IMP=0x0000000000092880
- (void)stopUpdatingVehicleHeading;	// IMP=0x000000000009287a
- (void)startUpdatingVehicleHeading;	// IMP=0x0000000000092874
- (void)stopUpdatingVehicleSpeed;	// IMP=0x000000000009286e
- (void)startUpdatingVehicleSpeed;	// IMP=0x0000000000092868
- (void)stopUpdatingHeading;	// IMP=0x0000000000092862
- (void)startUpdatingHeading;	// IMP=0x000000000009285c
- (void)stopUpdatingLocation;	// IMP=0x00000000000924f2
- (void)startUpdatingLocation;	// IMP=0x0000000000092325
- (void)_sendLocationUpdate:(id)arg1;	// IMP=0x0000000000091b5d
- (void)updateWithRouteInfo:(id)arg1;	// IMP=0x0000000000091aac
- (void)dealloc;	// IMP=0x0000000000091a58
- (id)initWithSimulationType:(long long)arg1 routeInfo:(id)arg2;	// IMP=0x0000000000091932

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

