//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TRIDatabase;

@interface TRIRolloutDatabase : NSObject
{
    TRIDatabase *_db;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000a7edd
- (_Bool)hasRecordReferencingFactorPackSetId:(id)arg1 withReferenceType:(unsigned int)arg2;	// IMP=0x00000000000a7b1d
- (_Bool)deactivateDeploymentsWithRolloutId:(id)arg1 deactivatedDeployment:(id *)arg2 deactivatedFactorPackSetId:(id *)arg3 usingTransaction:(id)arg4;	// IMP=0x00000000000a7346
- (_Bool)deactivateDeployment:(id)arg1 usingTransaction:(id)arg2;	// IMP=0x00000000000a706d
- (_Bool)activateDeployment:(id)arg1 withFactorPackSetId:(id)arg2 targetingRuleIndex:(id)arg3 deactivatedDeployments:(id)arg4 deactivatedFactorPackSetIds:(id)arg5 usingTransaction:(id)arg6;	// IMP=0x00000000000a63a6
- (_Bool)targetDeployment:(id)arg1 toFactorPackSetId:(id)arg2 targetingRuleIndex:(id)arg3 usingTransaction:(id)arg4;	// IMP=0x00000000000a5a22
- (CDStruct_69d7cc99)removeRecordWithDeployment:(id)arg1;	// IMP=0x00000000000a5a0e
- (CDStruct_69d7cc99)removeRecordWithDeployment:(id)arg1 usingRefCounting:(_Bool)arg2;	// IMP=0x00000000000a544e
- (_Bool)enumerateActiveRecordsWithVisibility:(unsigned int)arg1 usingTransaction:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a52fe
- (_Bool)enumerateRecordsOverlappingNamespaces:(id)arg1 usingTransaction:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a5142
- (_Bool)enumerateRecordsWithRolloutId:(id)arg1 usingTransaction:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000a4fb5
- (_Bool)enumerateRecordsUsingTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000a4f8c
- (id)recordWithDeployment:(id)arg1 usingTransaction:(id)arg2;	// IMP=0x00000000000a4cca
- (_Bool)_enumerateRecordsMatchingWhereClause:(id)arg1 bind:(CDUnknownBlockType)arg2 prependingWithClause:(id)arg3 usingTransaction:(id)arg4 block:(CDUnknownBlockType)arg5;	// IMP=0x00000000000a3ee4
- (id)_dataNoCopyFromStmt:(id)arg1 columnName:(const char *)arg2;	// IMP=0x00000000000a3dba
- (_Bool)setTargetedFactorPackSetId:(id)arg1 targetedTargetingRuleIndex:(id)arg2 forDeployment:(id)arg3 usingTransaction:(id)arg4;	// IMP=0x00000000000a39bc
- (_Bool)setActiveFactorPackSetId:(id)arg1 activeTargetingRuleIndex:(id)arg2 forDeployment:(id)arg3 usingTransaction:(id)arg4;	// IMP=0x00000000000a35be
- (_Bool)setStatus:(long long)arg1 forDeployment:(id)arg2 usingTransaction:(id)arg3;	// IMP=0x00000000000a3247
- (_Bool)addNewRolloutWithRecord:(id)arg1;	// IMP=0x00000000000a26e7
- (struct _PASDBTransactionCompletion_)writeTransactionWithFailableBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a26d1
- (struct _PASDBTransactionCompletion_)readTransactionWithFailableBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a26bb
- (id)initWithDatabase:(id)arg1;	// IMP=0x00000000000a25d5
- (id)init;	// IMP=0x00000000000a25cf

@end
