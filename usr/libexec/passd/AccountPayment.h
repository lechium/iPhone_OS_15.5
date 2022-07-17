//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountPayment
{
}

+ (id)_propertySetterForFundingDetailsName;	// IMP=0x00400000000de40f
+ (id)_propertySettersForAccountPayment;	// IMP=0x00100000000ddbef
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x00100000000ddbcc
+ (id)_predicateForFailedRecurringPaymentsWithAccountIdentifier:(id)arg1;	// IMP=0x00100000000dda0f
+ (id)_predicateForScheduledPaymentsWithAccountIdentifier:(id)arg1;	// IMP=0x00100000000dd8e6
+ (id)_predicateForAccountIdentifier:(id)arg1;	// IMP=0x00100000000dd8c3
+ (id)_predicateForEventPID:(long long)arg1;	// IMP=0x00100000000dd850
+ (id)_predicateForTransactionReferenceIdentifier:(id)arg1;	// IMP=0x00100000000dd82d
+ (id)_predicateForTransactionServiceIdentifier:(id)arg1;	// IMP=0x00100000000dd6fa
+ (id)databaseTable;	// IMP=0x00100000000dd6ed
+ (void)deleteScheduledPaymentsWithAccountIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000dd585
+ (void)deletePaymentWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000dd4ec
+ (id)_commonInitWithPayment:(id)arg1 accountIdentifier:(id)arg2;	// IMP=0x00100000000dcae8
+ (id)insertScheduledPayment:(id)arg1 accountIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000dca59
+ (id)insertPayment:(id)arg1 forEventPID:(long long)arg2 accountIdentifier:(id)arg3 inDatabase:(id)arg4;	// IMP=0x00100000000dc986
+ (id)_paymentsFromQuery:(id)arg1;	// IMP=0x00100000000dc79e
+ (id)failedRecurringPaymentsWithAccountIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000dc6eb
+ (id)scheduledPaymentsWithAccountIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000dc638
+ (id)paymentsWithAccountIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000dc585
+ (id)paymentsWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000dc4d2
+ (id)paymentsForTransactionReferenceIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000dc341
+ (id)paymentsForTransactionServiceIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000dc1b0
- (id)currencyAmount;	// IMP=0x00400000000dd3d3
- (id)payment;	// IMP=0x00100000000dd080

@end
