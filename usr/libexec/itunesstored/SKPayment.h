//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, SKPaymentDiscount;

@interface SKPayment : NSObject
{
    id _internal;	// 8 = 0x8
}

+ (id)paymentWithProductIdentifier:(id)arg1;	// IMP=0x0020000000115b82
+ (id)paymentFromPurchaseIntentWithProduct:(id)arg1;	// IMP=0x0010000000115a87
+ (id)paymentWithProduct:(id)arg1;	// IMP=0x001000000011599d
- (void).cxx_destruct;	// IMP=0x0020000000115dd2
@property(readonly, copy, nonatomic) NSDictionary *requestParameters;
@property(readonly, copy, nonatomic) NSString *partnerTransactionIdentifier;
@property(readonly, copy, nonatomic) NSString *partnerIdentifier;
@property(readonly, nonatomic) _Bool isStoreOriginated;
@property(readonly, copy, nonatomic) SKPaymentDiscount *paymentDiscount;
@property(readonly, nonatomic) _Bool simulatesAskToBuyInSandbox;
@property(readonly, copy, nonatomic) NSData *requestData;
@property(readonly, nonatomic) long long quantity;
@property(readonly, copy, nonatomic) NSString *productIdentifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000115c7e
- (unsigned long long)hash;	// IMP=0x0010000000115c12
@property(readonly, copy, nonatomic) NSString *applicationUsername;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000115939
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001158d5
- (id)init;	// IMP=0x001000000011587f

@end
