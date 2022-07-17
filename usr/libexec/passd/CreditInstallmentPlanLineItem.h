//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CreditInstallmentPlanLineItem
{
}

+ (id)_propertySetters;	// IMP=0x004000000027e58b
+ (id)_propertyValuesForInstallmentPlanLineItem:(id)arg1;	// IMP=0x001000000027e3d2
+ (id)_lineItemsWithQuery:(id)arg1;	// IMP=0x001000000027e209
+ (id)_predicateForInstallmentPlanPaymentPID:(id)arg1;	// IMP=0x001000000027e1e6
+ (id)_predicateForInstallmentPlanPID:(id)arg1;	// IMP=0x001000000027e1c3
+ (void)deleteLineItemsForInstallmentPlanPaymentPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000027e12a
+ (void)deleteLineItemsForInstallmentPlanPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000027e091
+ (id)insertOrUpdateLineItems:(id)arg1 forInstallmentPlanPaymentPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000027de82
+ (id)insertOrUpdateLineItems:(id)arg1 forInstallmentPlanPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000027dc73
+ (id)lineItemsForInstallmentPlanPaymentPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000027db12
+ (id)lineItemForInstallmentPlanPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000027d9b1
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000027d7b4
+ (id)databaseTable;	// IMP=0x001000000027d7a7
- (id)initWithInstallmentPlanLineItem:(id)arg1 forInstallmentPlanPaymentPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x004000000027d8d7
- (id)initWithInstallmentPlanLineItem:(id)arg1 forInstallmentPlanPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x001000000027d7fd

@end
