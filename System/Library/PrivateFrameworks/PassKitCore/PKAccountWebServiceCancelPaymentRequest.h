//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface PKAccountWebServiceCancelPaymentRequest
{
    NSString *_accountIdentifier;	// 8 = 0x8
    NSString *_paymentReferenceIdentifier;	// 16 = 0x10
    NSURL *_baseURL;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008f0d6
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSString *paymentReferenceIdentifier; // @synthesize paymentReferenceIdentifier=_paymentReferenceIdentifier;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;	// IMP=0x000000000008ed1c

@end
