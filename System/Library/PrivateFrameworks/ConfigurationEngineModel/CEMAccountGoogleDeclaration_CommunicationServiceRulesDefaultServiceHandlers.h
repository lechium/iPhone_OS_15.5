//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CEMAccountGoogleDeclaration_CommunicationServiceRulesDefaultServiceHandlers
{
    NSString *_payloadAudioCall;	// 16 = 0x10
}

+ (id)buildRequiredOnly;	// IMP=0x0000000000004a76
+ (id)buildWithAudioCall:(id)arg1;	// IMP=0x0000000000004a20
+ (id)allowedPayloadKeys;	// IMP=0x000000000000497d
- (void).cxx_destruct;	// IMP=0x0000000000004da6
@property(copy, nonatomic) NSString *payloadAudioCall; // @synthesize payloadAudioCall=_payloadAudioCall;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000004d1f
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x0000000000004c04
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004a8f

@end

