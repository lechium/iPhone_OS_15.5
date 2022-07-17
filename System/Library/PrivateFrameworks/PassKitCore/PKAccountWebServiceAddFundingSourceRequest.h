//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL, PKAccountPaymentFundingSource, PKAccountWebServiceCertificatesResponse;

@interface PKAccountWebServiceAddFundingSourceRequest
{
    NSString *_accountIdentifier;	// 8 = 0x8
    NSURL *_baseURL;	// 16 = 0x10
    PKAccountPaymentFundingSource *_fundingSource;	// 24 = 0x18
    NSString *_fundingSourceTermsIdentifier;	// 32 = 0x20
    PKAccountWebServiceCertificatesResponse *_certificatesResponse;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000008f9fa
@property(retain, nonatomic) PKAccountWebServiceCertificatesResponse *certificatesResponse; // @synthesize certificatesResponse=_certificatesResponse;
@property(retain, nonatomic) NSString *fundingSourceTermsIdentifier; // @synthesize fundingSourceTermsIdentifier=_fundingSourceTermsIdentifier;
@property(retain, nonatomic) PKAccountPaymentFundingSource *fundingSource; // @synthesize fundingSource=_fundingSource;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;	// IMP=0x000000000008f428

@end
