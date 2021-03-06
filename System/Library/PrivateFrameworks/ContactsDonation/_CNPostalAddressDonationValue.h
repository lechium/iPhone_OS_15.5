//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNPostalAddress, NSString;

@interface _CNPostalAddressDonationValue
{
    CNPostalAddress *_postalAddress;	// 16 = 0x10
    long long _style;	// 24 = 0x18
    NSString *_label;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007e6c
- (void).cxx_destruct;	// IMP=0x000000000000895c
@property(readonly, copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(readonly, copy, nonatomic) CNPostalAddress *postalAddress; // @synthesize postalAddress=_postalAddress;
- (void)updatePropertyListRepresentation:(id)arg1;	// IMP=0x000000000000857e
- (void)acceptDonationValueVisitor:(id)arg1;	// IMP=0x00000000000084d4
- (unsigned long long)hash;	// IMP=0x0000000000008254
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007e74
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000007dcd
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007c98
- (id)copyWithNewExpirationDate:(id)arg1;	// IMP=0x0000000000007b87
- (id)initWithPostalAddress:(id)arg1 style:(long long)arg2 label:(id)arg3 origin:(id)arg4;	// IMP=0x0000000000007a98

@end

