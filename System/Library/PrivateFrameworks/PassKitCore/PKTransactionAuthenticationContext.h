//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSData;

@interface PKTransactionAuthenticationContext : NSObject <NSSecureCoding>
{
    _Bool _complete;	// 8 = 0x8
    unsigned long long _requestedAuthenticationMechanisms;	// 16 = 0x10
    unsigned long long _processedAuthenticationMechanisms;	// 24 = 0x18
    unsigned long long _dataCollectedAuthenticationMechanisms;	// 32 = 0x20
    long long _paymentPINFormat;	// 40 = 0x28
    NSData *_nonce;	// 48 = 0x30
    NSData *_signingKeyMaterial;	// 56 = 0x38
    NSData *_partialSignature;	// 64 = 0x40
    long long _authenticationFailure;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000026d06a
- (void).cxx_destruct;	// IMP=0x000000000026d5b4
@property(nonatomic) long long authenticationFailure; // @synthesize authenticationFailure=_authenticationFailure;
@property(copy, nonatomic) NSData *partialSignature; // @synthesize partialSignature=_partialSignature;
@property(copy, nonatomic) NSData *signingKeyMaterial; // @synthesize signingKeyMaterial=_signingKeyMaterial;
@property(copy, nonatomic) NSData *nonce; // @synthesize nonce=_nonce;
@property(nonatomic) long long paymentPINFormat; // @synthesize paymentPINFormat=_paymentPINFormat;
@property(nonatomic) _Bool complete; // @synthesize complete=_complete;
@property(nonatomic) unsigned long long dataCollectedAuthenticationMechanisms; // @synthesize dataCollectedAuthenticationMechanisms=_dataCollectedAuthenticationMechanisms;
@property(nonatomic) unsigned long long processedAuthenticationMechanisms; // @synthesize processedAuthenticationMechanisms=_processedAuthenticationMechanisms;
@property(nonatomic) unsigned long long requestedAuthenticationMechanisms; // @synthesize requestedAuthenticationMechanisms=_requestedAuthenticationMechanisms;
- (_Bool)isEqualToTransactionAuthenticationContext:(id)arg1;	// IMP=0x000000000026d45d
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000026d3f5
- (unsigned long long)hash;	// IMP=0x000000000026d30d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000026d177
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000026d072
- (id)description;	// IMP=0x000000000026cfa6
- (id)dictionaryRepresentation;	// IMP=0x000000000026cd9e
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000026cb1f

@end

