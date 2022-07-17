//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface Beacon
{
}

+ (id)_propertySettersForBeacon;	// IMP=0x00400000002c9a17
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;	// IMP=0x00100000002c997e
+ (id)beaconsInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2;	// IMP=0x00100000002c98f2
+ (id)beaconsInDatabase:(id)arg1 forPass:(id)arg2;	// IMP=0x00100000002c9866
+ (id)_predicateForPass:(id)arg1;	// IMP=0x00100000002c9832
+ (id)_predicateForPassPID:(long long)arg1;	// IMP=0x00100000002c97bf
+ (id)_beaconsInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x00100000002c95c3
+ (void)insertBeacons:(id)arg1 forPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000002c9430
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x00100000002c91ed
+ (id)databaseTable;	// IMP=0x00100000002c91e0
- (id)initWithBeacon:(id)arg1 pass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00400000002c921c

@end
