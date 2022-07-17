//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ML3Container, ML3Predicate, NSArray;

@interface ML3ContainerQuery
{
    ML3Predicate *_containerPredicate;	// 72 = 0x48
    ML3Container *_container;	// 80 = 0x50
    NSArray *_limitedPersistentIDs;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000b1858
- (void).cxx_destruct;	// IMP=0x00000000000b1092
@property(readonly, nonatomic) NSArray *limitedPersistentIDs; // @synthesize limitedPersistentIDs=_limitedPersistentIDs;
@property(readonly, nonatomic) ML3Container *container; // @synthesize container=_container;
- (id)enumerationDatabaseResultForSQL:(id)arg1 onConnection:(id)arg2 withParameters:(id)arg3;	// IMP=0x00000000000b0f32
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(_Bool)arg2;	// IMP=0x00000000000b0d88
- (id)selectPersistentIDsSQLAndPropertiesForResultSet:(id)arg1 ordered:(_Bool)arg2;	// IMP=0x00000000000b0d76
- (id)valueForAggregateFunction:(id)arg1 onEntitiesForProperty:(id)arg2;	// IMP=0x00000000000b0b2c
- (unsigned long long)countOfEntities;	// IMP=0x00000000000b0b16
- (unsigned long long)countOfDistinctRowsForColumn:(id)arg1;	// IMP=0x00000000000b09a9
- (_Bool)hasEntities;	// IMP=0x00000000000b08c2
@property(readonly, nonatomic) _Bool requiresSmartLimiting;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b06b2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b04ec
- (id)initWithEntityClass:(Class)arg1 container:(id)arg2 predicate:(id)arg3 orderingTerms:(id)arg4;	// IMP=0x00000000000b007a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b0002

@end
