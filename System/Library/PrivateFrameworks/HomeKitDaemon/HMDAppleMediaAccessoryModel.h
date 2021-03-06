//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDBackingStoreModelObjectCDRepresentable-Protocol.h>

@class HMDDevice, HMFPairingIdentity, HMFSoftwareVersion, HMFWiFiNetworkInfo, NSData, NSNumber, NSString;

@interface HMDAppleMediaAccessoryModel <HMDBackingStoreModelObjectCDRepresentable>
{
}

+ (id)properties;	// IMP=0x000000000064fc84
+ (Class)cd_entityClass;	// IMP=0x00000000003c39d1
- (id)cd_generateValueForModelObjectFromManagedObject:(id)arg1 modelObjectField:(id)arg2 modelFieldInfo:(id)arg3;	// IMP=0x00000000003c3762

// Remaining properties
@property(retain, nonatomic) NSString *appleMediaAccessoryChangeTag; // @dynamic appleMediaAccessoryChangeTag;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) HMDDevice *device; // @dynamic device;
@property(retain, nonatomic) NSString *deviceUUID; // @dynamic deviceUUID;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSData *loggedInAccount; // @dynamic loggedInAccount;
@property(retain, nonatomic) HMFPairingIdentity *pairingIdentity; // @dynamic pairingIdentity;
@property(retain, nonatomic) NSNumber *productColor; // @dynamic productColor;
@property(retain, nonatomic) HMFSoftwareVersion *softwareVersion; // @dynamic softwareVersion;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSNumber *supportedStereoPairVersions; // @dynamic supportedStereoPairVersions;
@property(retain, nonatomic) NSData *symptoms; // @dynamic symptoms;
@property(retain, nonatomic) NSNumber *variant; // @dynamic variant;
@property(retain, nonatomic) HMFWiFiNetworkInfo *wifiNetworkInfo; // @dynamic wifiNetworkInfo;

@end

