//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PKPaymentSetupProduct;

@interface NPKPaymentProvisioningFlowControllerDigitalIssuanceAmountStepContext
{
    _Bool _allowsReaderModeEntry;	// 40 = 0x28
    PKPaymentSetupProduct *_product;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ace12
- (void).cxx_destruct;	// IMP=0x00000000000ad0a0
@property(nonatomic) _Bool allowsReaderModeEntry; // @synthesize allowsReaderModeEntry=_allowsReaderModeEntry;
@property(retain, nonatomic) PKPaymentSetupProduct *product; // @synthesize product=_product;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000acfba
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000acef9
- (id)description;	// IMP=0x00000000000ace49
- (id)initWithRequestContext:(id)arg1;	// IMP=0x00000000000ace1a

@end
