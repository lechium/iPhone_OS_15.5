//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAP2TLVParamCharacteristicList, HAP2TLVServicePropertiesWrapper, HAPTLVUnsignedNumberValue, NSData, NSString;

@interface HAP2TLVParamServiceSignature : NSObject <NSCopying, HAPTLVProtocol>
{
    HAPTLVUnsignedNumberValue *_instanceID;	// 8 = 0x8
    NSData *_serviceType;	// 16 = 0x10
    HAP2TLVServicePropertiesWrapper *_properties;	// 24 = 0x18
    NSData *_linkedServices;	// 32 = 0x20
    HAP2TLVParamCharacteristicList *_characteristicList;	// 40 = 0x28
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000006b9cc
- (void).cxx_destruct;	// IMP=0x0000000000068a29
@property(retain, nonatomic) HAP2TLVParamCharacteristicList *characteristicList; // @synthesize characteristicList=_characteristicList;
@property(retain, nonatomic) NSData *linkedServices; // @synthesize linkedServices=_linkedServices;
@property(retain, nonatomic) HAP2TLVServicePropertiesWrapper *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSData *serviceType; // @synthesize serviceType=_serviceType;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *instanceID; // @synthesize instanceID=_instanceID;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000683df
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000682d0
- (id)serializeWithError:(id *)arg1;	// IMP=0x0000000000067c4d
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000067561
- (id)initWithInstanceID:(id)arg1 serviceType:(id)arg2 properties:(id)arg3 linkedServices:(id)arg4 characteristicList:(id)arg5;	// IMP=0x000000000006745f
- (id)init;	// IMP=0x0000000000067430

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

