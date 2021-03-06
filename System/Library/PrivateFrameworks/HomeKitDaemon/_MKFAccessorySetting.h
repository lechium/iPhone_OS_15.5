//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDNSManagedObjectBackingStoreModelObjectRepresentable-Protocol.h>
#import <HomeKitDaemon/MKFAccessorySetting-Protocol.h>
#import <HomeKitDaemon/MKFAccessorySettingPrivateExtensions-Protocol.h>

@class MKFAccessorySettingDatabaseID, NSArray, NSData, NSDate, NSNumber, NSSet, NSString, NSUUID;
@protocol MKFAccessorySettingGroup, MKFHome;

@interface _MKFAccessorySetting <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFAccessorySetting, MKFAccessorySettingPrivateExtensions>
{
}

+ (Class)backingModelClass;	// IMP=0x00000000002286bf
+ (id)backingModelProtocol;	// IMP=0x00000000002286ae
+ (id)homeRelation;	// IMP=0x000000000022867e
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x00000000002285c8
+ (Class)cd_modelClass;	// IMP=0x00000000007843e8
+ (id)fetchRequest;	// IMP=0x0000000000b91fe6
- (void)synchronizeConstraintsRelationWith:(id)arg1;	// IMP=0x00000000002285a6
- (id)findConstraintsRelationWithModelID:(id)arg1;	// IMP=0x0000000000228583
- (id)materializeOrCreateConstraintsRelationWithModelID:(id)arg1 createdNew:(_Bool *)arg2;	// IMP=0x000000000022855d
@property(readonly, retain, nonatomic) NSArray *constraints;
@property(readonly) id <MKFHome> home;
- (id)castIfAccessorySetting;	// IMP=0x00000000002284ad
@property(readonly, copy, nonatomic) MKFAccessorySettingDatabaseID *databaseID;

// Remaining properties
@property(copy, nonatomic) NSNumber *configurationVersion; // @dynamic configurationVersion;
@property(retain, nonatomic) NSSet *constraints_; // @dynamic constraints_;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) id <MKFAccessorySettingGroup> group; // @dynamic group;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(copy, nonatomic) NSNumber *properties; // @dynamic properties;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSNumber *type; // @dynamic type;
@property(retain, nonatomic) NSData *value; // @dynamic value;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end

