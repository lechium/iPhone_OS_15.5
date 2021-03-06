//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDBackingStoreModelObjectCDRepresentable-Protocol.h>

@class NSString;

@interface HMDHomeThreadNetworkModel <HMDBackingStoreModelObjectCDRepresentable>
{
}

+ (id)properties;	// IMP=0x00000000005af025
+ (id)defaultModelForHome:(id)arg1;	// IMP=0x00000000005aef6f
+ (id)modelIDForHome:(id)arg1;	// IMP=0x00000000005aeeba
+ (Class)cd_entityClass;	// IMP=0x00000000004af869
+ (id)cd_parentReferenceName;	// IMP=0x00000000004af85c
- (id)cd_generateValueForProperty:(id)arg1 managedObjectField:(id)arg2 context:(id)arg3;	// IMP=0x00000000004af738

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *threadNetworkID; // @dynamic threadNetworkID;

@end

