//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ADPeerConnection, CLLocationManager, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ADPeerLocationRemote : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    ADPeerConnection *_peerConnection;	// 16 = 0x10
    CLLocationManager *_locationManager;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_bestLocationTimer;	// 32 = 0x20
    CDUnknownBlockType _bestLocationCompletion;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000f0db7
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;	// IMP=0x00100000000f0d32
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;	// IMP=0x00100000000f0cad
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;	// IMP=0x00100000000f0b1d
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x00100000000f0ab3
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;	// IMP=0x00100000000f09e1
- (void)peerConnection:(id)arg1 handlePBSubclass:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f08ff
- (void)_executeBestLocationCompletionWithLocationErrorWithCode:(long long)arg1;	// IMP=0x00100000000f0896
- (void)_executeBestLocationCompletionWithLocation:(id)arg1;	// IMP=0x00100000000f0882
- (void)_executeBestLocationCompletionWithLocation:(id)arg1 error:(id)arg2;	// IMP=0x00100000000f0585
- (void)_getBestLocationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f0143
- (_Bool)_hasActiveBestLocationRequest;	// IMP=0x00100000000f0135
- (void)_startUpdatingLocation;	// IMP=0x00100000000f0070
- (void)_cancelBestLocationTimer;	// IMP=0x00100000000effc2
- (void)_startBestLocationTimer;	// IMP=0x00100000000efd91
- (id)_locationManager;	// IMP=0x00100000000efce9
- (void)dealloc;	// IMP=0x00100000000efcab
- (id)init;	// IMP=0x00100000000efbcb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

