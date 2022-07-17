//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSString;

@interface CEMSystemAirPlaySecurityDeclaration <CEMRegisteredTypeProtocol>
{
    NSString *_payloadSecurityType;	// 16 = 0x10
    NSString *_payloadAccessType;	// 24 = 0x18
    NSString *_payloadPassword;	// 32 = 0x20
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withSecurityType:(id)arg2 withAccessType:(id)arg3;	// IMP=0x00000000000ac24b
+ (id)buildWithIdentifier:(id)arg1 withSecurityType:(id)arg2 withAccessType:(id)arg3 withPassword:(id)arg4;	// IMP=0x00000000000ac0e8
+ (id)restrictionPayloadKeys;	// IMP=0x00000000000ac0a3
+ (id)allowedPayloadKeys;	// IMP=0x00000000000abfea
+ (id)profileType;	// IMP=0x00000000000abfdd
+ (id)registeredIdentifier;	// IMP=0x00000000000abfd0
+ (id)registeredClassName;	// IMP=0x00000000000abfc3
- (void).cxx_destruct;	// IMP=0x00000000000ac7e4
@property(copy, nonatomic) NSString *payloadPassword; // @synthesize payloadPassword=_payloadPassword;
@property(copy, nonatomic) NSString *payloadAccessType; // @synthesize payloadAccessType=_payloadAccessType;
@property(copy, nonatomic) NSString *payloadSecurityType; // @synthesize payloadSecurityType=_payloadSecurityType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ac6cc
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000ac5ea
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ac390
- (id)assetReferences;	// IMP=0x00000000000ac0db
- (int)activationLevel;	// IMP=0x00000000000ac0d3
- (_Bool)mustBeSupervised;	// IMP=0x00000000000ac0cb
- (_Bool)multipleAllowed;	// IMP=0x00000000000ac0c3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
