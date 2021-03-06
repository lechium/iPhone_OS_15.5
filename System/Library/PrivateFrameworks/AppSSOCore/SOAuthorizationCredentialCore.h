//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppSSOCore/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSHTTPURLResponse;

@interface SOAuthorizationCredentialCore : NSObject <NSSecureCoding>
{
    NSDictionary *_httpAuthorizationHeaders;	// 8 = 0x8
    NSHTTPURLResponse *_httpResponse;	// 16 = 0x10
    NSData *_httpBody;	// 24 = 0x18
    NSArray *_secKeyProxyEndpoints;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007587
- (void).cxx_destruct;	// IMP=0x0000000000007a56
@property(retain, nonatomic) NSArray *secKeyProxyEndpoints; // @synthesize secKeyProxyEndpoints=_secKeyProxyEndpoints;
@property(retain, nonatomic) NSData *httpBody; // @synthesize httpBody=_httpBody;
@property(copy, nonatomic) NSHTTPURLResponse *httpResponse; // @synthesize httpResponse=_httpResponse;
@property(retain, nonatomic) NSDictionary *httpAuthorizationHeaders; // @synthesize httpAuthorizationHeaders=_httpAuthorizationHeaders;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000078d3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000767e
- (id)initWithAuthorizationCredential:(id)arg1;	// IMP=0x000000000000758f

@end

