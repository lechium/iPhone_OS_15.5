//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, TPPBPeerStableInfoSetting, TPPBSecureElementIdentity, TPPolicyVersion;

@interface TPPeerStableInfo : NSObject
{
    _Bool _isInheritedAccount;	// 8 = 0x8
    int _syncUserControllableViews;	// 12 = 0xc
    unsigned long long _clock;	// 16 = 0x10
    TPPolicyVersion *_frozenPolicyVersion;	// 24 = 0x18
    TPPolicyVersion *_flexiblePolicyVersion;	// 32 = 0x20
    NSDictionary *_policySecrets;	// 40 = 0x28
    NSString *_deviceName;	// 48 = 0x30
    NSString *_serialNumber;	// 56 = 0x38
    NSString *_osVersion;	// 64 = 0x40
    NSData *_recoverySigningPublicKey;	// 72 = 0x48
    NSData *_recoveryEncryptionPublicKey;	// 80 = 0x50
    TPPBSecureElementIdentity *_secureElementIdentity;	// 88 = 0x58
    TPPBPeerStableInfoSetting *_walrusSetting;	// 96 = 0x60
    NSData *_data;	// 104 = 0x68
    NSData *_sig;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x000000000001d0e5
@property(readonly, nonatomic) NSData *sig; // @synthesize sig=_sig;
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) _Bool isInheritedAccount; // @synthesize isInheritedAccount=_isInheritedAccount;
@property(readonly, nonatomic) TPPBPeerStableInfoSetting *walrusSetting; // @synthesize walrusSetting=_walrusSetting;
@property(readonly, nonatomic) TPPBSecureElementIdentity *secureElementIdentity; // @synthesize secureElementIdentity=_secureElementIdentity;
@property(readonly, nonatomic) int syncUserControllableViews; // @synthesize syncUserControllableViews=_syncUserControllableViews;
@property(readonly, nonatomic) NSData *recoveryEncryptionPublicKey; // @synthesize recoveryEncryptionPublicKey=_recoveryEncryptionPublicKey;
@property(readonly, nonatomic) NSData *recoverySigningPublicKey; // @synthesize recoverySigningPublicKey=_recoverySigningPublicKey;
@property(readonly, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(readonly, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(readonly, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(readonly, nonatomic) NSDictionary *policySecrets; // @synthesize policySecrets=_policySecrets;
@property(readonly) TPPolicyVersion *flexiblePolicyVersion; // @synthesize flexiblePolicyVersion=_flexiblePolicyVersion;
@property(readonly) TPPolicyVersion *frozenPolicyVersion; // @synthesize frozenPolicyVersion=_frozenPolicyVersion;
@property(readonly, nonatomic) unsigned long long clock; // @synthesize clock=_clock;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001cfcd
- (id)bestPolicyVersion;	// IMP=0x000000000001cf6a
- (id)description;	// IMP=0x000000000001cefb
- (id)dictionaryRepresentation;	// IMP=0x000000000001ce71
- (_Bool)isEqualToPeerStableInfo:(id)arg1;	// IMP=0x000000000001cd67
- (_Bool)checkSignatureWithKey:(id)arg1;	// IMP=0x000000000001cccd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001ca7f
- (id)initWithData:(id)arg1 sig:(id)arg2;	// IMP=0x000000000001c3c6
- (id)initWithClock:(unsigned long long)arg1 frozenPolicyVersion:(id)arg2 flexiblePolicyVersion:(id)arg3 policySecrets:(id)arg4 syncUserControllableViews:(int)arg5 secureElementIdentity:(id)arg6 walrusSetting:(id)arg7 deviceName:(id)arg8 serialNumber:(id)arg9 osVersion:(id)arg10 signingKeyPair:(id)arg11 recoverySigningPubKey:(id)arg12 recoveryEncryptionPubKey:(id)arg13 isInheritedAccount:(_Bool)arg14 error:(id *)arg15;	// IMP=0x000000000001bffa
- (id)initWithClock:(unsigned long long)arg1 frozenPolicyVersion:(id)arg2 flexiblePolicyVersion:(id)arg3 policySecrets:(id)arg4 syncUserControllableViews:(int)arg5 secureElementIdentity:(id)arg6 walrusSetting:(id)arg7 deviceName:(id)arg8 serialNumber:(id)arg9 osVersion:(id)arg10 recoverySigningPubKey:(id)arg11 recoveryEncryptionPubKey:(id)arg12 isInheritedAccount:(_Bool)arg13 data:(id)arg14 sig:(id)arg15;	// IMP=0x000000000001bdea

@end

