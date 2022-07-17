//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CreditInstallmentPlan
{
}

+ (id)_propertySetters;	// IMP=0x00400000000681a3
+ (id)_propertyValuesForInstallmentPlan:(id)arg1;	// IMP=0x0010000000067e82
+ (id)_installmentPlansWithQuery:(id)arg1;	// IMP=0x0010000000067a3b
+ (id)_predicateForTransactionReferenceIdentifier:(id)arg1;	// IMP=0x0010000000067a18
+ (id)_predicateForIdentifier:(id)arg1;	// IMP=0x00100000000679f5
+ (id)_predicateForPID:(id)arg1;	// IMP=0x00100000000679d2
+ (id)_predicateForCreditAccountDetailsPID:(id)arg1;	// IMP=0x00100000000679af
+ (void)deleteInstallmentPlansForCreditAccountDetailsPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000677eb
+ (id)insertOrUpdateInstallmentPlans:(id)arg1 forCreditAccountDetailsPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000066ce5
+ (id)installmentPlansWithTransactionReferenceIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000066857
+ (id)installmentPlansForCreditAccountDetailsPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000667a3
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000006637d
+ (id)databaseTable;	// IMP=0x0010000000066370
- (_Bool)deleteFromDatabase;	// IMP=0x0040000000067884
- (void)updateWithInstallmentPlan:(id)arg1;	// IMP=0x0010000000067126
- (id)installmentPlan;	// IMP=0x001000000006690b
- (id)initWithInstallmentPlan:(id)arg1 forCreditAccountDetailsPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000663ac

@end
