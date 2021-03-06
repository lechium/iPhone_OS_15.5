//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNPhoneNumber, NSString;

@interface _CNPhoneNumberDonationValue
{
    CNPhoneNumber *_phoneNumber;	// 16 = 0x10
    NSString *_label;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000073b4
- (void).cxx_destruct;	// IMP=0x0000000000007a67
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, copy, nonatomic) CNPhoneNumber *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
- (void)updatePropertyListRepresentation:(id)arg1;	// IMP=0x000000000000796f
- (void)acceptDonationValueVisitor:(id)arg1;	// IMP=0x00000000000078db
- (unsigned long long)hash;	// IMP=0x00000000000076d3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000073bc
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000007315
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000071e0
- (id)copyWithNewExpirationDate:(id)arg1;	// IMP=0x00000000000070e3
- (id)initWithPhoneNumber:(id)arg1 label:(id)arg2 origin:(id)arg3;	// IMP=0x0000000000007007

@end

