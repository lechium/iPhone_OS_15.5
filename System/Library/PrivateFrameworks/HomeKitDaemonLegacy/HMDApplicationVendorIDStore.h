//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HMDApplicationVendorIDStore : HMFObject <NSSecureCoding>
{
    NSMutableDictionary *_applicationVendorIdMapping;	// 8 = 0x8
    NSMutableDictionary *_applicationMachUUIDMapping;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_clientQueue;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000005d5b2f
+ (id)sharedStore;	// IMP=0x00000000005d5aff
- (void).cxx_destruct;	// IMP=0x00000000005d4d91
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // @synthesize clientQueue=_clientQueue;
@property(readonly, nonatomic) NSMutableDictionary *applicationMachUUIDMapping; // @synthesize applicationMachUUIDMapping=_applicationMachUUIDMapping;
@property(readonly, nonatomic) NSMutableDictionary *applicationVendorIdMapping; // @synthesize applicationVendorIdMapping=_applicationVendorIdMapping;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005d4cd8
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000005d4ae7
- (void)__handleUninstalledApplication:(id)arg1;	// IMP=0x00000000005d4a55
- (id)_machUUIDsForApplication:(id)arg1;	// IMP=0x00000000005d488b
- (id)machUUIDsForApplication:(id)arg1;	// IMP=0x00000000005d4749
- (void)_save;	// IMP=0x00000000005d4645
- (void)removeVendorIDForApplicationBundleId:(id)arg1;	// IMP=0x00000000005d4594
- (_Bool)_addVendorID:(id)arg1 forApplication:(id)arg2 companionAppBundleId:(id)arg3 spiClient:(_Bool)arg4;	// IMP=0x00000000005d412b
- (void)_setAndSaveVendorID:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3 spiClient:(_Bool)arg4;	// IMP=0x00000000005d40f4
- (void)addVendorID:(id)arg1 applicationBundleId:(id)arg2 companionAppBundleId:(id)arg3;	// IMP=0x00000000005d3fea
- (void)addVendorID:(id)arg1 applicationBundleId:(id)arg2;	// IMP=0x00000000005d3f0e
- (void)addVendorID:(id)arg1 applicationBundleId:(id)arg2 spiClient:(_Bool)arg3;	// IMP=0x00000000005d3e28
- (void)_extractVendorIDForApplication:(id)arg1;	// IMP=0x00000000005d3c51
- (id)_vendorIDForApplication:(id)arg1;	// IMP=0x00000000005d3a59
- (id)vendorIDForApplication:(id)arg1;	// IMP=0x00000000005d3917
- (void)checkCorrectness;	// IMP=0x00000000005d38a6
- (id)init;	// IMP=0x00000000005d3743

@end

