//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TrialServer/_PASDatabaseMigrationProtocol-Protocol.h>

@class NSString, _PASSqliteDatabase;
@protocol OS_dispatch_queue, TRISQLiteCKDatabaseDelegate;

@interface TRISQLiteCKDatabase : NSObject <_PASDatabaseMigrationProtocol>
{
    NSString *_parentDir;	// 8 = 0x8
    NSString *_assetDir;	// 16 = 0x10
    NSString *_assetCacheDir;	// 24 = 0x18
    _PASSqliteDatabase *_db;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_opQueue;	// 40 = 0x28
    id <TRISQLiteCKDatabaseDelegate> _delegate;	// 48 = 0x30
}

+ (id)mockContainerWithIdentifier:(id)arg1 database:(id)arg2;	// IMP=0x0000000000015323
- (void).cxx_destruct;	// IMP=0x0000000000023bad
@property(retain, nonatomic) id <TRISQLiteCKDatabaseDelegate> delegate; // @synthesize delegate=_delegate;
- (id)queriesToSkipFromEmptyToVersion:(unsigned int *)arg1;	// IMP=0x0000000000023b7a
- (id)migrations;	// IMP=0x0000000000023115
- (id)_createTableForArrayFieldWithKey:(id)arg1 attachedToRecordType:(id)arg2 sqliteContainedType:(id)arg3;	// IMP=0x0000000000023078
- (id)_createTableForRecordType:(id)arg1 scalarFields:(id)arg2;	// IMP=0x0000000000022f32
- (id)databaseHandle;	// IMP=0x0000000000022f24
- (_Bool)migrateToVersion:(unsigned int)arg1;	// IMP=0x0000000000022ced
- (id)_errorWithCode:(long long)arg1 message:(id)arg2;	// IMP=0x0000000000022c09
- (void)_bindParam:(int)arg1 toScalarValue:(id)arg2 forStatement:(id)arg3 recordId:(id)arg4;	// IMP=0x00000000000228d5
- (id)_keysForFieldsOfRecordType:(id)arg1;	// IMP=0x0000000000022835
- (id)_valueTypesForFieldsOfRecordType:(id)arg1;	// IMP=0x0000000000020f57
- (id)_allRecordTypes;	// IMP=0x0000000000020e79
- (_Bool)_replaceArrayFieldWithKey:(id)arg1 recordType:(id)arg2 recordId:(id)arg3 values:(id)arg4 txn:(id)arg5 error:(id *)arg6;	// IMP=0x000000000001ffc2
- (id)_assetForLocallyStoredAssetWithFilename:(id)arg1 forRecordId:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001fc85
- (id)_filenameForLocallyCopiedAsset:(id)arg1 forRecordId:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001f874
- (_Bool)_upsertRecord:(id)arg1 txn:(id)arg2 error:(id *)arg3;	// IMP=0x000000000001e587
- (void)_deleteRecordsWithRecordIds:(id)arg1 recordType:(id)arg2 txn:(id)arg3;	// IMP=0x000000000001df7a
- (void)_processModifyRecordsOperation:(id)arg1;	// IMP=0x000000000001d45d
- (id)_evalFetchRecordsOperationWithRecordIds:(id)arg1 recordType:(id)arg2 desiredKeys:(id)arg3 txn:(id)arg4 error:(id *)arg5;	// IMP=0x000000000001cd9b
- (void)_processFetchRecordsOperation:(id)arg1;	// IMP=0x000000000001c292
- (_Bool)_parseArrayExpression:(id)arg1 forRecordType:(id)arg2 usingCTEName:(id)arg3 toSQLCommonTableExpression:(id *)arg4 paramBindings:(id *)arg5 error:(id *)arg6;	// IMP=0x000000000001b74c
- (_Bool)_translateAnyModifiedArrayRHSComparisonPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id *)arg3 paramBindings:(id *)arg4 error:(id *)arg5;	// IMP=0x000000000001b2f6
- (_Bool)_translateDirectModifiedArrayRHSComparisonPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id *)arg3 paramBindings:(id *)arg4 error:(id *)arg5;	// IMP=0x000000000001ae96
- (_Bool)_translateArrayRHSComparisonPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id *)arg3 paramBindings:(id *)arg4 error:(id *)arg5;	// IMP=0x000000000001ad6c
- (_Bool)_translateAnyModifiedScalarComparisonPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id *)arg3 paramBindings:(id *)arg4 error:(id *)arg5;	// IMP=0x000000000001ad2c
- (_Bool)_translateDirectModifiedScalarComparisonPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id *)arg3 paramBindings:(id *)arg4 error:(id *)arg5;	// IMP=0x000000000001a7a0
- (_Bool)_parseScalarExpression:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id *)arg3 paramBindings:(id *)arg4 error:(id *)arg5;	// IMP=0x0000000000019e5f
- (_Bool)_translateScalarComparisonPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id *)arg3 paramBindings:(id *)arg4 error:(id *)arg5;	// IMP=0x0000000000019d35
- (_Bool)_translateComparisonPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id *)arg3 paramBindings:(id *)arg4 error:(id *)arg5;	// IMP=0x0000000000019bee
- (_Bool)_translateCompoundPredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id *)arg3 paramBindings:(id *)arg4 error:(id *)arg5;	// IMP=0x00000000000193d9
- (_Bool)_translatePredicate:(id)arg1 forRecordType:(id)arg2 toSQLExpr:(id *)arg3 paramBindings:(id *)arg4 error:(id *)arg5;	// IMP=0x000000000001918e
- (_Bool)_parseDecimalString:(id)arg1 value:(unsigned long long *)arg2;	// IMP=0x000000000001914f
- (id)_parseIndexedFieldKey:(id)arg1 indexRange:(struct _NSRange *)arg2;	// IMP=0x0000000000018d9b
- (id)_loadArrayForRecordType:(id)arg1 recordId:(id)arg2 fieldKey:(id)arg3 indexRange:(struct _NSRange)arg4 txn:(id)arg5 error:(id *)arg6;	// IMP=0x0000000000018217
- (id)_createRecordFromSelectRow:(id)arg1 recordType:(id)arg2 unindexedDesiredKeys:(id)arg3 indexedDesiredKeys:(id)arg4 txn:(id)arg5 error:(id *)arg6;	// IMP=0x000000000001700d
- (_Bool)_parseDesiredKeys:(id)arg1 recordType:(id)arg2 unindexedFields:(id *)arg3 indexedFields:(id *)arg4 error:(id *)arg5;	// IMP=0x00000000000168b5
- (_Bool)_evalQueryOperationWithRecordType:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 resultsLimit:(unsigned long long)arg4 desiredKeys:(id)arg5 txn:(id)arg6 error:(id *)arg7 recordFetchedBlock:(CDUnknownBlockType)arg8;	// IMP=0x00000000000159df
- (void)_processQueryOperation:(id)arg1;	// IMP=0x0000000000015393
- (void)closePermanently;	// IMP=0x000000000001528c
- (void)deleteRecordZoneWithID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000151be
- (void)saveRecordZone:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000150c5
- (void)addOperation:(id)arg1;	// IMP=0x0000000000014e9b
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
- (id)initWithParentDir:(id)arg1 assetCacheDir:(id)arg2;	// IMP=0x000000000001480f
- (id)init;	// IMP=0x0000000000014809

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

