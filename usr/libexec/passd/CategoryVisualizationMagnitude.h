//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface CategoryVisualizationMagnitude
{
}

+ (id)_propertySetters;	// IMP=0x004000000003cbb1
+ (id)_propertyValuesForMagnitude:(id)arg1;	// IMP=0x001000000003ca71
+ (id)_predicateForBucket:(long long)arg1;	// IMP=0x001000000003c9fe
+ (id)_predicateForPID:(id)arg1;	// IMP=0x001000000003c9db
+ (id)_predicateForPassUniqueID:(id)arg1 bucket:(long long)arg2;	// IMP=0x001000000003c8e9
+ (id)_predicateForPassUniqueID:(id)arg1;	// IMP=0x001000000003c8c6
+ (id)_magnitudesMatchingQuery:(id)arg1;	// IMP=0x001000000003c70a
+ (void)deleteAnyInDatabase:(id)arg1 forPassUniqueID:(id)arg2;	// IMP=0x001000000003c48a
+ (id)insertOrUpdateMagnitude:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000003c35c
+ (id)insertMagnitude:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000003c2f0
+ (MISSING_TYPE *)magnitudesForPassUniqueIdentifier:inDatabase: /* Error: Ran out of types for this method. */;	// IMP=0x001000000003c23c
+ (id)anyInDatabase:(id)arg1 withPID:(id)arg2;	// IMP=0x001000000003c1b0
+ (id)databaseTable;	// IMP=0x001000000003c109
- (id)magnitude;	// IMP=0x004000000003c59d
- (void)updateWithMagnitude:(id)arg1;	// IMP=0x001000000003c523
- (id)initWithMagnitude:(id)arg1 inDatabase:(id)arg2;	// IMP=0x001000000003c116

@end

