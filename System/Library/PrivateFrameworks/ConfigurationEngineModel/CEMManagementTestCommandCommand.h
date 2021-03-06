//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSString;

@interface CEMManagementTestCommandCommand <CEMRegisteredTypeProtocol>
{
    NSString *_payloadEcho;	// 16 = 0x10
    NSString *_payloadReturnStatus;	// 24 = 0x18
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEcho:(id)arg2;	// IMP=0x000000000005551c
+ (id)buildWithIdentifier:(id)arg1 withEcho:(id)arg2 withReturnStatus:(id)arg3;	// IMP=0x00000000000553da
+ (id)allowedPayloadKeys;	// IMP=0x0000000000055319
+ (id)registeredIdentifier;	// IMP=0x000000000005530c
+ (id)registeredClassName;	// IMP=0x00000000000552ff
- (void).cxx_destruct;	// IMP=0x00000000000559a1
@property(copy, nonatomic) NSString *payloadReturnStatus; // @synthesize payloadReturnStatus=_payloadReturnStatus;
@property(copy, nonatomic) NSString *payloadEcho; // @synthesize payloadEcho=_payloadEcho;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000558c8
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x0000000000055807
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000055624
- (int)executionLevel;	// IMP=0x00000000000553cf
- (_Bool)mustBeSupervised;	// IMP=0x00000000000553c7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

