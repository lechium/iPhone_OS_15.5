//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMPasscodeScreensaverUserDeclaration <CEMRegisteredTypeProtocol>
{
    NSString *_payloadModulePath;	// 16 = 0x10
    NSNumber *_payloadIdleTime;	// 24 = 0x18
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x000000000008927b
+ (id)buildWithIdentifier:(id)arg1 withModulePath:(id)arg2 withIdleTime:(id)arg3;	// IMP=0x0000000000089136
+ (id)restrictionPayloadKeys;	// IMP=0x00000000000890ee
+ (id)allowedPayloadKeys;	// IMP=0x0000000000089040
+ (id)profileType;	// IMP=0x0000000000089033
+ (id)registeredIdentifier;	// IMP=0x0000000000089026
+ (id)registeredClassName;	// IMP=0x0000000000089019
- (void).cxx_destruct;	// IMP=0x00000000000896d6
@property(copy, nonatomic) NSNumber *payloadIdleTime; // @synthesize payloadIdleTime=_payloadIdleTime;
@property(copy, nonatomic) NSString *payloadModulePath; // @synthesize payloadModulePath=_payloadModulePath;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000895fd
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x0000000000089546
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000089362
- (id)assetReferences;	// IMP=0x0000000000089129
- (int)activationLevel;	// IMP=0x000000000008911e
- (_Bool)mustBeSupervised;	// IMP=0x0000000000089116
- (_Bool)multipleAllowed;	// IMP=0x000000000008910e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

