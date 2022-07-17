//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AMSKeychain : NSObject
{
}

+ (id)_resumptionHeadersQuery;	// IMP=0x000000000016b842
+ (id)_legacyAttestationForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000016ae42
+ (_Bool)_generateLegacyKeypairForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000016a58f
+ (void)_deleteResumptionHeaders;	// IMP=0x000000000016a3c9
+ (struct __SecKey *)_copyLegacyPublicKeyForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000016a0df
+ (struct __SecKey *)_copyLegacyPrivateKeyForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000169c9e
+ (id)_certificatePrivateKeyLabelForOptions:(id)arg1;	// IMP=0x0000000000169a47
+ (id)_ssKeychainLabelForAccount:(id)arg1 options:(id)arg2;	// IMP=0x000000000016981e
+ (id)_ssCertificateKeychainLabelForAccount:(id)arg1 options:(id)arg2;	// IMP=0x0000000000169656
+ (id)_primaryConstraintsWithOptions:(id)arg1;	// IMP=0x000000000016960a
+ (id)_primaryConstraintsForWatch;	// IMP=0x000000000016952e
+ (id)_primaryConstraintsForMac;	// IMP=0x0000000000169085
+ (id)_primaryConstraints;	// IMP=0x0000000000168bcc
+ (id)_extendedConstraintsWithOptions:(id)arg1;	// IMP=0x00000000001688a0
+ (struct __SecAccessControl *)createAccessControlRefWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001682bc
+ (struct __SecAccessControl *)copyAccessControlRefWithAccount:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000167dfc
+ (id)keychainLabelForOptions:(id)arg1;	// IMP=0x0000000000167bbb
+ (id)certificateKeychainLabelsForOptions:(id)arg1;	// IMP=0x0000000000167852
+ (id)legacyAttestationForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001670f0
+ (_Bool)deleteKeyPairWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001668f3
+ (void)stashResumptionHeaders:(id)arg1;	// IMP=0x00000000001663f6
+ (id)resumptionHeaders;	// IMP=0x00000000001660cc
+ (_Bool)performForwardKeyMigrationForDSID:(id)arg1 forceMigration:(_Bool)arg2;	// IMP=0x00000000001660c4
+ (_Bool)storePrimaryCert:(struct __SecCertificate *)arg1 intermediateCert:(struct __SecCertificate *)arg2 privateKey:(struct __SecKey *)arg3 options:(id)arg4 error:(id *)arg5;	// IMP=0x000000000016592d
+ (_Bool)deleteCertificateChainWithOptions:(id)arg1 error:(id *)arg2;	// IMP=0x000000000016492d
+ (struct __SecKey *)copyPublicKeyForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000163f84
+ (struct __SecKey *)copyPublicKeyForAccount:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000163e47
+ (struct __SecKey *)copyPrivateKeyWithContext:(id)arg1 account:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x000000000016394f
+ (struct __SecKey *)copyCertificatePrivateKeyWithContext:(id)arg1 account:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000163202
+ (struct __SecKey *)copyPrivateKeyWithContext:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000162eda
+ (id)certificateChainStringsForOptions:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001627e0

@end
