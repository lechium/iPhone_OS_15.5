//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>
#import <DoNotDisturb/NSMutableCopying-Protocol.h>
#import <DoNotDisturb/NSSecureCoding-Protocol.h>

@class NSSet, NSString;

@interface DNDContact : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString *_contactIdentifier;	// 8 = 0x8
    NSString *_firstName;	// 16 = 0x10
    NSString *_middleName;	// 24 = 0x18
    NSString *_lastName;	// 32 = 0x20
    NSString *_nickName;	// 40 = 0x28
    NSString *_organizationName;	// 48 = 0x30
    NSSet *_phoneNumbers;	// 56 = 0x38
    NSSet *_emailAddresses;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001b63c
+ (id)normalizePhoneNumber:(id)arg1;	// IMP=0x0000000000019936
- (void).cxx_destruct;	// IMP=0x000000000001ba0b
@property(readonly, copy, nonatomic) NSSet *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(readonly, copy, nonatomic) NSSet *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property(readonly, copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(readonly, copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(readonly, copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(readonly, copy, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(readonly, copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001b8d6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001b644
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b5ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b5e1
- (id)diffDescription;	// IMP=0x000000000001b41d
- (id)_redactedDescriptionsForStrings:(id)arg1;	// IMP=0x000000000001b273
- (id)_descriptionForRedacted:(_Bool)arg1;	// IMP=0x000000000001b0ba
- (id)redactedDescription;	// IMP=0x000000000001b0a3
- (id)description;	// IMP=0x000000000001b08f
- (_Bool)matchesContactHandle:(id)arg1;	// IMP=0x000000000001aec4
- (_Bool)matchesContact:(id)arg1;	// IMP=0x000000000001a7b5
- (id)normalizedPhoneNumbers;	// IMP=0x000000000001a61a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000019e4f
- (unsigned long long)hash;	// IMP=0x0000000000019c90
- (id)_initWithContactIdentifier:(id)arg1 firstName:(id)arg2 middleName:(id)arg3 lastName:(id)arg4 nickName:(id)arg5 organizationName:(id)arg6 phoneNumbers:(id)arg7 emailAddresses:(id)arg8;	// IMP=0x0000000000019aeb
- (id)initWithContactIdentifier:(id)arg1;	// IMP=0x0000000000019abc

@end

