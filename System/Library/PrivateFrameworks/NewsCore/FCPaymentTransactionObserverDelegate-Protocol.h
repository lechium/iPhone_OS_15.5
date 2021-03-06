//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCPaymentTransactionObserver, SKPaymentTransaction;

@protocol FCPaymentTransactionObserverDelegate <NSObject>
- (void)paymentTransactionObserver:(FCPaymentTransactionObserver *)arg1 didFailPurchaseTransactionWithTransaction:(SKPaymentTransaction *)arg2;
- (void)paymentTransactionObserver:(FCPaymentTransactionObserver *)arg1 didFinishPurchaseTransaction:(SKPaymentTransaction *)arg2;
@end

