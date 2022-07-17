//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface PKPaymentDeviceRegistrationData : NSObject <NSSecureCoding>
{
    _Bool _devSigned;	// 8 = 0x8
    NSString *_authorizationHeader;	// 16 = 0x10
    NSString *_signedAuthToken;	// 24 = 0x18
    NSDictionary *_secureElementStateInformation;	// 32 = 0x20
    NSString *_secureElementIdentifier;	// 40 = 0x28
    NSString *_deviceSerialNumber;	// 48 = 0x30
    NSArray *_additionalDeviceSerialNumbers;	// 56 = 0x38
    NSString *_companionSerialNumber;	// 64 = 0x40
    NSString *_productType;	// 72 = 0x48
    NSData *_platformData;	// 80 = 0x50
    NSData *_platformDataSignature;	// 88 = 0x58
    NSArray *_legacyStateInformation;	// 96 = 0x60
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001f995
- (void).cxx_destruct;	// IMP=0x000000000001fab3
@property(readonly, nonatomic) NSArray *legacyStateInformation; // @synthesize legacyStateInformation=_legacyStateInformation;
@property(nonatomic) _Bool devSigned; // @synthesize devSigned=_devSigned;
@property(copy, nonatomic) NSData *platformDataSignature; // @synthesize platformDataSignature=_platformDataSignature;
@property(copy, nonatomic) NSData *platformData; // @synthesize platformData=_platformData;
@property(copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property(copy, nonatomic) NSString *companionSerialNumber; // @synthesize companionSerialNumber=_companionSerialNumber;
@property(copy, nonatomic) NSArray *additionalDeviceSerialNumbers; // @synthesize additionalDeviceSerialNumbers=_additionalDeviceSerialNumbers;
@property(copy, nonatomic) NSString *deviceSerialNumber; // @synthesize deviceSerialNumber=_deviceSerialNumber;
@property(copy, nonatomic) NSString *secureElementIdentifier; // @synthesize secureElementIdentifier=_secureElementIdentifier;
@property(copy, nonatomic) NSDictionary *secureElementStateInformation; // @synthesize secureElementStateInformation=_secureElementStateInformation;
@property(copy, nonatomic) NSString *signedAuthToken; // @synthesize signedAuthToken=_signedAuthToken;
@property(copy, nonatomic) NSString *authorizationHeader; // @synthesize authorizationHeader=_authorizationHeader;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001f81c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001f6f6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001f42b

@end
