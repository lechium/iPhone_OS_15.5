//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthenticationServices/ASAuthorizationPublicKeyCredentialRegistration-Protocol.h>

@class ASPublicKeyCredentialBase, NSData, NSString;

@interface ASAuthorizationPlatformPublicKeyCredentialRegistration : NSObject <ASAuthorizationPublicKeyCredentialRegistration>
{
    ASPublicKeyCredentialBase *_baseCredential;	// 8 = 0x8
    NSData *_rawAttestationObject;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002bb36
- (void).cxx_destruct;	// IMP=0x000000000002bcdb
@property(readonly, copy, nonatomic) NSData *rawAttestationObject; // @synthesize rawAttestationObject=_rawAttestationObject;
@property(readonly, copy, nonatomic) NSData *credentialID;
@property(readonly, copy, nonatomic) NSData *rawClientDataJSON;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000002bc37
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002bb72
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002bb3e
- (id)initWithCoreCredential:(id)arg1;	// IMP=0x000000000002ba4b
- (id)_initWithBaseCredential:(id)arg1 rawAttestationObject:(id)arg2;	// IMP=0x000000000002b983

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

