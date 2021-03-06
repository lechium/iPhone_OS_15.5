//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMApplicationControlDeclaration_InstallSchedule, CEMApplicationControlDeclaration_UpdateSchedule, NSString;

@interface CEMApplicationControlDeclaration <CEMRegisteredTypeProtocol>
{
    CEMApplicationControlDeclaration_InstallSchedule *_payloadInstallSchedule;	// 16 = 0x10
    NSString *_payloadUpdatePolicy;	// 24 = 0x18
    CEMApplicationControlDeclaration_UpdateSchedule *_payloadUpdateSchedule;	// 32 = 0x20
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x0000000000013ccc
+ (id)buildWithIdentifier:(id)arg1 withInstallSchedule:(id)arg2 withUpdatePolicy:(id)arg3 withUpdateSchedule:(id)arg4;	// IMP=0x0000000000013b5d
+ (id)restrictionPayloadKeys;	// IMP=0x0000000000013b15
+ (id)allowedPayloadKeys;	// IMP=0x0000000000013a5c
+ (id)profileType;	// IMP=0x0000000000013a4f
+ (id)registeredIdentifier;	// IMP=0x0000000000013a42
+ (id)registeredClassName;	// IMP=0x0000000000013a35
- (void).cxx_destruct;	// IMP=0x0000000000014338
@property(copy, nonatomic) CEMApplicationControlDeclaration_UpdateSchedule *payloadUpdateSchedule; // @synthesize payloadUpdateSchedule=_payloadUpdateSchedule;
@property(copy, nonatomic) NSString *payloadUpdatePolicy; // @synthesize payloadUpdatePolicy=_payloadUpdatePolicy;
@property(copy, nonatomic) CEMApplicationControlDeclaration_InstallSchedule *payloadInstallSchedule; // @synthesize payloadInstallSchedule=_payloadInstallSchedule;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000014220
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x0000000000014039
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000013db3
- (id)assetReferences;	// IMP=0x0000000000013b50
- (int)activationLevel;	// IMP=0x0000000000013b45
- (_Bool)mustBeSupervised;	// IMP=0x0000000000013b3d
- (_Bool)multipleAllowed;	// IMP=0x0000000000013b35

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

