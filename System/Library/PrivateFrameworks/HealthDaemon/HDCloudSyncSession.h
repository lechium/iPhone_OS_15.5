//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HDCloudSyncSequenceRecord, NSArray, NSSet;

@interface HDCloudSyncSession
{
    NSSet *_excludedSyncStores;	// 8 = 0x8
    NSArray *_filteredOrderedSyncEntities;	// 16 = 0x10
    HDCloudSyncSequenceRecord *_sequenceRecord;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000005fb4c5
@property(retain, nonatomic) HDCloudSyncSequenceRecord *sequenceRecord; // @synthesize sequenceRecord=_sequenceRecord;
- (_Bool)requiresSyncForChangesFromAnchorRangeMap:(id)arg1;	// IMP=0x00000000005fb25a
- (id)syncPredicate;	// IMP=0x00000000005faecc
- (long long)maxEncodedBytesPerChangeSetForSyncEntityClass:(Class)arg1;	// IMP=0x00000000005fae9f
- (long long)maxEncodedBytesPerCodableChangeForSyncEntityClass:(Class)arg1;	// IMP=0x00000000005fae4e
- (id)newChangeWithSyncEntityClass:(Class)arg1 version:(CDStruct_c12fb951)arg2;	// IMP=0x00000000005fae2c
- (void)setExcludedSyncStores:(id)arg1;	// IMP=0x00000000005fad9d
- (id)excludedSyncStores;	// IMP=0x00000000005fad88

@end
