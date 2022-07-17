//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDRegionAvailabilityDataSource-Protocol.h>

@class HKCountrySet, NSString;
@protocol HDPairedDeviceCapabilityProviding, HDRegionAvailabilityDataSource, OS_os_log;

@interface HDRegionAvailabilityDataSourceWithNanoRegistryFallback : NSObject <HDRegionAvailabilityDataSource>
{
    id <HDRegionAvailabilityDataSource> _regionAvailabilityDataSource;	// 8 = 0x8
    id <HDPairedDeviceCapabilityProviding> _pairedDeviceCapabilityProvider;	// 16 = 0x10
    NSString *_devicePropertyName;	// 24 = 0x18
    NSObject<OS_os_log> *_loggingCategory;	// 32 = 0x20
    _Bool _shouldReturnLocalAvailabilityForNilDeviceRegions;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000e1c49
- (id)remoteCountrySetForDevice:(id)arg1;	// IMP=0x00000000000e1bdb
@property(readonly, copy, nonatomic) HKCountrySet *activeRemoteCountrySet;
@property(readonly, copy, nonatomic) HKCountrySet *localCountrySet;
- (id)initWithRegionAvailabilityDataSource:(id)arg1 pairedDeviceCapabilityProvider:(id)arg2 availableRegionsDevicePropertyName:(id)arg3 loggingCategory:(id)arg4 shouldReturnLocalAvailabilityForNilDeviceRegions:(_Bool)arg5;	// IMP=0x00000000000e1861

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
