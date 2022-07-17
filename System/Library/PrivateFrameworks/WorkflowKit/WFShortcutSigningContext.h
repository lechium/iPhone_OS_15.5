//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, SFAppleIDValidationRecord;

@interface WFShortcutSigningContext : NSObject
{
    NSDate *_expirationDate;	// 8 = 0x8
    NSArray *_signingCertificateChain;	// 16 = 0x10
    SFAppleIDValidationRecord *_appleIDValidationRecord;	// 24 = 0x18
    NSArray *_appleIDCertificateChain;	// 32 = 0x20
    struct __SecKey *_signingPublicKey;	// 40 = 0x28
    NSData *_signingPublicKeySignature;	// 48 = 0x30
}

+ (id)contextWithSigningCertificateChain:(id)arg1;	// IMP=0x000000000034bf97
+ (id)contextWithAppleIDAccount:(id)arg1 signingKey:(struct __SecKey *)arg2;	// IMP=0x000000000034bc6c
+ (id)contextWithAuthData:(id)arg1;	// IMP=0x000000000034acc9
- (void).cxx_destruct;	// IMP=0x000000000034a474
@property(retain, nonatomic) NSData *signingPublicKeySignature; // @synthesize signingPublicKeySignature=_signingPublicKeySignature;
@property(nonatomic) struct __SecKey *signingPublicKey; // @synthesize signingPublicKey=_signingPublicKey;
@property(readonly, copy, nonatomic) NSArray *appleIDCertificateChain; // @synthesize appleIDCertificateChain=_appleIDCertificateChain;
@property(readonly, nonatomic) SFAppleIDValidationRecord *appleIDValidationRecord; // @synthesize appleIDValidationRecord=_appleIDValidationRecord;
@property(readonly, copy, nonatomic) NSArray *signingCertificateChain; // @synthesize signingCertificateChain=_signingCertificateChain;
@property(readonly, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (_Bool)validateSigningCertificateChainWithICloudIdentifier:(id *)arg1 error:(id *)arg2;	// IMP=0x0000000000349f64
- (void)validateAppleIDValidationRecordWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000349b8a
- (_Bool)validateAppleIDCertificatesWithError:(id *)arg1;	// IMP=0x00000000003495f9
- (_Bool)validateWithSigningMethod:(long long *)arg1 iCloudIdentifier:(id *)arg2 error:(id *)arg3;	// IMP=0x000000000034904e
- (_Bool)validateWithSigningMethod:(long long *)arg1 error:(id *)arg2;	// IMP=0x0000000000349037
- (void)validateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000348db1
- (struct __SecKey *)copyPublicKey;	// IMP=0x0000000000348cdc
- (void)dealloc;	// IMP=0x0000000000348c9d
- (id)initWithSigningCertificateChain:(id)arg1;	// IMP=0x0000000000348bf2
- (id)initWithAppleIDValidationRecord:(id)arg1 appleIDCertificateChain:(id)arg2 signingPublicKey:(struct __SecKey *)arg3 signingPublicKeyData:(id)arg4;	// IMP=0x0000000000348af1
- (id)generateAuthData;	// IMP=0x0000000000348725

@end
