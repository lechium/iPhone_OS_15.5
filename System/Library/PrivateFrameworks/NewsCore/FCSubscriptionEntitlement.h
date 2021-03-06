//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface FCSubscriptionEntitlement : NSObject
{
    _Bool _newsAppPurchase;	// 8 = 0x8
    _Bool _isTrialPeriod;	// 9 = 0x9
    _Bool _isPurchaser;	// 10 = 0xa
    _Bool _isAmplifyUser;	// 11 = 0xb
    NSString *_servicesBundleAdamID;	// 16 = 0x10
    NSNumber *_appAdamID;	// 24 = 0x18
    NSString *_chargeCurrencyCode;	// 32 = 0x20
    NSNumber *_inAppAdamID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001b2d2b
@property(readonly, nonatomic) _Bool isAmplifyUser; // @synthesize isAmplifyUser=_isAmplifyUser;
@property(readonly, nonatomic) _Bool isPurchaser; // @synthesize isPurchaser=_isPurchaser;
@property(readonly, nonatomic) _Bool isTrialPeriod; // @synthesize isTrialPeriod=_isTrialPeriod;
@property(readonly, nonatomic, getter=isNewsAppPurchase) _Bool newsAppPurchase; // @synthesize newsAppPurchase=_newsAppPurchase;
@property(readonly, nonatomic) NSNumber *inAppAdamID; // @synthesize inAppAdamID=_inAppAdamID;
@property(readonly, nonatomic) NSString *chargeCurrencyCode; // @synthesize chargeCurrencyCode=_chargeCurrencyCode;
@property(readonly, nonatomic) NSNumber *appAdamID; // @synthesize appAdamID=_appAdamID;
@property(readonly, nonatomic) NSString *servicesBundleAdamID; // @synthesize servicesBundleAdamID=_servicesBundleAdamID;
- (id)description;	// IMP=0x00000000001b2c4c
- (id)initWithAppAdamID:(id)arg1 inAppAdamID:(id)arg2 chargeCurrencyCode:(id)arg3 newsAppPurchase:(_Bool)arg4 isTrialPeriod:(_Bool)arg5 isPurchaser:(_Bool)arg6 servicesBundleAdamID:(id)arg7 isAmplifyUser:(_Bool)arg8;	// IMP=0x00000000001b2b52

@end

