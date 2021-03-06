//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate, NSError, NSString, SKPayment;

@interface SKPaymentTransaction : NSObject
{
    id _internal;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000464bf
- (id)copyXPCEncoding;	// IMP=0x0010000000046177
- (id)getPaymentDiscountFromTransactionXPCEncoding:(id)arg1;	// IMP=0x0010000000045fa1
- (id)initWithXPCEncoding:(id)arg1;	// IMP=0x00100000000457f4
- (_Bool)mergeWithServerTransaction:(id)arg1;	// IMP=0x0010000000044f45
- (id)initWithServerTransaction:(id)arg1;	// IMP=0x0010000000044ef3
@property(readonly, nonatomic) NSString *_transactionIdentifier;
- (void)_setTransactionState:(long long)arg1;	// IMP=0x0010000000044ed3
- (void)_setTransactionReceipt:(id)arg1;	// IMP=0x0010000000044e72
- (void)_setTransactionIdentifier:(id)arg1;	// IMP=0x0010000000044e11
- (void)_setTransactionDate:(id)arg1;	// IMP=0x0010000000044dc2
- (void)_setTemporaryIdentifier:(id)arg1;	// IMP=0x0010000000044d61
- (void)_setOriginalTransaction:(id)arg1;	// IMP=0x0010000000044d12
- (void)_setError:(id)arg1;	// IMP=0x0010000000044cc3
- (void)_setDownloads:(id)arg1;	// IMP=0x0010000000044bfc
- (_Bool)mergeWithTransaction:(id)arg1;	// IMP=0x0010000000044a7a
@property(readonly, nonatomic) NSString *matchingIdentifier;
- (_Bool)canMergeWithTransaction:(id)arg1;	// IMP=0x0010000000044917
- (id)UUID;	// IMP=0x0010000000044905
@property(readonly, nonatomic) long long transactionState;
@property(readonly, nonatomic) NSData *transactionReceipt;
@property(readonly, nonatomic) NSString *transactionIdentifier;
@property(readonly, nonatomic) NSDate *transactionDate;
@property(readonly, nonatomic) SKPayment *payment;
@property(readonly, nonatomic) SKPaymentTransaction *originalTransaction;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) NSArray *downloads;
- (id)initWithPayment:(id)arg1;	// IMP=0x00100000000447f9
- (id)init;	// IMP=0x00100000000447a3

@end

