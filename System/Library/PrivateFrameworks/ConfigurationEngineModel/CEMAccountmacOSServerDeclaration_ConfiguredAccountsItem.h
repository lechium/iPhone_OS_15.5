//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface CEMAccountmacOSServerDeclaration_ConfiguredAccountsItem
{
    NSString *_payloadType;	// 16 = 0x10
    NSNumber *_payloadPort;	// 24 = 0x18
}

+ (id)buildRequiredOnlyWithType:(id)arg1;	// IMP=0x0000000000007c28
+ (id)buildWithType:(id)arg1 withPort:(id)arg2;	// IMP=0x0000000000007b93
+ (id)allowedPayloadKeys;	// IMP=0x0000000000007ae5
- (void).cxx_destruct;	// IMP=0x0000000000007ffd
@property(copy, nonatomic) NSNumber *payloadPort; // @synthesize payloadPort=_payloadPort;
@property(copy, nonatomic) NSString *payloadType; // @synthesize payloadType=_payloadType;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007f24
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x0000000000007e69
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007c7e

@end

