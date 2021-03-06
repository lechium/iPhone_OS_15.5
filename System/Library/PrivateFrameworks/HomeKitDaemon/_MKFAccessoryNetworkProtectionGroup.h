//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDNSManagedObjectBackingStoreModelObjectRepresentable-Protocol.h>
#import <HomeKitDaemon/MKFAccessoryNetworkProtectionGroup-Protocol.h>
#import <HomeKitDaemon/MKFAccessoryNetworkProtectionGroupPrivateExtensions-Protocol.h>

@class MKFAccessoryNetworkProtectionGroupDatabaseID, NSDate, NSNumber, NSString, NSUUID;
@protocol MKFHome;

@interface _MKFAccessoryNetworkProtectionGroup <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccessoryNetworkProtectionGroup, MKFAccessoryNetworkProtectionGroupPrivateExtensions>
{
}

+ (Class)backingModelClass;	// IMP=0x00000000008344c5
+ (id)backingModelProtocol;	// IMP=0x00000000008344b4
+ (id)homeRelation;	// IMP=0x0000000000834484
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x000000000083446b
+ (Class)cd_modelClass;	// IMP=0x00000000008b5005
+ (id)fetchRequest;	// IMP=0x0000000000b91fc6
- (id)castIfAccessoryNetworkProtectionGroup;	// IMP=0x0000000000834462
@property(readonly, copy, nonatomic) MKFAccessoryNetworkProtectionGroupDatabaseID *databaseID;

// Remaining properties
@property(copy, nonatomic) NSNumber *category; // @dynamic category;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, retain, nonatomic) id <MKFHome> home; // @dynamic home;
@property(copy, nonatomic) NSString *manufacturer; // @dynamic manufacturer;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSNumber *targetProtectionMode; // @dynamic targetProtectionMode;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

