//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CreditAccountUserActivity
{
}

+ (id)_propertySettersForAccountUserActivity;	// IMP=0x00400000001dd5d6
+ (id)_propertyValuesForAccountUserActivity:(id)arg1;	// IMP=0x00100000001dd3bc
+ (id)_accountUserActivityWithQuery:(id)arg1;	// IMP=0x00100000001dd1f3
+ (id)_predicateForAccountUserAltDSID:(id)arg1;	// IMP=0x00100000001dd1d0
+ (id)_predicateForAccountSummaryPID:(id)arg1;	// IMP=0x00100000001dd1ad
+ (_Bool)deleteCreditAccountUserActivityForCreditAccountSummaryPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001dd111
+ (id)anyInDatabase:(id)arg1 withCreditAccountSummaryPID:(id)arg2 accountUserAltDSID:(id)arg3;	// IMP=0x00100000001dce47
+ (id)creditAccountUserActivityForCreditAccountSummaryPID:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000001dcd94
+ (id)insertOrUpdateCreditAccountUserActivity:(id)arg1 forCreditAccountSummaryPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001dc7b9
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000001dc78a
+ (id)databaseTable;	// IMP=0x00100000001dc77d
- (id)accountUserActivity;	// IMP=0x00400000001dcfa4
- (void)updateWithAccountUserAcitivty:(id)arg1;	// IMP=0x00100000001dcd1a
- (id)initWithAccountUserActivity:(id)arg1 forCreditAccountSummaryPID:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000001dcc36

@end

