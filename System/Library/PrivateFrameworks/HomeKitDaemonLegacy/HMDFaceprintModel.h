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

+ (_Bool)hmbExcludeFromCloudStorage;	// IMP=0x00000000007e9c81
+ (id)hmbProperties;	// IMP=0x00000000007e9c51
- (id)createFaceprint;	// IMP=0x00000000007e9a54
- (id)initWithFaceprint:(id)arg1;	// IMP=0x00000000007e98db

// Remaining properties
@property(copy) NSData *data; // @dynamic data;
@property(retain) HMBModelReference *faceCrop; // @dynamic faceCrop;
@property(copy) NSUUID *modelUUID; // @dynamic modelUUID;

@end
