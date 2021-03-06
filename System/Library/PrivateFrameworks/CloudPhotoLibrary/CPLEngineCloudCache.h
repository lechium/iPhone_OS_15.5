//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSString;

@interface CPLEngineCloudCache <CPLAbstractObject>
{
}

- (id)allRecordsIsFinal:(_Bool)arg1;	// IMP=0x000000000010f104
- (id)recordsOfClass:(Class)arg1 isFinal:(_Bool)arg2;	// IMP=0x000000000010f0a0
- (void)getCommittedRecord:(id *)arg1 stagedRecord:(id *)arg2 forScopedIdentifier:(id)arg3;	// IMP=0x000000000010ef64
- (id)resourceOfType:(unsigned long long)arg1 forRecordWithScopedIdentifier:(id)arg2 record:(id *)arg3 error:(id *)arg4;	// IMP=0x000000000010ecc4
- (_Bool)discardStagedChangesWithScopeFilter:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010ebe6
- (_Bool)discardStagedChangesForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010ea2d
- (_Bool)commitStagedChangesForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010e843
- (_Bool)remapAllRecordsWithPreviousScopedIdentifier:(id)arg1 newScopedIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x000000000010e679
- (_Bool)ackownledgeRecordWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010e5fc
- (unsigned long long)countOfRecordsAcknowledgedByClientWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x000000000010e57f
- (id)recordsAcknowledgedByClientWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x000000000010e4f6
- (_Bool)hasRecordAcknowledgedByClientWithScopedIdentifier:(id)arg1;	// IMP=0x000000000010e47f
- (id)recordAcknowledgedByClientWithScopedIdentifier:(id)arg1;	// IMP=0x000000000010e3fc
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1 isFinal:(_Bool)arg2;	// IMP=0x000000000010e373
- (id)recordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 isFinal:(_Bool)arg3;	// IMP=0x000000000010e2e5
- (id)recordsWithRelatedScopedIdentifier:(id)arg1 isFinal:(_Bool)arg2;	// IMP=0x000000000010e25c
- (_Bool)hasRecordWithScopedIdentifier:(id)arg1;	// IMP=0x000000000010e1e5
- (id)recordWithScopedIdentifier:(id)arg1 isConfirmed:(_Bool *)arg2 isStaged:(_Bool *)arg3;	// IMP=0x000000000010e157
- (id)recordWithScopedIdentifier:(id)arg1 isFinal:(_Bool)arg2;	// IMP=0x000000000010e0cb
- (_Bool)deleteRecordWithScopedIdentifier:(id)arg1 isFinal:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000010dfbf
- (_Bool)confirmAllRecordsWithError:(id *)arg1;	// IMP=0x000000000010df6c
- (id)cloudChangeBatchFromBatch:(id)arg1 usingMapping:(id)arg2 isFinal:(_Bool)arg3 withError:(id *)arg4;	// IMP=0x000000000010b835
- (_Bool)_remapRecord:(id)arg1 inBatch:(id)arg2 error:(id *)arg3;	// IMP=0x000000000010af6e
- (_Bool)applyBatch:(id)arg1 isFinal:(_Bool)arg2 direction:(unsigned long long)arg3 withError:(id *)arg4;	// IMP=0x000000000010a4fe
- (_Bool)updateStagedRecord:(id)arg1 error:(id *)arg2;	// IMP=0x000000000010a32a
- (_Bool)updateFinalRecord:(id)arg1 confirmed:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000010a14f
- (_Bool)addRecord:(id)arg1 isFinal:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0000000000109f74
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x0000000000109f05
- (unsigned long long)scopeType;	// IMP=0x0000000000109efa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end

