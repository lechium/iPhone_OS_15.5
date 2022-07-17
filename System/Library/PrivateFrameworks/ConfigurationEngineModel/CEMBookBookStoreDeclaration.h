//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class CEMAssetBaseDescriptor, NSString;

@interface CEMBookBookStoreDeclaration <CEMRegisteredTypeProtocol>
{
    CEMAssetBaseDescriptor *_payloadDescriptor;	// 16 = 0x10
    NSString *_payloadITunesStoreID;	// 24 = 0x18
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withITunesStoreID:(id)arg3;	// IMP=0x0000000000027db5
+ (id)buildWithIdentifier:(id)arg1 withDescriptor:(id)arg2 withITunesStoreID:(id)arg3;	// IMP=0x0000000000027c70
+ (id)allowedPayloadKeys;	// IMP=0x0000000000027bc2
+ (id)registeredIdentifier;	// IMP=0x0000000000027bb5
+ (id)registeredClassName;	// IMP=0x0000000000027ba8
- (void).cxx_destruct;	// IMP=0x0000000000028312
@property(copy, nonatomic) NSString *payloadITunesStoreID; // @synthesize payloadITunesStoreID=_payloadITunesStoreID;
@property(copy, nonatomic) CEMAssetBaseDescriptor *payloadDescriptor; // @synthesize payloadDescriptor=_payloadDescriptor;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000028239
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000280f3
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000027efa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
