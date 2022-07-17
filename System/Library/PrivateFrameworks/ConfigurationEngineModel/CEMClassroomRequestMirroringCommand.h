//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMClassroomRequestMirroringCommand <CEMRegisteredTypeProtocol>
{
    NSString *_payloadDestinationName;	// 16 = 0x10
    NSString *_payloadDestinationDeviceID;	// 24 = 0x18
    NSNumber *_payloadScanTime;	// 32 = 0x20
    NSString *_payloadPassword;	// 40 = 0x28
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x000000000002b506
+ (id)buildWithIdentifier:(id)arg1 withDestinationName:(id)arg2 withDestinationDeviceID:(id)arg3 withScanTime:(id)arg4 withPassword:(id)arg5;	// IMP=0x000000000002b381
+ (id)allowedPayloadKeys;	// IMP=0x000000000002b2ad
+ (id)registeredIdentifier;	// IMP=0x000000000002b2a0
+ (id)registeredClassName;	// IMP=0x000000000002b293
- (void).cxx_destruct;	// IMP=0x000000000002bb02
@property(copy, nonatomic) NSString *payloadPassword; // @synthesize payloadPassword=_payloadPassword;
@property(copy, nonatomic) NSNumber *payloadScanTime; // @synthesize payloadScanTime=_payloadScanTime;
@property(copy, nonatomic) NSString *payloadDestinationDeviceID; // @synthesize payloadDestinationDeviceID=_payloadDestinationDeviceID;
@property(copy, nonatomic) NSString *payloadDestinationName; // @synthesize payloadDestinationName=_payloadDestinationName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002b9a5
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000002b8a0
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000002b5dd
- (int)executionLevel;	// IMP=0x000000000002b379
- (_Bool)mustBeSupervised;	// IMP=0x000000000002b371

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
