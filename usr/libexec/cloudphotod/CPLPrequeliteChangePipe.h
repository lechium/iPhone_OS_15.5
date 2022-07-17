//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLPrequeliteVariable, NSString;

@interface CPLPrequeliteChangePipe
{
    CPLPrequeliteVariable *_pullGenerationVar;	// 8 = 0x8
    CPLPrequeliteVariable *_pushGenerationVar;	// 16 = 0x10
    NSString *_countSqlCommand;	// 24 = 0x18
    NSString *_logDomain;	// 32 = 0x20
    unsigned long long _lastPullMarkerForCompact;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000055f51
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x0010000000055e46
- (id)statusPerScopeIndex;	// IMP=0x0010000000055c83
- (id)status;	// IMP=0x0010000000055b28
- (void)writeTransactionDidFail;	// IMP=0x0010000000055ae8
- (id)allChangeBatches;	// IMP=0x0010000000055747
- (_Bool)compactChangeBatchesWithError:(id *)arg1;	// IMP=0x00100000000555f4
- (_Bool)deleteAllChangesWithScopeFilter:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000553b0
- (_Bool)deleteAllChangeBatchesWithError:(id *)arg1;	// IMP=0x001000000005524a
- (_Bool)hasSomeChangeWithScopeFilter:(id)arg1;	// IMP=0x0010000000055066
- (_Bool)hasSomeChangeInScopesWithIdentifiers:(id)arg1;	// IMP=0x0010000000054f29
- (_Bool)hasSomeChangeWithScopedIdentifier:(id)arg1;	// IMP=0x0010000000054ddb
- (_Bool)popNextBatchWithError:(id *)arg1;	// IMP=0x0010000000054c1d
- (id)nextBatch;	// IMP=0x00100000000545c9
- (_Bool)popChangeBatch:(id *)arg1 error:(id *)arg2;	// IMP=0x0010000000053eb4
- (_Bool)appendChangeBatch:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000538e9
- (_Bool)hasQueuedBatches;	// IMP=0x00100000000538d0
- (unsigned long long)countOfQueuedBatches;	// IMP=0x0010000000053700
- (_Bool)_setPushMarker:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0010000000053696
- (unsigned long long)_pushMarker;	// IMP=0x0010000000053647
- (_Bool)_setPullMarker:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00100000000535dd
- (unsigned long long)_pullMarker;	// IMP=0x001000000005358e
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x0010000000053303
- (_Bool)initializeStorage;	// IMP=0x00100000000531b5
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x00100000000530b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end
