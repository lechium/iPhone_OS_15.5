//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDBackingStoreModelObjectCDRepresentable-Protocol.h>

@class NSString;

@interface HMDMediaAccessoryModel <HMDBackingStoreModelObjectCDRepresentable>
{
}

+ (id)properties;	// IMP=0x00000000004b769b
+ (id)cd_getMKFMediaAccessoryFromAccessory:(id)arg1;	// IMP=0x000000000072adc7
+ (id)cd_getMKFMediaAccessoryFromAccessoryUUID:(id)arg1;	// IMP=0x000000000072ad35
+ (Class)cd_entityClass;	// IMP=0x000000000072ad24

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

