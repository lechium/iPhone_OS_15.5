//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NPKProtoRemotePassActionSelectItemResponse, NSDictionary, PKCurrencyAmount;

@interface NPKRemotePassActionSelectItemResponse
{
    PKCurrencyAmount *_cachedCurrencyAmount;	// 8 = 0x8
    NSDictionary *_cachedServiceProviderData;	// 16 = 0x10
    NPKProtoRemotePassActionSelectItemResponse *_protoResponse;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000083099
@property(retain, nonatomic) NPKProtoRemotePassActionSelectItemResponse *protoResponse; // @synthesize protoResponse=_protoResponse;
- (id)serviceProviderData;	// IMP=0x0000000000082f2d
- (id)currencyAmount;	// IMP=0x0000000000082e12
- (int)result;	// IMP=0x0000000000082d1b
- (id)identifier;	// IMP=0x0000000000082ccb
- (id)description;	// IMP=0x0000000000082c26
- (id)initWithIdentifier:(id)arg1 cardType:(unsigned long long)arg2 passOrganizationName:(id)arg3 result:(int)arg4 incrementAmount:(long long)arg5 currencyCode:(id)arg6 serviceProviderDataData:(id)arg7 image:(id)arg8 passLocalizedDesciption:(id)arg9 caption:(id)arg10 summaryText:(id)arg11 message:(id)arg12;	// IMP=0x00000000000829ac
- (id)initWithRenewalAmount:(id)arg1 serviceProviderData:(id)arg2 fromRequest:(id)arg3 withResult:(int)arg4;	// IMP=0x000000000008264e

@end
