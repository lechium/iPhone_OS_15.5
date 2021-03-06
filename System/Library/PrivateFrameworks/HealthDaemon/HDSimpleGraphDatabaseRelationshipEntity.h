//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDSimpleGraphDatabaseRelationshipEntity
{
}

+ (id)joinClausesForProperty:(id)arg1;	// IMP=0x00000000004d5a87
+ (id)indices;	// IMP=0x00000000004d5849
+ (id)uniquedColumns;	// IMP=0x00000000004d57cc
+ (id)foreignKeys;	// IMP=0x00000000004d56ae
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;	// IMP=0x00000000004d569a
+ (id)databaseTable;	// IMP=0x00000000004d568d
+ (_Bool)enumerateRelationshipsWithPredicate:(id)arg1 database:(id)arg2 error:(id *)arg3 enumerationHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000004d536b
+ (_Bool)removeRelationshipWithID:(long long)arg1 subjectNodeID:(long long)arg2 objectNodeID:(long long)arg3 database:(id)arg4 error:(id *)arg5;	// IMP=0x00000000004d52bc
+ (_Bool)addRelationshipWithID:(long long)arg1 subjectNodeID:(long long)arg2 objectNodeID:(long long)arg3 database:(id)arg4 error:(id *)arg5;	// IMP=0x00000000004d520d
- (id)init;	// IMP=0x00000000004d5193

@end

