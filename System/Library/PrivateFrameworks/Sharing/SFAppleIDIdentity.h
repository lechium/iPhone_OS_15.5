//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Sharing/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSString;

@interface SFAppleIDIdentity : NSObject <NSSecureCoding>
{
    NSString *_encDSID;	// 8 = 0x8
    NSString *_intermediateCertificateSerialNumber;	// 16 = 0x10
    _Bool _linkedToCurrentUser;	// 24 = 0x18
    NSString *_accountIdentifier;	// 32 = 0x20
    NSString *_altDSID;	// 40 = 0x28
    NSString *_appleID;	// 48 = 0x30
    NSDate *_certificateExpirationDate;	// 56 = 0x38
    NSData *_certificatePersistentReference;	// 64 = 0x40
    NSDate *_intermediateCertificateExpirationDate;	// 72 = 0x48
    NSData *_intermediateCertificatePersistentReference;	// 80 = 0x50
    NSDate *_lastValidationAttemptDate;	// 88 = 0x58
    NSDate *_lastValidationDate;	// 96 = 0x60
    NSDate *_modificationDate;	// 104 = 0x68
    NSData *_privateKeyPersistentReference;	// 112 = 0x70
    NSString *_serialNumber;	// 120 = 0x78
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000070d84
- (void).cxx_destruct;	// IMP=0x0000000000073fde
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSData *privateKeyPersistentReference; // @synthesize privateKeyPersistentReference=_privateKeyPersistentReference;
@property(retain, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(nonatomic) _Bool linkedToCurrentUser; // @synthesize linkedToCurrentUser=_linkedToCurrentUser;
@property(retain, nonatomic) NSDate *lastValidationDate; // @synthesize lastValidationDate=_lastValidationDate;
@property(retain, nonatomic) NSDate *lastValidationAttemptDate; // @synthesize lastValidationAttemptDate=_lastValidationAttemptDate;
@property(retain, nonatomic) NSData *intermediateCertificatePersistentReference; // @synthesize intermediateCertificatePersistentReference=_intermediateCertificatePersistentReference;
@property(retain, nonatomic) NSDate *intermediateCertificateExpirationDate; // @synthesize intermediateCertificateExpirationDate=_intermediateCertificateExpirationDate;
@property(retain, nonatomic) NSData *certificatePersistentReference; // @synthesize certificatePersistentReference=_certificatePersistentReference;
@property(retain, nonatomic) NSDate *certificateExpirationDate; // @synthesize certificateExpirationDate=_certificateExpirationDate;
@property(readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(readonly, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
@property(retain, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (int)verifyKeys;	// IMP=0x0000000000073a2d
- (void)removeFromKeychain;	// IMP=0x000000000007387d
- (struct __SecIdentity *)copyIdentity;	// IMP=0x0000000000073784
@property(readonly, nonatomic) _Bool needsRenewal;
@property(readonly, nonatomic) _Bool isInvalid;
@property(readonly, nonatomic) _Bool intermediateCertificateExpired;
@property(readonly, nonatomic) NSString *intermediateCertificateSerialNumber;
@property(readonly, nonatomic) _Bool certificateExpired;
- (_Bool)isDateInThePast:(id)arg1;	// IMP=0x0000000000072c26
- (struct __SecKey *)copyPrivateKey;	// IMP=0x000000000007293e
- (struct __SecCertificate *)copyIntermediateCertificate;	// IMP=0x0000000000072927
- (struct __SecCertificate *)copyCertificateWithType:(long long)arg1;	// IMP=0x00000000000725bd
- (struct __SecCertificate *)copyCertificate;	// IMP=0x00000000000725a9
- (id)description;	// IMP=0x00000000000721e1
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000071fd7
- (id)initWithAppleID:(id)arg1 altDSID:(id)arg2;	// IMP=0x0000000000071f3e
- (_Bool)isEqualToIdentity:(id)arg1;	// IMP=0x0000000000071541
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000714d9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000713e0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007121b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000070d8c

@end

