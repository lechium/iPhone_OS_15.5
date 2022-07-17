//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthenticationServicesCore/ASCCredentialProtocol-Protocol.h>

@class NSData, NSString;

@interface ASCSecurityKeyPublicKeyCredentialRegistration : NSObject <ASCCredentialProtocol>
{
    NSData *_credentialID;	// 8 = 0x8
    NSData *_rawClientDataJSON;	// 16 = 0x10
    NSString *_relyingPartyIdentifier;	// 24 = 0x18
    NSData *_attestationObject;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000005f7e
- (void).cxx_destruct;	// IMP=0x0000000000006177
@property(readonly, copy, nonatomic) NSData *attestationObject; // @synthesize attestationObject=_attestationObject;
@property(readonly, copy, nonatomic) NSString *relyingPartyIdentifier; // @synthesize relyingPartyIdentifier=_relyingPartyIdentifier;
@property(readonly, copy, nonatomic) NSData *rawClientDataJSON; // @synthesize rawClientDataJSON=_rawClientDataJSON;
@property(readonly, copy, nonatomic) NSData *credentialID; // @synthesize credentialID=_credentialID;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000601b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005f86
- (id)initWithRelyingPartyIdentifier:(id)arg1 attestationObject:(id)arg2 rawClientDataJSON:(id)arg3 credentialID:(id)arg4;	// IMP=0x0000000000005e66

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
