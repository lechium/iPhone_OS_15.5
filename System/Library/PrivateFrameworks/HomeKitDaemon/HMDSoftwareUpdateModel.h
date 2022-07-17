//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/HMDBackingStoreModelObjectCDRepresentable-Protocol.h>

@class HMFSoftwareVersion, HMSoftwareUpdateDocumentationMetadata, NSDate, NSNumber, NSString;

@interface HMDSoftwareUpdateModel <HMDBackingStoreModelObjectCDRepresentable>
{
    NSDate *_releaseDate;	// 8 = 0x8
}

+ (id)properties;	// IMP=0x00000000005d7125
+ (Class)cd_entityClass;	// IMP=0x00000000007e6c28
+ (id)cd_parentReferenceName;	// IMP=0x00000000007e6c1b
- (void).cxx_destruct;	// IMP=0x00000000005d7112
@property(copy, nonatomic) NSDate *releaseDate; // @synthesize releaseDate=_releaseDate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) HMSoftwareUpdateDocumentationMetadata *documentationMetadata; // @dynamic documentationMetadata;
@property(copy, nonatomic) NSNumber *downloadSize; // @dynamic downloadSize;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) NSNumber *installDuration; // @dynamic installDuration;
@property(copy, nonatomic) HMFSoftwareVersion *softwareVersion; // @dynamic softwareVersion;
@property(copy, nonatomic) NSNumber *state; // @dynamic state;
@property(readonly) Class superclass;

@end
