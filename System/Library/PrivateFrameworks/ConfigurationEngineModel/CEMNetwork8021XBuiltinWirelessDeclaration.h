//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSDictionary, NSString;

@interface CEMNetwork8021XBuiltinWirelessDeclaration <CEMRegisteredTypeProtocol>
{
    NSDictionary *_payloadANY;	// 16 = 0x10
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x0000000000059b95
+ (id)buildWithIdentifier:(id)arg1;	// IMP=0x0000000000059aae
+ (id)restrictionPayloadKeys;	// IMP=0x0000000000059a69
+ (id)allowedPayloadKeys;	// IMP=0x0000000000059a49
+ (id)profileType;	// IMP=0x0000000000059a3c
+ (id)registeredIdentifier;	// IMP=0x0000000000059a2f
+ (id)registeredClassName;	// IMP=0x0000000000059a22
- (void).cxx_destruct;	// IMP=0x000000000005a1cc
@property(copy, nonatomic) NSDictionary *payloadANY; // @synthesize payloadANY=_payloadANY;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005a145
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x0000000000059f45
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000059c7c
- (id)assetReferences;	// IMP=0x0000000000059aa1
- (int)activationLevel;	// IMP=0x0000000000059a99
- (_Bool)mustBeSupervised;	// IMP=0x0000000000059a91
- (_Bool)multipleAllowed;	// IMP=0x0000000000059a89

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
