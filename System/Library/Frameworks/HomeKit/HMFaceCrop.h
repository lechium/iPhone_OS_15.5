//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSString, NSUUID;

@interface HMFaceCrop : NSObject <HMFObject, NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;	// 8 = 0x8
    NSData *_dataRepresentation;	// 16 = 0x10
    NSDate *_dateCreated;	// 24 = 0x18
    struct CGRect _faceBoundingBox;	// 32 = 0x20
}

+ (id)shortDescription;	// IMP=0x0000000000171ab4
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000171aac
- (void).cxx_destruct;	// IMP=0x0000000000171a79
@property(readonly) struct CGRect faceBoundingBox; // @synthesize faceBoundingBox=_faceBoundingBox;
@property(readonly, copy) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, copy) NSData *dataRepresentation; // @synthesize dataRepresentation=_dataRepresentation;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000017151f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000171400
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001713f5
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000171180
- (id)initWithUUID:(id)arg1 dataRepresentation:(id)arg2 dateCreated:(id)arg3 faceBoundingBox:(struct CGRect)arg4;	// IMP=0x0000000000171038

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

