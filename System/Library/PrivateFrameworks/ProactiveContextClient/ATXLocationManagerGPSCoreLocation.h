//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveContextClient/ATXLocationManagerGPS-Protocol.h>
#import <ProactiveContextClient/CLLocationManagerDelegate-Protocol.h>

@class CLLocation, CLLocationManager, CLRegion, NSCondition, NSMutableSet, NSString;
@protocol ATXLocationManagerGPSDelegate, OS_dispatch_queue;

@interface ATXLocationManagerGPSCoreLocation : NSObject <CLLocationManagerDelegate, ATXLocationManagerGPS>
{
    CLLocationManager *_locationManager;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_clQueue;	// 16 = 0x10
    NSCondition *_updateCondition;	// 24 = 0x18
    _Bool _locationEnabled;	// 32 = 0x20
    _Bool _preciseLocationEnabled;	// 33 = 0x21
    _Bool _updatePending;	// 34 = 0x22
    NSMutableSet *_locationBlocksToInvoke;	// 40 = 0x28
    NSCondition *_requestStateCondition;	// 48 = 0x30
    CLRegion *_regionRequested;	// 56 = 0x38
    long long _state;	// 64 = 0x40
    id <ATXLocationManagerGPSDelegate> _delegate;	// 72 = 0x48
}

+ (id)sharedInstance;	// IMP=0x000000000001e45f
- (void).cxx_destruct;	// IMP=0x000000000001fdb6
@property(nonatomic) __weak id <ATXLocationManagerGPSDelegate> delegate; // @synthesize delegate=_delegate;
- (void)locationManager:(id)arg1 didDetermineState:(long long)arg2 forRegion:(id)arg3;	// IMP=0x000000000001fc2f
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x000000000001fbb6
- (void)locationManagerDidChangeAuthorization:(id)arg1;	// IMP=0x000000000001f999
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;	// IMP=0x000000000001f6b6
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;	// IMP=0x000000000001f3d3
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;	// IMP=0x000000000001f359
- (void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;	// IMP=0x000000000001f290
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x000000000001f191
- (void)_updateConditionAndInvokeLocationBlocks:(id)arg1 error:(id)arg2;	// IMP=0x000000000001efed
- (void)stopMonitoringRegionWithIdentifier:(id)arg1;	// IMP=0x000000000001ef0e
- (id)_existingRegionWithIdentifierOnCLQueue:(id)arg1;	// IMP=0x000000000001ed31
- (void)_requestStateIfNeededForRegion:(id)arg1;	// IMP=0x000000000001ec5a
- (long long)stateForRegion:(id)arg1 withTimeout:(double)arg2;	// IMP=0x000000000001ea7b
- (void)beginMonitoringRegion:(id)arg1;	// IMP=0x000000000001e9d2
- (void)updateLocationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000001e90b
- (id)updateLocationWithTimeout:(double)arg1 requestPreciseLocation:(_Bool)arg2;	// IMP=0x000000000001e79a
- (void)_startUpdateIfNeededWithPreciseLocation:(_Bool)arg1;	// IMP=0x000000000001e625
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) _Bool preciseLocationEnabled;
@property(readonly, nonatomic) _Bool locationEnabled;
- (void)dealloc;	// IMP=0x000000000001e51f
- (id)init;	// IMP=0x000000000001e519
- (id)_init;	// IMP=0x000000000001e274

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

