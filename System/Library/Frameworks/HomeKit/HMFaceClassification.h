//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMFaceCrop, HMPerson, NSArray, NSString, NSUUID;

@interface HMFaceClassification : NSObject <HMFObject, NSCopying, NSSecureCoding>
{
    NSUUID *_personManagerUUID;	// 8 = 0x8
    HMPerson *_person;	// 16 = 0x10
    HMFaceCrop *_faceCrop;	// 24 = 0x18
}

+ (id)shortDescription;	// IMP=0x00000000001e781b
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001e7813
- (void).cxx_destruct;	// IMP=0x00000000001e77e0
@property(readonly, copy) HMFaceCrop *faceCrop; // @synthesize faceCrop=_faceCrop;
@property(readonly, copy) HMPerson *person; // @synthesize person=_person;
@property(readonly, copy) NSUUID *personManagerUUID; // @synthesize personManagerUUID=_personManagerUUID;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001e7397
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001e72b4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001e72a9
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e7041
- (id)initWithPersonManagerUUID:(id)arg1 person:(id)arg2 faceCrop:(id)arg3;	// IMP=0x00000000001e6f29

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

