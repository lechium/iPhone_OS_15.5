//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSString;

@interface CEMApplicationInviteToProgramCommand <CEMRegisteredTypeProtocol>
{
    NSString *_payloadProgramID;	// 16 = 0x10
    NSString *_payloadInvitationURL;	// 24 = 0x18
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withProgramID:(id)arg2 withInvitationURL:(id)arg3;	// IMP=0x00000000000191f9
+ (id)buildWithIdentifier:(id)arg1 withProgramID:(id)arg2 withInvitationURL:(id)arg3;	// IMP=0x00000000000190c1
+ (id)allowedPayloadKeys;	// IMP=0x0000000000019000
+ (id)registeredIdentifier;	// IMP=0x0000000000018ff3
+ (id)registeredClassName;	// IMP=0x0000000000018fe6
- (void).cxx_destruct;	// IMP=0x00000000000196a9
@property(copy, nonatomic) NSString *payloadInvitationURL; // @synthesize payloadInvitationURL=_payloadInvitationURL;
@property(copy, nonatomic) NSString *payloadProgramID; // @synthesize payloadProgramID=_payloadProgramID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000195d0
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x0000000000019513
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019331
- (int)executionLevel;	// IMP=0x00000000000190b6
- (_Bool)mustBeSupervised;	// IMP=0x00000000000190ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
