//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;

@interface CEMSystemAirPrintPrintersDeclaration_AirPrintItem
{
    NSString *_payloadIPAddress;	// 16 = 0x10
    NSString *_payloadResourcePath;	// 24 = 0x18
    NSNumber *_payloadPort;	// 32 = 0x20
    NSNumber *_payloadForceTLS;	// 40 = 0x28
}

+ (id)buildRequiredOnlyWithIPAddress:(id)arg1 withResourcePath:(id)arg2;	// IMP=0x00000000000addf7
+ (id)buildWithIPAddress:(id)arg1 withResourcePath:(id)arg2 withPort:(id)arg3 withForceTLS:(id)arg4;	// IMP=0x00000000000add02
+ (id)allowedPayloadKeys;	// IMP=0x00000000000adc3e
- (void).cxx_destruct;	// IMP=0x00000000000ae3c8
@property(copy, nonatomic) NSNumber *payloadForceTLS; // @synthesize payloadForceTLS=_payloadForceTLS;
@property(copy, nonatomic) NSNumber *payloadPort; // @synthesize payloadPort=_payloadPort;
@property(copy, nonatomic) NSString *payloadResourcePath; // @synthesize payloadResourcePath=_payloadResourcePath;
@property(copy, nonatomic) NSString *payloadIPAddress; // @synthesize payloadIPAddress=_payloadIPAddress;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ae26b
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000ae155
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ade83

@end

