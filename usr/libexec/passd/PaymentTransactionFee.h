//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PaymentTransactionFee
{
}

+ (id)_propertySettersForPaymentTransactionFeeItem;	// IMP=0x0040000000331ea4
+ (id)_predicateForPaymentTransactionPIDs:(id)arg1;	// IMP=0x0010000000331e81
+ (id)_feesFromFeeItems:(id)arg1;	// IMP=0x0010000000331e1d
+ (id)_predicateForPaymentTransaction:(id)arg1;	// IMP=0x0010000000331de9
+ (id)_predicateForPaymentTransactionIdentifier:(id)arg1;	// IMP=0x0010000000331dc6
+ (id)_predicateForPaymentTransactionPID:(long long)arg1;	// IMP=0x0010000000331d53
+ (id)_predicateForFeeWithIdentifier:(id)arg1;	// IMP=0x0010000000331d30
+ (id)_paymentTransactionFeesWithQuery:(id)arg1;	// IMP=0x0010000000331a79
+ (id)_paymentTransactionFeesInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x0010000000331a13
+ (void)associateFeesToPaymentTransactions:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000033119d
+ (id)paymentTransactionFeesInDatabase:(id)arg1 forPaymentTransactionIdentifier:(id)arg2;	// IMP=0x00100000003310ea
+ (id)paymentTransactionFeesInDatabase:(id)arg1 forPaymentTransaction:(id)arg2;	// IMP=0x0010000000331037
+ (void)deleteEntitiesForPaymentTransactionPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000330f9e
+ (void)deleteEntitiesForPaymentTransaction:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000330f05
+ (void)updatePaymentTransactionFees:(id)arg1 forPaymentTransaction:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000033089c
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x0010000000330620
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000003305f1
+ (id)databaseTable;	// IMP=0x00100000003305e4
- (id)feeItem;	// IMP=0x00400000003317a6
- (void)updateWithPaymentTransactionFeeItem:(id)arg1;	// IMP=0x00100000003306fe
- (id)initWithPaymentTransactionFeeItem:(id)arg1 paymentTransaction:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000033037a

@end

