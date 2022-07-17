//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSData;

@interface NPKPaymentProvisioningFlowControllerGetIssuerApplicationAddRequestStepContext
{
    NSArray *_certificates;	// 40 = 0x28
    NSData *_nonce;	// 48 = 0x30
    NSData *_nonceSignature;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000aeda1
@property(retain, nonatomic) NSData *nonceSignature; // @synthesize nonceSignature=_nonceSignature;
@property(retain, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(retain, nonatomic) NSArray *certificates; // @synthesize certificates=_certificates;
- (id)description;	// IMP=0x00000000000aec46
- (id)initWithRequestContext:(id)arg1;	// IMP=0x00000000000aec17

@end
