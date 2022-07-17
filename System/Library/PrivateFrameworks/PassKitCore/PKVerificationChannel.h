//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSCopying-Protocol.h>
#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKVerificationChannel : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _requiresUserInteraction;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    unsigned long long _type;	// 24 = 0x18
    NSString *_organizationName;	// 32 = 0x20
    NSString *_contactPoint;	// 40 = 0x28
    NSString *_sourceAddress;	// 48 = 0x30
    NSString *_typeDescription;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000016952b
+ (id)verificationChannelWithDictionary:(id)arg1 andOrganizationName:(id)arg2;	// IMP=0x0000000000168fa0
- (void).cxx_destruct;	// IMP=0x00000000001699c9
@property(copy, nonatomic) NSString *typeDescription; // @synthesize typeDescription=_typeDescription;
@property(copy, nonatomic) NSString *sourceAddress; // @synthesize sourceAddress=_sourceAddress;
@property(copy, nonatomic) NSString *contactPoint; // @synthesize contactPoint=_contactPoint;
@property(nonatomic) _Bool requiresUserInteraction; // @synthesize requiresUserInteraction=_requiresUserInteraction;
@property(copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (_Bool)needsServerRequest;	// IMP=0x000000000016990e
- (id)description;	// IMP=0x00000000001697cc
@property(readonly, copy, nonatomic) NSString *typeDescriptionUnlocalized;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000169533
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000169397
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000169181

@end
