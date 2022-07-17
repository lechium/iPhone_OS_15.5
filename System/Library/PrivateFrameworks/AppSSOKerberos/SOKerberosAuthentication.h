//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SOADSiteDiscovery, SOKerberosHelper, SOKeychainHelper;

@interface SOKerberosAuthentication : NSObject
{
    _Bool _siteDiscoveryInProgress;	// 8 = 0x8
    NSString *_realm;	// 16 = 0x10
    SOKerberosHelper *_kerberosHelper;	// 24 = 0x18
    SOKeychainHelper *_keychainHelper;	// 32 = 0x20
    SOADSiteDiscovery *_siteDiscovery;	// 40 = 0x28
}

+ (void)savePacValues:(id)arg1 atLogin:(_Bool)arg2;	// IMP=0x0000000000018d5f
+ (void)saveValuesForPlugins:(id)arg1;	// IMP=0x0000000000018c1f
- (void).cxx_destruct;	// IMP=0x000000000001b96f
@property(retain) SOADSiteDiscovery *siteDiscovery; // @synthesize siteDiscovery=_siteDiscovery;
@property(retain) SOKeychainHelper *keychainHelper; // @synthesize keychainHelper=_keychainHelper;
@property(retain) SOKerberosHelper *kerberosHelper; // @synthesize kerberosHelper=_kerberosHelper;
@property _Bool siteDiscoveryInProgress; // @synthesize siteDiscoveryInProgress=_siteDiscoveryInProgress;
@property(retain, nonatomic) NSString *realm; // @synthesize realm=_realm;
- (void)triggerVPNIfNeededUsingRealm:(id)arg1 bundleIdentifier:(id)arg2 auditToken:(id)arg3;	// IMP=0x000000000001b8d1
- (unsigned long long)mapErrorToKnownError:(id)arg1;	// IMP=0x000000000001b538
- (_Bool)refreshPacValuesWithContext:(id)arg1 credential:(struct gss_cred_id_t_desc_struct *)arg2 atLogin:(_Bool)arg3;	// IMP=0x000000000001b31d
- (_Bool)refreshPacValuesWithContext:(id)arg1 atLogin:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000001b163
- (_Bool)changePasswordWithContext:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000001ae4c
- (unsigned long long)findExistingCredentialUsingContext:(id)arg1 returningCredential:(struct gss_cred_id_t_desc_struct **)arg2 orError:(id *)arg3;	// IMP=0x000000000001ac6d
- (unsigned long long)createNewCredentialUsingContext:(id)arg1 returningCredential:(struct gss_cred_id_t_desc_struct **)arg2 orError:(id *)arg3;	// IMP=0x0000000000019b20
- (void)_determineSiteCodeUsingDispatchGroup:(id)arg1 bundleIdentifier:(id)arg2 auditTokenData:(id)arg3 networkFingerprint:(id)arg4 requireTLSForLDAP:(_Bool)arg5;	// IMP=0x0000000000019569
- (void)determineSiteCodeUsingContext:(id)arg1;	// IMP=0x0000000000019426
- (id)retrieveCachedSiteCodeFromCacheForBundleIdentifier:(id)arg1 networkFingerprint:(id)arg2;	// IMP=0x00000000000192e1
- (void)setSiteCodeUsingContext:(id)arg1;	// IMP=0x00000000000190de
- (unsigned long long)attemptKerberosWithContext:(id)arg1 returningToken:(id *)arg2 orError:(id *)arg3;	// IMP=0x00000000000179f0
- (id)initWithRealm:(id)arg1;	// IMP=0x00000000000178da

@end
