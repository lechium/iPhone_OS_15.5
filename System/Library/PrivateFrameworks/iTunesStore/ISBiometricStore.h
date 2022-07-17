//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSLock, NSNumber;

@interface ISBiometricStore : NSObject
{
    NSCache *_contextCache;	// 8 = 0x8
    NSLock *_lock;	// 16 = 0x10
}

+ (_Bool)shouldUseX509;	// IMP=0x000000000000991f
+ (_Bool)shouldUseUpsellEnrollment;	// IMP=0x0000000000009255
+ (_Bool)shouldUseExtendedEnrollment;	// IMP=0x0000000000008b8b
+ (_Bool)shouldUseAutoEnrollment;	// IMP=0x0000000000008451
+ (_Bool)shouldUseApplePayClassic;	// IMP=0x0000000000007d87
+ (id)keychainLabelForCertWithAccountID:(id)arg1 purpose:(long long)arg2;	// IMP=0x0000000000007ae2
+ (id)keychainLabelForKeyWithAccountID:(id)arg1 purpose:(long long)arg2;	// IMP=0x0000000000007859
+ (id)keychainLabelForAccountID:(id)arg1 purpose:(long long)arg2;	// IMP=0x0000000000007840
+ (long long)tokenUpdateState;	// IMP=0x0000000000007838
+ (_Bool)tokenUpdateShouldStartWithLogKey:(id)arg1;	// IMP=0x0000000000007830
+ (void)tokenUpdateDidFinishWithLogKey:(id)arg1;	// IMP=0x000000000000782a
+ (_Bool)isActionSupported:(long long)arg1 withBiometricAuthenticationContext:(id)arg2;	// IMP=0x000000000000766b
+ (id)diskBasedPaymentSheet;	// IMP=0x0000000000006fdc
+ (id)countryCode;	// IMP=0x0000000000006d32
+ (id)applePayClassicNetworks;	// IMP=0x00000000000062df
+ (id)sharedInstance;	// IMP=0x0000000000005fe5
- (void).cxx_destruct;	// IMP=0x0000000000009d2f
- (id)x509CertChainDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 regenerateCerts:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000009d1b
- (id)signData:(id)arg1 context:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000009d07
- (id)publicKeyDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000007d73
- (_Bool)deleteKeychainTokensForAccountIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007d5f
- (id)createX509CertChainDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000007d4b
- (id)createAttestationDataForAccountIdentifier:(id)arg1 purpose:(long long)arg2 error:(id *)arg3;	// IMP=0x0000000000007d37
@property long long biometricState;
- (void)saveIdentityMapForAccountIdentifier:(id)arg1;	// IMP=0x000000000000781e
- (void)registerAccountIdentifier:(id)arg1;	// IMP=0x0000000000007818
@property(readonly) NSNumber *lastRegisteredAccountIdentifier;
- (unsigned long long)keyCountForAccountIdentifier:(id)arg1;	// IMP=0x0000000000007808
- (_Bool)isIdentityMapValidForAccountIdentifier:(id)arg1;	// IMP=0x0000000000007800
@property(readonly, getter=isBiometricStateEnabled) _Bool biometricStateEnabled;
- (unsigned long long)identityMapCount;	// IMP=0x000000000000763e
- (id)fetchContextFromCacheWithToken:(id)arg1 evict:(_Bool)arg2;	// IMP=0x00000000000075ad
- (void)clearLastRegisteredAccountIdentifier;	// IMP=0x0000000000006b8d
- (_Bool)canPerformExtendedBiometricActionsForAccountIdentifier:(id)arg1;	// IMP=0x0000000000006b85
- (_Bool)canPerformBiometricOptIn;	// IMP=0x0000000000006b7d
- (long long)biometricAvailabilityForAccountIdentifier:(id)arg1;	// IMP=0x0000000000006b72
- (void)addContextToCache:(id)arg1 withToken:(id)arg2;	// IMP=0x0000000000006252
- (id)init;	// IMP=0x000000000000603a

@end
