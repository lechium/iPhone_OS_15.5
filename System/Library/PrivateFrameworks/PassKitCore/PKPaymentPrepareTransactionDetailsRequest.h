//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDecimalNumber, NSString, PKPaymentMerchantSession;

@interface PKPaymentPrepareTransactionDetailsRequest
{
    PKPaymentMerchantSession *_merchantSession;	// 16 = 0x10
    NSString *_secureElementIdentifier;	// 24 = 0x18
    NSDecimalNumber *_amount;	// 32 = 0x20
    NSString *_currencyCode;	// 40 = 0x28
}

+ (id)serverSupportedLanguages;	// IMP=0x00000000002c5aee
- (void).cxx_destruct;	// IMP=0x00000000002c5bd9
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(copy, nonatomic) NSDecimalNumber *amount; // @synthesize amount=_amount;
@property(copy, nonatomic) NSString *secureElementIdentifier; // @synthesize secureElementIdentifier=_secureElementIdentifier;
@property(retain, nonatomic) PKPaymentMerchantSession *merchantSession; // @synthesize merchantSession=_merchantSession;
- (id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2;	// IMP=0x00000000002c57d7
- (id)initWithMerchantSession:(id)arg1 secureElementIdentifier:(id)arg2 amount:(id)arg3 currencyCode:(id)arg4;	// IMP=0x00000000002c56b8

@end
