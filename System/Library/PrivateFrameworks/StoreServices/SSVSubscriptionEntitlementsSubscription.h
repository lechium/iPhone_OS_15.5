//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSNumber, NSString;

@interface SSVSubscriptionEntitlementsSubscription : NSObject
{
    _Bool _newsAppPurchase;	// 8 = 0x8
    NSNumber *_appAdamId;	// 16 = 0x10
    NSNumber *_appVersion;	// 24 = 0x18
    NSString *_chargeCountryCode;	// 32 = 0x20
    NSString *_chargeCurrencyCode;	// 40 = 0x28
    NSNumber *_chargeStoreFrontIdentifier;	// 48 = 0x30
    NSDate *_expireDate;	// 56 = 0x38
    NSNumber *_familyId;	// 64 = 0x40
    NSNumber *_inAppAdamId;	// 72 = 0x48
    NSString *_inAppVersion;	// 80 = 0x50
    NSString *_offerIdentifier;	// 88 = 0x58
    NSNumber *_originalPurchaseDownloadId;	// 96 = 0x60
    NSNumber *_purchasabilityType;	// 104 = 0x68
    NSNumber *_purchaseDownloadId;	// 112 = 0x70
    NSNumber *_quantity;	// 120 = 0x78
    NSString *_vendorIdentifier;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x0000000000029fad
@property(copy, nonatomic) NSString *vendorIdentifier; // @synthesize vendorIdentifier=_vendorIdentifier;
@property(copy, nonatomic) NSNumber *quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSNumber *purchaseDownloadId; // @synthesize purchaseDownloadId=_purchaseDownloadId;
@property(copy, nonatomic) NSNumber *purchasabilityType; // @synthesize purchasabilityType=_purchasabilityType;
@property(copy, nonatomic) NSNumber *originalPurchaseDownloadId; // @synthesize originalPurchaseDownloadId=_originalPurchaseDownloadId;
@property(copy, nonatomic) NSString *offerIdentifier; // @synthesize offerIdentifier=_offerIdentifier;
@property(nonatomic, getter=isNewsAppPurchase) _Bool newsAppPurchase; // @synthesize newsAppPurchase=_newsAppPurchase;
@property(copy, nonatomic) NSString *inAppVersion; // @synthesize inAppVersion=_inAppVersion;
@property(copy, nonatomic) NSNumber *inAppAdamId; // @synthesize inAppAdamId=_inAppAdamId;
@property(copy, nonatomic) NSNumber *familyId; // @synthesize familyId=_familyId;
@property(copy, nonatomic) NSDate *expireDate; // @synthesize expireDate=_expireDate;
@property(copy, nonatomic) NSNumber *chargeStoreFrontIdentifier; // @synthesize chargeStoreFrontIdentifier=_chargeStoreFrontIdentifier;
@property(copy, nonatomic) NSString *chargeCurrencyCode; // @synthesize chargeCurrencyCode=_chargeCurrencyCode;
@property(copy, nonatomic) NSString *chargeCountryCode; // @synthesize chargeCountryCode=_chargeCountryCode;
@property(copy, nonatomic) NSNumber *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSNumber *appAdamId; // @synthesize appAdamId=_appAdamId;
- (id)copyXPCEncoding;	// IMP=0x0000000000029c99
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0000000000029968
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000029640

@end
