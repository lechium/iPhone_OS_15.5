//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSDevice-Protocol.h>
#import <ITMLKit/NSObject-Protocol.h>
#import <ITMLKit/_IKJSDevice-Protocol.h>
#import <ITMLKit/_IKJSDeviceProxy-Protocol.h>

@class NSNumber, NSString;
@protocol IKAppDeviceConfig;

@interface IKJSDevice <NSObject, IKJSDevice, _IKJSDeviceProxy, _IKJSDevice>
{
    id _networkPropertiesChangedToken;	// 8 = 0x8
    id <IKAppDeviceConfig> _deviceConfig;	// 16 = 0x10
}

+ (id)getMobileGestaltString:(struct __CFString *)arg1;	// IMP=0x00000000000a153b
- (void).cxx_destruct;	// IMP=0x00000000000a15d4
@property(nonatomic) __weak id <IKAppDeviceConfig> deviceConfig; // @synthesize deviceConfig=_deviceConfig;
@property(readonly, nonatomic) NSString *osBuildNumber;
- (id)capacity:(id)arg1;	// IMP=0x00000000000a1409
@property(readonly, nonatomic) _Bool isSeedBuild;
@property(readonly, nonatomic) _Bool isInRetailDemoMode;
@property(readonly, nonatomic) double lastNetworkChangedTime;
@property(readonly, nonatomic) NSString *networkType;
@property(readonly, nonatomic) _Bool runningAnInternalBuild;
@property(readonly, nonatomic) _Bool isInAirplaneMode;
@property(readonly, nonatomic) _Bool isNetworkReachable;
@property(readonly, nonatomic) NSNumber *pixelRatio;
@property(readonly, nonatomic) NSString *productType;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSString *systemVersion;
@property(readonly, nonatomic) NSString *appIdentifier;
@property(readonly, nonatomic) NSString *appVersion;
- (_Bool)isAdvertisingTrackingEnabled;	// IMP=0x00000000000a0e2f
- (id)advertisingIdentifier;	// IMP=0x00000000000a0dae
@property(readonly, nonatomic) NSString *vendorIdentifier;
@property(readonly, nonatomic) NSString *vendorID;
- (void)dealloc;	// IMP=0x00000000000a0c9e
- (id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2;	// IMP=0x00000000000a0910
- (id)asPrivateIKJSDevice;	// IMP=0x00000000000a08dd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

