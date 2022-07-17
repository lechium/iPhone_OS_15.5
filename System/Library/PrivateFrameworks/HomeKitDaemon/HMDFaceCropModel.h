//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class HMBModelCloudReference, NSData, NSDate, NSNumber, NSUUID;

@interface HMDFaceCropModel : HMBModel
{
}

+ (id)faceCropsWithUnassociatedFaceCropUUIDQuery;	// IMP=0x0000000000010c98
+ (id)faceCropsForPersonQuery;	// IMP=0x0000000000010c68
+ (id)sentinelParentUUID;	// IMP=0x0000000000010c38
+ (id)hmbQueries;	// IMP=0x0000000000010b79
+ (id)hmbProperties;	// IMP=0x0000000000010b49
@property long long source;
@property struct CGRect faceBoundingBox;
- (id)createPersonFaceCrop;	// IMP=0x000000000001144c
- (id)initWithPersonFaceCrop:(id)arg1;	// IMP=0x000000000001123b

// Remaining properties
@property(retain) NSData *dataRepresentation; // @dynamic dataRepresentation;
@property(retain) NSDate *dateCreated; // @dynamic dateCreated;
@property(retain) NSData *faceBoundingBoxData; // @dynamic faceBoundingBoxData;
@property(retain) HMBModelCloudReference *person; // @dynamic person;
@property(retain) NSNumber *sourceField; // @dynamic sourceField;
@property(retain) NSUUID *unassociatedFaceCropUUID; // @dynamic unassociatedFaceCropUUID;

@end
