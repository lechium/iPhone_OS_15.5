//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMAssetBaseDescriptor, CEMAssetBaseReference, NSString;

@interface CEMCertificateDeclaration <CEMRegisteredTypeProtocol>
{
    CEMAssetBaseDescriptor *_payloadDescriptor;	// 16 = 0x10
    CEMAssetBaseReference *_payloadReference;	// 24 = 0x18
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withReference:(id)arg3;	// IMP=0x00000000000296af
+ (id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withReference:(id)arg3;	// IMP=0x000000000002956a
+ (id)allowedPayloadKeys;	// IMP=0x00000000000294bc
+ (id)registeredIdentifier;	// IMP=0x00000000000294af
+ (id)registeredClassName;	// IMP=0x00000000000294a2
- (void).cxx_destruct;	// IMP=0x0000000000029c8f
@property(copy, nonatomic) CEMAssetBaseReference *payloadReference; // @synthesize payloadReference=_payloadReference;
@property(copy, nonatomic) CEMAssetBaseDescriptor *payloadDescriptor; // @synthesize payloadDescriptor=_payloadDescriptor;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029bb6
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000299f3
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000297f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

