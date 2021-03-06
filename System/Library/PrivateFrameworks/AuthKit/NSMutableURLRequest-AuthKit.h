//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CFNetwork/NSMutableURLRequest.h>

@interface NSMutableURLRequest (AuthKit)
+ (id)ak_proxiedClientInfoHeadersWithDevice:(id)arg1;	// IMP=0x000000000002184a
+ (id)ak_proxiedAnisetteHeadersWithData:(id)arg1;	// IMP=0x00000000000216c9
+ (id)ak_proxiedHeadersForDevice:(id)arg1 anisetteData:(id)arg2;	// IMP=0x00000000000215e9
+ (id)ak_anisetteHeadersWithCompanionData:(id)arg1;	// IMP=0x0000000000021468
+ (id)ak_anisetteHeadersWithData:(id)arg1;	// IMP=0x00000000000211d5
+ (id)ak_deviceUDIDHeader;	// IMP=0x00000000000210fe
+ (id)ak_clientInfoHeader;	// IMP=0x0000000000021024
+ (id)ak_timeZoneHeader;	// IMP=0x0000000000020f4d
+ (id)ak_localeHeader;	// IMP=0x0000000000020e50
+ (id)ak_clientTimeHeader;	// IMP=0x0000000000020d79
- (void)ak_addPrivateEmailKeyHeader:(id)arg1;	// IMP=0x0000000000021b98
- (void)ak_addExecutionModeHeader:(_Bool)arg1;	// IMP=0x0000000000021b33
- (void)ak_addRequestUUIDHeader:(id)arg1;	// IMP=0x0000000000021b13
- (void)ak_addDeviceConfigurationModeHeaderForAuthContext:(id)arg1;	// IMP=0x0000000000021a99
- (void)ak_addDeviceConfigurationModeHeader;	// IMP=0x0000000000021a1f
- (void)ak_addCFUHeader:(id)arg1;	// IMP=0x0000000000021a06
- (void)ak_addDeviceModel;	// IMP=0x0000000000021983
- (void)ak_addShowWarranty;	// IMP=0x0000000000021960
- (void)ak_addProxiedDeviceICSCIntentHeader;	// IMP=0x0000000000020d56
- (void)ak_addOfferSecurityUpgrade:(_Bool)arg1;	// IMP=0x0000000000020d30
- (void)ak_addReAuthenticationHeader;	// IMP=0x0000000000020d0d
- (void)ak_addAppProvidedContext:(id)arg1;	// IMP=0x0000000000020cf4
- (void)ak_addProxyApp:(id)arg1;	// IMP=0x0000000000020cdb
- (void)ak_addClientApp:(id)arg1;	// IMP=0x0000000000020cc2
- (void)ak_addAcceptedSLAHeaderWithVersion:(unsigned long long)arg1;	// IMP=0x0000000000020c45
- (void)ak_addPhoneInformationHeaderWithValue:(id)arg1;	// IMP=0x0000000000020bb0
- (void)ak_addPhoneNumberCertificateHeaderWithValue:(id)arg1;	// IMP=0x0000000000020b97
- (void)ak_addPhoneNumberHeader;	// IMP=0x0000000000020a95
- (void)ak_addProxiedDeviceSerialNumberHeader:(id)arg1;	// IMP=0x0000000000020a75
- (void)ak_addDeviceSerialNumberHeader;	// IMP=0x00000000000209f2
- (void)ak_addDeviceMLBHeader;	// IMP=0x000000000002096f
- (void)ak_addDeviceROMHeader;	// IMP=0x00000000000208ec
- (void)ak_addLocalUserHasAppleIDLoginHeader;	// IMP=0x00000000000208c9
- (void)ak_addICSCIntentHeader;	// IMP=0x00000000000208a3
- (void)ak_addProxiedDevicePRKRequestHeader;	// IMP=0x0000000000020880
- (void)ak_addPRKRequestHeader;	// IMP=0x000000000002085d
- (void)ak_addTimeZoneHeaders;	// IMP=0x000000000002073c
- (void)ak_addLocaleHeader;	// IMP=0x000000000002069c
- (void)ak_addProxiedDeviceCountryHeader:(id)arg1;	// IMP=0x0000000000020636
- (void)ak_addSKUCountryHeader;	// IMP=0x00000000000205e9
- (void)ak_addCountryHeader;	// IMP=0x0000000000020532
- (void)ak_addPasswordResetKeyHeader:(id)arg1;	// IMP=0x00000000000204af
- (void)ak_addContinutationKeyHeader:(id)arg1;	// IMP=0x000000000002042c
- (void)ak_addContextHeaderForServiceType:(long long)arg1;	// IMP=0x00000000000203a6
- (void)ak_addLoggedInServicesHeaderForServices:(id)arg1;	// IMP=0x00000000000202df
- (void)ak_addAbsintheHeaderWithValue:(id)arg1;	// IMP=0x00000000000202bf
- (void)ak_addJSONRequestHeader;	// IMP=0x000000000002029f
- (void)ak_setJSONBodyWithParameters:(id)arg1;	// IMP=0x00000000000200d6
- (void)ak_setBodyWithParameters:(id)arg1;	// IMP=0x0000000000020014
- (void)_setAuthorizationHeaderWithToken:(id)arg1 altDSID:(id)arg2 key:(id)arg3;	// IMP=0x000000000001ff41
- (id)ak_valueForEncodedHeaderWithKey:(id)arg1;	// IMP=0x000000000001fea8
- (void)ak_addDataCenterHeaderWithIdentifier:(id)arg1;	// IMP=0x000000000001fe8f
- (void)ak_addURLSwitchingHeaderWithURLKey:(id)arg1 altDSID:(id)arg2;	// IMP=0x000000000001fdb4
- (void)ak_addShortLivedTokenHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2;	// IMP=0x000000000001fd9b
- (void)ak_addRecoveryHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2;	// IMP=0x000000000001fd7f
- (void)ak_addICSCRecoveryHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2;	// IMP=0x000000000001fcf7
- (void)ak_addAuthorizationHeaderWithCustodianRecoveryToken:(id)arg1 forAltDSID:(id)arg2;	// IMP=0x000000000001fcde
- (void)ak_addAuthorizationHeaderWithHeartbeatToken:(id)arg1 forAltDSID:(id)arg2;	// IMP=0x000000000001fcc5
- (void)ak_addAuthorizationHeaderWithServiceToken:(id)arg1 forAltDSID:(id)arg2;	// IMP=0x000000000001fcac
- (void)ak_addProxiedAuthorizationHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2;	// IMP=0x000000000001fc93
- (void)ak_addAuthorizationHeaderWithIdentityToken:(id)arg1 forAltDSID:(id)arg2;	// IMP=0x000000000001fc7a
- (void)ak_addProxiedAttestationHeaders:(id)arg1;	// IMP=0x000000000001fb75
- (void)ak_addProxiedAnisetteHeaders:(id)arg1;	// IMP=0x000000000001f9ab
- (void)ak_addAnisetteHeaders;	// IMP=0x000000000001f735
- (void)ak_addEphemeralAuthHeader;	// IMP=0x000000000001f712
- (void)ak_addProxiedClientInfoHeader:(id)arg1;	// IMP=0x000000000001f6f9
- (void)ak_addCompanionClientInfoHeader:(id)arg1;	// IMP=0x000000000001f6e0
- (void)ak_addCircleStatusHeader;	// IMP=0x000000000001f665
- (void)ak_addClientTimeHeader;	// IMP=0x000000000001f5e8
- (void)ak_addClientInfoHeader;	// IMP=0x000000000001f568
- (void)ak_addProxiedDeviceUDIDHeader:(id)arg1;	// IMP=0x000000000001f54f
- (void)ak_addProvisioningUDIDHeader;	// IMP=0x000000000001f4d2
- (void)ak_addDeviceUDIDHeader;	// IMP=0x000000000001f455
- (void)ak_addAppleIDUserModeHeaderWithValue:(unsigned long long)arg1;	// IMP=0x000000000001f3d8
- (void)ak_addAppleIDHeaderWithValue:(id)arg1;	// IMP=0x000000000001f3bf
- (void)ak_addLocalUserUUIDHashHeader;	// IMP=0x000000000001f312
- (void)ak_addFeatureMaskHeader;	// IMP=0x000000000001f20e
- (void)ak_addInternalBuildHeader;	// IMP=0x000000000001f12c
@end

