//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CameraUI/CLLocationManagerDelegate-Protocol.h>

@class CLHeading, CLLocation, CLLocationManager, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface CAMLocationController : NSObject <CLLocationManagerDelegate>
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _headingEnabled;	// 9 = 0x9
    _Bool __monitoringLocation;	// 10 = 0xa
    _Bool __didRequestLocation;	// 11 = 0xb
    CLLocation *_currentLocation;	// 16 = 0x10
    CLHeading *_currentHeading;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *__authorizationQueue;	// 32 = 0x20
    CLLocationManager *__locationManager;	// 40 = 0x28
    NSMutableArray *__enqueuedAssetsWaitingForLocation;	// 48 = 0x30
}

+ (id)locationMetadataForLocation:(id)arg1 heading:(id)arg2 device:(long long)arg3;	// IMP=0x0000000000055c57
+ (id)_sharedGPSDatestampFormatter;	// IMP=0x00000000000563f4
+ (id)_sharedGPSTimestampFormatter;	// IMP=0x00000000000562a9
- (void).cxx_destruct;	// IMP=0x0000000000196b3c
@property(nonatomic, setter=_setDidRequestLocation:) _Bool _didRequestLocation; // @synthesize _didRequestLocation=__didRequestLocation;
@property(readonly, nonatomic) NSMutableArray *_enqueuedAssetsWaitingForLocation; // @synthesize _enqueuedAssetsWaitingForLocation=__enqueuedAssetsWaitingForLocation;
@property(readonly, nonatomic) CLLocationManager *_locationManager; // @synthesize _locationManager=__locationManager;
@property(readonly, nonatomic, getter=_isMonitoringLocation) _Bool _monitoringLocation; // @synthesize _monitoringLocation=__monitoringLocation;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_authorizationQueue; // @synthesize _authorizationQueue=__authorizationQueue;
@property(readonly, nonatomic) CLHeading *currentHeading; // @synthesize currentHeading=_currentHeading;
@property(retain, nonatomic, setter=_setCurrentLocation:) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(nonatomic, getter=isHeadingEnabled) _Bool headingEnabled; // @synthesize headingEnabled=_headingEnabled;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)enqueueAssetForLocationUpdates:(id)arg1;	// IMP=0x0000000000196b10
- (void)_updateAssetsWaitingOnLocation;	// IMP=0x000000000004f033
- (void)_performBlock:(CDUnknownBlockType)arg1 andLogIfExecutionExceeds:(double)arg2 logPrefix:(id)arg3;	// IMP=0x0000000000196a10
- (id)headingForOrientation:(long long)arg1;	// IMP=0x0000000000052b58
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x000000000019691b
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;	// IMP=0x000000000004f0cf
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x000000000004ef26
- (void)_resetDidRequestLocation;	// IMP=0x0000000000196907
- (void)_updateLocationMonitoring;	// IMP=0x000000000004480e
- (void)_stopMonitoringLocationUpdates;	// IMP=0x0000000000196802
- (void)_authorizeOrStartLocationManager;	// IMP=0x000000000004cf13
- (void)_startMonitoringLocationUpdates;	// IMP=0x000000000004ce00
- (void)dealloc;	// IMP=0x0000000000196636
- (id)init;	// IMP=0x000000000000594c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
