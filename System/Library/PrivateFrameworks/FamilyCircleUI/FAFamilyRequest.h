//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/AAFamilyRequest.h>

@class ACAccount;

@interface FAFamilyRequest : AAFamilyRequest
{
    ACAccount *_appleAccount;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000033ada
@property(retain, nonatomic) ACAccount *appleAccount; // @synthesize appleAccount=_appleAccount;
- (id)urlRequest;	// IMP=0x00000000000338fb
- (void)URLRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000033778
- (void)_decoratedURLWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000033575
- (void)_baseURLForEndpoint:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000333b0
- (id)_queryString;	// IMP=0x00000000000333a8
- (id)_endpoint;	// IMP=0x0000000000033394
- (void)_configureRequest:(id)arg1 includePayload:(_Bool)arg2;	// IMP=0x00000000000332ce
- (id)initWithGrandSlamSigner:(id)arg1;	// IMP=0x00000000000331f6

@end
