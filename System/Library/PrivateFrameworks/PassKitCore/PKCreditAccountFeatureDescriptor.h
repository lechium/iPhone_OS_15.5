//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface PKCreditAccountFeatureDescriptor
{
    unsigned long long _paymentFundingSourceTypes;	// 8 = 0x8
    unsigned long long _paymentPresets;	// 16 = 0x10
    unsigned long long _paymentFrequencies;	// 24 = 0x18
    NSArray *_supportedFileFormatsForTransactionData;	// 32 = 0x20
    NSString *_paymentTermsIdentifier;	// 40 = 0x28
    NSString *_fundingSourceTermsIdentifier;	// 48 = 0x30
    unsigned long long _maximumAccountUsers;	// 56 = 0x38
    unsigned long long _minimumOwnerAge;	// 64 = 0x40
    unsigned long long _minimumParticipantAge;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000003ed89b
- (void).cxx_destruct;	// IMP=0x00000000003ee819
@property(nonatomic) unsigned long long minimumParticipantAge; // @synthesize minimumParticipantAge=_minimumParticipantAge;
@property(nonatomic) unsigned long long minimumOwnerAge; // @synthesize minimumOwnerAge=_minimumOwnerAge;
@property(nonatomic) unsigned long long maximumAccountUsers; // @synthesize maximumAccountUsers=_maximumAccountUsers;
@property(copy, nonatomic) NSString *fundingSourceTermsIdentifier; // @synthesize fundingSourceTermsIdentifier=_fundingSourceTermsIdentifier;
@property(copy, nonatomic) NSString *paymentTermsIdentifier; // @synthesize paymentTermsIdentifier=_paymentTermsIdentifier;
@property(copy, nonatomic) NSArray *supportedFileFormatsForTransactionData; // @synthesize supportedFileFormatsForTransactionData=_supportedFileFormatsForTransactionData;
@property(nonatomic) unsigned long long paymentFrequencies; // @synthesize paymentFrequencies=_paymentFrequencies;
@property(nonatomic) unsigned long long paymentPresets; // @synthesize paymentPresets=_paymentPresets;
@property(nonatomic) unsigned long long paymentFundingSourceTypes; // @synthesize paymentFundingSourceTypes=_paymentFundingSourceTypes;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003ee5cb
- (_Bool)isEqualToCreditAccountFeatureDescriptor:(id)arg1;	// IMP=0x00000000003ee4cf
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003ee463
- (unsigned long long)hash;	// IMP=0x00000000003ee324
- (id)description;	// IMP=0x00000000003edc81
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000003edb1a
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000003ed8a3
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000003ed0d5

@end

