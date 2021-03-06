//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceMemos/CLLocationManagerDelegate-Protocol.h>

@class CLLocation, CLLocationManager, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface RCLocationsOfInterestManager : NSObject <CLLocationManagerDelegate>
{
    int _authorizationStatus;	// 8 = 0x8
    CLLocationManager *_locationManager;	// 16 = 0x10
    CLLocation *_currentLocation;	// 24 = 0x18
    NSArray *_locationsOfInterest;	// 32 = 0x20
    _Bool _isFetchingPlacesOfInterest;	// 40 = 0x28
    _Bool _active;	// 41 = 0x29
    unsigned long long _placeInferencePolicy;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_serialQueue;	// 56 = 0x38
}

+ (id)defaultManager;	// IMP=0x00000000000316f0
- (void).cxx_destruct;	// IMP=0x0000000000032062
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x0000000000031ffb
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000031f1a
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x0000000000031e75
- (void)_didFetchPlaceInferences:(id)arg1 location:(id)arg2 error:(id)arg3;	// IMP=0x0000000000031d78
- (void)_requestPlaceInferences;	// IMP=0x0000000000031be3
- (void)_startMonitoringLocation;	// IMP=0x0000000000031b9b
@property(readonly, copy) NSArray *locationsOfInterest;
@property(readonly) CLLocation *currentLocation;
- (void)_stopMonitoringLocation;	// IMP=0x000000000003195a
- (void)stop;	// IMP=0x00000000000318f9
- (void)start;	// IMP=0x000000000003187d
- (id)init;	// IMP=0x0000000000031745

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

