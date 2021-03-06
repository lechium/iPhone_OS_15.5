//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSUUID;

@interface HMAccessorySetupResult : NSObject <HMFObject, NSSecureCoding, NSCopying>
{
    NSUUID *_homeUniqueIdentifier;	// 8 = 0x8
    NSArray *_accessoryUniqueIdentifiers;	// 16 = 0x10
}

+ (id)shortDescription;	// IMP=0x00000000000e4ac0
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e4ab8
- (void).cxx_destruct;	// IMP=0x00000000000e4a90
@property(readonly, copy) NSArray *accessoryUniqueIdentifiers; // @synthesize accessoryUniqueIdentifiers=_accessoryUniqueIdentifiers;
@property(readonly, copy) NSUUID *homeUniqueIdentifier; // @synthesize homeUniqueIdentifier=_homeUniqueIdentifier;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e46c4
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e4616
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e460b
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e4438
- (id)initWithHomeUniqueIdentifier:(id)arg1 accessoryUniqueIdentifiers:(id)arg2;	// IMP=0x00000000000e4368

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

