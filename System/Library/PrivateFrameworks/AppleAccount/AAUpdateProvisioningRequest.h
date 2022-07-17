//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, NSString;

@interface AAUpdateProvisioningRequest
{
    ACAccount *_account;	// 64 = 0x40
    NSString *_authToken;	// 72 = 0x48
}

+ (Class)responseClass;	// IMP=0x0000000000018490
- (void).cxx_destruct;	// IMP=0x0000000000018a8e
@property(copy, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property(retain, nonatomic) ACAccount *account; // @synthesize account=_account;
- (id)urlRequest;	// IMP=0x0000000000018743
- (id)urlString;	// IMP=0x00000000000186ec
- (id)urlCredential;	// IMP=0x0000000000018619
- (id)initWithURLString:(id)arg1 account:(id)arg2;	// IMP=0x00000000000185a7
- (id)initWithAccount:(id)arg1 token:(id)arg2;	// IMP=0x0000000000018509
- (id)initWithAccount:(id)arg1;	// IMP=0x00000000000184a1

@end
