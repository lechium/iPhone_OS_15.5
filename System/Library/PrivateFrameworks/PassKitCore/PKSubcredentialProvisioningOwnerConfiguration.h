//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PKAppletSubcredentialPairingSession;

@interface PKSubcredentialProvisioningOwnerConfiguration
{
    PKAppletSubcredentialPairingSession *_session;	// 32 = 0x20
    NSString *_pairingPassword;	// 40 = 0x28
    NSString *_keyName;	// 48 = 0x30
    NSString *_issuerName;	// 56 = 0x38
    unsigned long long _radioTechnologies;	// 64 = 0x40
    NSString *_appIdentifier;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000263e85
@property(retain, nonatomic) NSString *appIdentifier; // @synthesize appIdentifier=_appIdentifier;
@property(readonly, nonatomic) unsigned long long radioTechnologies; // @synthesize radioTechnologies=_radioTechnologies;
@property(readonly, nonatomic) NSString *issuerName; // @synthesize issuerName=_issuerName;
@property(readonly, nonatomic) NSString *keyName; // @synthesize keyName=_keyName;
@property(readonly, nonatomic) NSString *pairingPassword; // @synthesize pairingPassword=_pairingPassword;
@property(readonly, nonatomic) __weak PKAppletSubcredentialPairingSession *session; // @synthesize session=_session;
- (id)description;	// IMP=0x0000000000263da4
- (long long)startingState;	// IMP=0x0000000000263d99
- (id)transitionTable;	// IMP=0x0000000000263d80
- (id)initWithSession:(id)arg1 pairingPassword:(id)arg2 keyName:(id)arg3 issuerName:(id)arg4 webService:(id)arg5 registrationMetadata:(id)arg6 radioTechnologies:(unsigned long long)arg7;	// IMP=0x0000000000263c87

@end

