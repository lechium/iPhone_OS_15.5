//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/MKFCameraReachabilityBulletinRegistration-Protocol.h>
#import <HomeKitDaemon/MKFCameraReachabilityBulletinRegistrationPrivateExtensions-Protocol.h>

@class MKFCameraReachabilityBulletinRegistrationDatabaseID, NSArray, NSDate, NSString, NSUUID;
@protocol MKFAccessory, MKFDevice;

@interface _MKFCameraReachabilityBulletinRegistration <MKFCameraReachabilityBulletinRegistration, MKFCameraReachabilityBulletinRegistrationPrivateExtensions>
{
}

+ (Class)backingModelClass;	// IMP=0x000000000061d17c
+ (id)backingModelProtocol;	// IMP=0x000000000061d16b
+ (id)modelIDForParentRelationshipTo:(id)arg1;	// IMP=0x000000000061d0b5
+ (id)fetchRequest;	// IMP=0x0000000000b92226
- (id)castIfCameraReachabilityBulletinRegistration;	// IMP=0x000000000061d0ac
@property(readonly, copy, nonatomic) MKFCameraReachabilityBulletinRegistrationDatabaseID *databaseID;

// Remaining properties
@property(retain, nonatomic) id <MKFAccessory> accessory; // @dynamic accessory;
@property(readonly, retain, nonatomic) NSArray *conditions;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, retain, nonatomic) id <MKFDevice> device;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *modelID;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSDate *writerTimestamp;

@end
