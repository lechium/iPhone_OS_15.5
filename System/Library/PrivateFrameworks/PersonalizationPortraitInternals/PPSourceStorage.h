//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PPContactStorage, PPSQLDatabase;

@interface PPSourceStorage : NSObject
{
    PPSQLDatabase *_db;	// 8 = 0x8
    PPContactStorage *_contactStorage;	// 16 = 0x10
}

+ (double)matchAccuracyForSecondsFrom1970;	// IMP=0x00000000000f64b7
- (void).cxx_destruct;	// IMP=0x00000000000f5943
- (long long)pruneSourcesWithNoReferencesWithTxnWitness:(id)arg1;	// IMP=0x00000000000f564f
- (long long)updateOrCreateRowForSource:(id)arg1 addingRefCount:(long long)arg2 txnWitness:(id)arg3;	// IMP=0x00000000000f4ef7
- (id)createSourceWithStatement:(id)arg1 txnWitness:(id)arg2;	// IMP=0x00000000000f49f5
- (id)loadSourcesWithBundleId:(id)arg1 groupId:(id)arg2 documentId:(id)arg3 txnWitness:(id)arg4;	// IMP=0x00000000000f4832
- (id)whereSourceIdInSubclauseWithSourceIds:(id)arg1 tableNameAlias:(id)arg2 binders:(id)arg3;	// IMP=0x00000000000f464f
- (_Bool)iterSourcesWithQuery:(id)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00000000000f3fa8
- (id)initWithDatabase:(id)arg1;	// IMP=0x00000000000f3f0f
- (id)init;	// IMP=0x00000000000f3f09

@end
