//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDNSManagedObjectBackingStoreModelObjectRepresentable-Protocol.h>
#import <HomeKitDaemon/MKFServiceGroup-Protocol.h>
#import <HomeKitDaemon/MKFServiceGroupPrivateExtensions-Protocol.h>

@class MKFServiceGroupDatabaseID, NSArray, NSDate, NSSet, NSString, NSUUID;
@protocol MKFApplicationData, MKFHome;

@interface _MKFServiceGroup <HMDNSManagedObjectBackingStoreModelObjectRepresentable, MKFServiceGroup, MKFServiceGroupPrivateExtensions>
{
}

+ (Class)backingModelClass;	// IMP=0x0000000000013576
+ (id)backingModelProtocol;	// IMP=0x0000000000013565
+ (id)homeRelation;	// IMP=0x0000000000013535
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x000000000001347f
+ (Class)cd_modelClass;	// IMP=0x00000000008babdd
+ (id)fetchRequest;	// IMP=0x0000000000b927a6
- (void)removeServicesObject:(id)arg1;	// IMP=0x0000000000013463
- (void)addServicesObject:(id)arg1;	// IMP=0x0000000000013447
@property(readonly, retain, nonatomic) NSArray *services;
- (id)materializeOrCreateApplicationDataRelation:(_Bool *)arg1;	// IMP=0x00000000000133ca
- (id)castIfServiceGroup;	// IMP=0x00000000000133c1
@property(readonly, copy, nonatomic) MKFServiceGroupDatabaseID *databaseID;

// Remaining properties
@property(retain, nonatomic) id <MKFApplicationData> applicationData; // @dynamic applicationData;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *hmd_modelID;
@property(readonly, copy, nonatomic) NSUUID *hmd_parentModelID;
@property(readonly, retain, nonatomic) id <MKFHome> home; // @dynamic home;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSSet *services_; // @dynamic services_;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end
