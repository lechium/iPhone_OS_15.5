//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMNetworkSettingsDeclaration <CEMRegisteredTypeProtocol>
{
    NSNumber *_payloadForceWiFiWhitelisting;	// 16 = 0x10
    NSNumber *_payloadAllowVPNCreation;	// 24 = 0x18
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x000000000006b754
+ (id)buildWithIdentifier:(id)arg1 withForceWiFiWhitelisting:(id)arg2 withAllowVPNCreation:(id)arg3;	// IMP=0x000000000006b5f5
+ (id)restrictionPayloadKeys;	// IMP=0x000000000006b51f
+ (id)allowedPayloadKeys;	// IMP=0x000000000006b471
+ (id)profileType;	// IMP=0x000000000006b464
+ (id)registeredIdentifier;	// IMP=0x000000000006b457
+ (id)registeredClassName;	// IMP=0x000000000006b44a
- (void).cxx_destruct;	// IMP=0x000000000006bbb9
@property(copy, nonatomic) NSNumber *payloadAllowVPNCreation; // @synthesize payloadAllowVPNCreation=_payloadAllowVPNCreation;
@property(copy, nonatomic) NSNumber *payloadForceWiFiWhitelisting; // @synthesize payloadForceWiFiWhitelisting=_payloadForceWiFiWhitelisting;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006bae0
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000006ba1f
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006b83b
- (id)assetReferences;	// IMP=0x000000000006b5e8
- (int)activationLevel;	// IMP=0x000000000006b5dd
- (_Bool)mustBeSupervised;	// IMP=0x000000000006b5d5
- (_Bool)multipleAllowed;	// IMP=0x000000000006b5cd

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

