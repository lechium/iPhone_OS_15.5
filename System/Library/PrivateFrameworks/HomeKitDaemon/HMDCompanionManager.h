//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class HMDDevice, IDSService, NSObject, NSString;
@protocol HMFLocking, OS_dispatch_queue;

@interface HMDCompanionManager : HMFObject <HMFLogging, IDSServiceDelegate>
{
    id <HMFLocking> _lock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    HMDDevice *_companion;	// 24 = 0x18
    IDSService *_service;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x000000000050f155
+ (id)shortDescription;	// IMP=0x000000000050f148
+ (_Bool)isCompatibleCompanionDevice:(id)arg1;	// IMP=0x000000000050f140
+ (id)sharedManager;	// IMP=0x000000000050f081
- (void).cxx_destruct;	// IMP=0x000000000050e92f
@property(readonly, nonatomic) IDSService *service; // @synthesize service=_service;
- (void)service:(id)arg1 connectedDevicesChanged:(id)arg2;	// IMP=0x000000000050e7db
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x000000000050e514
@property(readonly) HMDDevice *companion; // @synthesize companion=_companion;
- (void)__initializeConnectedDevices;	// IMP=0x000000000050e1f5
- (id)attributeDescriptions;	// IMP=0x000000000050e129
- (id)init;	// IMP=0x000000000050dfdf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
