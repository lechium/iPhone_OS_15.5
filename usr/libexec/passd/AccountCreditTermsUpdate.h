//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AccountCreditTermsUpdate
{
}

+ (id)_propertySettersForAccountCreditTermsUpdate;	// IMP=0x004000000031842c
+ (id)_predicateForEventPID:(long long)arg1;	// IMP=0x00100000003183b9
+ (id)databaseTable;	// IMP=0x00100000003183ac
+ (void)deleteCreditTermsUpdatesWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000318283
+ (id)insertCreditTermsUpdate:(id)arg1 forEventPID:(long long)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000317c97
+ (id)creditTermsUpdatesWithEventPID:(long long)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000317a77
- (_Bool)deleteFromDatabase;	// IMP=0x004000000031831c
- (id)creditLimit;	// IMP=0x001000000031816a
- (id)creditTermsUpdate;	// IMP=0x0010000000317f69

@end
