//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AssociatedApplicationIdentifier
{
}

+ (id)_propertySettersForAssociatedApplicationIdentifier;	// IMP=0x00400000003179ec
+ (void)deleteEntitiesForPass:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000317953
+ (id)associatedApplicationIdentifiersInDatabase:(id)arg1 forPassPID:(unsigned long long)arg2;	// IMP=0x00100000003178c7
+ (id)associatedApplicationIdentifiersInDatabase:(id)arg1 forPass:(id)arg2;	// IMP=0x001000000031783b
+ (id)_predicateForPass:(id)arg1;	// IMP=0x0010000000317807
+ (id)_predicateForPassPID:(long long)arg1;	// IMP=0x0010000000317794
+ (id)_associatedApplicationIdentifiersInDatabase:(id)arg1 matchingPredicate:(id)arg2;	// IMP=0x0010000000317578
+ (void)insertAssociatedApplicationIdentifiers:(id)arg1 forPass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00100000003173e5
+ (id)associationPropertyForEntityClass:(Class)arg1;	// IMP=0x001000000031729a
+ (id)databaseTable;	// IMP=0x001000000031728d
- (id)initWithApplicationIdentifier:(id)arg1 pass:(id)arg2 inDatabase:(id)arg3;	// IMP=0x00400000003172c9

@end

