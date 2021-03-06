//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDecimalNumber, NSLocale, NSString, SKProductSubscriptionPeriod;

@interface SKProductDiscount : NSObject
{
    id _internal;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000138dcb
- (id)copyXPCEncoding;	// IMP=0x0010000000138cfc
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x0010000000138a68
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000013868e
- (void)_setType:(unsigned long long)arg1;	// IMP=0x0010000000138680
- (void)_setIdentifier:(id)arg1;	// IMP=0x001000000013864f
- (void)_setSubscriptionPeriod:(id)arg1;	// IMP=0x001000000013861e
- (void)_setPriceLocale:(id)arg1;	// IMP=0x00100000001385ed
- (void)_setPrice:(id)arg1;	// IMP=0x00100000001385bc
- (void)_setPaymentMode:(unsigned long long)arg1;	// IMP=0x00100000001385ae
- (void)_setNumberOfPeriods:(unsigned long long)arg1;	// IMP=0x00100000001385a0
@property(readonly, nonatomic) unsigned long long type;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) unsigned long long paymentMode;
@property(readonly, nonatomic) unsigned long long numberOfPeriods;
@property(readonly, nonatomic) SKProductSubscriptionPeriod *subscriptionPeriod;
@property(readonly, nonatomic) NSLocale *priceLocale;
@property(readonly, nonatomic) NSDecimalNumber *price;
- (id)init;	// IMP=0x00100000001384d8

@end

