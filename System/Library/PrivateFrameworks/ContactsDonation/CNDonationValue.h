//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsDonation/NSSecureCoding-Protocol.h>

@class CNDonationOrigin;

@interface CNDonationValue : NSObject <NSSecureCoding>
{
    CNDonationOrigin *_origin;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000004cc0
+ (id)donationValueWithImageData:(id)arg1 origin:(id)arg2;	// IMP=0x0000000000004a1b
+ (id)donationValueWithPostalAddress:(id)arg1 style:(long long)arg2 label:(id)arg3 origin:(id)arg4;	// IMP=0x000000000000497b
+ (id)donationValueWithPhoneNumber:(id)arg1 label:(id)arg2 origin:(id)arg3;	// IMP=0x00000000000048e6
+ (id)donationValueWithEmailAddress:(id)arg1 label:(id)arg2 origin:(id)arg3;	// IMP=0x0000000000004851
+ (id)donationValueWithNameComponents:(id)arg1 origin:(id)arg2;	// IMP=0x00000000000047e1
- (void).cxx_destruct;	// IMP=0x0000000000005a18
@property(readonly, copy, nonatomic) CNDonationOrigin *origin; // @synthesize origin=_origin;
- (void)updatePropertyListRepresentation:(id)arg1;	// IMP=0x0000000000005a08
- (id)propertyListRepresentation;	// IMP=0x0000000000005930
- (id)initWithPropertyListRepresentation:(id)arg1;	// IMP=0x0000000000004d0e
- (void)acceptDonationValueVisitor:(id)arg1;	// IMP=0x0000000000004cc8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000004c9d
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004bd3
- (id)copyWithNewExpirationDate:(id)arg1;	// IMP=0x0000000000004b8d
- (unsigned long long)hash;	// IMP=0x0000000000004b5b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000004b15
- (id)initWithOrigin:(id)arg1;	// IMP=0x0000000000004a8b

@end

