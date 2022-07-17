//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface OctaneInterface : NSObject
{
}

+ (id)setStringValue:(id)arg1 forIdentifier:(unsigned long long)arg2 withContext:(id)arg3;	// IMP=0x00400000001cf8e5
+ (id)getStringValueForIdentifier:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x00100000001cf83d
+ (id)setIntegerValue:(long long)arg1 forIdentifier:(unsigned long long)arg2 withContext:(id)arg3;	// IMP=0x00100000001cf78a
+ (long long)getIntegerValueForIdentifier:(unsigned long long)arg1 withContext:(id)arg2;	// IMP=0x00100000001cf6ee
+ (void)unregisterForEventWithIdentifier:(id)arg1;	// IMP=0x00100000001cf685
+ (id)registerForEventOfType:(long long)arg1 filterData:(id)arg2;	// IMP=0x00100000001cf606
+ (id)completePriceIncreaseRequestWithResponse:(_Bool)arg1 context:(id)arg2;	// IMP=0x00100000001cf547
+ (id)startPriceIncreaseNeedingConsent:(_Bool)arg1 context:(id)arg2;	// IMP=0x00100000001cf487
+ (id)messageURLForBundleID:(id)arg1;	// IMP=0x00100000001cf40e
+ (id)generateSKANPostbackSignature:(id)arg1 withContext:(id)arg2;	// IMP=0x00100000001cf395
+ (id)validateSKAdNetworkSignature:(id)arg1 withPublicKey:(id)arg2 andParameters:(id)arg3 withContext:(id)arg4;	// IMP=0x00100000001cf299
+ (void)useConfigurationDirectory:(id)arg1 forBundleID:(id)arg2;	// IMP=0x00100000001cf218
+ (id)setStorefront:(id)arg1 withContext:(id)arg2;	// IMP=0x00100000001cf15b
+ (id)resolveIssueWithContext:(id)arg1;	// IMP=0x00100000001cf0a2
+ (id)refundTransactionWithContext:(id)arg1;	// IMP=0x00100000001cefe9
+ (id)getTransactionDataWithContext:(id)arg1;	// IMP=0x00100000001cef49
+ (id)getStorefrontWithContext:(id)arg1;	// IMP=0x00100000001ceea9
+ (id)expireOrRenewSubscriptionWithProductID:(id)arg1 expire:(_Bool)arg2 withContext:(id)arg3;	// IMP=0x00100000001cede0
+ (id)deleteTransactionWithContext:(id)arg1;	// IMP=0x00100000001ced27
+ (id)deleteAllTransactionsWithContext:(id)arg1;	// IMP=0x00100000001cec87
+ (id)completeAskToBuyRequestWithResponse:(_Bool)arg1 withContext:(id)arg2;	// IMP=0x00100000001cebc8
+ (id)clearOverridesWithContext:(id)arg1;	// IMP=0x00100000001ceb28
+ (id)changeAutoRenewStatus:(_Bool)arg1 withContext:(id)arg2;	// IMP=0x00100000001cea69
+ (id)cancelTransactionWithContext:(id)arg1;	// IMP=0x00100000001ce9b0
+ (id)buyProductWithID:(id)arg1 withContext:(id)arg2;	// IMP=0x00100000001ce8f3
+ (long long)activePort;	// IMP=0x00100000001ce8a7
+ (void)appRemovedWithBundleID:(id)arg1;	// IMP=0x00100000001ce78a

@end
