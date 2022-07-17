//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CEMCredentialSCEPDeclaration_SCEPSubjectAltName
{
    NSString *_payloadRfc822Name;	// 16 = 0x10
    NSString *_payloadDNSName;	// 24 = 0x18
    NSString *_payloadUniformResourceIdentifier;	// 32 = 0x20
    NSString *_payloadNtPrincipalName;	// 40 = 0x28
}

+ (id)buildRequiredOnly;	// IMP=0x00000000000309ce
+ (id)buildWithRfc822Name:(id)arg1 withDNSName:(id)arg2 withUniformResourceIdentifier:(id)arg3 withNtPrincipalName:(id)arg4;	// IMP=0x00000000000308f0
+ (id)allowedPayloadKeys;	// IMP=0x000000000003082c
- (void).cxx_destruct;	// IMP=0x0000000000030f08
@property(copy, nonatomic) NSString *payloadNtPrincipalName; // @synthesize payloadNtPrincipalName=_payloadNtPrincipalName;
@property(copy, nonatomic) NSString *payloadUniformResourceIdentifier; // @synthesize payloadUniformResourceIdentifier=_payloadUniformResourceIdentifier;
@property(copy, nonatomic) NSString *payloadDNSName; // @synthesize payloadDNSName=_payloadDNSName;
@property(copy, nonatomic) NSString *payloadRfc822Name; // @synthesize payloadRfc822Name=_payloadRfc822Name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000030dab
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x0000000000030caa
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000309e7

@end
