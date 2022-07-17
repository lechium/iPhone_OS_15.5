//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/SKPaymentTransactionObserver-Protocol.h>

@class NSString;
@protocol FCPaymentTransactionObserverDelegate;

@interface FCPaymentTransactionObserver : NSObject <SKPaymentTransactionObserver>
{
    id <FCPaymentTransactionObserverDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000289c6d
@property(nonatomic) __weak id <FCPaymentTransactionObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)failedTransaction:(id)arg1;	// IMP=0x0000000000289bd1
- (void)finishTransaction:(id)arg1;	// IMP=0x0000000000289a80
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;	// IMP=0x00000000002897f0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
