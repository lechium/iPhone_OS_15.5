//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@class NEHotspotEAPSettings, NEHotspotHS20Settings, NSNumber, NSString;

@interface NEHotspotConfiguration : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _joinOnce;	// 8 = 0x8
    _Bool _hidden;	// 9 = 0x9
    _Bool _useSSIDPrefix;	// 10 = 0xa
    NSString *_SSID;	// 16 = 0x10
    NSString *_SSIDPrefix;	// 24 = 0x18
    NSNumber *_lifeTimeInDays;	// 32 = 0x20
    long long _securityType;	// 40 = 0x28
    NSString *_passphrase;	// 48 = 0x30
    NEHotspotEAPSettings *_eapSettings;	// 56 = 0x38
    NEHotspotHS20Settings *_hs20Settings;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000823dc
- (void).cxx_destruct;	// IMP=0x000000000008606a
@property _Bool useSSIDPrefix; // @synthesize useSSIDPrefix=_useSSIDPrefix;
@property(copy) NEHotspotHS20Settings *hs20Settings; // @synthesize hs20Settings=_hs20Settings;
@property(copy) NEHotspotEAPSettings *eapSettings; // @synthesize eapSettings=_eapSettings;
@property(copy) NSString *passphrase; // @synthesize passphrase=_passphrase;
@property long long securityType; // @synthesize securityType=_securityType;
@property _Bool hidden; // @synthesize hidden=_hidden;
@property(copy) NSNumber *lifeTimeInDays; // @synthesize lifeTimeInDays=_lifeTimeInDays;
@property _Bool joinOnce; // @synthesize joinOnce=_joinOnce;
@property(readonly) NSString *SSIDPrefix; // @synthesize SSIDPrefix=_SSIDPrefix;
@property(readonly) NSString *SSID; // @synthesize SSID=_SSID;
- (long long)validate;	// IMP=0x0000000000085077
- (_Bool)validateEAPSettings;	// IMP=0x000000000008447f
- (_Bool)validateTrustedServerCertificateReferences;	// IMP=0x0000000000084127
- (_Bool)validateClientTrustChainReference;	// IMP=0x0000000000083cc6
- (void)buildClientTrustChainReference:(struct __SecIdentity *)arg1;	// IMP=0x000000000008391a
- (_Bool)validateSecIdentityReference:(_Bool)arg1;	// IMP=0x000000000008364b
- (_Bool)isWEPPassphraseValid;	// IMP=0x000000000008351e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008330f
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008310e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000082c79
- (id)initWithSSIDPrefix:(id)arg1 passphrase:(id)arg2 isWEP:(_Bool)arg3;	// IMP=0x0000000000082b95
- (id)initWithSSIDPrefix:(id)arg1;	// IMP=0x0000000000082afc
- (id)initWithHS20Settings:(id)arg1 eapSettings:(id)arg2;	// IMP=0x00000000000829f5
- (id)initWithSSID:(id)arg1 eapSettings:(id)arg2;	// IMP=0x000000000008290c
- (id)initWithSSID:(id)arg1 passphrase:(id)arg2 isWEP:(_Bool)arg3;	// IMP=0x000000000008282b
- (id)initWithSSID:(id)arg1;	// IMP=0x0000000000082792
- (id)init;	// IMP=0x000000000008274c
- (id)description;	// IMP=0x00000000000823e4

@end
