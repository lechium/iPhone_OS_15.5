//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface Location
{
}

+ (id)_propertySettersForLocation;	// IMP=0x00400000000ba8e5
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000000ba84c
+ (id)queryWithDatabase:(id)arg1 locationSourcePID:(unsigned long long)arg2;	// IMP=0x00100000000ba7c0
+ (id)locationsInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2 withSourceType:(int)arg3;	// IMP=0x00100000000ba67f
+ (id)_predicateForSourceType:(int)arg1;	// IMP=0x00100000000ba60c
+ (id)_predicateForLocationSource:(id)arg1;	// IMP=0x00100000000ba5d8
+ (id)_predicateForLocationSourcePID:(long long)arg1;	// IMP=0x00100000000ba565
+ (id)locationsInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2;	// IMP=0x00100000000ba4d9
+ (_Bool)hasLocationsInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2;	// IMP=0x00100000000ba444
+ (id)_predicateForPass:(id)arg1;	// IMP=0x00100000000ba410
+ (id)_predicateForPassPID:(long long)arg1;	// IMP=0x00100000000ba39d
+ (id)_locationsInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x00100000000ba1a1
+ (void)insertLocations:(id)arg1 forSource:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000000b9f16
+ (id)foreignKeyColumnForTable:(id)arg1;	// IMP=0x00100000000b9bab
+ (id)foreignDatabaseTablesToDelete;	// IMP=0x00100000000b9b8b
+ (void)addJoinClausesForProperty:(id)arg1 toJoins:(id)arg2;	// IMP=0x00100000000b9a87
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000000b9a3e
+ (id)databaseTable;	// IMP=0x00100000000b9a31
- (id)initWithLocation:(id)arg1 source:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00400000000b9bda

@end

