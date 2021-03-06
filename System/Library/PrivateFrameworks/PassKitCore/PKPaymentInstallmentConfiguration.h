//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDecimalNumber, NSDictionary, NSString;

@interface PKPaymentInstallmentConfiguration : NSObject <NSSecureCoding>
{
    _Bool _inStorePurchase;	// 8 = 0x8
    long long _feature;	// 16 = 0x10
    NSData *_merchandisingImageData;	// 24 = 0x18
    NSDecimalNumber *_openToBuyThresholdAmount;	// 32 = 0x20
    NSDecimalNumber *_bindingTotalAmount;	// 40 = 0x28
    NSString *_currencyCode;	// 48 = 0x30
    NSString *_installmentMerchantIdentifier;	// 56 = 0x38
    NSString *_referrerIdentifier;	// 64 = 0x40
    NSArray *_installmentItems;	// 72 = 0x48
    NSDictionary *_applicationMetadata;	// 80 = 0x50
    long long _retailChannel;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007bbf3
- (void).cxx_destruct;	// IMP=0x000000000007c141
@property(nonatomic) long long retailChannel; // @synthesize retailChannel=_retailChannel;
@property(copy, nonatomic) NSDictionary *applicationMetadata; // @synthesize applicationMetadata=_applicationMetadata;
@property(copy, nonatomic) NSArray *installmentItems; // @synthesize installmentItems=_installmentItems;
@property(copy, nonatomic) NSString *referrerIdentifier; // @synthesize referrerIdentifier=_referrerIdentifier;
@property(copy, nonatomic) NSString *installmentMerchantIdentifier; // @synthesize installmentMerchantIdentifier=_installmentMerchantIdentifier;
@property(nonatomic, getter=isInStorePurchase) _Bool inStorePurchase; // @synthesize inStorePurchase=_inStorePurchase;
@property(copy, nonatomic) NSString *currencyCode; // @synthesize currencyCode=_currencyCode;
@property(retain, nonatomic) NSDecimalNumber *bindingTotalAmount; // @synthesize bindingTotalAmount=_bindingTotalAmount;
@property(retain, nonatomic) NSDecimalNumber *openToBuyThresholdAmount; // @synthesize openToBuyThresholdAmount=_openToBuyThresholdAmount;
@property(copy, nonatomic) NSData *merchandisingImageData; // @synthesize merchandisingImageData=_merchandisingImageData;
@property(nonatomic) long long feature; // @synthesize feature=_feature;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007bed5
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007bbfb
- (_Bool)isEqualToInstallmentConfiguration:(id)arg1;	// IMP=0x000000000007bb08
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000007baa0
- (unsigned long long)hash;	// IMP=0x000000000007b9c7
- (void)encodeToBodyDictionary:(id)arg1;	// IMP=0x0000000000003290

@end

