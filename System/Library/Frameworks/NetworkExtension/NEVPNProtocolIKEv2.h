//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NEVPNIKEv2SecurityAssociationParameters, NSArray, NSString;

@interface NEVPNProtocolIKEv2
{
    _Bool _useConfigurationAttributeInternalIPSubnet;	// 8 = 0x8
    _Bool _disableMOBIKE;	// 9 = 0x9
    _Bool _disableRedirect;	// 10 = 0xa
    _Bool _enablePFS;	// 11 = 0xb
    _Bool _enableRevocationCheck;	// 12 = 0xc
    _Bool _strictRevocationCheck;	// 13 = 0xd
    _Bool _enableFallback;	// 14 = 0xe
    _Bool _wakeForRekey;	// 15 = 0xf
    _Bool _opportunisticPFS;	// 16 = 0x10
    _Bool _disableInitialContact;	// 17 = 0x11
    int _natKeepAliveOffloadEnable;	// 20 = 0x14
    int _natKeepAliveOffloadInterval;	// 24 = 0x18
    int _disableMOBIKERetryOnWake;	// 28 = 0x1c
    long long _deadPeerDetectionRate;	// 32 = 0x20
    NSString *_serverCertificateIssuerCommonName;	// 40 = 0x28
    NSString *_serverCertificateCommonName;	// 48 = 0x30
    long long _certificateType;	// 56 = 0x38
    NEVPNIKEv2SecurityAssociationParameters *_IKESecurityAssociationParameters;	// 64 = 0x40
    NEVPNIKEv2SecurityAssociationParameters *_childSecurityAssociationParameters;	// 72 = 0x48
    long long _minimumTLSVersion;	// 80 = 0x50
    long long _maximumTLSVersion;	// 88 = 0x58
    unsigned long long _mtu;	// 96 = 0x60
    NSString *_pluginType;	// 104 = 0x68
    NSArray *_IKESecurityAssociationParametersArray;	// 112 = 0x70
    NSArray *_childSecurityAssociationParametersArray;	// 120 = 0x78
    NSString *_providerBundleIdentifier;	// 128 = 0x80
    long long _tunnelKind;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000001baebe
- (void).cxx_destruct;	// IMP=0x00000000001bd58f
@property _Bool disableInitialContact; // @synthesize disableInitialContact=_disableInitialContact;
@property long long tunnelKind; // @synthesize tunnelKind=_tunnelKind;
@property _Bool opportunisticPFS; // @synthesize opportunisticPFS=_opportunisticPFS;
@property int disableMOBIKERetryOnWake; // @synthesize disableMOBIKERetryOnWake=_disableMOBIKERetryOnWake;
@property int natKeepAliveOffloadInterval; // @synthesize natKeepAliveOffloadInterval=_natKeepAliveOffloadInterval;
@property int natKeepAliveOffloadEnable; // @synthesize natKeepAliveOffloadEnable=_natKeepAliveOffloadEnable;
@property(copy) NSString *providerBundleIdentifier; // @synthesize providerBundleIdentifier=_providerBundleIdentifier;
@property(retain) NSArray *childSecurityAssociationParametersArray; // @synthesize childSecurityAssociationParametersArray=_childSecurityAssociationParametersArray;
@property(retain) NSArray *IKESecurityAssociationParametersArray; // @synthesize IKESecurityAssociationParametersArray=_IKESecurityAssociationParametersArray;
@property(readonly) NSString *pluginType; // @synthesize pluginType=_pluginType;
@property _Bool wakeForRekey; // @synthesize wakeForRekey=_wakeForRekey;
@property unsigned long long mtu; // @synthesize mtu=_mtu;
@property _Bool enableFallback; // @synthesize enableFallback=_enableFallback;
@property long long maximumTLSVersion; // @synthesize maximumTLSVersion=_maximumTLSVersion;
@property long long minimumTLSVersion; // @synthesize minimumTLSVersion=_minimumTLSVersion;
@property _Bool strictRevocationCheck; // @synthesize strictRevocationCheck=_strictRevocationCheck;
@property _Bool enableRevocationCheck; // @synthesize enableRevocationCheck=_enableRevocationCheck;
@property _Bool enablePFS; // @synthesize enablePFS=_enablePFS;
@property _Bool disableRedirect; // @synthesize disableRedirect=_disableRedirect;
@property _Bool disableMOBIKE; // @synthesize disableMOBIKE=_disableMOBIKE;
@property(readonly) NEVPNIKEv2SecurityAssociationParameters *childSecurityAssociationParameters; // @synthesize childSecurityAssociationParameters=_childSecurityAssociationParameters;
@property(readonly) NEVPNIKEv2SecurityAssociationParameters *IKESecurityAssociationParameters; // @synthesize IKESecurityAssociationParameters=_IKESecurityAssociationParameters;
@property _Bool useConfigurationAttributeInternalIPSubnet; // @synthesize useConfigurationAttributeInternalIPSubnet=_useConfigurationAttributeInternalIPSubnet;
@property long long certificateType; // @synthesize certificateType=_certificateType;
@property(copy) NSString *serverCertificateCommonName; // @synthesize serverCertificateCommonName=_serverCertificateCommonName;
@property(copy) NSString *serverCertificateIssuerCommonName; // @synthesize serverCertificateIssuerCommonName=_serverCertificateIssuerCommonName;
@property long long deadPeerDetectionRate; // @synthesize deadPeerDetectionRate=_deadPeerDetectionRate;
- (id)copyLegacyDictionary;	// IMP=0x00000000001bc934
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;	// IMP=0x00000000001bc0c2
- (_Bool)checkValidityAndCollectErrors:(id)arg1;	// IMP=0x00000000001bbfed
- (id)clone;	// IMP=0x00000000001bbf88
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001bbbcb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001bb734
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001bb227
- (id)init;	// IMP=0x00000000001bb213
- (id)initWithPluginType:(id)arg1;	// IMP=0x00000000001bb043
- (void)setPluginType:(id)arg1;	// IMP=0x00000000001baec6

@end

