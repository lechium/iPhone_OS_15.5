//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BusinessChat/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSURL;

@interface BCOAuth2Parameters : NSObject <NSSecureCoding>
{
    NSString *_clientIdentifier;	// 8 = 0x8
    NSString *_clientSecret;	// 16 = 0x10
    NSArray *_scope;	// 24 = 0x18
    NSString *_state;	// 32 = 0x20
    NSString *_responseType;	// 40 = 0x28
    NSString *_responseEncryptionKey;	// 48 = 0x30
    NSURL *_authorizationURL;	// 56 = 0x38
    NSURL *_accessTokenURL;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000014e3d
- (void).cxx_destruct;	// IMP=0x0000000000015426
- (id)responseEncryptionKey;	// IMP=0x000000000001541c
- (id)debugDescription;	// IMP=0x00000000000153d1
- (id)tokenExchangeBodyWithCode:(id)arg1;	// IMP=0x000000000001512a
- (id)tokenExchangeURL;	// IMP=0x000000000001510c
- (id)authenticationSessionURL;	// IMP=0x0000000000014e45
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000014be2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000014afd
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000014358

@end
