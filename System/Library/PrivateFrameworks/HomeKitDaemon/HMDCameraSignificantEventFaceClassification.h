//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSMutableCopying-Protocol.h>

@class NSString, NSUUID;

@interface HMDCameraSignificantEventFaceClassification : HMFObject <NSCopying, NSMutableCopying>
{
    NSUUID *_UUID;	// 8 = 0x8
    NSUUID *_personManagerUUID;	// 16 = 0x10
    NSUUID *_personUUID;	// 24 = 0x18
    NSString *_personName;	// 32 = 0x20
    NSUUID *_unassociatedFaceCropUUID;	// 40 = 0x28
}

+ (id)faceClassificationWithHMIFaceClassification:(id)arg1 person:(id)arg2;	// IMP=0x000000000039c0a2
- (void).cxx_destruct;	// IMP=0x000000000039bf10
@property(copy) NSUUID *unassociatedFaceCropUUID; // @synthesize unassociatedFaceCropUUID=_unassociatedFaceCropUUID;
@property(copy) NSString *personName; // @synthesize personName=_personName;
@property(copy) NSUUID *personUUID; // @synthesize personUUID=_personUUID;
@property(readonly, copy) NSUUID *personManagerUUID; // @synthesize personManagerUUID=_personManagerUUID;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)attributeDescriptions;	// IMP=0x000000000039bb34
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000039ba06
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000039b9fb
- (unsigned long long)hash;	// IMP=0x000000000039b9b7
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000039b732
- (id)initWithUUID:(id)arg1 personManagerUUID:(id)arg2;	// IMP=0x000000000039b67f

@end
