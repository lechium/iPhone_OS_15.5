//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface FeatureApplication
{
}

+ (id)_propertySettersForFeatureApplication;	// IMP=0x004000000039913d
+ (id)_predicateForFeatureApplicationIdentifier:(id)arg1;	// IMP=0x001000000039911a
+ (id)_predicateForApplicationState:(unsigned long long)arg1;	// IMP=0x00100000003990a7
+ (id)_predicateForApplicationType:(long long)arg1;	// IMP=0x0010000000399034
+ (id)_predicateForAccountIdentifier:(id)arg1;	// IMP=0x0010000000398fd7
+ (void)deleteFeatureApplicationWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000398eaa
+ (void)deleteAllFeatureApplicationsWithAccountIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000398e11
+ (void)deleteAllFeatureApplicationsInDatabase:(id)arg1;	// IMP=0x0010000000398d7c
+ (void)deleteFeatureApplicationsNotIncludingIdentifiers:(id)arg1 forAccountIdentifier:(id)arg2 inDatabase:(id)arg3;	// IMP=0x0010000000398c0a
+ (void)deleteFeatureApplicationsNotIncludingIdentifiers:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000398aad
+ (id)databaseTable;	// IMP=0x0010000000398aa0
+ (id)insertOrUpdateFeatureApplication:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000397db7
+ (id)featureApplicationWithIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000397d2b
+ (unsigned long long)newAccountUserInvitationsCountInDatabase:(id)arg1;	// IMP=0x0010000000397bb2
+ (id)featureApplicationsForAccountIdentifier:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000039799f
+ (id)featureApplicationsInDatabase:(id)arg1;	// IMP=0x001000000039778d
- (_Bool)deleteFromDatabase;	// IMP=0x0040000000398eec
- (unsigned long long)state;	// IMP=0x0010000000398a55
- (id)featureApplication;	// IMP=0x00100000003987ff
- (void)updateWithFeatureApplication:(id)arg1;	// IMP=0x0010000000398335
- (id)initWithFeatureApplication:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000397e8c

@end

