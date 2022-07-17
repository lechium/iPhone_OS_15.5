//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HDSourceEntity
{
}

+ (_Bool)enumerateBundleIdentifiersForSourcesForUUIDData:(id)arg1 transaction:(id)arg2 error:(id *)arg3 enumerationHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000013449f
+ (_Bool)enumerateBundleIdentifiersForSourcesWithPredicate:(id)arg1 database:(id)arg2 error:(id *)arg3 enumerationHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000134217
+ (id)sourcesWithPredicate:(id)arg1 orderingTerms:(id)arg2 includeDeleted:(_Bool)arg3 database:(id)arg4 error:(id *)arg5;	// IMP=0x0000000000133fba
+ (id)sourcesWithPredicate:(id)arg1 includeDeleted:(_Bool)arg2 database:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000133f90
+ (id)sourcesWithPredicate:(id)arg1 includeDeleted:(_Bool)arg2 profile:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000133dfe
+ (id)firstSourceWithPredicate:(id)arg1 database:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007e74e
+ (id)firstSourceWithPredicate:(id)arg1 profile:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000133c87
+ (id)sourceForBundleIdentifier:(id)arg1 localOnly:(_Bool)arg2 transaction:(id)arg3 error:(id *)arg4;	// IMP=0x000000000013392f
+ (id)sourceForLocalDeviceWithDatabase:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000058a66
+ (id)insertCodableSource:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000133231
+ (id)insertSourceWithUUID:(id)arg1 bundleIdentifier:(id)arg2 owningAppBundleIdentifier:(id)arg3 name:(id)arg4 options:(unsigned long long)arg5 isCurrentDevice:(_Bool)arg6 productType:(id)arg7 modificationDate:(id)arg8 provenance:(long long)arg9 profile:(id)arg10 error:(id *)arg11;	// IMP=0x00000000001328f6
+ (id)propertyForSyncAnchor;	// IMP=0x0000000000047305
+ (id)propertyForSyncProvenance;	// IMP=0x00000000000473cf
+ (id)entityEncoderForProfile:(id)arg1 transaction:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(CDUnknownBlockType)arg5;	// IMP=0x0000000000132825
+ (long long)protectionClass;	// IMP=0x0000000000005846
+ (id)indices;	// IMP=0x0000000000132724
+ (const CDStruct_4c492439 *)columnDefinitionsWithCount:(unsigned long long *)arg1;	// IMP=0x0000000000132710
+ (id)databaseTable;	// IMP=0x0000000000132703
- (_Bool)deleteSourceWithDatabase:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000135f44
- (id)sourceBundleIdentifierInDatabase:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000135ceb
- (_Bool)adoptAsLocalSourceWithBundleIdentifier:(id)arg1 UUID:(id)arg2 name:(id)arg3 productType:(id)arg4 profile:(id)arg5 error:(id *)arg6;	// IMP=0x00000000001357af
- (_Bool)setOptions:(unsigned long long)arg1 profile:(id)arg2 didUpdate:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x000000000013568e
- (_Bool)setName:(id)arg1 profile:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000135004
- (id)sourceUUIDWithProfile:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000134f7b
- (id)sourceUUIDWithHealthDatabase:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000081373
- (id)codableSourceWithEncoder:(id)arg1 error:(id *)arg2;	// IMP=0x000000000004cd9d
- (id)codableSourceWithProfile:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000134d83
- (id)sourceWithProfile:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000077220

@end
