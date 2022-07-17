//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NRDevicePropertyObserver-Protocol.h>

@class NRDevice, NSConditionLock, NSNumber, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEONanoInfo : NSObject <NRDevicePropertyObserver>
{
    NSConditionLock *_pairedDeviceLock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_nanoregQueue;	// 16 = 0x10
    NSNumber *_hasPairedDevice;	// 24 = 0x18
    NRDevice *_currentDevice;	// 32 = 0x20
    NSString *_deviceSystemVersion;	// 40 = 0x28
    NSString *_deviceSystemBuildVersion;	// 48 = 0x30
    NSString *_deviceProductType;	// 56 = 0x38
}

+ (id)sharedInfo;	// IMP=0x000000000034f71c
- (void).cxx_destruct;	// IMP=0x000000000034fb31
- (void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3;	// IMP=0x000000000034fa48
- (id)deviceProductTypeIfAvailable;	// IMP=0x000000000034fa34
- (id)deviceProductType;	// IMP=0x000000000034fa1d
- (id)_deviceProductTypeBlocking:(_Bool)arg1;	// IMP=0x000000000034f9ad
- (id)deviceSystemBuildVersionIfAvailable;	// IMP=0x000000000034f999
- (id)deviceSystemBuildVersion;	// IMP=0x000000000034f982
- (id)_deviceSystemBuildVersionBlocking:(_Bool)arg1;	// IMP=0x000000000034f912
- (id)deviceSystemVersionIfAvailable;	// IMP=0x000000000034f8fe
- (id)deviceSystemVersion;	// IMP=0x000000000034f8e7
- (id)_deviceSystemVersionBlocking:(_Bool)arg1;	// IMP=0x000000000034f877
- (id)hasPairedDeviceIfAvailable;	// IMP=0x000000000034f863
- (id)hasPairedDevice;	// IMP=0x000000000034f84c
- (id)_hasPairedDeviceBlocking:(_Bool)arg1;	// IMP=0x000000000034f7dc
- (void)setupClient;	// IMP=0x000000000034f629
- (void)_stopObservingDevice:(id)arg1;	// IMP=0x000000000034f5b4
- (void)_startObservingDevice:(id)arg1;	// IMP=0x000000000034f53f
- (id)_observingProperties;	// IMP=0x000000000034f476
- (void)_readDeviceInfo:(id)arg1;	// IMP=0x000000000034f387
- (id)init;	// IMP=0x000000000034f25f
- (id)deviceOsVersionIfAvailable;	// IMP=0x0000000000ceaa5e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
