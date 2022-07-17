//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSSecureCoding-Protocol.h>

@class ACAccount, AMSAuthKitUpdateResult, NSDictionary;

@interface AMSAuthenticateResult : NSObject <NSSecureCoding>
{
    ACAccount *_account;	// 8 = 0x8
    NSDictionary *_serverResponse;	// 16 = 0x10
    AMSAuthKitUpdateResult *_authKitUpdateResult;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000091f88
- (void).cxx_destruct;	// IMP=0x00000000000920c3
@property(retain, nonatomic) AMSAuthKitUpdateResult *authKitUpdateResult; // @synthesize authKitUpdateResult=_authKitUpdateResult;
@property(readonly, nonatomic) NSDictionary *serverResponse; // @synthesize serverResponse=_serverResponse;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)description;	// IMP=0x0000000000091f90
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000091e6f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000091d06
@property(readonly, nonatomic) NSDictionary *authenticationResults;
- (id)initWithAccount:(id)arg1;	// IMP=0x0000000000091c25

@end
