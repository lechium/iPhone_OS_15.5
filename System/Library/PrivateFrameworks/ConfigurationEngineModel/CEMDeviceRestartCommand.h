//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSString;

@interface CEMDeviceRestartCommand <CEMRegisteredTypeProtocol>
{
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x000000000004b8ce
+ (id)buildWithIdentifier:(id)arg1;	// IMP=0x000000000004b7f7
+ (id)allowedPayloadKeys;	// IMP=0x000000000004b7ce
+ (id)registeredIdentifier;	// IMP=0x000000000004b7c1
+ (id)registeredClassName;	// IMP=0x000000000004b7b4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004babe
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000004ba6f
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004b9a5
- (int)executionLevel;	// IMP=0x000000000004b7ef
- (_Bool)mustBeSupervised;	// IMP=0x000000000004b7e7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

