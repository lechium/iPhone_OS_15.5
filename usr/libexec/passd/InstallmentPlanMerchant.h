//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface InstallmentPlanMerchant
{
}

+ (id)_propertySetters;	// IMP=0x00400000001c55d7
+ (id)_propertyValuesForInstallmentPlanMerchant:(id)arg1;	// IMP=0x00100000001c53fd
+ (id)_predicateForInstallmentPlanPID:(id)arg1;	// IMP=0x00100000001c53da
+ (id)merchantForInstallmentPlanPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001c51c3
+ (id)insertOrUpdateMerchant:(id)arg1 forInstallmentPlanPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001c5053
+ (void)deleteMerchantForInstallmentPlanPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001c4fba
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000001c4eb1
+ (id)databaseTable;	// IMP=0x00100000001c4ea4
- (id)merchant;	// IMP=0x00400000001c526d
- (void)updateWithMerchant:(id)arg1;	// IMP=0x00100000001c5149
- (id)initWithInstallmentPlanMerchant:(id)arg1 forInstallmentPlanPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001c4ee0

@end

