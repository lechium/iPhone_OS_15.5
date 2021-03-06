//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMEProtoBufferCoding-Protocol.h>
#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSUUID;

@interface HMMediaDestinationControllerData : NSObject <HMFLogging, HMFObject, NSCopying, NSMutableCopying, NSSecureCoding, HMEProtoBufferCoding>
{
    NSUUID *_identifier;	// 8 = 0x8
    NSUUID *_parentIdentifier;	// 16 = 0x10
    NSUUID *_destinationIdentifier;	// 24 = 0x18
    NSArray *_availableDestinationIdentifiers;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c6de3
+ (id)shortDescription;	// IMP=0x00000000000c6dd1
+ (id)logCategory;	// IMP=0x00000000000c6da1
- (void).cxx_destruct;	// IMP=0x00000000000c6b8c
@property(copy) NSArray *availableDestinationIdentifiers; // @synthesize availableDestinationIdentifiers=_availableDestinationIdentifiers;
@property(copy) NSUUID *destinationIdentifier; // @synthesize destinationIdentifier=_destinationIdentifier;
@property(readonly, copy) NSUUID *parentIdentifier; // @synthesize parentIdentifier=_parentIdentifier;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)initWithProtoBufferData:(id)arg1;	// IMP=0x00000000000c6a85
- (id)encodeToProtoBufferData;	// IMP=0x00000000000c6a7d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c6965
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c6312
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c5f2b
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c5e4d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c5e42
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)logIdentifier;	// IMP=0x00000000000c5be9
- (id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 destinationIdentifier:(id)arg3 availableDestinationIdentifiers:(id)arg4;	// IMP=0x00000000000c5aba

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

