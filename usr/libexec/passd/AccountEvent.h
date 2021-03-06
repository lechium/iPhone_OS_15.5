//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountEvent
{
}

+ (id)_propertySettersForAccountEvent;	// IMP=0x0040000000285d4d
+ (id)_predicateForEventTypes:(id)arg1;	// IMP=0x0010000000285cf7
+ (id)_predicateForEndDate:(id)arg1;	// IMP=0x0010000000285c76
+ (id)_predicateForStartDate:(id)arg1;	// IMP=0x0010000000285bf5
+ (id)_predicateForServicingActivityIdentifier:(id)arg1;	// IMP=0x0010000000285bd2
+ (id)_predicateForRewardsAddedIdentifier:(id)arg1;	// IMP=0x0010000000285baf
+ (id)_predicateForRedemptionToPeerPayment;	// IMP=0x0010000000285b88
+ (id)_predicateForSuccessfulRedemption;	// IMP=0x0010000000285b61
+ (id)_predicateForTransactionIdentifier:(id)arg1;	// IMP=0x0010000000285b3e
+ (id)_predicateForAccountEventExcludingTypes:(id)arg1;	// IMP=0x0010000000285b1b
+ (id)_predicateForAccountEventTypes:(id)arg1;	// IMP=0x0010000000285af8
+ (id)_predicateForPersistentPID:(long long)arg1;	// IMP=0x0010000000285a85
+ (id)_predicateForAccountPID:(long long)arg1;	// IMP=0x0010000000285a12
+ (id)_predicateForAltDSID:(id)arg1;	// IMP=0x001000000028598e
+ (id)_predicateForAccountIdentifier:(id)arg1;	// IMP=0x001000000028596b
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x0010000000285948
+ (id)_predicateForBillPaymentSelectedSuggestedAmountEndDate:(id)arg1;	// IMP=0x00100000002858c7
+ (id)_predicateForBillPaymentSelectedSuggestedAmountStartDate:(id)arg1;	// IMP=0x0010000000285846
+ (id)_predicateForBillPaymentSelectedSuggestedAmountStatementIdenfitier:(id)arg1;	// IMP=0x0010000000285823
+ (void)deleteAccountEventsForAccountIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002855fe
+ (void)deleteAccountEventsForAccountPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000285565
+ (void)deleteAccountEventWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000285523
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x00100000002852a4
+ (id)databaseTable;	// IMP=0x0010000000285297
+ (id)anyInDatabase:(id)arg1 withPersistentID:(unsigned long long)arg2;	// IMP=0x0010000000284057
+ (_Bool)insertOrUpdateAccountEvent:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000283c46
+ (id)accountEventWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000283bba
+ (id)billPaymentSelectedSuggestedAmountsWithAccountIdentifier:(id)arg1 withStartDate:(id)arg2 endDate:(id)arg3 inDatabase:(id)arg4;	// IMP=0x0010000000283866
+ (id)billPaymentSelectedSuggestedAmountsWithStatementIdenfitier:(id)arg1 accountIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000283558
+ (id)servicingAccountEventsWithTransactionIdentifier:(id)arg1 accountIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002831f1
+ (unsigned long long)successfulRedemptionEventsToPeerPaymentForAccountIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000283098
+ (id)lastRedemptionEventToPeerPaymentForAccountIdentifier:(id)arg1 altDSID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000282cc3
+ (id)redemptionAccountEventWithRewardsAddedIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002829a9
+ (id)redemptionAccountEventWithTransactionIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000028264f
+ (id)accountEventsForAccountIdentifier:(id)arg1 altDSID:(id)arg2 types:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 orderedByDate:(long long)arg6 limit:(unsigned long long)arg7 inDatabase:(id)arg8;	// IMP=0x0010000000282186
+ (id)accountEventsWithAccountIdentifier:(id)arg1 excludingTypes:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000281e9a
+ (id)accountEventsWithAccountIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000281c78
- (_Bool)deleteFromDatabase;	// IMP=0x0040000000285697
- (id)accountIdentifier;	// IMP=0x001000000028527e
- (id)event;	// IMP=0x0010000000284fb1
- (void)updateWithAccountEvent:(id)arg1;	// IMP=0x0010000000284b24
- (void)insertItemsFromEvent:(id)arg1 forPersistentID:(long long)arg2 accountIdentifier:(id)arg3 inDatabase:(id)arg4;	// IMP=0x00100000002840e3
- (id)initWithAccountEvent:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000283d23

@end

