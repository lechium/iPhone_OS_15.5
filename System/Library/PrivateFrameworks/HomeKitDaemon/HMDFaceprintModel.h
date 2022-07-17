//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitBackingStore/HMBModel.h>

@class HMBModelReference, NSData, NSUUID;

@interface HMDFaceprintModel : HMBModel
{
}

+ (_Bool)hmbExcludeFromCloudStorage;	// IMP=0x000000000088ec94
+ (id)hmbProperties;	// IMP=0x000000000088ec64
- (id)createFaceprint;	// IMP=0x000000000088ea67
- (id)initWithFaceprint:(id)arg1;	// IMP=0x000000000088e8ee

// Remaining properties
@property(copy) NSData *data; // @dynamic data;
@property(retain) HMBModelReference *faceCrop; // @dynamic faceCrop;
@property(copy) NSUUID *modelUUID; // @dynamic modelUUID;

@end
