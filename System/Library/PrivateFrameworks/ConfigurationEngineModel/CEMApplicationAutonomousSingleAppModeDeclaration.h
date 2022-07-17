//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMApplicationAutonomousSingleAppModeDeclaration <CEMRegisteredTypeProtocol>
{
    NSArray *_payloadAllowedApplications;	// 16 = 0x10
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withAllowedApplications:(id)arg2;	// IMP=0x0000000000012d7c
+ (id)buildWithIdentifier:(id)arg1 withAllowedApplications:(id)arg2;	// IMP=0x0000000000012c63
+ (id)restrictionPayloadKeys;	// IMP=0x0000000000012c1e
+ (id)allowedPayloadKeys;	// IMP=0x0000000000012b7b
+ (id)profileType;	// IMP=0x0000000000012b6e
+ (id)registeredIdentifier;	// IMP=0x0000000000012b61
+ (id)registeredClassName;	// IMP=0x0000000000012b54
- (void).cxx_destruct;	// IMP=0x00000000000131bc
@property(copy, nonatomic) NSArray *payloadAllowedApplications; // @synthesize payloadAllowedApplications=_payloadAllowedApplications;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000013135
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x0000000000013026
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000012e95
- (id)assetReferences;	// IMP=0x0000000000012c56
- (int)activationLevel;	// IMP=0x0000000000012c4e
- (_Bool)mustBeSupervised;	// IMP=0x0000000000012c46
- (_Bool)multipleAllowed;	// IMP=0x0000000000012c3e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
