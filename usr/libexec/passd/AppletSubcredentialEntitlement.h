//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AppletSubcredentialEntitlement
{
}

+ (id)databaseTable;	// IMP=0x00400000002acc7b
+ (id)_propertySetters;	// IMP=0x00100000002acaf5
+ (id)_predicateForType:(long long)arg1;	// IMP=0x00100000002aca82
+ (id)_predicateForValue:(long long)arg1;	// IMP=0x00100000002aca0f
+ (id)_predicateForCredentialPID:(long long)arg1;	// IMP=0x00100000002ac99c
+ (id)dictionaryFromEntitlement:(id)arg1;	// IMP=0x00100000002ac6fd
+ (id)setSupportedEntitlements:(id)arg1 forCredential:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002ac112
+ (id)setEntitlement:(id)arg1 forCredential:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002abfb9
+ (id)supportedEntitlementsInDatabase:(id)arg1 forCredential:(id)arg2;	// IMP=0x00100000002abcaf
+ (id)supportedEntitlementInDatabase:(id)arg1 forCredentialPID:(long long)arg2 withValue:(long long)arg3;	// IMP=0x00100000002abb38
+ (id)entitlementInDatabase:(id)arg1 forCredential:(id)arg2;	// IMP=0x00100000002ab9e1
- (id)entitlement;	// IMP=0x00400000002ac85d

@end

