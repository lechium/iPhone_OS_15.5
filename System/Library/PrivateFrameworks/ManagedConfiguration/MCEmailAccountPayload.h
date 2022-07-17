//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface MCEmailAccountPayload
{
    NSString *_emailAccountDescription;	// 80 = 0x50
    NSString *_emailAccountName;	// 88 = 0x58
    NSString *_emailAccountType;	// 96 = 0x60
    NSString *_emailAddress;	// 104 = 0x68
    NSString *_incomingMailServerAuthentication;	// 112 = 0x70
    NSString *_incomingMailServerHostname;	// 120 = 0x78
    NSNumber *_incomingMailServerPortNumber;	// 128 = 0x80
    _Bool _incomingMailServerUseSSL;	// 136 = 0x88
    NSString *_incomingMailServerUsername;	// 144 = 0x90
    NSString *_incomingMailServerIMAPPathPrefix;	// 152 = 0x98
    NSString *_incomingPassword;	// 160 = 0xa0
    NSString *_outgoingPassword;	// 168 = 0xa8
    _Bool _outgoingPasswordSameAsIncomingPassword;	// 176 = 0xb0
    NSString *_outgoingMailServerAuthentication;	// 184 = 0xb8
    NSString *_outgoingMailServerHostname;	// 192 = 0xc0
    NSNumber *_outgoingMailServerPortNumber;	// 200 = 0xc8
    _Bool _outgoingMailServerUseSSL;	// 208 = 0xd0
    NSString *_outgoingMailServerUsername;	// 216 = 0xd8
    NSString *_incomingACAccountIdentifier;	// 224 = 0xe0
    NSString *_outgoingACAccountIdentifier;	// 232 = 0xe8
    NSNumber *_incomingMailServerUseSSLNum;	// 240 = 0xf0
    NSNumber *_outgoingPasswordSameAsIncomingPasswordNum;	// 248 = 0xf8
    NSNumber *_outgoingMailServerUseSSLNum;	// 256 = 0x100
}

+ (id)profileNameFromAccountTag:(id)arg1;	// IMP=0x00000000000334f9
+ (id)localizedPluralForm;	// IMP=0x0000000000030c90
+ (id)localizedSingularForm;	// IMP=0x0000000000030c7d
+ (id)typeStrings;	// IMP=0x0000000000030c5d
- (void).cxx_destruct;	// IMP=0x00000000000337db
@property(readonly, nonatomic) NSNumber *outgoingMailServerUseSSLNum; // @synthesize outgoingMailServerUseSSLNum=_outgoingMailServerUseSSLNum;
@property(readonly, nonatomic) NSNumber *outgoingPasswordSameAsIncomingPasswordNum; // @synthesize outgoingPasswordSameAsIncomingPasswordNum=_outgoingPasswordSameAsIncomingPasswordNum;
@property(readonly, nonatomic) NSNumber *incomingMailServerUseSSLNum; // @synthesize incomingMailServerUseSSLNum=_incomingMailServerUseSSLNum;
@property(retain, nonatomic) NSString *outgoingACAccountIdentifier; // @synthesize outgoingACAccountIdentifier=_outgoingACAccountIdentifier;
@property(readonly, retain, nonatomic) NSString *outgoingMailServerUsername; // @synthesize outgoingMailServerUsername=_outgoingMailServerUsername;
@property(readonly, nonatomic) _Bool outgoingMailServerUseSSL; // @synthesize outgoingMailServerUseSSL=_outgoingMailServerUseSSL;
@property(readonly, retain, nonatomic) NSNumber *outgoingMailServerPortNumber; // @synthesize outgoingMailServerPortNumber=_outgoingMailServerPortNumber;
@property(readonly, retain, nonatomic) NSString *outgoingMailServerHostname; // @synthesize outgoingMailServerHostname=_outgoingMailServerHostname;
@property(readonly, retain, nonatomic) NSString *outgoingMailServerAuthentication; // @synthesize outgoingMailServerAuthentication=_outgoingMailServerAuthentication;
@property(readonly, nonatomic) _Bool outgoingPasswordSameAsIncomingPassword; // @synthesize outgoingPasswordSameAsIncomingPassword=_outgoingPasswordSameAsIncomingPassword;
@property(readonly, retain, nonatomic) NSString *outgoingPassword; // @synthesize outgoingPassword=_outgoingPassword;
@property(retain, nonatomic) NSString *incomingACAccountIdentifier; // @synthesize incomingACAccountIdentifier=_incomingACAccountIdentifier;
@property(readonly, retain, nonatomic) NSString *incomingPassword; // @synthesize incomingPassword=_incomingPassword;
@property(readonly, retain, nonatomic) NSString *incomingMailServerIMAPPathPrefix; // @synthesize incomingMailServerIMAPPathPrefix=_incomingMailServerIMAPPathPrefix;
@property(readonly, retain, nonatomic) NSString *incomingMailServerUsername; // @synthesize incomingMailServerUsername=_incomingMailServerUsername;
@property(readonly, nonatomic) _Bool incomingMailServerUseSSL; // @synthesize incomingMailServerUseSSL=_incomingMailServerUseSSL;
@property(readonly, retain, nonatomic) NSNumber *incomingMailServerPortNumber; // @synthesize incomingMailServerPortNumber=_incomingMailServerPortNumber;
@property(readonly, retain, nonatomic) NSString *incomingMailServerHostname; // @synthesize incomingMailServerHostname=_incomingMailServerHostname;
@property(readonly, retain, nonatomic) NSString *incomingMailServerAuthentication; // @synthesize incomingMailServerAuthentication=_incomingMailServerAuthentication;
@property(readonly, retain, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property(readonly, retain, nonatomic) NSString *emailAccountType; // @synthesize emailAccountType=_emailAccountType;
@property(readonly, retain, nonatomic) NSString *emailAccountName; // @synthesize emailAccountName=_emailAccountName;
@property(readonly, retain, nonatomic) NSString *emailAccountDescription; // @synthesize emailAccountDescription=_emailAccountDescription;
- (_Bool)containsSensitiveUserInformation;	// IMP=0x000000000003359c
- (id)payloadDescriptionKeyValueSections;	// IMP=0x0000000000032840
- (id)_authenticationTypeLocalizedString:(id)arg1;	// IMP=0x0000000000032758
- (id)_emailAccountTypeLocalizedString;	// IMP=0x00000000000326e7
- (id)subtitle2Description;	// IMP=0x0000000000032655
- (id)subtitle2Label;	// IMP=0x00000000000325ce
- (id)subtitle1Description;	// IMP=0x00000000000325bc
- (id)subtitle1Label;	// IMP=0x0000000000032563
- (id)verboseDescription;	// IMP=0x0000000000032131
- (id)stubDictionary;	// IMP=0x0000000000031e08
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;	// IMP=0x0000000000030ca3
- (id)mailAccountIdentifiers;	// IMP=0x000000000003393e

@end
