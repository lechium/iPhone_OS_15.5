//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSString;

@interface CEMClassroomStopMirroringCommand <CEMRegisteredTypeProtocol>
{
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x000000000002bf7f
+ (id)buildWithIdentifier:(id)arg1;	// IMP=0x000000000002bea8
+ (id)allowedPayloadKeys;	// IMP=0x000000000002be7f
+ (id)registeredIdentifier;	// IMP=0x000000000002be72
+ (id)registeredClassName;	// IMP=0x000000000002be65
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002c16f
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000002c120
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002c056
- (int)executionLevel;	// IMP=0x000000000002bea0
- (_Bool)mustBeSupervised;	// IMP=0x000000000002be98

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

