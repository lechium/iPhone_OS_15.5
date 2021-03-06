//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSMutableCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface HMCHIPAccessorySetupPayload : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>
{
    _Bool _requiresCustomFlow;	// 8 = 0x8
    NSNumber *_setupCode;	// 16 = 0x10
    NSNumber *_discriminator;	// 24 = 0x18
    NSNumber *_vendorID;	// 32 = 0x20
    NSNumber *_productID;	// 40 = 0x28
    NSString *_serialNumber;	// 48 = 0x30
}

+ (id)shortDescription;	// IMP=0x0000000000063d30
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000063d28
- (void).cxx_destruct;	// IMP=0x0000000000063b94
@property(nonatomic) _Bool requiresCustomFlow; // @synthesize requiresCustomFlow=_requiresCustomFlow;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSNumber *productID; // @synthesize productID=_productID;
@property(copy, nonatomic) NSNumber *vendorID; // @synthesize vendorID=_vendorID;
@property(readonly, copy, nonatomic) NSNumber *discriminator; // @synthesize discriminator=_discriminator;
@property(readonly, copy, nonatomic) NSNumber *setupCode; // @synthesize setupCode=_setupCode;
@property(readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property(readonly, copy) NSString *description;
@property(readonly, copy) NSString *privateDescription;
@property(readonly, copy) NSString *shortDescription;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000634a0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000063330
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000631e5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000631da
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000062ee8
- (id)initWithSetupCode:(id)arg1 discriminator:(id)arg2;	// IMP=0x0000000000062e28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *propertyDescription;
@property(readonly) Class superclass;

@end

