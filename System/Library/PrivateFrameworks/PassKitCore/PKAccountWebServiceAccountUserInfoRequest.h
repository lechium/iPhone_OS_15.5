//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

@interface PKAccountWebServiceAccountUserInfoRequest
{
    NSString *_accountIdentifier;	// 8 = 0x8
    NSURL *_baseURL;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000092139
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;	// IMP=0x0000000000091e49

@end

