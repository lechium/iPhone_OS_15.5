//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMAssetBaseDescriptor, NSString;

@interface CEMApplicationAnyDeclaration <CEMRegisteredTypeProtocol>
{
    CEMAssetBaseDescriptor *_payloadDescriptor;	// 16 = 0x10
    NSString *_payloadBundleIdentifier;	// 24 = 0x18
    NSString *_payloadDesignatedRequirement;	// 32 = 0x20
    NSString *_payloadSigningIdentifier;	// 40 = 0x28
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withBundleIdentifier:(id)arg3;	// IMP=0x0000000000011652
+ (id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withBundleIdentifier:(id)arg3 withDesignatedRequirement:(id)arg4 withSigningIdentifier:(id)arg5;	// IMP=0x00000000000114c0
+ (id)allowedPayloadKeys;	// IMP=0x00000000000113fc
+ (id)registeredIdentifier;	// IMP=0x00000000000113ef
+ (id)registeredClassName;	// IMP=0x00000000000113e2
- (void).cxx_destruct;	// IMP=0x0000000000011d65
@property(copy, nonatomic) NSString *payloadSigningIdentifier; // @synthesize payloadSigningIdentifier=_payloadSigningIdentifier;
@property(copy, nonatomic) NSString *payloadDesignatedRequirement; // @synthesize payloadDesignatedRequirement=_payloadDesignatedRequirement;
@property(copy, nonatomic) NSString *payloadBundleIdentifier; // @synthesize payloadBundleIdentifier=_payloadBundleIdentifier;
@property(copy, nonatomic) CEMAssetBaseDescriptor *payloadDescriptor; // @synthesize payloadDescriptor=_payloadDescriptor;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011c08
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x0000000000011a71
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000011797

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
