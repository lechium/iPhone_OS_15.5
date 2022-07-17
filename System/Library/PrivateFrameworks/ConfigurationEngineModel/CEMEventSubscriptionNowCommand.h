//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSArray, NSString;

@interface CEMEventSubscriptionNowCommand <CEMRegisteredTypeProtocol>
{
    NSArray *_payloadEvents;	// 16 = 0x10
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withEvents:(id)arg2;	// IMP=0x000000000004e887
+ (id)buildWithIdentifier:(id)arg1 withEvents:(id)arg2;	// IMP=0x000000000004e77f
+ (id)allowedPayloadKeys;	// IMP=0x000000000004e6c9
+ (id)registeredIdentifier;	// IMP=0x000000000004e6bc
+ (id)registeredClassName;	// IMP=0x000000000004e6af
- (void).cxx_destruct;	// IMP=0x000000000004ec80
@property(copy, nonatomic) NSArray *payloadEvents; // @synthesize payloadEvents=_payloadEvents;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000004ebf9
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x000000000004eb57
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004e98f
- (int)executionLevel;	// IMP=0x000000000004e774
- (_Bool)mustBeSupervised;	// IMP=0x000000000004e76c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
