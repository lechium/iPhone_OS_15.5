//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface CEMNetworkCellularDeclaration_APNsItem
{
    NSString *_payloadName;	// 16 = 0x10
    NSString *_payloadAuthenticationType;	// 24 = 0x18
    NSString *_payloadUsername;	// 32 = 0x20
    NSString *_payloadPassword;	// 40 = 0x28
    NSString *_payloadProxyServer;	// 48 = 0x30
    NSNumber *_payloadProxyPort;	// 56 = 0x38
    NSNumber *_payloadDefaultProtocolMask;	// 64 = 0x40
    NSNumber *_payloadAllowedProtocolMask;	// 72 = 0x48
    NSNumber *_payloadAllowedProtocolMaskInRoaming;	// 80 = 0x50
}

+ (id)buildRequiredOnlyWithName:(id)arg1;	// IMP=0x0000000000060764
+ (id)buildWithName:(id)arg1 withAuthenticationType:(id)arg2 withUsername:(id)arg3 withPassword:(id)arg4 withProxyServer:(id)arg5 withProxyPort:(id)arg6 withDefaultProtocolMask:(id)arg7 withAllowedProtocolMask:(id)arg8 withAllowedProtocolMaskInRoaming:(id)arg9;	// IMP=0x00000000000605a7
+ (id)allowedPayloadKeys;	// IMP=0x00000000000604ac
- (void).cxx_destruct;	// IMP=0x0000000000061152
@property(copy, nonatomic) NSNumber *payloadAllowedProtocolMaskInRoaming; // @synthesize payloadAllowedProtocolMaskInRoaming=_payloadAllowedProtocolMaskInRoaming;
@property(copy, nonatomic) NSNumber *payloadAllowedProtocolMask; // @synthesize payloadAllowedProtocolMask=_payloadAllowedProtocolMask;
@property(copy, nonatomic) NSNumber *payloadDefaultProtocolMask; // @synthesize payloadDefaultProtocolMask=_payloadDefaultProtocolMask;
@property(copy, nonatomic) NSNumber *payloadProxyPort; // @synthesize payloadProxyPort=_payloadProxyPort;
@property(copy, nonatomic) NSString *payloadProxyServer; // @synthesize payloadProxyServer=_payloadProxyServer;
@property(copy, nonatomic) NSString *payloadPassword; // @synthesize payloadPassword=_payloadPassword;
@property(copy, nonatomic) NSString *payloadUsername; // @synthesize payloadUsername=_payloadUsername;
@property(copy, nonatomic) NSString *payloadAuthenticationType; // @synthesize payloadAuthenticationType=_payloadAuthenticationType;
@property(copy, nonatomic) NSString *payloadName; // @synthesize payloadName=_payloadName;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000060eab
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x0000000000060ce0
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000607ba

@end

