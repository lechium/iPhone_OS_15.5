//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers;

@interface CEMAccountCardDAVDeclaration_CommunicationServiceRules
{
    CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers *_payloadDefaultServiceHandlers;	// 16 = 0x10
}

+ (id)buildRequiredOnly;	// IMP=0x000000000000312c
+ (id)buildWithDefaultServiceHandlers:(id)arg1;	// IMP=0x00000000000030d6
+ (id)allowedPayloadKeys;	// IMP=0x0000000000003033
- (void).cxx_destruct;	// IMP=0x0000000000003466
@property(copy, nonatomic) CEMAccountCardDAVDeclaration_CommunicationServiceRulesDefaultServiceHandlers *payloadDefaultServiceHandlers; // @synthesize payloadDefaultServiceHandlers=_payloadDefaultServiceHandlers;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000033df
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000032d0
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003145

@end

