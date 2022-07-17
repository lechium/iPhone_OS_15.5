//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString, PKPaymentWebService;

@interface PKPaymentRequestSupportedQuery : NSObject
{
    _Bool _issuedOnTheWeb;	// 8 = 0x8
    _Bool _isMultiTokensRequest;	// 9 = 0x9
    NSArray *_supportedNetworkIDs;	// 16 = 0x10
    unsigned long long _merchantCapabilities;	// 24 = 0x18
    NSString *_merchantCountryCode;	// 32 = 0x20
    long long _paymentMode;	// 40 = 0x28
    NSSet *_paymentApplicationStates;	// 48 = 0x30
    PKPaymentWebService *_webService;	// 56 = 0x38
}

+ (id)inAppQueryWithSupportedNetworkIDs:(id)arg1 merchantCapabilities:(unsigned long long)arg2 merchantCountryCode:(id)arg3 paymentMode:(long long)arg4 paymentApplicationStates:(id)arg5 isMultiTokensRequest:(_Bool)arg6 webService:(id)arg7;	// IMP=0x00000000000ead49
+ (id)webQueryWithSupportedNetworkIDs:(id)arg1 merchantCapabilities:(unsigned long long)arg2 merchantCountryCode:(id)arg3 paymentMode:(long long)arg4 paymentApplicationStates:(id)arg5 isMultiTokensRequest:(_Bool)arg6 webService:(id)arg7;	// IMP=0x00000000000eac7b
- (void).cxx_destruct;	// IMP=0x00000000000eaf98
@property(readonly, nonatomic) PKPaymentWebService *webService; // @synthesize webService=_webService;
@property(readonly, nonatomic) _Bool isMultiTokensRequest; // @synthesize isMultiTokensRequest=_isMultiTokensRequest;
@property(readonly, nonatomic) NSSet *paymentApplicationStates; // @synthesize paymentApplicationStates=_paymentApplicationStates;
@property(readonly, nonatomic) long long paymentMode; // @synthesize paymentMode=_paymentMode;
@property(readonly, nonatomic) NSString *merchantCountryCode; // @synthesize merchantCountryCode=_merchantCountryCode;
@property(readonly, nonatomic) unsigned long long merchantCapabilities; // @synthesize merchantCapabilities=_merchantCapabilities;
@property(readonly, nonatomic) NSArray *supportedNetworkIDs; // @synthesize supportedNetworkIDs=_supportedNetworkIDs;
@property(readonly, nonatomic) _Bool issuedOnTheWeb; // @synthesize issuedOnTheWeb=_issuedOnTheWeb;
- (id)initWithIssuedOnTheWeb:(_Bool)arg1 supportedNetworkIDs:(id)arg2 merchantCapabilities:(unsigned long long)arg3 merchantCountryCode:(id)arg4 paymentMode:(long long)arg5 paymentApplicationStates:(id)arg6 isMultiTokensRequest:(_Bool)arg7 webService:(id)arg8;	// IMP=0x00000000000eae14

@end
