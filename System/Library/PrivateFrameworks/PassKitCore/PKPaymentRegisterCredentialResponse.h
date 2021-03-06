//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSURL;

@interface PKPaymentRegisterCredentialResponse
{
    NSURL *_passURL;	// 8 = 0x8
    NSData *_credentialAttestation;	// 16 = 0x10
    NSData *_ephemeralPublicKey;	// 24 = 0x18
    NSData *_encryptedData;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000043840f
@property(readonly, nonatomic) NSData *encryptedData; // @synthesize encryptedData=_encryptedData;
@property(readonly, nonatomic) NSData *ephemeralPublicKey; // @synthesize ephemeralPublicKey=_ephemeralPublicKey;
@property(readonly, nonatomic) NSData *credentialAttestation; // @synthesize credentialAttestation=_credentialAttestation;
@property(readonly, nonatomic) NSURL *passURL; // @synthesize passURL=_passURL;
- (id)initWithData:(id)arg1;	// IMP=0x00000000004380ba

@end

